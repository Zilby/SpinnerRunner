using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityStandardAssets.ImageEffects;
using System;
using UnityEngine.SceneManagement;

/// <summary>
/// Manages the in-game UI. 
/// </summary>
public class UIManager : MonoBehaviour {

	[Header("GeneralReferences")]
	public TextMeshProUGUI score;
	public BlurOptimized blur;

	[Header("PauseElements")]
	public GameObject paused;
	public Button pause;
	public Button resume;
	public Button menu;

	[Header("GameOverElements")]
	public GameObject gameOver;
	public TextMeshProUGUI scoreEnd;
	public Button again;
	public Button menu2;

	public static Action pauseEvent;

	public static Action gameOverEvent;

	private bool isPaused;


	private void Awake()
	{
		isPaused = false;
		pauseEvent = Pause;
		gameOverEvent = GameOver;
		pause.onClick.AddListener(Pause);
		resume.onClick.AddListener(Pause);
		menu.onClick.AddListener(Menu);
		menu2.onClick.AddListener(Menu);
		again.onClick.AddListener(Again);
	}

	private void Update()
	{
		score.text = GameController.score.ToString();
	}

	private void Pause() {
		isPaused = !isPaused;
		paused.SetActive(isPaused);
		blur.enabled = isPaused;
		pause.gameObject.SetActive(!isPaused);
		GameController.pauseEvent();
	}

	private void GameOver() {
		pause.gameObject.SetActive(false);
		StartCoroutine(EndGame());
	}


	private IEnumerator EndGame() {
		yield return new WaitForSecondsRealtime(1.6f);
		isPaused = !isPaused;
		gameOver.SetActive(true);
		blur.enabled = true;
		score.gameObject.SetActive(false);
		scoreEnd.text = "score: " + GameController.score;
		Utils.HighScore = Mathf.Max(Utils.HighScore, GameController.score);
		Utils.Save();
		GameController.pauseEvent();
	}


	private void Again()
	{
		SceneManager.LoadScene("Game");
	}


	private void Menu() {
		SceneManager.LoadScene("Menu");
	}
}
