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

	/// <summary>
	/// The score text. 
	/// </summary>
	public TextMeshProUGUI score;

	[Header("PauseElements")]

	/// <summary>
	/// The main paused screen game object. 
	/// </summary>
	public GameObject paused;

	/// <summary>
	/// The pause button. 
	/// </summary>
	public Button pause;

	/// <summary>
	/// The resume game button.
	/// </summary>
	public Button resume;

	/// <summary>
	/// The menu button. 
	/// </summary>
	public Button menu;

	/// <summary>
	/// The sound toggle. 
	/// </summary>
	public Button sound;

	/// <summary>
	/// The music toggle. 
	/// </summary>
	public Button music;

	[Header("GameOverElements")]

	/// <summary>
	/// The game over screen gameobject. 
	/// </summary>
	public GameObject gameOver;

	/// <summary>
	/// The ending score text. 
	/// </summary>
	public TextMeshProUGUI scoreEnd;

	/// <summary>
	/// The play again button. 
	/// </summary>
	public Button again;

	/// <summary>
	/// The go to menu button. 
	/// </summary>
	public Button menu2;

	/// <summary>
	/// The sensitivity slider.
	/// </summary>
	public Slider sensitivitySlider;

	[Header("TutorialElements")]

	public GameObject tutorial;

	public static Action pauseEvent;

	public static Action gameOverEvent;

	public delegate IEnumerator TutorialEvent();
	public static TutorialEvent tutorialText;

	public delegate int TutorialIndexEvent();
	public static TutorialIndexEvent getTutorialIndex;

	private GameObject musicOn;
	private GameObject musicOff;
	private GameObject soundOn;
	private GameObject soundOff;

	private bool isPaused;

	private BlurOptimized blur;

	private FadeableUI[] tutorialTexts;
	private int tutorialIndex;


	private void Awake()
	{
		isPaused = false;
		pauseEvent = Pause;
		gameOverEvent = GameOver;
		tutorialText = TutorialText;
		getTutorialIndex = GetTutorialIndex;

		musicOn = music.transform.GetChild(1).gameObject;
		musicOff = music.transform.GetChild(2).gameObject;
		soundOn = sound.transform.GetChild(1).gameObject;
		soundOff = sound.transform.GetChild(2).gameObject;

		musicOn.SetActive(Utils.Music >= 0);
		musicOff.SetActive(Utils.Music < 0);
		soundOn.SetActive(Utils.Soundfx >= 0);
		soundOff.SetActive(Utils.Soundfx < 0);
		sensitivitySlider.value = Utils.Sensitivity;

		pause.onClick.AddListener(Pause);
		resume.onClick.AddListener(Pause);
		menu.onClick.AddListener(Menu);
		menu2.onClick.AddListener(Menu);
		again.onClick.AddListener(Again);
		sound.onClick.AddListener(ToggleSound);
		music.onClick.AddListener(ToggleMusic);
		sensitivitySlider.onValueChanged.AddListener(ChangeSensitivity);
		blur = Camera.main.GetComponent<BlurOptimized>();
		tutorialTexts = tutorial.GetComponentsInChildren<FadeableUI>();
		tutorialIndex = 0;
	}

	private void Update()
	{
		score.text = GameController.score.ToString();
	}

	/// <summary>
	/// Toggles the UI pause menu. 
	/// </summary>
	private void Pause() {
		isPaused = !isPaused;
		paused.SetActive(isPaused);
		blur.enabled = isPaused;
		pause.gameObject.SetActive(!isPaused);
		GameController.pauseEvent();
	}

	private IEnumerator TutorialText() 
	{
		tutorialTexts[tutorialIndex].SelfFadeIn();
		float duration = 7;
		yield return new WaitForSeconds(duration);
		tutorialTexts[tutorialIndex].SelfFadeOut();
		tutorialIndex++;
	}

	private int GetTutorialIndex()
	{
		return tutorialIndex;
	}

	/// <summary>
	/// Starts the end game sequence. 
	/// </summary>
	private void GameOver() {
		pause.gameObject.SetActive(false);
		StartCoroutine(EndGame());
	}

	/// <summary>
	/// Sets up the end game UI. 
	/// </summary>
	/// <returns>The game.</returns>
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
		Time.timeScale = 1.0f;
		Time.fixedDeltaTime = 0.02F * Time.timeScale;
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

	private void ChangeSensitivity(float x) {
		Utils.Sensitivity = x;
	}


}
