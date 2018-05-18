#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_InputDevice3241776736.h"
#include "AssemblyU2DCSharp_InControl_ICadeState4191076245.h"

// InControl.ICadeDeviceManager
struct ICadeDeviceManager_t2010658641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.ICadeDevice
struct  ICadeDevice_t3230161308  : public InputDevice_t3241776736
{
public:
	// InControl.ICadeDeviceManager InControl.ICadeDevice::owner
	ICadeDeviceManager_t2010658641 * ___owner_47;
	// InControl.ICadeState InControl.ICadeDevice::state
	int32_t ___state_48;

public:
	inline static int32_t get_offset_of_owner_47() { return static_cast<int32_t>(offsetof(ICadeDevice_t3230161308, ___owner_47)); }
	inline ICadeDeviceManager_t2010658641 * get_owner_47() const { return ___owner_47; }
	inline ICadeDeviceManager_t2010658641 ** get_address_of_owner_47() { return &___owner_47; }
	inline void set_owner_47(ICadeDeviceManager_t2010658641 * value)
	{
		___owner_47 = value;
		Il2CppCodeGenWriteBarrier(&___owner_47, value);
	}

	inline static int32_t get_offset_of_state_48() { return static_cast<int32_t>(offsetof(ICadeDevice_t3230161308, ___state_48)); }
	inline int32_t get_state_48() const { return ___state_48; }
	inline int32_t* get_address_of_state_48() { return &___state_48; }
	inline void set_state_48(int32_t value)
	{
		___state_48 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
