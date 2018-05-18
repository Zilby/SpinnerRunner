#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

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
	// UnityEngine.GameObject MenuManager::main
	GameObject_t1756533147 * ___main_2;
	// UnityEngine.UI.Button MenuManager::play
	Button_t2872111280 * ___play_3;
	// UnityEngine.UI.Button MenuManager::highScores
	Button_t2872111280 * ___highScores_4;
	// UnityEngine.GameObject MenuManager::scores
	GameObject_t1756533147 * ___scores_5;
	// UnityEngine.UI.Button MenuManager::menu
	Button_t2872111280 * ___menu_6;
	// TMPro.TextMeshProUGUI MenuManager::score
	TextMeshProUGUI_t934157183 * ___score_7;

public:
	inline static int32_t get_offset_of_main_2() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___main_2)); }
	inline GameObject_t1756533147 * get_main_2() const { return ___main_2; }
	inline GameObject_t1756533147 ** get_address_of_main_2() { return &___main_2; }
	inline void set_main_2(GameObject_t1756533147 * value)
	{
		___main_2 = value;
		Il2CppCodeGenWriteBarrier(&___main_2, value);
	}

	inline static int32_t get_offset_of_play_3() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___play_3)); }
	inline Button_t2872111280 * get_play_3() const { return ___play_3; }
	inline Button_t2872111280 ** get_address_of_play_3() { return &___play_3; }
	inline void set_play_3(Button_t2872111280 * value)
	{
		___play_3 = value;
		Il2CppCodeGenWriteBarrier(&___play_3, value);
	}

	inline static int32_t get_offset_of_highScores_4() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___highScores_4)); }
	inline Button_t2872111280 * get_highScores_4() const { return ___highScores_4; }
	inline Button_t2872111280 ** get_address_of_highScores_4() { return &___highScores_4; }
	inline void set_highScores_4(Button_t2872111280 * value)
	{
		___highScores_4 = value;
		Il2CppCodeGenWriteBarrier(&___highScores_4, value);
	}

	inline static int32_t get_offset_of_scores_5() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___scores_5)); }
	inline GameObject_t1756533147 * get_scores_5() const { return ___scores_5; }
	inline GameObject_t1756533147 ** get_address_of_scores_5() { return &___scores_5; }
	inline void set_scores_5(GameObject_t1756533147 * value)
	{
		___scores_5 = value;
		Il2CppCodeGenWriteBarrier(&___scores_5, value);
	}

	inline static int32_t get_offset_of_menu_6() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___menu_6)); }
	inline Button_t2872111280 * get_menu_6() const { return ___menu_6; }
	inline Button_t2872111280 ** get_address_of_menu_6() { return &___menu_6; }
	inline void set_menu_6(Button_t2872111280 * value)
	{
		___menu_6 = value;
		Il2CppCodeGenWriteBarrier(&___menu_6, value);
	}

	inline static int32_t get_offset_of_score_7() { return static_cast<int32_t>(offsetof(MenuManager_t314201098, ___score_7)); }
	inline TextMeshProUGUI_t934157183 * get_score_7() const { return ___score_7; }
	inline TextMeshProUGUI_t934157183 ** get_address_of_score_7() { return &___score_7; }
	inline void set_score_7(TextMeshProUGUI_t934157183 * value)
	{
		___score_7 = value;
		Il2CppCodeGenWriteBarrier(&___score_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
