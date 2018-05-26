using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Base class for objects colliding with the player. 
/// </summary>
public class Wall : Poolable
{

	private void OnTriggerEnter2D(Collider2D collision)
	{
		if (collision.tag == "Player")
		{
			CollisionEvent();
		}
		else
		{
			Pooler.returnPooledEvent(this);
		}
	}

	/// <summary>
	/// Called when this object collides with any other. 
	/// </summary>
	protected virtual void CollisionEvent()
	{
		GameController.endEvent();
		PlayerController.Die();
	}

	/// <summary>
	/// Resets this poolable object so that it's ready to be used again.
	/// </summary>
	public override void Reset() { }

	/// <summary>
	/// Initializes this pooled object after being pulled from a pool. 
	/// </summary>
	public override void Init() { }
}
