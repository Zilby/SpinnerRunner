using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightColorChanger : MonoBehaviour
{

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


	void Update()
	{
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
	private void ChangeColor()
	{
		float increment = RAPID_INCREMENT;
		if ((currentColor.r < 0.3 && currentColor.g < 0.3) ||
		  (currentColor.r < 0.3 && currentColor.b < 0.3) ||
		   (currentColor.g < 0.3 && currentColor.b < 0.3))
		{
			increment = INCREMENT;
		}
		if ((currentColor.r < 0.1 && currentColor.g < 0.1) ||
		  (currentColor.r < 0.1 && currentColor.b < 0.1) ||
		   (currentColor.g < 0.1 && currentColor.b < 0.1))
		{
			increment = SLOW_INCREMENT;
		}
		IncrementColors(increment);
	}


	private void IncrementColors(float increment)
	{
		Color c1, c2, c3;
		float val2, val3;
		if (currentColor.r >= 1.0f)
		{
			c1 = Color.red;
			c2 = Color.blue;
			c3 = Color.green;
			val2 = currentColor.b;
			val3 = currentColor.g;
		}
		else if (currentColor.g >= 1.0f)
		{
			c1 = Color.green;
			c2 = Color.red;
			c3 = Color.blue;
			val2 = currentColor.r;
			val3 = currentColor.b;
		}
		else
		{
			c1 = Color.blue;
			c2 = Color.green;
			c3 = Color.red;
			val2 = currentColor.g;
			val3 = currentColor.r;
		}
		if (increasing)
		{
			SetColor(c2, val2 + increment);
			if (val2 + increment >= 1.0f)
			{
				SetColor(c1, 1.0f - increment);
				increasing = !increasing;
			}
		}
		else
		{
			SetColor(c3, val3 - increment);
			if (val3 - increment <= 0.01f)
			{
				increasing = !increasing;
			}
		}
	}


	/// <summary>
	/// Sets the current color' to the given values.
	/// </summary>
	private void SetColor(Color c, float f)
	{
		currentColor = new Color(Mathf.Clamp(c == Color.red ? f : currentColor.r, 0f, 1f),
								 Mathf.Clamp(c == Color.green ? f : currentColor.g, 0f, 1f),
								 Mathf.Clamp(c == Color.blue ? f : currentColor.b, 0f, 1f));
	}


	/// <summary>
	/// Assigns the colors to the appropriate objects. 
	/// </summary>
	private void AssignColors()
	{
		mainLight.color = currentColor;
		particleMat.SetColor("_Color", currentColor);
	}
}
