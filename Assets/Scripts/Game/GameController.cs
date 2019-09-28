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
	/// The delay between the speed progressions. 
	/// </summary>
	const float PROGRESSION_DELAY = 5000.0f;

	/// <summary>
	/// The increment that the movement speed progresses at. 
	/// </summary>
	const float PROGRESSION_INCREMENT = 1.05f;

	/// <summary>
	/// The rate at which the score progresses. 
	/// </summary>
	const float SCORE_RATE = 800.0f;

	/// <summary>
	/// The rate at which the game moves upwards. 
	/// </summary>
	private float moveSpeed = 0.4f;

	/// <summary>
	/// The distance at which prefabs spawn.
	/// </summary>
	private float spawnDistance;

	/// <summary>
	/// The location of the last prefab spawn. 
	/// </summary>
	private Vector3 lastSpawn;

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

	/// <summary>
	/// The current type of prefab being spawned. 
	/// </summary>
	private Pooler.PooledName currentPrefab;

	/// <summary>
	/// The number of the type of prefab being spawned. 
	/// </summary>
	private int typeCount;

	private Vector3 velocity = Vector3.zero;


	private void Awake()
	{
		currentTimescale = 1.0f;
		spawnDistance = 0F;
		lastSpawn = transform.position;
		typeCount = 0;
		AssignPrefabType();
		SetTimescale();
		endEvent = FinishGame;
		pauseEvent = Pause;
	}


	private void Start()
	{
		ColorChanger.colorEvent();
		score = 0;
		if (!Utils.Tutorial)
		{
			StartCoroutine(IncrementSpeed());
			StartCoroutine(IncrementScore());
			StartCoroutine(SpawnObstacles());
		}
		else
		{
			StartCoroutine(Tutorial());
		}
	}

	private void Update()
	{
		if (!gameOver && currentTimescale > 0)
		{
			transform.position =
				Vector3.SmoothDamp(transform.position,
								   new Vector3(transform.position.x, transform.position.y + 1.0f, transform.position.z),
								   ref velocity, moveSpeed, Mathf.Infinity, Time.smoothDeltaTime);
		}
	}

	/// <summary>
	/// Spawns obstacles based on the distance from the last spawn. 
	/// </summary>
	private IEnumerator SpawnObstacles()
	{
		while (!gameOver)
		{
			if (Vector3.Distance(lastSpawn, transform.position) > spawnDistance)
			{
				lastSpawn = transform.position;
				Spawn();
				switch (currentPrefab)
				{
					case Pooler.PooledName.MiddleWall:
					case Pooler.PooledName.SideWall:
						// make sure walls get spaced apart
						spawnDistance = 6.0f;
						break;
					default:
						spawnDistance = 3.0f;
						break;
				}
			}
			yield return new WaitForFixedUpdate();
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
		switch (currentPrefab)
		{
			case Pooler.PooledName.MiddleWall:
				Pooler.getPooledEvent(currentPrefab);
				break;
			case Pooler.PooledName.SideWall:
				Pooler.getPooledEvent(currentPrefab).transform.localScale = 
					new Vector3(UnityEngine.Random.Range(0, 2) == 0 ? -1 : 1, 1, 1);
				break;
			case Pooler.PooledName.Obstacle:
				List<float> badLocations = new List<float>();
				badLocations.Add(SpawnPrefab(badLocations));
				if (UnityEngine.Random.Range(0, 2) == 0)
				{
					badLocations.Add(SpawnPrefab(badLocations));
				}
				if (UnityEngine.Random.Range(0, 3) == 0)
				{
					badLocations.Add(SpawnPrefab(badLocations));
				}
				break;
			case Pooler.PooledName.Coin:
				badLocations = new List<float>();
				badLocations.Add(SpawnPrefab(badLocations));
				if (UnityEngine.Random.Range(0, 2) == 0)
				{
					badLocations.Add(SpawnPrefab(badLocations));
				}
				if (UnityEngine.Random.Range(0, 3) == 0)
				{
					badLocations.Add(SpawnPrefab(badLocations));
				}
				if (UnityEngine.Random.Range(0, 3) == 0)
				{
					badLocations.Add(SpawnPrefab(badLocations));
				}
				break;
			default:
				UnityEngine.Debug.LogError("Unnasigned currentPrefab type.");
				break;
		}
		--typeCount;
		AssignPrefabType();
	}

	/// <summary>
	/// Spawns a prefab at a random location that is not the given location.
	/// </summary>
	/// <returns>The location of the prefab.</returns>
	private float SpawnPrefab(List<float> badLocations)
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
		Pooler.getPooledEvent(currentPrefab, location);
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
			typeCount = UnityEngine.Random.Range(0, 5);
			if (r == 0)
			{
				currentPrefab = Pooler.PooledName.MiddleWall;
			}
			else if (r == 1)
			{
				currentPrefab = Pooler.PooledName.SideWall;
			}
			else if (r == 2 || r == 3)
			{
				currentPrefab = Pooler.PooledName.Obstacle;
			}
			else
			{
				currentPrefab = Pooler.PooledName.Coin;
			}
		}
		// alternate between middle and side walls regardless
		else if (currentPrefab == Pooler.PooledName.MiddleWall && UnityEngine.Random.Range(0, 2) == 0)
		{
			currentPrefab = Pooler.PooledName.SideWall;
		}
		else if (currentPrefab == Pooler.PooledName.SideWall && UnityEngine.Random.Range(0, 2) == 0)
		{
			currentPrefab = Pooler.PooledName.MiddleWall;
		}
	}


	/// <summary>
	/// Increments the speed as the game progresses. 
	/// </summary>
	private IEnumerator IncrementSpeed()
	{
		speedTimer = new Stopwatch();
		while (!GameOver)
		{
			speedTimer.Start();
			while (speedTimer.ElapsedMilliseconds < PROGRESSION_DELAY)
			{
				yield return new WaitForFixedUpdate();
			}
			moveSpeed /= PROGRESSION_INCREMENT;
			speedTimer.Reset();
		}
	}


	/// <summary>
	/// Increments the score as the game progresses. 
	/// </summary>
	private IEnumerator IncrementScore()
	{
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
	}

	/// <summary>
	/// Pauses the game. 
	/// </summary>
	private void Pause()
	{
		if (Time.timeScale != 0.0f || gameOver)
		{
			if (!Utils.Tutorial)
			{
				scoreTimer.Stop();
				speedTimer.Stop();
			}
			Time.timeScale = 0.0f;
			Time.fixedDeltaTime = 0.0f;
		}
		else
		{
			if (!Utils.Tutorial)
			{
				scoreTimer.Start();
				speedTimer.Start();
			}
			SetTimescale();
		}
	}

	/// <summary>
	/// Pauses the game if the application loses focus. 
	/// </summary>
	void OnApplicationFocus(bool hasFocus)
	{
		if (Time.timeScale > 0.0f)
		{
			UIManager.pauseEvent();
		}
	}

	/// <summary>
	/// Controls the tutorial sequence. 
	/// </summary>
	private IEnumerator Tutorial()
	{
		yield return new WaitForSeconds(1f);
		while (UIManager.getTutorialIndex() < 5)
		{
			yield return UIManager.tutorialText();
			int i = UIManager.getTutorialIndex();
			if (i == 2)
			{
				currentPrefab = Pooler.PooledName.MiddleWall;
				Pooler.getPooledEvent(currentPrefab);
				currentPrefab = Pooler.PooledName.SideWall;
				yield return new WaitForSeconds(2.5f);
				Pooler.getPooledEvent(currentPrefab);
				yield return new WaitForSeconds(2.5f);
				Pooler.getPooledEvent(currentPrefab).transform.localScale = new Vector3(-1, 1, 1);
				yield return new WaitForSeconds(6);
			}
			else if (i == 4)
			{
				currentPrefab = Pooler.PooledName.Obstacle;
				for (int j = -2; j < 3; ++j)
				{
					Pooler.getPooledEvent(currentPrefab, j).GetComponent<Obstacle>().RotateRight = true;
				}
				yield return new WaitForSeconds(2.5f);
				for (int j = -2; j < 3; ++j)
				{
					Pooler.getPooledEvent(currentPrefab, j).GetComponent<Obstacle>().RotateRight = false;
				}
				yield return new WaitForSeconds(2.5f);
				for (int j = -2; j < 3; ++j)
				{
					Pooler.getPooledEvent(currentPrefab, j).GetComponent<Obstacle>().RotateRight = true;
				}
				yield return new WaitForSeconds(6);
			}
			else if (i == 5)
			{
				currentPrefab = Pooler.PooledName.Coin;
				for (int j = -2; j < 1; ++j)
				{
					Pooler.getPooledEvent(currentPrefab, j).GetComponent<Obstacle>().RotateRight = false;
				}
				yield return new WaitForSeconds(2.5f);
				for (int j = 0; j < 3; ++j)
				{
					Pooler.getPooledEvent(currentPrefab, j).GetComponent<Obstacle>().RotateRight = true;
				}
				yield return new WaitForSeconds(2.5f);
				for (int j = -1; j < 2; ++j)
				{
					Pooler.getPooledEvent(currentPrefab, j).GetComponent<Obstacle>().RotateRight = false;
				}
				yield return new WaitForSeconds(6);
			}
			else
			{
				yield return new WaitForSeconds(0.3f);
			}
		}
		Utils.Tutorial = false;
		Utils.Save();
		StartCoroutine(IncrementSpeed());
		StartCoroutine(IncrementScore());
		StartCoroutine(SpawnObstacles());
	}

	private void OnDestroy()
	{
		gameOver = false;
	}
}
