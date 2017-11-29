using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Base class for objects colliding with the player. 
/// </summary>
public class Wall : MonoBehaviour {

	private void OnTriggerEnter2D(Collider2D collision)
	{
		CollisionEvent();
	}

	protected virtual void CollisionEvent()
	{
		GameController.EndGame();
	}
}
