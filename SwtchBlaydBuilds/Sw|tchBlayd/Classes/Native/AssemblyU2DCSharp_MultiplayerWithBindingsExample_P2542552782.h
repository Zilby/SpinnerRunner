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
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<MultiplayerWithBindingsExample.Player>
struct List_1_t2018087185;
// MultiplayerWithBindingsExample.PlayerActions
struct PlayerActions_t1456843126;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultiplayerWithBindingsExample.PlayerManager
struct  PlayerManager_t2542552782  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MultiplayerWithBindingsExample.PlayerManager::playerPrefab
	GameObject_t1756533147 * ___playerPrefab_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MultiplayerWithBindingsExample.PlayerManager::playerPositions
	List_1_t1612828712 * ___playerPositions_4;
	// System.Collections.Generic.List`1<MultiplayerWithBindingsExample.Player> MultiplayerWithBindingsExample.PlayerManager::players
	List_1_t2018087185 * ___players_5;
	// MultiplayerWithBindingsExample.PlayerActions MultiplayerWithBindingsExample.PlayerManager::keyboardListener
	PlayerActions_t1456843126 * ___keyboardListener_6;
	// MultiplayerWithBindingsExample.PlayerActions MultiplayerWithBindingsExample.PlayerManager::joystickListener
	PlayerActions_t1456843126 * ___joystickListener_7;

public:
	inline static int32_t get_offset_of_playerPrefab_2() { return static_cast<int32_t>(offsetof(PlayerManager_t2542552782, ___playerPrefab_2)); }
	inline GameObject_t1756533147 * get_playerPrefab_2() const { return ___playerPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_playerPrefab_2() { return &___playerPrefab_2; }
	inline void set_playerPrefab_2(GameObject_t1756533147 * value)
	{
		___playerPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerPrefab_2, value);
	}

	inline static int32_t get_offset_of_playerPositions_4() { return static_cast<int32_t>(offsetof(PlayerManager_t2542552782, ___playerPositions_4)); }
	inline List_1_t1612828712 * get_playerPositions_4() const { return ___playerPositions_4; }
	inline List_1_t1612828712 ** get_address_of_playerPositions_4() { return &___playerPositions_4; }
	inline void set_playerPositions_4(List_1_t1612828712 * value)
	{
		___playerPositions_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerPositions_4, value);
	}

	inline static int32_t get_offset_of_players_5() { return static_cast<int32_t>(offsetof(PlayerManager_t2542552782, ___players_5)); }
	inline List_1_t2018087185 * get_players_5() const { return ___players_5; }
	inline List_1_t2018087185 ** get_address_of_players_5() { return &___players_5; }
	inline void set_players_5(List_1_t2018087185 * value)
	{
		___players_5 = value;
		Il2CppCodeGenWriteBarrier(&___players_5, value);
	}

	inline static int32_t get_offset_of_keyboardListener_6() { return static_cast<int32_t>(offsetof(PlayerManager_t2542552782, ___keyboardListener_6)); }
	inline PlayerActions_t1456843126 * get_keyboardListener_6() const { return ___keyboardListener_6; }
	inline PlayerActions_t1456843126 ** get_address_of_keyboardListener_6() { return &___keyboardListener_6; }
	inline void set_keyboardListener_6(PlayerActions_t1456843126 * value)
	{
		___keyboardListener_6 = value;
		Il2CppCodeGenWriteBarrier(&___keyboardListener_6, value);
	}

	inline static int32_t get_offset_of_joystickListener_7() { return static_cast<int32_t>(offsetof(PlayerManager_t2542552782, ___joystickListener_7)); }
	inline PlayerActions_t1456843126 * get_joystickListener_7() const { return ___joystickListener_7; }
	inline PlayerActions_t1456843126 ** get_address_of_joystickListener_7() { return &___joystickListener_7; }
	inline void set_joystickListener_7(PlayerActions_t1456843126 * value)
	{
		___joystickListener_7 = value;
		Il2CppCodeGenWriteBarrier(&___joystickListener_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
