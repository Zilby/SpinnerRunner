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

	[Header("PauseElements")]
	public GameObject paused;
	public Button pause;
	public Button resume;
	public Button menu;
	public Button sound;
	public Button music;

	[Header("GameOverElements")]
	public GameObject gameOver;
	public TextMeshProUGUI scoreEnd;
	public Button again;
	public Button menu2;

	public static Action pauseEvent;

	public static Action gameOverEvent;

	private GameObject musicOn;
	private GameObject musicOff;
	private GameObject soundOn;
	private GameObject soundOff;

	private bool isPaused;

	private BlurOptimized blur;


	private void Awake()
	{
		isPaused = false;
		pauseEvent = Pause;
		gameOverEvent = GameOver;

		musicOn = music.transform.GetChild(1).gameObject;
		musicOff = music.transform.GetChild(2).gameObject;
		soundOn = sound.transform.GetChild(1).gameObject;
		soundOff = sound.transform.GetChild(2).gameObject;

		musicOn.SetActive(Utils.Music >= 0);
		musicOff.SetActive(Utils.Music < 0);
		soundOn.SetActive(Utils.Soundfx >= 0);
		soundOff.SetActive(Utils.Soundfx < 0);

		pause.onClick.AddListener(Pause);
		resume.onClick.AddListener(Pause);
		menu.onClick.AddListener(Menu);
		menu2.onClick.AddListener(Menu);
		again.onClick.AddListener(Again);
		sound.onClick.AddListener(ToggleSound);
		music.onClick.AddListener(ToggleMusic);
		blur = Camera.main.GetComponent<BlurOptimized>();
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

	private void ToggleSound()
	{
		bool active = soundOn.activeInHierarchy;
		soundOn.SetActive(!active);
		soundOff.SetActive(active);

		SoundManager.MixerToggle(active, "SoundFX");
	}

	private void ToggleMusic()
	{
		bool active = musicOn.activeInHierarchy;
		musicOn.SetActive(!active);
		musicOff.SetActive(active);

		SoundManager.MixerToggle(active, "Music");
	}
}
