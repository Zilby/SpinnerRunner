#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Action
struct Action_t3226471752;
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlayerController::deathParticles
	GameObject_t1756533147 * ___deathParticles_6;
	// System.Single PlayerController::desiredRot
	float ___desiredRot_11;
	// System.Single PlayerController::damping
	float ___damping_12;
	// System.Single PlayerController::boostedRotation
	float ___boostedRotation_13;

public:
	inline static int32_t get_offset_of_deathParticles_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___deathParticles_6)); }
	inline GameObject_t1756533147 * get_deathParticles_6() const { return ___deathParticles_6; }
	inline GameObject_t1756533147 ** get_address_of_deathParticles_6() { return &___deathParticles_6; }
	inline void set_deathParticles_6(GameObject_t1756533147 * value)
	{
		___deathParticles_6 = value;
		Il2CppCodeGenWriteBarrier(&___deathParticles_6, value);
	}

	inline static int32_t get_offset_of_desiredRot_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___desiredRot_11)); }
	inline float get_desiredRot_11() const { return ___desiredRot_11; }
	inline float* get_address_of_desiredRot_11() { return &___desiredRot_11; }
	inline void set_desiredRot_11(float value)
	{
		___desiredRot_11 = value;
	}

	inline static int32_t get_offset_of_damping_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___damping_12)); }
	inline float get_damping_12() const { return ___damping_12; }
	inline float* get_address_of_damping_12() { return &___damping_12; }
	inline void set_damping_12(float value)
	{
		___damping_12 = value;
	}

	inline static int32_t get_offset_of_boostedRotation_13() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___boostedRotation_13)); }
	inline float get_boostedRotation_13() const { return ___boostedRotation_13; }
	inline float* get_address_of_boostedRotation_13() { return &___boostedRotation_13; }
	inline void set_boostedRotation_13(float value)
	{
		___boostedRotation_13 = value;
	}
};

struct PlayerController_t4148409433_StaticFields
{
public:
	// System.Action PlayerController::Boost
	Action_t3226471752 * ___Boost_2;
	// System.Action PlayerController::Die
	Action_t3226471752 * ___Die_3;
	// PlayerController PlayerController::primaryPlayer
	PlayerController_t4148409433 * ___primaryPlayer_4;
	// PlayerController PlayerController::secondaryPlayer
	PlayerController_t4148409433 * ___secondaryPlayer_5;
	// System.Boolean PlayerController::rotateRight
	bool ___rotateRight_7;

public:
	inline static int32_t get_offset_of_Boost_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433_StaticFields, ___Boost_2)); }
	inline Action_t3226471752 * get_Boost_2() const { return ___Boost_2; }
	inline Action_t3226471752 ** get_address_of_Boost_2() { return &___Boost_2; }
	inline void set_Boost_2(Action_t3226471752 * value)
	{
		___Boost_2 = value;
		Il2CppCodeGenWriteBarrier(&___Boost_2, value);
	}

	inline static int32_t get_offset_of_Die_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433_StaticFields, ___Die_3)); }
	inline Action_t3226471752 * get_Die_3() const { return ___Die_3; }
	inline Action_t3226471752 ** get_address_of_Die_3() { return &___Die_3; }
	inline void set_Die_3(Action_t3226471752 * value)
	{
		___Die_3 = value;
		Il2CppCodeGenWriteBarrier(&___Die_3, value);
	}

	inline static int32_t get_offset_of_primaryPlayer_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433_StaticFields, ___primaryPlayer_4)); }
	inline PlayerController_t4148409433 * get_primaryPlayer_4() const { return ___primaryPlayer_4; }
	inline PlayerController_t4148409433 ** get_address_of_primaryPlayer_4() { return &___primaryPlayer_4; }
	inline void set_primaryPlayer_4(PlayerController_t4148409433 * value)
	{
		___primaryPlayer_4 = value;
		Il2CppCodeGenWriteBarrier(&___primaryPlayer_4, value);
	}

	inline static int32_t get_offset_of_secondaryPlayer_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433_StaticFields, ___secondaryPlayer_5)); }
	inline PlayerController_t4148409433 * get_secondaryPlayer_5() const { return ___secondaryPlayer_5; }
	inline PlayerController_t4148409433 ** get_address_of_secondaryPlayer_5() { return &___secondaryPlayer_5; }
	inline void set_secondaryPlayer_5(PlayerController_t4148409433 * value)
	{
		___secondaryPlayer_5 = value;
		Il2CppCodeGenWriteBarrier(&___secondaryPlayer_5, value);
	}

	inline static int32_t get_offset_of_rotateRight_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433_StaticFields, ___rotateRight_7)); }
	inline bool get_rotateRight_7() const { return ___rotateRight_7; }
	inline bool* get_address_of_rotateRight_7() { return &___rotateRight_7; }
	inline void set_rotateRight_7(bool value)
	{
		___rotateRight_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
