﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

/// <summary>
/// Manages all in-game sounds.
/// </summary>
public class SoundManager : MonoBehaviour
{
	public delegate AudioMixer MixEvent();
	public static MixEvent GetMix;

	public delegate void MixerToggleEvent(bool active, string track);
	public static MixerToggleEvent MixerToggle;

	public static Action SpinEvent;

	public static Action CoinEvent;

	public static Action DeathEvent;

	public static Action ClickEvent;

	public static Action SongEvent;

	public AudioMixer mix;

	/// <summary>
	/// The list of sound clips. 
	/// </summary>
	public List<AudioClip> sounds;

	/// <summary>
	/// The list of music clips. 
	/// </summary>
	public List<AudioClip> music;

	/// <summary>
	/// The audio sources.
	/// aS[0] is used to play singleton audio clips.
	/// aS[1] is used to play music. 
	/// </summary>
	private AudioSource[] aS;


	private void Awake()
	{
		if (SpinEvent == null)
		{
			DontDestroyOnLoad(gameObject);
			aS = GetComponents<AudioSource>();
			SpinEvent = delegate { PlaySFX(0, 2); };
			CoinEvent = delegate { PlaySFX(1, 0); };
			DeathEvent = delegate { PlaySFX(2, 3); };
			ClickEvent = delegate { PlaySFX(3, 0); };
			GetMix = GetMixer;
			MixerToggle = ToggleMixer;
			SongEvent = delegate { PlaySong(0); };
		}
		else
		{
			Destroy(gameObject);
		}
	}

	/// <summary>
	/// Gets the main audio mixer. 
	/// </summary>
	private AudioMixer GetMixer()
	{
		return mix;
	}

	/// <summary>
	/// Plays a sound effect from the list. 
	/// </summary>
	private void PlaySFX(int i, int j)
	{
		aS[j].clip = sounds[i];
		aS[j].Play();
	}

	/// <summary>
	/// Plays a given song of index i in music.
	/// </summary>
	private void PlaySong(int i)
	{
		if (aS[1].clip != music[i])
		{
			aS[1].clip = music[i];
			aS[1].Play();
		}
	}

	/// <summary>
	/// Toggles whether the given mixer track is active. 
	/// </summary>
	private void ToggleMixer(bool active, string track)
	{
		float val = active ? -80f : 0f;
		mix.SetFloat(track, val);
		// ensures that if music was automatically turned off that 
		// it isn't saved that way, since it's assigned here. 
		if(track == "Music") {
			Utils.Music = val;
		} else {
			Utils.Soundfx = val;
		}
		Utils.Save();
	}
}
