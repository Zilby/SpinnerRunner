﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
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
	/// The player's current score. 
	/// </summary>
	public static int score;

	/// <summary>
	/// The rate at which the game moves upwards. 
	/// </summary>
	const float MOVE_SPEED = 3.0F;

	/// <summary>
	/// The rate at which the timescale progresses. 
	/// </summary>
	const float PROGRESSION_RATE = 10000.0f;

	/// <summary>
	/// The increment that the timescale progresses at. 
	/// </summary>
	const float PROGRESSION_INCREMENT = 0.02F;

	/// <summary>
	/// The rate at which the score progresses. 
	/// </summary>
	const float SCORE_RATE = 800.0f;

	/// <summary>
	/// The rate at which prefabs spawn.
	/// </summary>
	private float spawnRate = 0F;

	/// <summary>
	/// Whether or not the game has ended. 
	/// </summary>
	private static bool gameOver = false;

	/// <summary>
	/// The current timescale.
	/// </summary>
	private float currentTimescale = 0.8f;

	private Stopwatch speedTimer;

	private Stopwatch scoreTimer;

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
		SetTimescale();
		spawnedPrefabs = new List<GameObject>();
		EndGame += FinishGame;
		StartCoroutine(Ascend());
		StartCoroutine(SpawnObstacles());
		StartCoroutine(IncrementTimeScale());
		StartCoroutine(IncrementScore());
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
				// make sure walls get spaced apart
				spawnRate = 1.5F; 
				g = Instantiate(wallPrefabs[UnityEngine.Random.Range(0, wallPrefabs.Count)], new Vector3(0.0f, transform.position.y, 0.0f), Quaternion.identity);
				g.transform.localScale = new Vector3(UnityEngine.Random.Range(0, 2) == 0 ? -1 : 1, 1, 1);
				spawnedPrefabs.Add(g);
				break;
			case PrefabType.Obstacle:
				float bad = SpawnObstacle();
				float bad2 = bad;
				if (UnityEngine.Random.Range(0, 2) == 0)
				{
					bad2 = SpawnObstacle(bad);
				}
				if (UnityEngine.Random.Range(0, 3) == 0)
				{
					SpawnObstacle(bad, bad2);
				}
				break;
			case PrefabType.Coin:
				spawnedPrefabs.Add(Instantiate(coinPrefabs[UnityEngine.Random.Range(0, coinPrefabs.Count)], new Vector3(0.0f, transform.position.y, 0.0f), Quaternion.identity));
				break;
			default:
				UnityEngine.Debug.LogError("Unnasigned currentPrefab type.");
				break;
		}
		--typeCount;
		KillOldObstacles();
		AssignPrefabType();
	}


	/// <summary>
	/// Kills old obstacles to make sure that they get despawned. 
	/// </summary>
	private void KillOldObstacles() {
		while (spawnedPrefabs.Count > 20)
		{
			GameObject g = spawnedPrefabs[0];
			spawnedPrefabs.RemoveAt(0);
			Destroy(g);
		}
	}


	/// <summary>
	/// Spawns the an obstacle at a random location that is not the given location.
	/// </summary>
	/// <returns>The location of the obstacle.</returns>
	private float SpawnObstacle(float badLocation = -1, float badLocation2 = -1) {
		float location = badLocation;
		while(location == badLocation || location == badLocation2) {
			location = UnityEngine.Random.Range(-2, 3);
		}
		GameObject g = Instantiate(obstaclePrefabs[UnityEngine.Random.Range(0, obstaclePrefabs.Count)], new Vector3(location * 1.0f, transform.position.y + 10.0f, 0.0f), Quaternion.identity);
		g.GetComponent<Obstacle>().rotateRight = UnityEngine.Random.Range(0, 2) == 0;
		spawnedPrefabs.Add(g);
		return location;
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


	/// <summary>
	/// Increments the time scale as the game progresses. 
	/// </summary>
	private IEnumerator IncrementTimeScale() {
		speedTimer = new Stopwatch();
		while (!GameOver && Time.timeScale < 1.5f) {
			speedTimer.Start();
			while (speedTimer.ElapsedMilliseconds < PROGRESSION_RATE) {
				yield return new WaitForEndOfFrame();
			}
			currentTimescale += PROGRESSION_INCREMENT;
			SetTimescale();
			speedTimer.Reset();
		}
	}


	/// <summary>
	/// Increments the score as the game progresses. 
	/// </summary>
	private IEnumerator IncrementScore()
	{
		score = 0;
		scoreTimer = new Stopwatch();
		while (!GameOver)
		{
			scoreTimer.Start();
			while (scoreTimer.ElapsedMilliseconds < SCORE_RATE)
			{
				yield return new WaitForEndOfFrame();
			}
			score += 1;
			scoreTimer.Reset();
		}
	}


	/// <summary>
	/// Sets the current timescale.
	/// </summary>
	private void SetTimescale() {
		Time.timeScale = currentTimescale;
		Time.fixedDeltaTime = 0.02F * currentTimescale;
		print(currentTimescale);
	}
}
