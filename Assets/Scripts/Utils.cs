using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Audio;
using InControl;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;

/// <summary>
/// Keeps track of all permanent data used across games.
/// </summary>
public static class Utils
{

#if UNITY_IPHONE

	// On iOS plugins are statically linked into
	// the executable, so we have to use __Internal as the
	// library name.
	[DllImport("__Internal")]

#else

       // Other platforms load plugins dynamically, so pass the name
       // of the plugin's dynamic library.
       [DllImport ("PluginName")]
    
#endif
	private static extern bool _IsMusicPlaying();

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
		AudioMixer mix = SoundManager.GetMix();
		mix.GetFloat("Music", out music);
		mix.GetFloat("SoundFX", out soundfx);
		data.music = music;
		data.soundfx = soundfx;
		bf.Serialize(file, data);
		file.Close();
	}


	/// <summary>
	/// Loads the game.
	/// </summary>
	/// <param name="mix">The main audio mixer.</param>
	public static void Load()
	{
#if UNITY_EDITOR
		if (File.Exists(Application.persistentDataPath + "/bladeSavedInfoEditor.zlb"))
		{
			try
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
				AudioMixer mix = SoundManager.GetMix();
				highScore = data.highScore;
				music = data.music;
				soundfx = data.soundfx;

#if UNITY_IPHONE && !UNITY_EDITOR
			if (_IsMusicPlaying()) {
				music = -80.0f;
			}
#endif

				mix.SetFloat("Music", music);
				mix.SetFloat("SoundFX", soundfx);
			}
			catch (SerializationException e)
			{
				Debug.Log("Save Parsing Error: " + e);
			}
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
		public float music;
		public float soundfx;
	}
}
