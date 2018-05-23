using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Class for poolable objects to be referenced in the object pooler. 
/// </summary>
public abstract class Poolable : MonoBehaviour {

	[Header("Pooling")]
	/// <summary>
	/// The name of this pooled object.
	/// </summary>
	public Pooler.PooledName poolName = Pooler.PooledName.Unassigned;

	/// <summary>
	/// Resets this poolable object so that it's ready to be used again.
	/// </summary>
	public abstract void Reset();

	/// <summary>
	/// Initializes this pooled object after being pulled from a pool. 
	/// </summary>
	public virtual void Init () {}
}
