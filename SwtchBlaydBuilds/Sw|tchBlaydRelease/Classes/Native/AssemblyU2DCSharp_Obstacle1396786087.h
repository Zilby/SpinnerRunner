#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Wall3972794736.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Obstacle
struct  Obstacle_t1396786087  : public Wall_t3972794736
{
public:
	// System.Boolean Obstacle::rotateRight
	bool ___rotateRight_2;
	// System.Single Obstacle::desiredRot
	float ___desiredRot_3;
	// System.Single Obstacle::damping
	float ___damping_4;
	// System.Int32 Obstacle::SCORE_INCREMENT
	int32_t ___SCORE_INCREMENT_7;
	// System.Single Obstacle::boostedRotation
	float ___boostedRotation_8;

public:
	inline static int32_t get_offset_of_rotateRight_2() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___rotateRight_2)); }
	inline bool get_rotateRight_2() const { return ___rotateRight_2; }
	inline bool* get_address_of_rotateRight_2() { return &___rotateRight_2; }
	inline void set_rotateRight_2(bool value)
	{
		___rotateRight_2 = value;
	}

	inline static int32_t get_offset_of_desiredRot_3() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___desiredRot_3)); }
	inline float get_desiredRot_3() const { return ___desiredRot_3; }
	inline float* get_address_of_desiredRot_3() { return &___desiredRot_3; }
	inline void set_desiredRot_3(float value)
	{
		___desiredRot_3 = value;
	}

	inline static int32_t get_offset_of_damping_4() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___damping_4)); }
	inline float get_damping_4() const { return ___damping_4; }
	inline float* get_address_of_damping_4() { return &___damping_4; }
	inline void set_damping_4(float value)
	{
		___damping_4 = value;
	}

	inline static int32_t get_offset_of_SCORE_INCREMENT_7() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___SCORE_INCREMENT_7)); }
	inline int32_t get_SCORE_INCREMENT_7() const { return ___SCORE_INCREMENT_7; }
	inline int32_t* get_address_of_SCORE_INCREMENT_7() { return &___SCORE_INCREMENT_7; }
	inline void set_SCORE_INCREMENT_7(int32_t value)
	{
		___SCORE_INCREMENT_7 = value;
	}

	inline static int32_t get_offset_of_boostedRotation_8() { return static_cast<int32_t>(offsetof(Obstacle_t1396786087, ___boostedRotation_8)); }
	inline float get_boostedRotation_8() const { return ___boostedRotation_8; }
	inline float* get_address_of_boostedRotation_8() { return &___boostedRotation_8; }
	inline void set_boostedRotation_8(float value)
	{
		___boostedRotation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
