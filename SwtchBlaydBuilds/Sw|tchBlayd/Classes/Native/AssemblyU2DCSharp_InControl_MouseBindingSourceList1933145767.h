#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_InControl_Mouse230735553.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MouseBindingSourceListener
struct  MouseBindingSourceListener_t1933145767  : public Il2CppObject
{
public:
	// InControl.Mouse InControl.MouseBindingSourceListener::detectFound
	int32_t ___detectFound_1;
	// System.Int32 InControl.MouseBindingSourceListener::detectPhase
	int32_t ___detectPhase_2;

public:
	inline static int32_t get_offset_of_detectFound_1() { return static_cast<int32_t>(offsetof(MouseBindingSourceListener_t1933145767, ___detectFound_1)); }
	inline int32_t get_detectFound_1() const { return ___detectFound_1; }
	inline int32_t* get_address_of_detectFound_1() { return &___detectFound_1; }
	inline void set_detectFound_1(int32_t value)
	{
		___detectFound_1 = value;
	}

	inline static int32_t get_offset_of_detectPhase_2() { return static_cast<int32_t>(offsetof(MouseBindingSourceListener_t1933145767, ___detectPhase_2)); }
	inline int32_t get_detectPhase_2() const { return ___detectPhase_2; }
	inline int32_t* get_address_of_detectPhase_2() { return &___detectPhase_2; }
	inline void set_detectPhase_2(int32_t value)
	{
		___detectPhase_2 = value;
	}
};

struct MouseBindingSourceListener_t1933145767_StaticFields
{
public:
	// System.Single InControl.MouseBindingSourceListener::ScrollWheelThreshold
	float ___ScrollWheelThreshold_0;

public:
	inline static int32_t get_offset_of_ScrollWheelThreshold_0() { return static_cast<int32_t>(offsetof(MouseBindingSourceListener_t1933145767_StaticFields, ___ScrollWheelThreshold_0)); }
	inline float get_ScrollWheelThreshold_0() const { return ___ScrollWheelThreshold_0; }
	inline float* get_address_of_ScrollWheelThreshold_0() { return &___ScrollWheelThreshold_0; }
	inline void set_ScrollWheelThreshold_0(float value)
	{
		___ScrollWheelThreshold_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
