#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// SoundManager/MixEvent
struct MixEvent_t2948949045;
// SoundManager/MixerToggleEvent
struct MixerToggleEvent_t1367925812;
// System.Action
struct Action_t3226471752;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t3244290001;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t1301679762;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t654432262  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Audio.AudioMixer SoundManager::mix
	AudioMixer_t3244290001 * ___mix_8;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> SoundManager::sounds
	List_1_t1301679762 * ___sounds_9;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> SoundManager::music
	List_1_t1301679762 * ___music_10;
	// UnityEngine.AudioSource[] SoundManager::aS
	AudioSourceU5BU5D_t1873220070* ___aS_11;

public:
	inline static int32_t get_offset_of_mix_8() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___mix_8)); }
	inline AudioMixer_t3244290001 * get_mix_8() const { return ___mix_8; }
	inline AudioMixer_t3244290001 ** get_address_of_mix_8() { return &___mix_8; }
	inline void set_mix_8(AudioMixer_t3244290001 * value)
	{
		___mix_8 = value;
		Il2CppCodeGenWriteBarrier(&___mix_8, value);
	}

	inline static int32_t get_offset_of_sounds_9() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___sounds_9)); }
	inline List_1_t1301679762 * get_sounds_9() const { return ___sounds_9; }
	inline List_1_t1301679762 ** get_address_of_sounds_9() { return &___sounds_9; }
	inline void set_sounds_9(List_1_t1301679762 * value)
	{
		___sounds_9 = value;
		Il2CppCodeGenWriteBarrier(&___sounds_9, value);
	}

	inline static int32_t get_offset_of_music_10() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___music_10)); }
	inline List_1_t1301679762 * get_music_10() const { return ___music_10; }
	inline List_1_t1301679762 ** get_address_of_music_10() { return &___music_10; }
	inline void set_music_10(List_1_t1301679762 * value)
	{
		___music_10 = value;
		Il2CppCodeGenWriteBarrier(&___music_10, value);
	}

	inline static int32_t get_offset_of_aS_11() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___aS_11)); }
	inline AudioSourceU5BU5D_t1873220070* get_aS_11() const { return ___aS_11; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_aS_11() { return &___aS_11; }
	inline void set_aS_11(AudioSourceU5BU5D_t1873220070* value)
	{
		___aS_11 = value;
		Il2CppCodeGenWriteBarrier(&___aS_11, value);
	}
};

struct SoundManager_t654432262_StaticFields
{
public:
	// SoundManager/MixEvent SoundManager::GetMix
	MixEvent_t2948949045 * ___GetMix_2;
	// SoundManager/MixerToggleEvent SoundManager::MixerToggle
	MixerToggleEvent_t1367925812 * ___MixerToggle_3;
	// System.Action SoundManager::SpinEvent
	Action_t3226471752 * ___SpinEvent_4;
	// System.Action SoundManager::CoinEvent
	Action_t3226471752 * ___CoinEvent_5;
	// System.Action SoundManager::DeathEvent
	Action_t3226471752 * ___DeathEvent_6;
	// System.Action SoundManager::ClickEvent
	Action_t3226471752 * ___ClickEvent_7;

public:
	inline static int32_t get_offset_of_GetMix_2() { return static_cast<int32_t>(offsetof(SoundManager_t654432262_StaticFields, ___GetMix_2)); }
	inline MixEvent_t2948949045 * get_GetMix_2() const { return ___GetMix_2; }
	inline MixEvent_t2948949045 ** get_address_of_GetMix_2() { return &___GetMix_2; }
	inline void set_GetMix_2(MixEvent_t2948949045 * value)
	{
		___GetMix_2 = value;
		Il2CppCodeGenWriteBarrier(&___GetMix_2, value);
	}

	inline static int32_t get_offset_of_MixerToggle_3() { return static_cast<int32_t>(offsetof(SoundManager_t654432262_StaticFields, ___MixerToggle_3)); }
	inline MixerToggleEvent_t1367925812 * get_MixerToggle_3() const { return ___MixerToggle_3; }
	inline MixerToggleEvent_t1367925812 ** get_address_of_MixerToggle_3() { return &___MixerToggle_3; }
	inline void set_MixerToggle_3(MixerToggleEvent_t1367925812 * value)
	{
		___MixerToggle_3 = value;
		Il2CppCodeGenWriteBarrier(&___MixerToggle_3, value);
	}

	inline static int32_t get_offset_of_SpinEvent_4() { return static_cast<int32_t>(offsetof(SoundManager_t654432262_StaticFields, ___SpinEvent_4)); }
	inline Action_t3226471752 * get_SpinEvent_4() const { return ___SpinEvent_4; }
	inline Action_t3226471752 ** get_address_of_SpinEvent_4() { return &___SpinEvent_4; }
	inline void set_SpinEvent_4(Action_t3226471752 * value)
	{
		___SpinEvent_4 = value;
		Il2CppCodeGenWriteBarrier(&___SpinEvent_4, value);
	}

	inline static int32_t get_offset_of_CoinEvent_5() { return static_cast<int32_t>(offsetof(SoundManager_t654432262_StaticFields, ___CoinEvent_5)); }
	inline Action_t3226471752 * get_CoinEvent_5() const { return ___CoinEvent_5; }
	inline Action_t3226471752 ** get_address_of_CoinEvent_5() { return &___CoinEvent_5; }
	inline void set_CoinEvent_5(Action_t3226471752 * value)
	{
		___CoinEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___CoinEvent_5, value);
	}

	inline static int32_t get_offset_of_DeathEvent_6() { return static_cast<int32_t>(offsetof(SoundManager_t654432262_StaticFields, ___DeathEvent_6)); }
	inline Action_t3226471752 * get_DeathEvent_6() const { return ___DeathEvent_6; }
	inline Action_t3226471752 ** get_address_of_DeathEvent_6() { return &___DeathEvent_6; }
	inline void set_DeathEvent_6(Action_t3226471752 * value)
	{
		___DeathEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&___DeathEvent_6, value);
	}

	inline static int32_t get_offset_of_ClickEvent_7() { return static_cast<int32_t>(offsetof(SoundManager_t654432262_StaticFields, ___ClickEvent_7)); }
	inline Action_t3226471752 * get_ClickEvent_7() const { return ___ClickEvent_7; }
	inline Action_t3226471752 ** get_address_of_ClickEvent_7() { return &___ClickEvent_7; }
	inline void set_ClickEvent_7(Action_t3226471752 * value)
	{
		___ClickEvent_7 = value;
		Il2CppCodeGenWriteBarrier(&___ClickEvent_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
