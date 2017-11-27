﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightController : MonoBehaviour {

	/// <summary>
	/// The particle material.
	/// </summary>
	public Material particleMat;

	/// <summary>
	/// The increment at which the colors change. 
	/// </summary>
	private const float increment = 0.5f / 255f;
	/// <summary>
	/// The main light for the scene. 
	/// </summary>
	private Light mainLight;
	/// <summary>
	/// Whether or not the current rgb value is increasing or decreasing. 
	/// </summary>
	private bool increasing = true;
	/// <summary>
	/// The current color of the scene. 
	/// </summary>
	private Color currentColor = Color.red;

	private void Start()
	{
		mainLight = GetComponent<Light>();
	}


	void Update() {
		ChangeColor();
		AssignColors();
	}


	/// <summary>
	/// Changes the current color.
	/// </summary>
	private void ChangeColor() {
		if (currentColor.r >= 1.0f) {
			if (increasing) {
				SetColor(b: currentColor.b + increment);
				if (currentColor.b >= 1.0f)
				{
					SetColor(r: 1.0f - increment);
					increasing = !increasing;
				}
			} else {
				SetColor(g: currentColor.g - increment);
				if (currentColor.g <= 0.01f)
				{
					increasing = !increasing;
				}
			}
		}
		else if (currentColor.g >= 1.0f)
		{
			if (increasing)
			{
				SetColor(r: currentColor.r + increment);
				if (currentColor.r >= 1.0f)
				{
					SetColor(g: 1.0f - increment);
					increasing = !increasing;
				}
			}
			else
			{
				SetColor(b: currentColor.b - increment);
				if (currentColor.b <= 0.01f)
				{
					increasing = !increasing;
				}
			}
		} else {
			if (increasing)
			{
				SetColor(g: currentColor.g + increment);
				if (currentColor.g >= 1.0f)
				{
					SetColor(b: 1.0f - increment);
					increasing = !increasing;
				}
			}
			else
			{
				SetColor(r: currentColor.r - increment);
				if (currentColor.r <= 0.3f)
				{
					increasing = !increasing;
				}
			}
		}
	}


	/// <summary>
	/// Sets the current color to the given values.
	/// </summary>
	private void SetColor(float r = -1, float g = -1, float b = -1) {
		currentColor = new Color(r >= 0 ? r : currentColor.r, 
		                         g >= 0 ? g : currentColor.g, 
		                         b >= 0 ? b : currentColor.b);
	}


	/// <summary>
	/// Assigns the colors to the appropriate objects. 
	/// </summary>
	private void AssignColors() {
		mainLight.color = currentColor;
		particleMat.SetColor("_Color", currentColor);
	}
}
