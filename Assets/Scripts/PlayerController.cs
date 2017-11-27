using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Used for controlling all aspects of the player controlled sphere. 
/// </summary>
public class PlayerController : MonoBehaviour {

	public static PlayerController primaryPlayer;
	public static PlayerController secondaryPlayer;

	private static bool rotation = true;

	const float rotationSpeed = 5;

	void Start () {
		if (primaryPlayer == null)
		{
			primaryPlayer = this;
		} else {
			secondaryPlayer = this;
			gameObject.SetActive(false);
		}
	}

	private void OnEnable()
	{
		StartCoroutine(Rotate());
		StartCoroutine(Move());
		StartCoroutine(Loop());
	}

	private void Rotate(bool right) {
		rotation = right;
	}


	private void Update() {
		AcceptInput();
	}


	private void AcceptInput() {
		if (Input.GetKeyDown(KeyCode.J))
		{
			rotation = false;
		}
		else if (Input.GetKeyDown(KeyCode.K))
		{
			rotation = true;
		}
	}


	/// <summary>
	/// Rotates this instance of the player.
	/// </summary>
	private IEnumerator Rotate() {
		for (;;)
		{
			transform.Rotate(0, 0, rotation ? -rotationSpeed : rotationSpeed);
			yield return new WaitForEndOfFrame();
		}
	}


	/// <summary>
	/// Moves this instance of the player. 
	/// </summary>
	private IEnumerator Move()
	{
		for (;;)
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
		for (;;) {
			if (primaryPlayer == this)
			{
				float absPrimaryX = Mathf.Abs(primaryPlayer.transform.position.x);
				if (absPrimaryX < 2.0f)
				{
					secondaryPlayer.gameObject.SetActive(false);
				}
				else if (!secondaryPlayer.gameObject.activeInHierarchy)
				{

					secondaryPlayer.transform.position = new Vector3((5.6f - absPrimaryX) * -1 * (primaryPlayer.transform.position.x / absPrimaryX),
																	 transform.position.y, transform.position.z);
					secondaryPlayer.gameObject.SetActive(true);
				}
				else if (absPrimaryX > 2.8f)
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
