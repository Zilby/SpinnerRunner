#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// VirtualDeviceExample.VirtualDevice
struct VirtualDevice_t869163411;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualDeviceExample.VirtualDeviceExample
struct  VirtualDeviceExample_t1491909701  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject VirtualDeviceExample.VirtualDeviceExample::leftObject
	GameObject_t1756533147 * ___leftObject_2;
	// UnityEngine.GameObject VirtualDeviceExample.VirtualDeviceExample::rightObject
	GameObject_t1756533147 * ___rightObject_3;
	// VirtualDeviceExample.VirtualDevice VirtualDeviceExample.VirtualDeviceExample::virtualDevice
	VirtualDevice_t869163411 * ___virtualDevice_4;

public:
	inline static int32_t get_offset_of_leftObject_2() { return static_cast<int32_t>(offsetof(VirtualDeviceExample_t1491909701, ___leftObject_2)); }
	inline GameObject_t1756533147 * get_leftObject_2() const { return ___leftObject_2; }
	inline GameObject_t1756533147 ** get_address_of_leftObject_2() { return &___leftObject_2; }
	inline void set_leftObject_2(GameObject_t1756533147 * value)
	{
		___leftObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___leftObject_2, value);
	}

	inline static int32_t get_offset_of_rightObject_3() { return static_cast<int32_t>(offsetof(VirtualDeviceExample_t1491909701, ___rightObject_3)); }
	inline GameObject_t1756533147 * get_rightObject_3() const { return ___rightObject_3; }
	inline GameObject_t1756533147 ** get_address_of_rightObject_3() { return &___rightObject_3; }
	inline void set_rightObject_3(GameObject_t1756533147 * value)
	{
		___rightObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___rightObject_3, value);
	}

	inline static int32_t get_offset_of_virtualDevice_4() { return static_cast<int32_t>(offsetof(VirtualDeviceExample_t1491909701, ___virtualDevice_4)); }
	inline VirtualDevice_t869163411 * get_virtualDevice_4() const { return ___virtualDevice_4; }
	inline VirtualDevice_t869163411 ** get_address_of_virtualDevice_4() { return &___virtualDevice_4; }
	inline void set_virtualDevice_4(VirtualDevice_t869163411 * value)
	{
		___virtualDevice_4 = value;
		Il2CppCodeGenWriteBarrier(&___virtualDevice_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
