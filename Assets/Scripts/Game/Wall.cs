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

	/// <summary>
	/// Called when this object collides with any other. 
	/// </summary>
	protected virtual void CollisionEvent()
	{
		GameController.endEvent();
		PlayerController.Die();
	}
}
