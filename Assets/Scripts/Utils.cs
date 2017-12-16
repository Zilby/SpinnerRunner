using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Audio;
using InControl;

/// <summary>
/// Keeps track of all permanent data used across games.
/// </summary>
public static class Utils
{
	private static int highScore = 0;

	public static int HighScore
	{
		get 
		{ 
			return highScore; 
		}
		set
		{ 
			highScore = value; 
		}
	}

	private static float master;

	public static float Master
	{
		get
		{
			return master;
		}

		set
		{
			master = value;
		}
	}

	private static float music;

	public static float Music
	{
		get
		{
			return music;
		}

		set
		{
			music = value;
		}
	}

	private static float soundfx;

	public static float Soundfx
	{
		get
		{
			return soundfx;
		}

		set
		{
			soundfx = value;
		}
	}

	// whether or not this has been loaded
	private static bool loaded;





	/// <summary>
	/// Whether or not data has been loaded yet. 
	/// </summary>
	public static bool Loaded
	{
		get { return loaded; }
		set { loaded = value; }
	}


	/// <summary>
	/// Resets all game data.
	/// </summary>
	public static void Reset()
	{
		highScore = 0;
	}


	/// <summary>
	/// Saves the game.
	/// </summary>
	public static void Save()
	{
		BinaryFormatter bf = new BinaryFormatter();
#if UNITY_EDITOR
		FileStream file = File.Create(Application.persistentDataPath + "/bladeSavedInfoEditor.zlb");
#else
		FileStream file = File.Create(Application.persistentDataPath + "/bladeSavedInfo.zlb");
#endif
		MyData data = new MyData();

		data.highScore = highScore;
		bf.Serialize(file, data);
		file.Close();
	}


	/// <summary>
	/// Loads the game.
	/// </summary>
	/// <param name="mix">The main audio mixer.</param>
	public static void Load(AudioMixer mix)
	{
#if UNITY_EDITOR
		if (File.Exists(Application.persistentDataPath + "/bladeSavedInfoEditor.zlb"))
		{
			BinaryFormatter bf = new BinaryFormatter();
			FileStream file = File.Open(Application.persistentDataPath + "/bladeSavedInfoEditor.zlb", FileMode.Open);
			MyData data = (MyData)bf.Deserialize(file);
			file.Close();
#else
		if (File.Exists (Application.persistentDataPath + "/bladeSavedInfo.zlb")) {
			BinaryFormatter bf = new BinaryFormatter ();
			FileStream file = File.Open (Application.persistentDataPath + "/bladeSavedInfo.zlb", FileMode.Open);
			MyData data = (MyData)bf.Deserialize (file);
			file.Close ();
#endif

			highScore = data.highScore;
			master = data.master;
			mix.SetFloat("Master", master);
			music = data.music;
			mix.SetFloat("Music", music);
			soundfx = data.soundfx;
			mix.SetFloat("SoundFX", soundfx);
		}
		loaded = true;
	}


	/// <summary>
	/// For saving/loading data. 
	/// </summary>
	[Serializable]
	class MyData
	{
		public int highScore;
		public float master;
		public float music;
		public float soundfx;
	}
}
