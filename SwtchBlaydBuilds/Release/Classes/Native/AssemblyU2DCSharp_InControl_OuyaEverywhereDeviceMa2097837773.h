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

// InControl.OuyaEverywhereDeviceManager
struct  OuyaEverywhereDeviceManager_t2097837773  : public InputDeviceManager_t3253850077
{
public:
	// System.Boolean[] InControl.OuyaEverywhereDeviceManager::deviceConnected
	BooleanU5BU5D_t3568034315* ___deviceConnected_1;

public:
	inline static int32_t get_offset_of_deviceConnected_1() { return static_cast<int32_t>(offsetof(OuyaEverywhereDeviceManager_t2097837773, ___deviceConnected_1)); }
	inline BooleanU5BU5D_t3568034315* get_deviceConnected_1() const { return ___deviceConnected_1; }
	inline BooleanU5BU5D_t3568034315** get_address_of_deviceConnected_1() { return &___deviceConnected_1; }
	inline void set_deviceConnected_1(BooleanU5BU5D_t3568034315* value)
	{
		___deviceConnected_1 = value;
		Il2CppCodeGenWriteBarrier(&___deviceConnected_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
