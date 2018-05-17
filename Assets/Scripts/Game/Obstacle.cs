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
	protected const float ROTATION_SPEED = 5.0f;
	/// <summary>
	/// The boosted rotation speed.
	/// </summary>
	protected const float BOOSTED_SPEED = 8.0f;
	/// <summary>
	/// How much the score increments when the player passes through. 
	/// </summary>
	protected int SCORE_INCREMENT = 5;

	/// <summary>
	/// The speed of the obstacle's boosted rotation. 
	/// </summary>
	protected float boostedRotation = 0;


	protected virtual int ScoreIncrement {
		get { return SCORE_INCREMENT;  }
	}


	protected void Start()
	{
		rotateRight = Random.Range(0, 2) == 0;
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
	protected void IncrementScore() {
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
			transform.Rotate(0, 0, rotateRight ? -actualRotation : actualRotation);
			boostedRotation = Mathf.Abs(boostedRotation) - 0.3f;
			yield return new WaitForEndOfFrame();
		}
	}
}
