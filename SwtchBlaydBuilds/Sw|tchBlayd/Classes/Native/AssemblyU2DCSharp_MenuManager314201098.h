#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Audio.AudioMixer
struct AudioMixer_t3244290001;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Button
struct Button_t2872111280;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t934157183;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuManager
struct  MenuManager_t314201098  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Audio.AudioMixer MenuManager::mix
	AudioMixer_t3244290001 * ___mix_2;
	// UnityEngine.GameObject MenuManager::main
	GameObject_t1756533147 * ___main_3;
	// UnityEngine.UI.Button MenuManager::play
	Button_t2872111280 * ___play_4;
	// UnityEngine.UI.Button MenuManager::highScores
	Button_t2872111280 * ___highScores_5;
	// UnityEngine.GameObject MenuManager::scores
	GameObject_t1756533147 * ___scores_6;
	// UnityEngine.UI.Button MenuManager::menu
	Button_t2872111280 * ___menu_7;
	// TMPro.TextMeshProUGUI MenuManager::score
	TextMeshProUGUI_t934157183 * ___score_8;

public:
	inline static int32_t get_offset_of_mix_2() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___mix_2)); }
	inline AudioMixer_t3244290001 * get_mix_2() const { return ___mix_2; }
	inline AudioMixer_t3244290001 ** get_address_of_mix_2() { return &___mix_2; }
	inline void set_mix_2(AudioMixer_t3244290001 * value)
	{
		___mix_2 = value;
		Il2CppCodeGenWriteBarrier(&___mix_2, value);
	}

	inline static int32_t get_offset_of_main_3() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___main_3)); }
	inline GameObject_t1756533147 * get_main_3() const { return ___main_3; }
	inline GameObject_t1756533147 ** get_address_of_main_3() { return &___main_3; }
	inline void set_main_3(GameObject_t1756533147 * value)
	{
		___main_3 = value;
		Il2CppCodeGenWriteBarrier(&___main_3, value);
	}

	inline static int32_t get_offset_of_play_4() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___play_4)); }
	inline Button_t2872111280 * get_play_4() const { return ___play_4; }
	inline Button_t2872111280 ** get_address_of_play_4() { return &___play_4; }
	inline void set_play_4(Button_t2872111280 * value)
	{
		___play_4 = value;
		Il2CppCodeGenWriteBarrier(&___play_4, value);
	}

	inline static int32_t get_offset_of_highScores_5() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___highScores_5)); }
	inline Button_t2872111280 * get_highScores_5() const { return ___highScores_5; }
	inline Button_t2872111280 ** get_address_of_highScores_5() { return &___highScores_5; }
	inline void set_highScores_5(Button_t2872111280 * value)
	{
		___highScores_5 = value;
		Il2CppCodeGenWriteBarrier(&___highScores_5, value);
	}

	inline static int32_t get_offset_of_scores_6() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___scores_6)); }
	inline GameObject_t1756533147 * get_scores_6() const { return ___scores_6; }
	inline GameObject_t1756533147 ** get_address_of_scores_6() { return &___scores_6; }
	inline void set_scores_6(GameObject_t1756533147 * value)
	{
		___scores_6 = value;
		Il2CppCodeGenWriteBarrier(&___scores_6, value);
	}

	inline static int32_t get_offset_of_menu_7() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___menu_7)); }
	inline Button_t2872111280 * get_menu_7() const { return ___menu_7; }
	inline Button_t2872111280 ** get_address_of_menu_7() { return &___menu_7; }
	inline void set_menu_7(Button_t2872111280 * value)
	{
		___menu_7 = value;
		Il2CppCodeGenWriteBarrier(&___menu_7, value);
	}

	inline static int32_t get_offset_of_score_8() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___score_8)); }
	inline TextMeshProUGUI_t934157183 * get_score_8() const { return ___score_8; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_score_8() { return &___score_8; }
	inline void set_score_8(TextMeshProUGUI_t934157183 * value)
	{
		___score_8 = value;
		Il2CppCodeGenWriteBarrier(&___score_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
