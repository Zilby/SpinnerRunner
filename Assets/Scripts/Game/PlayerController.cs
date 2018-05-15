using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Used for controlling all aspects of the player controlled sphere. 
/// </summary>
public class PlayerController : MonoBehaviour {

	/// <summary>
	/// Event to be called to boost rotation.
	/// </summary>
	public static Action Boost;

	/// <summary>
	/// Event called on death. 
	/// </summary>
	public static Action Die;

	/// <summary>
	/// The primary player on screen. 
	/// </summary>
	public static PlayerController primaryPlayer;
	/// <summary>
	/// The secondary player on the edge of the screen for looping. 
	/// </summary>
	public static PlayerController secondaryPlayer;

	/// <summary>
	/// Particles spawned on player death. 
	/// </summary>
	public GameObject deathParticles;

	/// <summary>
	/// The direction the player is currently rotating. 
	/// True if right (clockwise), false if left (counterclockwise). 
	/// </summary>
	private static bool rotateRight = true;
	/// <summary>
	/// The rotation speed.
	/// </summary>
	const float ROTATION_SPEED = 5;

	/// <summary>
	/// The speed of the player's boosted rotation. 
	/// </summary>
	private float boostedRotation = 0;

	/// <summary>
	/// The direction the player is currently rotating. 
	/// True if right (clockwise), false if left (counterclockwise). 
	/// </summary>
	public static bool Rotation
	{
		get { return rotateRight; }
		set { rotateRight = value; }
	}


	void Start () {
		Boost += BoostRotation;
		Die += DDDDestruction;
		if (primaryPlayer == null)
		{
			primaryPlayer = this;
		} else {
			secondaryPlayer = this;
			gameObject.SetActive(false);
		}
	}


	private void OnDestroy()
	{
		Boost -= BoostRotation;
		Die -= DDDDestruction;
		primaryPlayer = null;
		secondaryPlayer = null;
	}


	private void OnEnable()
	{
		StartCoroutine(Rotate());
		StartCoroutine(Move());
		StartCoroutine(Loop());
	}


	private void Update() {
		AcceptInput();
	}


	/// <summary>
	/// Boosts the rate of rotation of the player. 
	/// </summary>
	public void BoostRotation()
	{
		boostedRotation = 8.0f;
	}


	/// <summary>
	/// Kills the player. 
	/// </summary>
	public void DDDDestruction() {
		Instantiate(deathParticles, transform.position, transform.rotation);
		gameObject.SetActive(false);
	}


	/// <summary>
	/// Accepts input for the player. 
	/// </summary>
	private void AcceptInput() {
		if (!GameController.GameOver)
		{
#if UNITY_EDITOR
			if (Input.GetKeyDown(KeyCode.J))
			{
				rotateRight = false;
			}
			else if (Input.GetKeyDown(KeyCode.K))
			{
				rotateRight = true;
			}
			if (Input.GetKeyDown(KeyCode.Space))
			{
				BoostRotation();
			}
#endif
		}
	}


	/// <summary>
	/// Rotates this instance of the player.
	/// </summary>
	private IEnumerator Rotate() {
		while (!GameController.GameOver)
		{
			float actualRotation = ROTATION_SPEED + boostedRotation;
			transform.Rotate(0, 0, rotateRight ? -actualRotation : actualRotation);
			boostedRotation = Mathf.Abs(boostedRotation) - 0.3f;
			yield return new WaitForEndOfFrame();
		}
	}


	/// <summary>
	/// Moves this instance of the player. 
	/// </summary>
	private IEnumerator Move()
	{
		while (!GameController.GameOver)
		{
			float x = Input.GetAxis("Horizontal");
			transform.position = new Vector3(transform.position.x + x / 3.0f, transform.position.y, transform.position.z);
			yield return new WaitForFixedUpdate();
		}
	}


	/// <summary>
	/// Loops the player around the camera.
	/// </summary>
	private IEnumerator Loop() {
		while (!GameController.GameOver)
		{ 
			if (primaryPlayer == this)
			{
				float absPrimaryX = Mathf.Abs(primaryPlayer.transform.position.x);
				float width = Camera.main.ViewportToWorldPoint(Vector3.right).x * 2f; //5.6f;
				const float cutoff = 0.8f;
				if (absPrimaryX < (width / 2) - cutoff)
				{
					secondaryPlayer.gameObject.SetActive(false);
				}
				else if (!secondaryPlayer.gameObject.activeInHierarchy)
				{

					secondaryPlayer.transform.position = new Vector3((width - absPrimaryX) * -1 * (primaryPlayer.transform.position.x / absPrimaryX),
																	 transform.position.y, transform.position.z);
					secondaryPlayer.gameObject.SetActive(true);
				}
				else if (absPrimaryX > (width / 2))
				{
					PlayerController temp = primaryPlayer;
					primaryPlayer = secondaryPlayer;
					secondaryPlayer = temp;
				}
			}
			yield return new WaitForFixedUpdate();
		}
	}
}
