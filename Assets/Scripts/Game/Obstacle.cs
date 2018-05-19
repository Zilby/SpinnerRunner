using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controls obstacle collisions and rotations. 
/// </summary>
public class Obstacle : Wall
{

	/// <summary>
	/// The desired rotation.
	/// </summary>
	protected float desiredRot;
	/// <summary>
	/// Damp for lerp. 
	/// </summary>
	protected float damping = 10;
	/// <summary>
	/// The rotation speed.
	/// </summary>
	protected const float ROTATION_SPEED = 200.0f;
	/// <summary>
	/// The boosted rotation speed.
	/// </summary>
	protected const float BOOSTED_SPEED = 500.0f;
	/// <summary>
	/// How much the score increments when the player passes through. 
	/// </summary>
	protected int SCORE_INCREMENT = 5;

	/// <summary>
	/// The speed of the obstacle's boosted rotation. 
	/// </summary>
	protected float boostedRotation = 0;

	/// <summary>
	/// The direction the obstacle rotates. 
	/// True if right (clockwise), false if left (counterclockwise). 
	/// </summary>
	protected bool rotateRight;

	protected bool assignedRotation = false;

	/// <summary>
	/// How much the score is incremented when the player hits this obstacle and survives. 
	/// </summary>
	protected virtual int ScoreIncrement
	{
		get { return SCORE_INCREMENT; }
	}

	public bool RotateRight
	{
		set
		{
			rotateRight = value;
			assignedRotation = true;
		}
	}


	protected void Start()
	{
		if (!assignedRotation)
		{
			rotateRight = Random.Range(0, 2) == 0;
		}
		desiredRot = transform.eulerAngles.z;
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
		else if (boostedRotation < 0.1f)
		{
			BoostRotation();
			IncrementScore();
			PlayerController.Boost();
		}
	}


	/// <summary>
	/// Boosts the rate of rotation of this obstacle. 
	/// </summary>
	protected void BoostRotation()
	{
		boostedRotation = BOOSTED_SPEED;
	}


	/// <summary>
	/// Increments the score.
	/// </summary>
	protected void IncrementScore()
	{
		GameController.score += ScoreIncrement;
	}


	/// <summary>
	/// Rotates this obstacle.
	/// </summary>
	protected IEnumerator Rotate()
	{
		for (;;)
		{
			float actualRotation = ROTATION_SPEED + boostedRotation;
			desiredRot += (rotateRight ? -actualRotation : actualRotation) * Time.smoothDeltaTime * Time.timeScale;
			var desiredRotQ = Quaternion.Euler(transform.eulerAngles.x, transform.eulerAngles.y, desiredRot);
			transform.rotation = Quaternion.Lerp(transform.rotation, desiredRotQ, Time.smoothDeltaTime * damping);

			boostedRotation = Mathf.Abs(boostedRotation) - (750f * Time.smoothDeltaTime);
			yield return new WaitForEndOfFrame();
		}
	}
}
