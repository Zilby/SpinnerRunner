﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_InControl_KeyCombo2665505031.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.KeyBindingSourceListener
struct  KeyBindingSourceListener_t2454447005  : public Il2CppObject
{
public:
	// InControl.KeyCombo InControl.KeyBindingSourceListener::detectFound
	KeyCombo_t2665505031  ___detectFound_0;
	// System.Int32 InControl.KeyBindingSourceListener::detectPhase
	int32_t ___detectPhase_1;

public:
	inline static int32_t get_offset_of_detectFound_0() { return static_cast<int32_t>(offsetof(KeyBindingSourceListener_t2454447005, ___detectFound_0)); }
	inline KeyCombo_t2665505031  get_detectFound_0() const { return ___detectFound_0; }
	inline KeyCombo_t2665505031 * get_address_of_detectFound_0() { return &___detectFound_0; }
	inline void set_detectFound_0(KeyCombo_t2665505031  value)
	{
		___detectFound_0 = value;
	}

	inline static int32_t get_offset_of_detectPhase_1() { return static_cast<int32_t>(offsetof(KeyBindingSourceListener_t2454447005, ___detectPhase_1)); }
	inline int32_t get_detectPhase_1() const { return ___detectPhase_1; }
	inline int32_t* get_address_of_detectPhase_1() { return &___detectPhase_1; }
	inline void set_detectPhase_1(int32_t value)
	{
		___detectPhase_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif