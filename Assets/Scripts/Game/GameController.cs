using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

/// <summary>
/// Controls the game elements. 
/// </summary>
public class GameController : MonoBehaviour
{

	[Header("Prefabs")]
	public List<GameObject> wallPrefabs;
	public List<GameObject> obstaclePrefabs;
	public List<GameObject> coinPrefabs;

	/// <summary>
	/// Event to be called when ending the game. 
	/// </summary>
	public static Action endEvent;

	/// <summary>
	/// Event to be called when pausing the game. 
	/// </summary>
	public static Action pauseEvent;

	/// <summary>
	/// The player's current score. 
	/// </summary>
	public static int score;

	/// <summary>
	/// The rate at which the game moves upwards. 
	/// </summary>
	const float MOVE_SPEED = 0.3f;

	/// <summary>
	/// The spawn increment.
	/// </summary>
	const float SPAWN_INCREMENT = 0.01f;

	/// <summary>
	/// The delay between the timescale progressions. 
	/// </summary>
	const float PROGRESSION_DELAY = 3000.0f;

	/// <summary>
	/// The increment that the timescale progresses at. 
	/// </summary>
	const float PROGRESSION_INCREMENT = 0.015F;

	/// <summary>
	/// The rate at which the score progresses. 
	/// </summary>
	const float SCORE_RATE = 800.0f;

	/// <summary>
	/// The rate at which prefabs spawn.
	/// </summary>
	private float spawnRate;

	/// <summary>
	/// Whether or not the game has ended. 
	/// </summary>
	private static bool gameOver;

	/// <summary>
	/// The current timescale.
	/// </summary>
	private float currentTimescale;

	/// <summary>
	/// Used for incrementing timescale. 
	/// </summary>
	private Stopwatch speedTimer;

	/// <summary>
	/// Used for incrementing score. 
	/// </summary>
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
	private int typeCount;

	/// <summary>
	/// The list of currently active prefabs in the scene. 
	/// </summary>
	private List<GameObject> spawnedPrefabs;

	private Vector3 velocity = Vector3.zero;


	private void Awake()
	{
		currentTimescale = 0.8f;
		spawnRate = 0F;
		typeCount = 0;
		SetTimescale();
	}


	private void Start()
	{
		spawnedPrefabs = new List<GameObject>();
		endEvent = FinishGame;
		pauseEvent = Pause;
		StartCoroutine(IncrementTimeScale());
		StartCoroutine(IncrementScore());
	}

	private void Update()
	{
		if (!gameOver)
		{
			/* transform.position = 
			 * Vector3.MoveTowards(transform.position, new Vector3(transform.position.x, 
			 * transform.position.y + 1.0f, transform.position.z),	MOVE_SPEED * Time.fixedDeltaTime);
			 */
			transform.position =
				Vector3.SmoothDamp(transform.position,
								   new Vector3(transform.position.x, transform.position.y + 1.0f, transform.position.z),
								   ref velocity, MOVE_SPEED);
		}
	}

	private void FixedUpdate()
	{
		SpawnObstacles();
	}

	/// <summary>
	/// Spawns obstacles at the current spawn rate. 
	/// </summary>
	private void SpawnObstacles()
	{
		if (spawnRate < 0 && !gameOver)
		{
			Spawn();
			switch(currentPrefab) {
				case PrefabType.Wall:
					// make sure walls get spaced apart
					spawnRate = 1.0f;
					break;
				default:
					spawnRate = 0.5f;
					break;
			}
		}
		else
		{
			spawnRate -= SPAWN_INCREMENT;
		}
	}


	/// <summary>
	/// Finishes all tasks before ending the game. 
	/// </summary>
	private void FinishGame()
	{
		gameOver = true;
		UIManager.gameOverEvent();
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
				g = Instantiate(wallPrefabs[UnityEngine.Random.Range(0, wallPrefabs.Count)], new Vector3(0.0f, transform.position.y, 0.0f), Quaternion.identity);
				g.transform.localScale = new Vector3(UnityEngine.Random.Range(0, 2) == 0 ? -1 : 1, 1, 1);
				spawnedPrefabs.Add(g);
				break;
			case PrefabType.Obstacle:
				List<float> badLocations = new List<float>();
				badLocations.Add(SpawnPrefab(obstaclePrefabs, badLocations));
				if (UnityEngine.Random.Range(0, 2) == 0)
				{
					badLocations.Add(SpawnPrefab(obstaclePrefabs, badLocations));
				}
				if (UnityEngine.Random.Range(0, 3) == 0)
				{
					badLocations.Add(SpawnPrefab(obstaclePrefabs, badLocations));
				}
				break;
			case PrefabType.Coin:
				badLocations = new List<float>();
				badLocations.Add(SpawnPrefab(coinPrefabs, badLocations));
				if (UnityEngine.Random.Range(0, 2) == 0)
				{
					badLocations.Add(SpawnPrefab(coinPrefabs, badLocations));
				}
				if (UnityEngine.Random.Range(0, 3) == 0)
				{
					badLocations.Add(SpawnPrefab(coinPrefabs, badLocations));
				}
				if (UnityEngine.Random.Range(0, 3) == 0)
				{
					badLocations.Add(SpawnPrefab(coinPrefabs, badLocations));
				}
				break;
			default:
				UnityEngine.Debug.LogError("Unnasigned currentPrefab type.");
				break;
		}
		--typeCount;
		KillOldPrefabs();
		AssignPrefabType();
	}


	/// <summary>
	/// Kills old obstacles to make sure that they get despawned. 
	/// </summary>
	private void KillOldPrefabs()
	{
		while (spawnedPrefabs.Count > 20)
		{
			GameObject g = spawnedPrefabs[0];
			spawnedPrefabs.RemoveAt(0);
			Destroy(g);
		}
	}


	/// <summary>
	/// Spawns a prefab at a random location that is not the given location.
	/// </summary>
	/// <returns>The location of the prefab.</returns>
	private float SpawnPrefab(List<GameObject> prefabs, List<float> badLocations)
	{
		bool badLocation = true;
		float location = 0.0f;
		while (badLocation)
		{
			location = UnityEngine.Random.Range(-2, 3);
			badLocation = false;
			foreach (float f in badLocations)
			{
				if (location == f)
				{
					badLocation = true;
					break;
				}
			}
		}
		GameObject g = Instantiate(prefabs[UnityEngine.Random.Range(0, prefabs.Count)], new Vector3(location * 1.0f, transform.position.y + 10.0f, 0.0f), Quaternion.identity);
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
			int r = UnityEngine.Random.Range(0, 5);
			if (r == 0 || r == 1)
			{
				currentPrefab = PrefabType.Wall;
				typeCount = UnityEngine.Random.Range(0, 5);
			}
			else if (r == 2 || r == 3)
			{
				currentPrefab = PrefabType.Obstacle;
				typeCount = UnityEngine.Random.Range(0, 5);
			}
			else
			{
				currentPrefab = PrefabType.Coin;
				typeCount = UnityEngine.Random.Range(0, 5);
			}
		}
	}


	/// <summary>
	/// Increments the time scale as the game progresses. 
	/// </summary>
	private IEnumerator IncrementTimeScale()
	{
		speedTimer = new Stopwatch();
		while (!GameOver && Time.timeScale < 1.5f)
		{
			speedTimer.Start();
			while (speedTimer.ElapsedMilliseconds < PROGRESSION_DELAY)
			{
				yield return new WaitForFixedUpdate();
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
				yield return new WaitForFixedUpdate();
			}
			score += 1;
			scoreTimer.Reset();
		}
	}


	/// <summary>
	/// Sets the current timescale.
	/// </summary>
	private void SetTimescale()
	{
		Time.timeScale = currentTimescale;
		Time.fixedDeltaTime = 0.02F * currentTimescale;
		UnityEngine.Debug.Log(currentTimescale);
	}


	private void Pause()
	{
		if (Time.timeScale != 0.0f)
		{
			scoreTimer.Stop();
			speedTimer.Stop();
			Time.timeScale = 0.0f;
			Time.fixedDeltaTime = 0.0f;
		}
		else
		{
			scoreTimer.Start();
			speedTimer.Start();
			SetTimescale();
		}
	}

	private void OnDestroy()
	{
		gameOver = false;
	}
}
