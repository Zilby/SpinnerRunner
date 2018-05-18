﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_InputDeviceManager3253850077.h"

// InControl.InputDevice
struct InputDevice_t3241776736;
// InControl.RingBuffer`1<InControl.ICadeState>
struct RingBuffer_1_t2367448301;
// System.Threading.Thread
struct Thread_t241561612;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.ICadeDeviceManager
struct  ICadeDeviceManager_t2010658641  : public InputDeviceManager_t3253850077
{
public:
	// InControl.InputDevice InControl.ICadeDeviceManager::device
	InputDevice_t3241776736 * ___device_1;
	// InControl.RingBuffer`1<InControl.ICadeState> InControl.ICadeDeviceManager::state
	RingBuffer_1_t2367448301 * ___state_2;
	// System.Threading.Thread InControl.ICadeDeviceManager::thread
	Thread_t241561612 * ___thread_3;
	// System.Int32 InControl.ICadeDeviceManager::timeStep
	int32_t ___timeStep_4;
	// System.Int32 InControl.ICadeDeviceManager::bufferSize
	int32_t ___bufferSize_5;
	// System.Boolean InControl.ICadeDeviceManager::active
	bool ___active_6;

public:
	inline static int32_t get_offset_of_device_1() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t2010658641, ___device_1)); }
	inline InputDevice_t3241776736 * get_device_1() const { return ___device_1; }
	inline InputDevice_t3241776736 ** get_address_of_device_1() { return &___device_1; }
	inline void set_device_1(InputDevice_t3241776736 * value)
	{
		___device_1 = value;
		Il2CppCodeGenWriteBarrier(&___device_1, value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t2010658641, ___state_2)); }
	inline RingBuffer_1_t2367448301 * get_state_2() const { return ___state_2; }
	inline RingBuffer_1_t2367448301 ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(RingBuffer_1_t2367448301 * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier(&___state_2, value);
	}

	inline static int32_t get_offset_of_thread_3() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t2010658641, ___thread_3)); }
	inline Thread_t241561612 * get_thread_3() const { return ___thread_3; }
	inline Thread_t241561612 ** get_address_of_thread_3() { return &___thread_3; }
	inline void set_thread_3(Thread_t241561612 * value)
	{
		___thread_3 = value;
		Il2CppCodeGenWriteBarrier(&___thread_3, value);
	}

	inline static int32_t get_offset_of_timeStep_4() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t2010658641, ___timeStep_4)); }
	inline int32_t get_timeStep_4() const { return ___timeStep_4; }
	inline int32_t* get_address_of_timeStep_4() { return &___timeStep_4; }
	inline void set_timeStep_4(int32_t value)
	{
		___timeStep_4 = value;
	}

	inline static int32_t get_offset_of_bufferSize_5() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t2010658641, ___bufferSize_5)); }
	inline int32_t get_bufferSize_5() const { return ___bufferSize_5; }
	inline int32_t* get_address_of_bufferSize_5() { return &___bufferSize_5; }
	inline void set_bufferSize_5(int32_t value)
	{
		___bufferSize_5 = value;
	}

	inline static int32_t get_offset_of_active_6() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t2010658641, ___active_6)); }
	inline bool get_active_6() const { return ___active_6; }
	inline bool* get_address_of_active_6() { return &___active_6; }
	inline void set_active_6(bool value)
	{
		___active_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
