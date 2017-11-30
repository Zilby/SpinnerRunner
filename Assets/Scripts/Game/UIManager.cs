using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// Manages the in-game UI. 
/// </summary>
public class UIManager : MonoBehaviour {

	public TextMeshProUGUI score;

	public GameObject paused;

	public GameObject gameOver;

	private void Update()
	{
		score.text = GameController.score.ToString();
	}
}
