using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;
using TMPro;
using UnityEditor;

public class MenuManager : MonoBehaviour {

	[Header("Main")]
	public GameObject main;
	public Button play;
	public Button highScores;

	[Header("HighScores")]
	public GameObject scores;
	public Button menu;
	public TextMeshProUGUI score;

	// Use this for initialization
	void Start () {
		Utils.Reset();
		Utils.Loaded = false;
		Utils.Load();
		score.text = Utils.HighScore.ToString();
		play.onClick.AddListener(LoadGame);
		highScores.onClick.AddListener(AlternateScreens);
		menu.onClick.AddListener(AlternateScreens);
	}
	
	private void LoadGame() {
		SceneManager.LoadScene("Game");
	}

	private void AlternateScreens() {
		main.SetActive(!main.activeSelf);
		scores.SetActive(!scores.activeSelf);
	}
}
