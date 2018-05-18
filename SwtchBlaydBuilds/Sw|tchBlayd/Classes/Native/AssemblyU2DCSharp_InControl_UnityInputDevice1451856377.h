#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_InputDevice3241776736.h"

// System.String[0...,0...]
struct StringU5BU2CU5D_t1642385973;
// InControl.UnityInputDeviceProfileBase
struct UnityInputDeviceProfileBase_t2104272291;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDevice
struct  UnityInputDevice_t1451856377  : public InputDevice_t3241776736
{
public:
	// System.Int32 InControl.UnityInputDevice::<JoystickId>k__BackingField
	int32_t ___U3CJoystickIdU3Ek__BackingField_52;
	// InControl.UnityInputDeviceProfileBase InControl.UnityInputDevice::profile
	UnityInputDeviceProfileBase_t2104272291 * ___profile_53;

public:
	inline static int32_t get_offset_of_U3CJoystickIdU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(UnityInputDevice_t1451856377, ___U3CJoystickIdU3Ek__BackingField_52)); }
	inline int32_t get_U3CJoystickIdU3Ek__BackingField_52() const { return ___U3CJoystickIdU3Ek__BackingField_52; }
	inline int32_t* get_address_of_U3CJoystickIdU3Ek__BackingField_52() { return &___U3CJoystickIdU3Ek__BackingField_52; }
	inline void set_U3CJoystickIdU3Ek__BackingField_52(int32_t value)
	{
		___U3CJoystickIdU3Ek__BackingField_52 = value;
	}

	inline static int32_t get_offset_of_profile_53() { return static_cast<int32_t>(offsetof(UnityInputDevice_t1451856377, ___profile_53)); }
	inline UnityInputDeviceProfileBase_t2104272291 * get_profile_53() const { return ___profile_53; }
	inline UnityInputDeviceProfileBase_t2104272291 ** get_address_of_profile_53() { return &___profile_53; }
	inline void set_profile_53(UnityInputDeviceProfileBase_t2104272291 * value)
	{
		___profile_53 = value;
		Il2CppCodeGenWriteBarrier(&___profile_53, value);
	}
};

struct UnityInputDevice_t1451856377_StaticFields
{
public:
	// System.String[0...,0...] InControl.UnityInputDevice::analogQueries
	StringU5BU2CU5D_t1642385973* ___analogQueries_47;
	// System.String[0...,0...] InControl.UnityInputDevice::buttonQueries
	StringU5BU2CU5D_t1642385973* ___buttonQueries_48;

public:
	inline static int32_t get_offset_of_analogQueries_47() { return static_cast<int32_t>(offsetof(UnityInputDevice_t1451856377_StaticFields, ___analogQueries_47)); }
	inline StringU5BU2CU5D_t1642385973* get_analogQueries_47() const { return ___analogQueries_47; }
	inline StringU5BU2CU5D_t1642385973** get_address_of_analogQueries_47() { return &___analogQueries_47; }
	inline void set_analogQueries_47(StringU5BU2CU5D_t1642385973* value)
	{
		___analogQueries_47 = value;
		Il2CppCodeGenWriteBarrier(&___analogQueries_47, value);
	}

	inline static int32_t get_offset_of_buttonQueries_48() { return static_cast<int32_t>(offsetof(UnityInputDevice_t1451856377_StaticFields, ___buttonQueries_48)); }
	inline StringU5BU2CU5D_t1642385973* get_buttonQueries_48() const { return ___buttonQueries_48; }
	inline StringU5BU2CU5D_t1642385973** get_address_of_buttonQueries_48() { return &___buttonQueries_48; }
	inline void set_buttonQueries_48(StringU5BU2CU5D_t1642385973* value)
	{
		___buttonQueries_48 = value;
		Il2CppCodeGenWriteBarrier(&___buttonQueries_48, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
