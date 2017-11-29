using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {

	public Button play;

	// Use this for initialization
	void Start () {
		play.onClick.AddListener(LoadGame);
	}
	
	private void LoadGame() {
		SceneManager.LoadScene("Game");
	}
}
