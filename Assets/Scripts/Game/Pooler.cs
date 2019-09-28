using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/// <summary>
/// Used for pooling objects that are spawned.
/// </summary>
public class Pooler : MonoBehaviour
{

	public delegate Poolable GetPooled(PooledName tag, float x = 0.0f);
	/// <summary>
	/// Gets a pooled object. 
	/// </summary>
	public static GetPooled getPooledEvent;

	public delegate void ReturnPooled(Poolable obj);
	/// <summary>
	/// Returns an object back to the pool. 
	/// </summary>
	public static ReturnPooled returnPooledEvent;

	/// <summary>
	/// All of the objects to be pooled.
	/// </summary>
	public List<PooledObject> objectsToPool;
	/// <summary>
	/// All of the active pooled objects.
	/// </summary>
	public Dictionary<PooledName, List<Poolable>> activePool;
	/// <summary>
	/// All of the unactive pooled objects.
	/// </summary>
	public Dictionary<PooledName, List<Poolable>> unactivePool;


	/// <summary>
	/// An object to be pooled.
	/// </summary>
	[System.Serializable]
	public class PooledObject
	{
		/// <summary>
		/// The prefab instance to be pooled.
		/// </summary>
		public Poolable instance;
		/// <summary>
		/// The name of this pooled object to be referenced.
		/// </summary>
		public PooledName name;
		public int startCount;
	}


	/// <summary>
	/// The possible names of a pooled object.
	/// </summary>
	public enum PooledName
	{
		Unassigned,
		Obstacle,
		Coin,
		MiddleWall,
		SideWall,
	}


	void Awake()
	{
		activePool = new Dictionary<PooledName, List<Poolable>>();
		unactivePool = new Dictionary<PooledName, List<Poolable>>();
		getPooledEvent += GetPooledObject;
		returnPooledEvent += ReturnPooledObject;
		foreach (PooledObject o in objectsToPool)
		{
			List<Poolable> temp = new List<Poolable>();
			for (int i = 0; i < o.startCount; i++)
			{
				Poolable obj = (Poolable)Instantiate(o.instance);
				obj.gameObject.SetActive(false);
				obj.Reset();
				temp.Add(obj);
			}
			unactivePool.Add(o.name, temp);
			activePool.Add(o.name, new List<Poolable>());
		}
	}


	/// <summary>
	/// Gives a pooled object of the given tag. 
	/// If none available, it will create a new one. 
	/// </summary>
	/// <param name="tag">The name of the object to be returned.</param>
	/// <returns></returns>
	public Poolable GetPooledObject(PooledName tag, float x = 0.0f)
	{
		List<Poolable> pool = unactivePool[tag];
		if (pool.Count != 0)
		{
			Poolable obj = pool[0];
			obj.gameObject.SetActive(true);
			activePool[tag].Add(obj);
			pool.Remove(obj);
			obj.Init();
			obj.transform.position = new Vector3(x, transform.position.y + 10f, 0.0f);
			return obj;
		}
		foreach (PooledObject o in objectsToPool)
		{
			if (o.name == tag)
			{
				Poolable obj = (Poolable)Instantiate(o.instance);
				obj.gameObject.SetActive(true);
				activePool[tag].Add(obj);
				obj.Init();
				obj.transform.position = new Vector3(x, transform.position.y + 10f, 0.0f);
				return obj;
			}
		}
		Debug.LogErrorFormat("Could not get pooled object with tag {0}, not found.", tag.ToString());
		return null;
	}


	/// <summary>
	/// Returns a given object back to the pooler for future use. 
	/// </summary>
	/// <param name="obj">The object to be returned.</param>
	public void ReturnPooledObject(Poolable obj)
	{
		if (!unactivePool[obj.poolName].Contains(obj))
		{
			obj.gameObject.SetActive(false);
			switch (obj.poolName)
			{
				case PooledName.Unassigned:
					break;
				default:
					obj.Reset();
					activePool[obj.poolName].Remove(obj);
					unactivePool[obj.poolName].Add(obj);
					break;
			}
		}
	}

	public void OnDestroy()
	{
		getPooledEvent -= GetPooledObject;
		returnPooledEvent -= ReturnPooledObject;
	}
}
