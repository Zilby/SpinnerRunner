using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;
using TMPro;
#if UNITY_ADS
using UnityEngine.Advertisements;
#endif


/// <summary>
/// Manages the menu and its UI. 
/// </summary>
public class MenuManager : MonoBehaviour
{

	[Header("Main")]
	public GameObject main;
	public Button play;
	public Button highScores;
	public Button credits;
	public Button sound;
	public Button music;

	[Header("HighScores")]
	public GameObject scores;
	public Button menu;
	public TextMeshProUGUI score;

	[Header("Credits")]
	public GameObject creditsPage;
	public Button menu2;

	private GameObject musicOn;
	private GameObject musicOff;
	private GameObject soundOn;
	private GameObject soundOff;

	// Use this for initialization
	void Start()
	{
		bool showAd = !Utils.Loaded;
		if (!Utils.Loaded)
		{
			Utils.Reset();
			Utils.Load();
		}

		StartCoroutine(Initialize(showAd));
	}

	private IEnumerator Initialize(bool showAd) {
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
		highScores.onClick.AddListener(delegate { AlternateScreens(scores); });
		credits.onClick.AddListener(delegate { AlternateScreens(creditsPage); });
		sound.onClick.AddListener(ToggleSound);
		music.onClick.AddListener(ToggleMusic);
		menu.onClick.AddListener(delegate { AlternateScreens(scores); });
		menu2.onClick.AddListener(delegate { AlternateScreens(creditsPage); });

#if UNITY_ADS

		if (showAd)
		{

			/*
			string gameId = null;
#if UNITY_ANDROID
			gameId = "1807729";
#elif UNITY_IOS
			gameId = "1807728";
#endif 
			if (Advertisement.isSupported && !Advertisement.isInitialized)
			{
				Advertisement.Initialize(gameId);
			}
			*/

			float time = 0;
			while (!Advertisement.IsReady() && time < 2.5f)
			{
				time += 0.1f;
				yield return new WaitForSecondsRealtime(0.1f);
			}
			if (Advertisement.IsReady())
			{
				Advertisement.Show();
				yield return new WaitForSecondsRealtime(2f);
				while (Advertisement.isShowing)
				{
					yield return new WaitForSecondsRealtime(0.1f);
				}
				yield return new WaitForSecondsRealtime(0.2f);

			}
		}
#endif
		SoundManager.SongEvent();
		ColorChanger.colorEvent();
		GetComponent<FadeableUI>().SelfFadeIn();
		yield break;
	}

	private void LoadGame()
	{
		SceneManager.LoadScene("Game");
	}

	private void AlternateScreens(GameObject g)
	{
		main.SetActive(!main.activeSelf);
		g.SetActive(!g.activeSelf);
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
