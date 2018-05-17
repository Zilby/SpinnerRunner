using System;
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

	public static Action SpinEvent;

	public static Action CoinEvent;

	public static Action DeathEvent;

	public static Action ClickEvent;

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


	private void Awake ()
	{
		if (SpinEvent == null)
		{
			DontDestroyOnLoad(gameObject);
			aS = GetComponents<AudioSource>();
			SpinEvent = delegate { PlaySFX(0); };
			CoinEvent = delegate { PlaySFX(1); };
			DeathEvent = delegate { PlaySFX(2); };
			ClickEvent = delegate { PlaySFX(3); };
			GetMix = GetMixer;
			PlaySong(0);
		} else
		{
			Destroy(gameObject);
		}
	}

	private AudioMixer GetMixer() {
		return mix;
	}

	/// <summary>
	/// Plays a sound effect from the list. 
	/// </summary>
	private void PlaySFX (int i)
	{
		aS[0].PlayOneShot(sounds[i]);
	}

	/// <summary>
	/// Plays a given song of index i in music.
	/// </summary>
	private void PlaySong (int i)
	{
		aS[1].clip = music[i];
		aS[1].Play();
	}
}
