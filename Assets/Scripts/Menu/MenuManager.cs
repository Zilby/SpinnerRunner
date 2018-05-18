using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;
using TMPro;

/// <summary>
/// Manages the menu and its UI. 
/// </summary>
public class MenuManager : MonoBehaviour {

	[Header("Main")]
	public GameObject main;
	public Button play;
	public Button highScores;
	public Button sound;
	public Button music;

	[Header("HighScores")]
	public GameObject scores;
	public Button menu;
	public TextMeshProUGUI score;

	private GameObject musicOn;
	private GameObject musicOff;
	private GameObject soundOn;
	private GameObject soundOff;

	// Use this for initialization
	void Start () {
		Utils.Reset();
		Utils.Loaded = false;
		Utils.Load();


		musicOn = music.transform.GetChild(1).gameObject;
		musicOff = music.transform.GetChild(2).gameObject;
		soundOn = sound.transform.GetChild(1).gameObject;
		soundOff = sound.transform.GetChild(2).gameObject;

		musicOn.SetActive(Utils.Music >= 0);
		musicOff.SetActive(Utils.Music < 0);
		soundOn.SetActive(Utils.Soundfx >= 0);
		soundOff.SetActive(Utils.Soundfx < 0);

		score.text = Utils.HighScore.ToString();
		play.onClick.AddListener(LoadGame);
		highScores.onClick.AddListener(AlternateScreens);
		sound.onClick.AddListener(ToggleSound);
		music.onClick.AddListener(ToggleMusic);
		menu.onClick.AddListener(AlternateScreens);
	}
	
	private void LoadGame() {
		SceneManager.LoadScene("Game");
	}

	private void AlternateScreens() {
		main.SetActive(!main.activeSelf);
		scores.SetActive(!scores.activeSelf);
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
