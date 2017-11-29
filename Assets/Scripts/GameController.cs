using System;
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

	/// <summary>
	/// Event to be called when ending the game. 
	/// </summary>
	public static Action EndGame;

	/// <summary>
	/// The rate at which the game moves upwards. 
	/// </summary>
	const float MOVE_SPEED = 3.0F;

	/// <summary>
	/// The rate at which prefabs spawn.
	/// </summary>
	private float spawnRate = 0F;

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
			yield return new WaitForSeconds(spawnRate);
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
		GameObject g;
		switch (currentPrefab)
		{
			case PrefabType.Wall:
				spawnRate = 1.5F; // make sure walls get spaced apart
				g = Instantiate(wallPrefabs[UnityEngine.Random.Range(0, wallPrefabs.Count)], new Vector3(0.0f, transform.position.y, 0.0f), Quaternion.identity);
				g.transform.localScale = new Vector3(UnityEngine.Random.Range(0, 2) == 0 ? -1 : 1, 1, 1);
				spawnedPrefabs.Add(g);
				break;
			case PrefabType.Obstacle:
				g = Instantiate(obstaclePrefabs[UnityEngine.Random.Range(0, obstaclePrefabs.Count)], new Vector3(UnityEngine.Random.Range(-1, 2) * 1.5f, transform.position.y + 10.0f, 0.0f), Quaternion.identity);
				g.GetComponent<Obstacle>().rotateRight = UnityEngine.Random.Range(0, 2) == 0;
				spawnedPrefabs.Add(g);
				break;
			case PrefabType.Coin:
				spawnedPrefabs.Add(Instantiate(coinPrefabs[UnityEngine.Random.Range(0, coinPrefabs.Count)], new Vector3(0.0f, transform.position.y, 0.0f), Quaternion.identity));
				break;
			default:
				Debug.LogError("Unnasigned currentPrefab type.");
				break;
		}
		--typeCount;
		if(spawnedPrefabs.Count > 8)
		{
			g = spawnedPrefabs[0];
			spawnedPrefabs.RemoveAt(0);
			Destroy(g);
		}
		AssignPrefabType();
	}


	/// <summary>
	/// Assigns the current prefab obstacle type. 
	/// </summary>
	private void AssignPrefabType()
	{
		if (typeCount <= 0)
		{
			int r = UnityEngine.Random.Range(0, 3);
			if (r == 0)
			{
				currentPrefab = PrefabType.Wall;
				typeCount = UnityEngine.Random.Range(0, 5);
			}
			else // if (r == 1)
			{
				currentPrefab = PrefabType.Obstacle;
				typeCount = UnityEngine.Random.Range(0, 5);
				spawnRate = 0.75F;
			}
			/*
			else
			{
				currentPrefab = PrefabType.Coin;
			}
			*/
		}
	}
}
