using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : Obstacle {

	/// <summary>
	/// The rotation speed.
	/// </summary>
	protected new const float ROTATION_SPEED = 7.0f;
	/// <summary>
	/// The boosted rotation speed.
	/// </summary>
	protected new const float BOOSTED_SPEED = 10.0f;
	/// <summary>
	/// How much the score increments when the player passes through. 
	/// </summary>
	protected new const int SCORE_INCREMENT = 10;
	/// <summary>
	/// The fly speed of the coin.
	/// </summary>
	protected const float FLY_SPEED = 20;


	protected override int ScoreIncrement
	{
		get { return SCORE_INCREMENT; }
	}


	/// <summary>
	/// Called when this obstacle collides with any other object. 
	/// </summary>
	protected override void CollisionEvent()
	{
		if (PlayerController.Rotation == rotateRight && boostedRotation < 0.1f)
		{
			BoostRotation();
			PlayerController.Boost();
			StartCoroutine(FlyAway());
		}
	}


	/// <summary>
	/// Causes the coin to fly towards the score and then destroy itself. 
	/// </summary>
	protected virtual IEnumerator FlyAway() {
		Vector3 flyLocation = Camera.main.ViewportToWorldPoint(new Vector3(0.1f, 0.94f, Camera.main.nearClipPlane));
		while (transform.localScale.x > 0.37f) {
			flyLocation = Camera.main.ViewportToWorldPoint(new Vector3(0.1f, 0.94f, Camera.main.nearClipPlane));
			transform.position = Vector3.MoveTowards(transform.position, new Vector3(flyLocation.x, flyLocation.y, transform.position.z), FLY_SPEED * Time.deltaTime);
			transform.localScale = transform.localScale * 0.97f;
			yield return new WaitForEndOfFrame();
		}
		IncrementScore();
		Destroy(gameObject);
	}


	private void OnTriggerStay2D(Collider2D collision)
	{
		CollisionEvent();
	}
}
