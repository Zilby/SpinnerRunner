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
	/// The rate at which prefabs spawn.
	/// </summary>
	const float SPAWN_RATE = 1.5F;

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

	private enum PrefabType
	{
		Wall, 
		Obstacle, 
		Coin,
	}

	/// <summary>
	/// The current type of prefab being spawned. 
	/// </summary>
	private PrefabType currentPrefab;

	/// <summary>
	/// The number of the type of prefab being spawned. 
	/// </summary>
	private int typeCount = 0;

	/// <summary>
	/// The list of currently active prefabs in the scene. 
	/// </summary>
	private List<GameObject> spawnedPrefabs;

	private void Start()
	{
		spawnedPrefabs = new List<GameObject>();
		EndGame += FinishGame;
		StartCoroutine(Ascend());
		StartCoroutine(SpawnObstacles());
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
	/// Spawns obstacles at the current spawn rate. 
	/// </summary>
	private IEnumerator SpawnObstacles()
	{
		while(!GameOver)
		{
			Spawn();
			yield return new WaitForSeconds(SPAWN_RATE);
		}
	}

	
	/// <summary>
	/// Finishes all tasks before ending the game. 
	/// </summary>
	private void FinishGame()
	{
		gameOver = true;
	}


	/// <summary>
	/// Spawns an individual obstacle. 
	/// </summary>
	private void Spawn()
	{
		AssignPrefabType();
		switch (currentPrefab)
		{
			case PrefabType.Wall:
				spawnedPrefabs.Add(Instantiate(wallPrefabs[Random.Range(0, wallPrefabs.Count)], new Vector3(0.0f, transform.position.y, 0.0f), Quaternion.identity));
				break;
			case PrefabType.Obstacle:
				spawnedPrefabs.Add(Instantiate(obstaclePrefabs[Random.Range(0, obstaclePrefabs.Count)], new Vector3(0.0f, transform.position.y, 0.0f), Quaternion.identity));
				break;
			case PrefabType.Coin:
				spawnedPrefabs.Add(Instantiate(coinPrefabs[Random.Range(0, coinPrefabs.Count)], new Vector3(0.0f, transform.position.y, 0.0f), Quaternion.identity));
				break;
			default:
				Debug.LogError("Unnasigned currentPrefab type.");
				break;
		}
		--typeCount;
		if(spawnedPrefabs.Count > 8)
		{
			GameObject g = spawnedPrefabs[0];
			spawnedPrefabs.RemoveAt(0);
			Destroy(g);
		}
	}


	/// <summary>
	/// Assigns the current prefab obstacle type. 
	/// </summary>
	private void AssignPrefabType()
	{
		if (typeCount == 0)
		{
			int r = Random.Range(0, 3);
			if (true) //r == 0)
			{
				currentPrefab = PrefabType.Wall;
				typeCount = Random.Range(0, 5);
			}
			else if (r == 1)
			{
				currentPrefab = PrefabType.Obstacle;
			}
			else
			{
				currentPrefab = PrefabType.Coin;
			}
		}
	}
}
