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
// System.Collections.Generic.List`1<MultiplayerBasicExample.Player>
struct List_1_t2814426891;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultiplayerBasicExample.PlayerManager
struct  PlayerManager_t1806333826  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MultiplayerBasicExample.PlayerManager::playerPrefab
	GameObject_t1756533147 * ___playerPrefab_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MultiplayerBasicExample.PlayerManager::playerPositions
	List_1_t1612828712 * ___playerPositions_4;
	// System.Collections.Generic.List`1<MultiplayerBasicExample.Player> MultiplayerBasicExample.PlayerManager::players
	List_1_t2814426891 * ___players_5;

public:
	inline static int32_t get_offset_of_playerPrefab_2() { return static_cast<int32_t>(offsetof(PlayerManager_t1806333826, ___playerPrefab_2)); }
	inline GameObject_t1756533147 * get_playerPrefab_2() const { return ___playerPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_playerPrefab_2() { return &___playerPrefab_2; }
	inline void set_playerPrefab_2(GameObject_t1756533147 * value)
	{
		___playerPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerPrefab_2, value);
	}

	inline static int32_t get_offset_of_playerPositions_4() { return static_cast<int32_t>(offsetof(PlayerManager_t1806333826, ___playerPositions_4)); }
	inline List_1_t1612828712 * get_playerPositions_4() const { return ___playerPositions_4; }
	inline List_1_t1612828712 ** get_address_of_playerPositions_4() { return &___playerPositions_4; }
	inline void set_playerPositions_4(List_1_t1612828712 * value)
	{
		___playerPositions_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerPositions_4, value);
	}

	inline static int32_t get_offset_of_players_5() { return static_cast<int32_t>(offsetof(PlayerManager_t1806333826, ___players_5)); }
	inline List_1_t2814426891 * get_players_5() const { return ___players_5; }
	inline List_1_t2814426891 ** get_address_of_players_5() { return &___players_5; }
	inline void set_players_5(List_1_t2814426891 * value)
	{
		___players_5 = value;
		Il2CppCodeGenWriteBarrier(&___players_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
