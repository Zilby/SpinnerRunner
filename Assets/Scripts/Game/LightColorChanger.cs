using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightColorChanger : MonoBehaviour {

	/// <summary>
	/// The particle material.
	/// </summary>
	public Material particleMat;

	/// <summary>
	/// The increment at which the colors change at the ends of the spectrum. 
	/// </summary>
	private const float SLOW_INCREMENT = 0.05f / 255f;

	/// <summary>
	/// The increment at which the colors change close to the ends of the spectrum. 
	/// </summary>
	private const float INCREMENT = 0.15f / 255f;

	/// <summary>
	/// The increment at which the colors change when in the middle of the spectrum. 
	/// </summary>
	private const float RAPID_INCREMENT = 2.5f / 255f;

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
		StartCoroutine(Brighten());
	}


	void Update() {
		ChangeColor();
		AssignColors();
	}


	private IEnumerator Brighten()
	{
		mainLight.intensity = 0;
		while (mainLight.intensity < 4)
		{
			mainLight.intensity += 0.05f;
			yield return new WaitForEndOfFrame();
		}
	}


	/// <summary>
	/// Changes the current color.
	/// </summary>
	private void ChangeColor() {
		float increment = RAPID_INCREMENT;
		if((currentColor.r < 0.3 && currentColor.g < 0.3) ||
		  (currentColor.r < 0.3 && currentColor.b < 0.3) ||
		   (currentColor.g < 0.3 && currentColor.b < 0.3)) {
			increment = INCREMENT;
		}
		if ((currentColor.r < 0.1 && currentColor.g < 0.1) ||
		  (currentColor.r < 0.1 && currentColor.b < 0.1) ||
		   (currentColor.g < 0.1 && currentColor.b < 0.1))
		{
			increment = SLOW_INCREMENT;
		}
		if (currentColor.r >= 1.0f) {
			if (increasing) {
				SetColor(Color.blue, currentColor.b + increment);
				if (currentColor.b >= 1.0f)
				{
					SetColor(Color.red, 1.0f - increment);
					increasing = !increasing;
				}
			} else {
				SetColor(Color.green, currentColor.g - increment);
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
				SetColor(Color.red, currentColor.r + increment);
				if (currentColor.r >= 1.0f)
				{
					SetColor(Color.green, 1.0f - increment);
					increasing = !increasing;
				}
			}
			else
			{
				SetColor(Color.blue, currentColor.b - increment);
				if (currentColor.b <= 0.01f)
				{
					increasing = !increasing;
				}
			}
		} else {
			if (increasing)
			{
				SetColor(Color.green, currentColor.g + increment);
				if (currentColor.g >= 1.0f)
				{
					SetColor(Color.blue, 1.0f - increment);
					increasing = !increasing;
				}
			}
			else
			{
				SetColor(Color.red, currentColor.r - increment);
				if (currentColor.r <= 0.01f)
				{
					increasing = !increasing;
				}
			}
		}
	}


	private void IncrementColors(Color c, float increment) 
	{
		if (increasing)
		{
			Color c2 = c == Color.red ? Color.blue : c == Color.green ? Color.red : Color.blue;
			float val = GetColorValue(currentColor, c2);
			SetColor(c2, val + increment);
			if (val + increment >= 1.0f)
			{
				SetColor(c, 0.99f);
				increasing = !increasing;
			}
		}
		else
		{
			Color c2 = c == Color.red ? Color.green : c == Color.green ? Color.blue : Color.red;
			float val = GetColorValue(currentColor, c2);
			SetColor(c2, val - increment);
			if (val - increment <= 0.01f)
			{
				increasing = !increasing;
			}
		}
	}


	/// <summary>
	/// Sets the current color' to the given values.
	/// </summary>
	private void SetColor(Color c, float f) {
		currentColor = new Color(Mathf.Clamp(c == Color.red ? f : currentColor.r, 0f, 1f), 
		                         Mathf.Clamp(c == Color.green ? f : currentColor.g, 0f, 1f), 
		                         Mathf.Clamp(c == Color.blue ? f : currentColor.b, 0f, 1f));
	}


	/// <summary>
	/// Gets the component of the given color given the color value given. 
	/// </summary>
	/// <returns>The color value.</returns>
	private float GetColorValue(Color c, Color val) {
		if(val == Color.red) {
			return c.r;
		}
		else if (val == Color.green)
		{
			return c.g;
		}
		else
		{
			return c.b;
		}
	}


	/// <summary>
	/// Assigns the colors to the appropriate objects. 
	/// </summary>
	private void AssignColors() {
		mainLight.color = currentColor;
		particleMat.SetColor("_Color", currentColor);
	}
}
