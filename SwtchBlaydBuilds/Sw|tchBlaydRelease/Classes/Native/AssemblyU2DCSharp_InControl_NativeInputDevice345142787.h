#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_InputDevice3241776736.h"
#include "AssemblyU2DCSharp_InControl_NativeDeviceInfo4003071887.h"

// System.Int16[]
struct Int16U5BU5D_t3104283263;
// InControl.NativeInputDeviceProfile
struct NativeInputDeviceProfile_t4183066246;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeInputDevice
struct  NativeInputDevice_t345142787  : public InputDevice_t3241776736
{
public:
	// System.UInt32 InControl.NativeInputDevice::<Handle>k__BackingField
	uint32_t ___U3CHandleU3Ek__BackingField_49;
	// InControl.NativeDeviceInfo InControl.NativeInputDevice::<Info>k__BackingField
	NativeDeviceInfo_t4003071887  ___U3CInfoU3Ek__BackingField_50;
	// System.Int16[] InControl.NativeInputDevice::buttons
	Int16U5BU5D_t3104283263* ___buttons_51;
	// System.Int16[] InControl.NativeInputDevice::analogs
	Int16U5BU5D_t3104283263* ___analogs_52;
	// InControl.NativeInputDeviceProfile InControl.NativeInputDevice::profile
	NativeInputDeviceProfile_t4183066246 * ___profile_53;
	// System.Int32 InControl.NativeInputDevice::skipUpdateFrames
	int32_t ___skipUpdateFrames_54;
	// System.Int32 InControl.NativeInputDevice::numUnknownButtons
	int32_t ___numUnknownButtons_55;
	// System.Int32 InControl.NativeInputDevice::numUnknownAnalogs
	int32_t ___numUnknownAnalogs_56;

public:
	inline static int32_t get_offset_of_U3CHandleU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(NativeInputDevice_t345142787, ___U3CHandleU3Ek__BackingField_49)); }
	inline uint32_t get_U3CHandleU3Ek__BackingField_49() const { return ___U3CHandleU3Ek__BackingField_49; }
	inline uint32_t* get_address_of_U3CHandleU3Ek__BackingField_49() { return &___U3CHandleU3Ek__BackingField_49; }
	inline void set_U3CHandleU3Ek__BackingField_49(uint32_t value)
	{
		___U3CHandleU3Ek__BackingField_49 = value;
	}

	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(NativeInputDevice_t345142787, ___U3CInfoU3Ek__BackingField_50)); }
	inline NativeDeviceInfo_t4003071887  get_U3CInfoU3Ek__BackingField_50() const { return ___U3CInfoU3Ek__BackingField_50; }
	inline NativeDeviceInfo_t4003071887 * get_address_of_U3CInfoU3Ek__BackingField_50() { return &___U3CInfoU3Ek__BackingField_50; }
	inline void set_U3CInfoU3Ek__BackingField_50(NativeDeviceInfo_t4003071887  value)
	{
		___U3CInfoU3Ek__BackingField_50 = value;
	}

	inline static int32_t get_offset_of_buttons_51() { return static_cast<int32_t>(offsetof(NativeInputDevice_t345142787, ___buttons_51)); }
	inline Int16U5BU5D_t3104283263* get_buttons_51() const { return ___buttons_51; }
	inline Int16U5BU5D_t3104283263** get_address_of_buttons_51() { return &___buttons_51; }
	inline void set_buttons_51(Int16U5BU5D_t3104283263* value)
	{
		___buttons_51 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_51, value);
	}

	inline static int32_t get_offset_of_analogs_52() { return static_cast<int32_t>(offsetof(NativeInputDevice_t345142787, ___analogs_52)); }
	inline Int16U5BU5D_t3104283263* get_analogs_52() const { return ___analogs_52; }
	inline Int16U5BU5D_t3104283263** get_address_of_analogs_52() { return &___analogs_52; }
	inline void set_analogs_52(Int16U5BU5D_t3104283263* value)
	{
		___analogs_52 = value;
		Il2CppCodeGenWriteBarrier(&___analogs_52, value);
	}

	inline static int32_t get_offset_of_profile_53() { return static_cast<int32_t>(offsetof(NativeInputDevice_t345142787, ___profile_53)); }
	inline NativeInputDeviceProfile_t4183066246 * get_profile_53() const { return ___profile_53; }
	inline NativeInputDeviceProfile_t4183066246 ** get_address_of_profile_53() { return &___profile_53; }
	inline void set_profile_53(NativeInputDeviceProfile_t4183066246 * value)
	{
		___profile_53 = value;
		Il2CppCodeGenWriteBarrier(&___profile_53, value);
	}

	inline static int32_t get_offset_of_skipUpdateFrames_54() { return static_cast<int32_t>(offsetof(NativeInputDevice_t345142787, ___skipUpdateFrames_54)); }
	inline int32_t get_skipUpdateFrames_54() const { return ___skipUpdateFrames_54; }
	inline int32_t* get_address_of_skipUpdateFrames_54() { return &___skipUpdateFrames_54; }
	inline void set_skipUpdateFrames_54(int32_t value)
	{
		___skipUpdateFrames_54 = value;
	}

	inline static int32_t get_offset_of_numUnknownButtons_55() { return static_cast<int32_t>(offsetof(NativeInputDevice_t345142787, ___numUnknownButtons_55)); }
	inline int32_t get_numUnknownButtons_55() const { return ___numUnknownButtons_55; }
	inline int32_t* get_address_of_numUnknownButtons_55() { return &___numUnknownButtons_55; }
	inline void set_numUnknownButtons_55(int32_t value)
	{
		___numUnknownButtons_55 = value;
	}

	inline static int32_t get_offset_of_numUnknownAnalogs_56() { return static_cast<int32_t>(offsetof(NativeInputDevice_t345142787, ___numUnknownAnalogs_56)); }
	inline int32_t get_numUnknownAnalogs_56() const { return ___numUnknownAnalogs_56; }
	inline int32_t* get_address_of_numUnknownAnalogs_56() { return &___numUnknownAnalogs_56; }
	inline void set_numUnknownAnalogs_56(int32_t value)
	{
		___numUnknownAnalogs_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
