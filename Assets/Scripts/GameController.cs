using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls the game elements. 
/// </summary>
public class GameController : MonoBehaviour {

	[Header("Prefabs")]
	public List<GameObject> wallPrefabs;
	public List<GameObject> obstaclePrefabs;
	public List<GameObject> coinPrefabs;

	public delegate void endGameEvent();
	/// <summary>
	/// Event to be called when ending the game. 
	/// </summary>
	public static endGameEvent EndGame;

	/// <summary>
	/// The rate at which the game moves upwards. 
	/// </summary>
	const float MOVE_SPEED = 3.0F;

	/// <summary>
	/// Whether or not the game has ended. 
	/// </summary>
	private static bool gameOver = false;

	/// <summary>
	/// Whether or not the game has ended. 
	/// </summary>
	public static bool GameOver
	{
		get { return gameOver; }
	}

	private void Start()
	{
		EndGame += FinishGame;
		StartCoroutine(Ascend());
	}


	/// <summary>
	/// Moves the environment upwards. 
	/// </summary>
	/// <returns></returns>
	private IEnumerator Ascend()
	{
		while(!GameOver)
		{
			transform.position = Vector3.MoveTowards(transform.position,
				new Vector3(transform.position.x, transform.position.y + 1.0f, transform.position.z),
				MOVE_SPEED * Time.fixedDeltaTime);
			yield return new WaitForEndOfFrame();
		}
	}

	
	/// <summary>
	/// Finishes all tasks before ending the game. 
	/// </summary>
	private void FinishGame()
	{
		gameOver = true;
	}
}
