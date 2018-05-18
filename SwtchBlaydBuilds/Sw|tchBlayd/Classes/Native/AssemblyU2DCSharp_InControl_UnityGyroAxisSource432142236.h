#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityGyroAxisSource
struct  UnityGyroAxisSource_t432142236  : public Il2CppObject
{
public:
	// System.Int32 InControl.UnityGyroAxisSource::Axis
	int32_t ___Axis_1;

public:
	inline static int32_t get_offset_of_Axis_1() { return static_cast<int32_t>(offsetof(UnityGyroAxisSource_t432142236, ___Axis_1)); }
	inline int32_t get_Axis_1() const { return ___Axis_1; }
	inline int32_t* get_address_of_Axis_1() { return &___Axis_1; }
	inline void set_Axis_1(int32_t value)
	{
		___Axis_1 = value;
	}
};

struct UnityGyroAxisSource_t432142236_StaticFields
{
public:
	// UnityEngine.Quaternion InControl.UnityGyroAxisSource::zeroAttitude
	Quaternion_t4030073918  ___zeroAttitude_0;

public:
	inline static int32_t get_offset_of_zeroAttitude_0() { return static_cast<int32_t>(offsetof(UnityGyroAxisSource_t432142236_StaticFields, ___zeroAttitude_0)); }
	inline Quaternion_t4030073918  get_zeroAttitude_0() const { return ___zeroAttitude_0; }
	inline Quaternion_t4030073918 * get_address_of_zeroAttitude_0() { return &___zeroAttitude_0; }
	inline void set_zeroAttitude_0(Quaternion_t4030073918  value)
	{
		___zeroAttitude_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
