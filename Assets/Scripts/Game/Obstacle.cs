using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls obstacle collisions and rotations. 
/// </summary>
public class Obstacle : Wall {

	/// <summary>
	/// The direction the obstacle rotates. 
	/// True if right (clockwise), false if left (counterclockwise). 
	/// </summary>
	public bool rotateRight;
	/// <summary>
	/// The rotation speed.
	/// </summary>
	const float ROTATION_SPEED = 5;

	/// <summary>
	/// The speed of the obstacle's boosted rotation. 
	/// </summary>
	private float boostedRotation = 0;

	private void Start()
	{
		StartCoroutine(Rotate());
	}

	/// <summary>
	/// Called when this obstacle collides with any other object. 
	/// </summary>
	protected override void CollisionEvent()
	{
		if (PlayerController.Rotation != rotateRight)
		{
			base.CollisionEvent();
		}
		else
		{
			BoostRotation();
			PlayerController.Boost();
		}
	}

	/// <summary>
	/// Boosts the rate of rotation of this obstacle. 
	/// </summary>
	public void BoostRotation()
	{
		boostedRotation = 8.0f;
	}

	/// <summary>
	/// Rotates this obstacle.
	/// </summary>
	private IEnumerator Rotate()
	{
		for (;;)
		{
			float actualRotation = ROTATION_SPEED + boostedRotation;
			transform.Rotate(0, 0, rotateRight ? -actualRotation : actualRotation);
			boostedRotation = Mathf.Abs(boostedRotation) - 0.3f;
			yield return new WaitForEndOfFrame();
		}
	}
}
