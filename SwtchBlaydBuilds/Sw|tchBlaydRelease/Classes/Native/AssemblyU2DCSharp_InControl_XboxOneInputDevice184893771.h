#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_InputDevice3241776736.h"

// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XboxOneInputDevice
struct  XboxOneInputDevice_t184893771  : public InputDevice_t3241776736
{
public:
	// System.UInt32 InControl.XboxOneInputDevice::<JoystickId>k__BackingField
	uint32_t ___U3CJoystickIdU3Ek__BackingField_55;
	// System.UInt64 InControl.XboxOneInputDevice::<ControllerId>k__BackingField
	uint64_t ___U3CControllerIdU3Ek__BackingField_56;
	// System.String[] InControl.XboxOneInputDevice::analogAxisNameForId
	StringU5BU5D_t1642385972* ___analogAxisNameForId_57;

public:
	inline static int32_t get_offset_of_U3CJoystickIdU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(XboxOneInputDevice_t184893771, ___U3CJoystickIdU3Ek__BackingField_55)); }
	inline uint32_t get_U3CJoystickIdU3Ek__BackingField_55() const { return ___U3CJoystickIdU3Ek__BackingField_55; }
	inline uint32_t* get_address_of_U3CJoystickIdU3Ek__BackingField_55() { return &___U3CJoystickIdU3Ek__BackingField_55; }
	inline void set_U3CJoystickIdU3Ek__BackingField_55(uint32_t value)
	{
		___U3CJoystickIdU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CControllerIdU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(XboxOneInputDevice_t184893771, ___U3CControllerIdU3Ek__BackingField_56)); }
	inline uint64_t get_U3CControllerIdU3Ek__BackingField_56() const { return ___U3CControllerIdU3Ek__BackingField_56; }
	inline uint64_t* get_address_of_U3CControllerIdU3Ek__BackingField_56() { return &___U3CControllerIdU3Ek__BackingField_56; }
	inline void set_U3CControllerIdU3Ek__BackingField_56(uint64_t value)
	{
		___U3CControllerIdU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_analogAxisNameForId_57() { return static_cast<int32_t>(offsetof(XboxOneInputDevice_t184893771, ___analogAxisNameForId_57)); }
	inline StringU5BU5D_t1642385972* get_analogAxisNameForId_57() const { return ___analogAxisNameForId_57; }
	inline StringU5BU5D_t1642385972** get_address_of_analogAxisNameForId_57() { return &___analogAxisNameForId_57; }
	inline void set_analogAxisNameForId_57(StringU5BU5D_t1642385972* value)
	{
		___analogAxisNameForId_57 = value;
		Il2CppCodeGenWriteBarrier(&___analogAxisNameForId_57, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
