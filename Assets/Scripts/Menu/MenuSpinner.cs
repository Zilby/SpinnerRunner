﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Spins the menu spinner. 
/// </summary>
public class MenuSpinner : MonoBehaviour {

	/// <summary>
	/// The rotation speed.
	/// </summary>
	const float ROTATION_SPEED = 25f;

	private void Start()
	{
		StartCoroutine(Rotate());
	}

	/// <summary>
	/// Rotates this object.
	/// </summary>
	private IEnumerator Rotate()
	{
		for (;;)
		{
			transform.Rotate(0, 0, -ROTATION_SPEED * Time.smoothDeltaTime);
			yield return new WaitForEndOfFrame();
		}
	}
}
