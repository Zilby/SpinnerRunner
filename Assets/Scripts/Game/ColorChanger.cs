using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorChanger : MonoBehaviour
{
	public Material mat;

	/// <summary>
	/// The increment at which the colors change.
	/// </summary>
	private const float INCREMENT = 1.0f / 255f;

	/// <summary>
	/// Whether or not the current rgb value is increasing or decreasing. 
	/// </summary>
	private bool increasing = true;

	/// <summary>
	/// The current color of the scene. 
	/// </summary>
	private Color currentColor = Color.black;

	private void Start()
	{
		StartCoroutine(ChangeColors());
	}


	private IEnumerator ChangeColors()
	{
		float r = 0f;
		while (r < 1f)
		{
			r += 0.01f;
			SetColor(Color.red, r);
			AssignColors();
			yield return new WaitForEndOfFrame();
		}
		while(true) 
		{
			IncrementColors();
			AssignColors();
			yield return new WaitForEndOfFrame();
		}
	}


	private void IncrementColors()
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
			SetColor(c2, val2 + INCREMENT);
			if (val2 + INCREMENT >= 1.0f)
			{
				SetColor(c1, 1.0f - INCREMENT);
				increasing = !increasing;
			}
		}
		else
		{
			SetColor(c3, val3 - INCREMENT);
			if (val3 - INCREMENT <= 0.01f)
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
		Texture2D tex = new Texture2D(1, 1);
		tex.SetPixel(0,0,currentColor);
		tex.Apply();
		mat.SetTexture("_MainTex", tex);
	}
}
