using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Used for controlling all aspects of the player controlled sphere. 
/// </summary>
public class PlayerController : MonoBehaviour {

	private bool rotation;

	const float rotationSpeed = 5;

	void Start () {
		Rotate(true);
		StartCoroutine(Rotate());
	}

	private void Rotate(bool right) {
		rotation = right;
	}

	private IEnumerator Rotate() {
		for (;;)
		{
			transform.Rotate(0, 0, rotation ? -rotationSpeed : rotationSpeed);
			yield return new WaitForEndOfFrame();
		}
	}
}
