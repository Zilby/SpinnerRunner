#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameController_PrefabType2958771821.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Action
struct Action_t3226471752;
// System.Diagnostics.Stopwatch
struct Stopwatch_t1380178105;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameController::wallPrefabs
	List_1_t1125654279 * ___wallPrefabs_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameController::obstaclePrefabs
	List_1_t1125654279 * ___obstaclePrefabs_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameController::coinPrefabs
	List_1_t1125654279 * ___coinPrefabs_4;
	// System.Single GameController::spawnRate
	float ___spawnRate_13;
	// System.Single GameController::currentTimescale
	float ___currentTimescale_15;
	// System.Diagnostics.Stopwatch GameController::speedTimer
	Stopwatch_t1380178105 * ___speedTimer_16;
	// System.Diagnostics.Stopwatch GameController::scoreTimer
	Stopwatch_t1380178105 * ___scoreTimer_17;
	// GameController/PrefabType GameController::currentPrefab
	int32_t ___currentPrefab_18;
	// System.Int32 GameController::typeCount
	int32_t ___typeCount_19;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameController::spawnedPrefabs
	List_1_t1125654279 * ___spawnedPrefabs_20;
	// UnityEngine.Vector3 GameController::velocity
	Vector3_t2243707580  ___velocity_21;

public:
	inline static int32_t get_offset_of_wallPrefabs_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___wallPrefabs_2)); }
	inline List_1_t1125654279 * get_wallPrefabs_2() const { return ___wallPrefabs_2; }
	inline List_1_t1125654279 ** get_address_of_wallPrefabs_2() { return &___wallPrefabs_2; }
	inline void set_wallPrefabs_2(List_1_t1125654279 * value)
	{
		___wallPrefabs_2 = value;
		Il2CppCodeGenWriteBarrier(&___wallPrefabs_2, value);
	}

	inline static int32_t get_offset_of_obstaclePrefabs_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___obstaclePrefabs_3)); }
	inline List_1_t1125654279 * get_obstaclePrefabs_3() const { return ___obstaclePrefabs_3; }
	inline List_1_t1125654279 ** get_address_of_obstaclePrefabs_3() { return &___obstaclePrefabs_3; }
	inline void set_obstaclePrefabs_3(List_1_t1125654279 * value)
	{
		___obstaclePrefabs_3 = value;
		Il2CppCodeGenWriteBarrier(&___obstaclePrefabs_3, value);
	}

	inline static int32_t get_offset_of_coinPrefabs_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___coinPrefabs_4)); }
	inline List_1_t1125654279 * get_coinPrefabs_4() const { return ___coinPrefabs_4; }
	inline List_1_t1125654279 ** get_address_of_coinPrefabs_4() { return &___coinPrefabs_4; }
	inline void set_coinPrefabs_4(List_1_t1125654279 * value)
	{
		___coinPrefabs_4 = value;
		Il2CppCodeGenWriteBarrier(&___coinPrefabs_4, value);
	}

	inline static int32_t get_offset_of_spawnRate_13() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___spawnRate_13)); }
	inline float get_spawnRate_13() const { return ___spawnRate_13; }
	inline float* get_address_of_spawnRate_13() { return &___spawnRate_13; }
	inline void set_spawnRate_13(float value)
	{
		___spawnRate_13 = value;
	}

	inline static int32_t get_offset_of_currentTimescale_15() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___currentTimescale_15)); }
	inline float get_currentTimescale_15() const { return ___currentTimescale_15; }
	inline float* get_address_of_currentTimescale_15() { return &___currentTimescale_15; }
	inline void set_currentTimescale_15(float value)
	{
		___currentTimescale_15 = value;
	}

	inline static int32_t get_offset_of_speedTimer_16() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___speedTimer_16)); }
	inline Stopwatch_t1380178105 * get_speedTimer_16() const { return ___speedTimer_16; }
	inline Stopwatch_t1380178105 ** get_address_of_speedTimer_16() { return &___speedTimer_16; }
	inline void set_speedTimer_16(Stopwatch_t1380178105 * value)
	{
		___speedTimer_16 = value;
		Il2CppCodeGenWriteBarrier(&___speedTimer_16, value);
	}

	inline static int32_t get_offset_of_scoreTimer_17() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___scoreTimer_17)); }
	inline Stopwatch_t1380178105 * get_scoreTimer_17() const { return ___scoreTimer_17; }
	inline Stopwatch_t1380178105 ** get_address_of_scoreTimer_17() { return &___scoreTimer_17; }
	inline void set_scoreTimer_17(Stopwatch_t1380178105 * value)
	{
		___scoreTimer_17 = value;
		Il2CppCodeGenWriteBarrier(&___scoreTimer_17, value);
	}

	inline static int32_t get_offset_of_currentPrefab_18() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___currentPrefab_18)); }
	inline int32_t get_currentPrefab_18() const { return ___currentPrefab_18; }
	inline int32_t* get_address_of_currentPrefab_18() { return &___currentPrefab_18; }
	inline void set_currentPrefab_18(int32_t value)
	{
		___currentPrefab_18 = value;
	}

	inline static int32_t get_offset_of_typeCount_19() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___typeCount_19)); }
	inline int32_t get_typeCount_19() const { return ___typeCount_19; }
	inline int32_t* get_address_of_typeCount_19() { return &___typeCount_19; }
	inline void set_typeCount_19(int32_t value)
	{
		___typeCount_19 = value;
	}

	inline static int32_t get_offset_of_spawnedPrefabs_20() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___spawnedPrefabs_20)); }
	inline List_1_t1125654279 * get_spawnedPrefabs_20() const { return ___spawnedPrefabs_20; }
	inline List_1_t1125654279 ** get_address_of_spawnedPrefabs_20() { return &___spawnedPrefabs_20; }
	inline void set_spawnedPrefabs_20(List_1_t1125654279 * value)
	{
		___spawnedPrefabs_20 = value;
		Il2CppCodeGenWriteBarrier(&___spawnedPrefabs_20, value);
	}

	inline static int32_t get_offset_of_velocity_21() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___velocity_21)); }
	inline Vector3_t2243707580  get_velocity_21() const { return ___velocity_21; }
	inline Vector3_t2243707580 * get_address_of_velocity_21() { return &___velocity_21; }
	inline void set_velocity_21(Vector3_t2243707580  value)
	{
		___velocity_21 = value;
	}
};

struct GameController_t3607102586_StaticFields
{
public:
	// System.Action GameController::endEvent
	Action_t3226471752 * ___endEvent_5;
	// System.Action GameController::pauseEvent
	Action_t3226471752 * ___pauseEvent_6;
	// System.Int32 GameController::score
	int32_t ___score_7;
	// System.Boolean GameController::gameOver
	bool ___gameOver_14;

public:
	inline static int32_t get_offset_of_endEvent_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___endEvent_5)); }
	inline Action_t3226471752 * get_endEvent_5() const { return ___endEvent_5; }
	inline Action_t3226471752 ** get_address_of_endEvent_5() { return &___endEvent_5; }
	inline void set_endEvent_5(Action_t3226471752 * value)
	{
		___endEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___endEvent_5, value);
	}

	inline static int32_t get_offset_of_pauseEvent_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___pauseEvent_6)); }
	inline Action_t3226471752 * get_pauseEvent_6() const { return ___pauseEvent_6; }
	inline Action_t3226471752 ** get_address_of_pauseEvent_6() { return &___pauseEvent_6; }
	inline void set_pauseEvent_6(Action_t3226471752 * value)
	{
		___pauseEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&___pauseEvent_6, value);
	}

	inline static int32_t get_offset_of_score_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___score_7)); }
	inline int32_t get_score_7() const { return ___score_7; }
	inline int32_t* get_address_of_score_7() { return &___score_7; }
	inline void set_score_7(int32_t value)
	{
		___score_7 = value;
	}

	inline static int32_t get_offset_of_gameOver_14() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___gameOver_14)); }
	inline bool get_gameOver_14() const { return ___gameOver_14; }
	inline bool* get_address_of_gameOver_14() { return &___gameOver_14; }
	inline void set_gameOver_14(bool value)
	{
		___gameOver_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
