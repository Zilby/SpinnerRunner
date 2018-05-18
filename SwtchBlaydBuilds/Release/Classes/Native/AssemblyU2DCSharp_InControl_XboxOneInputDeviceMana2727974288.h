#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_InputDeviceManager3253850077.h"

// System.Boolean[]
struct BooleanU5BU5D_t3568034315;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XboxOneInputDeviceManager
struct  XboxOneInputDeviceManager_t2727974288  : public InputDeviceManager_t3253850077
{
public:
	// System.Boolean[] InControl.XboxOneInputDeviceManager::deviceConnected
	BooleanU5BU5D_t3568034315* ___deviceConnected_2;

public:
	inline static int32_t get_offset_of_deviceConnected_2() { return static_cast<int32_t>(offsetof(XboxOneInputDeviceManager_t2727974288, ___deviceConnected_2)); }
	inline BooleanU5BU5D_t3568034315* get_deviceConnected_2() const { return ___deviceConnected_2; }
	inline BooleanU5BU5D_t3568034315** get_address_of_deviceConnected_2() { return &___deviceConnected_2; }
	inline void set_deviceConnected_2(BooleanU5BU5D_t3568034315* value)
	{
		___deviceConnected_2 = value;
		Il2CppCodeGenWriteBarrier(&___deviceConnected_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
