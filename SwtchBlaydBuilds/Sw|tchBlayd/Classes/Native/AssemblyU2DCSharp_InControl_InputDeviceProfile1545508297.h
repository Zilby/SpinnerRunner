#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_InControl_InputDeviceClass1119888148.h"
#include "AssemblyU2DCSharp_InControl_InputDeviceStyle3149538565.h"

// System.String
struct String_t;
// InControl.InputControlMapping[]
struct InputControlMappingU5BU5D_t744800460;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t3932231376;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDeviceProfile
struct  InputDeviceProfile_t1545508297  : public Il2CppObject
{
public:
	// System.String InControl.InputDeviceProfile::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String InControl.InputDeviceProfile::<Meta>k__BackingField
	String_t* ___U3CMetaU3Ek__BackingField_1;
	// InControl.InputControlMapping[] InControl.InputDeviceProfile::<AnalogMappings>k__BackingField
	InputControlMappingU5BU5D_t744800460* ___U3CAnalogMappingsU3Ek__BackingField_2;
	// InControl.InputControlMapping[] InControl.InputDeviceProfile::<ButtonMappings>k__BackingField
	InputControlMappingU5BU5D_t744800460* ___U3CButtonMappingsU3Ek__BackingField_3;
	// System.String[] InControl.InputDeviceProfile::<IncludePlatforms>k__BackingField
	StringU5BU5D_t1642385972* ___U3CIncludePlatformsU3Ek__BackingField_4;
	// System.String[] InControl.InputDeviceProfile::<ExcludePlatforms>k__BackingField
	StringU5BU5D_t1642385972* ___U3CExcludePlatformsU3Ek__BackingField_5;
	// System.Int32 InControl.InputDeviceProfile::<MaxSystemBuildNumber>k__BackingField
	int32_t ___U3CMaxSystemBuildNumberU3Ek__BackingField_6;
	// System.Int32 InControl.InputDeviceProfile::<MinSystemBuildNumber>k__BackingField
	int32_t ___U3CMinSystemBuildNumberU3Ek__BackingField_7;
	// InControl.InputDeviceClass InControl.InputDeviceProfile::<DeviceClass>k__BackingField
	int32_t ___U3CDeviceClassU3Ek__BackingField_8;
	// InControl.InputDeviceStyle InControl.InputDeviceProfile::<DeviceStyle>k__BackingField
	int32_t ___U3CDeviceStyleU3Ek__BackingField_9;
	// System.Single InControl.InputDeviceProfile::sensitivity
	float ___sensitivity_11;
	// System.Single InControl.InputDeviceProfile::lowerDeadZone
	float ___lowerDeadZone_12;
	// System.Single InControl.InputDeviceProfile::upperDeadZone
	float ___upperDeadZone_13;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CMetaU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___U3CMetaU3Ek__BackingField_1)); }
	inline String_t* get_U3CMetaU3Ek__BackingField_1() const { return ___U3CMetaU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMetaU3Ek__BackingField_1() { return &___U3CMetaU3Ek__BackingField_1; }
	inline void set_U3CMetaU3Ek__BackingField_1(String_t* value)
	{
		___U3CMetaU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMetaU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CAnalogMappingsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___U3CAnalogMappingsU3Ek__BackingField_2)); }
	inline InputControlMappingU5BU5D_t744800460* get_U3CAnalogMappingsU3Ek__BackingField_2() const { return ___U3CAnalogMappingsU3Ek__BackingField_2; }
	inline InputControlMappingU5BU5D_t744800460** get_address_of_U3CAnalogMappingsU3Ek__BackingField_2() { return &___U3CAnalogMappingsU3Ek__BackingField_2; }
	inline void set_U3CAnalogMappingsU3Ek__BackingField_2(InputControlMappingU5BU5D_t744800460* value)
	{
		___U3CAnalogMappingsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAnalogMappingsU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CButtonMappingsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___U3CButtonMappingsU3Ek__BackingField_3)); }
	inline InputControlMappingU5BU5D_t744800460* get_U3CButtonMappingsU3Ek__BackingField_3() const { return ___U3CButtonMappingsU3Ek__BackingField_3; }
	inline InputControlMappingU5BU5D_t744800460** get_address_of_U3CButtonMappingsU3Ek__BackingField_3() { return &___U3CButtonMappingsU3Ek__BackingField_3; }
	inline void set_U3CButtonMappingsU3Ek__BackingField_3(InputControlMappingU5BU5D_t744800460* value)
	{
		___U3CButtonMappingsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CButtonMappingsU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CIncludePlatformsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___U3CIncludePlatformsU3Ek__BackingField_4)); }
	inline StringU5BU5D_t1642385972* get_U3CIncludePlatformsU3Ek__BackingField_4() const { return ___U3CIncludePlatformsU3Ek__BackingField_4; }
	inline StringU5BU5D_t1642385972** get_address_of_U3CIncludePlatformsU3Ek__BackingField_4() { return &___U3CIncludePlatformsU3Ek__BackingField_4; }
	inline void set_U3CIncludePlatformsU3Ek__BackingField_4(StringU5BU5D_t1642385972* value)
	{
		___U3CIncludePlatformsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIncludePlatformsU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CExcludePlatformsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___U3CExcludePlatformsU3Ek__BackingField_5)); }
	inline StringU5BU5D_t1642385972* get_U3CExcludePlatformsU3Ek__BackingField_5() const { return ___U3CExcludePlatformsU3Ek__BackingField_5; }
	inline StringU5BU5D_t1642385972** get_address_of_U3CExcludePlatformsU3Ek__BackingField_5() { return &___U3CExcludePlatformsU3Ek__BackingField_5; }
	inline void set_U3CExcludePlatformsU3Ek__BackingField_5(StringU5BU5D_t1642385972* value)
	{
		___U3CExcludePlatformsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExcludePlatformsU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CMaxSystemBuildNumberU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___U3CMaxSystemBuildNumberU3Ek__BackingField_6)); }
	inline int32_t get_U3CMaxSystemBuildNumberU3Ek__BackingField_6() const { return ___U3CMaxSystemBuildNumberU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CMaxSystemBuildNumberU3Ek__BackingField_6() { return &___U3CMaxSystemBuildNumberU3Ek__BackingField_6; }
	inline void set_U3CMaxSystemBuildNumberU3Ek__BackingField_6(int32_t value)
	{
		___U3CMaxSystemBuildNumberU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CMinSystemBuildNumberU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___U3CMinSystemBuildNumberU3Ek__BackingField_7)); }
	inline int32_t get_U3CMinSystemBuildNumberU3Ek__BackingField_7() const { return ___U3CMinSystemBuildNumberU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CMinSystemBuildNumberU3Ek__BackingField_7() { return &___U3CMinSystemBuildNumberU3Ek__BackingField_7; }
	inline void set_U3CMinSystemBuildNumberU3Ek__BackingField_7(int32_t value)
	{
		___U3CMinSystemBuildNumberU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceClassU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___U3CDeviceClassU3Ek__BackingField_8)); }
	inline int32_t get_U3CDeviceClassU3Ek__BackingField_8() const { return ___U3CDeviceClassU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CDeviceClassU3Ek__BackingField_8() { return &___U3CDeviceClassU3Ek__BackingField_8; }
	inline void set_U3CDeviceClassU3Ek__BackingField_8(int32_t value)
	{
		___U3CDeviceClassU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceStyleU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___U3CDeviceStyleU3Ek__BackingField_9)); }
	inline int32_t get_U3CDeviceStyleU3Ek__BackingField_9() const { return ___U3CDeviceStyleU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CDeviceStyleU3Ek__BackingField_9() { return &___U3CDeviceStyleU3Ek__BackingField_9; }
	inline void set_U3CDeviceStyleU3Ek__BackingField_9(int32_t value)
	{
		___U3CDeviceStyleU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_sensitivity_11() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___sensitivity_11)); }
	inline float get_sensitivity_11() const { return ___sensitivity_11; }
	inline float* get_address_of_sensitivity_11() { return &___sensitivity_11; }
	inline void set_sensitivity_11(float value)
	{
		___sensitivity_11 = value;
	}

	inline static int32_t get_offset_of_lowerDeadZone_12() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___lowerDeadZone_12)); }
	inline float get_lowerDeadZone_12() const { return ___lowerDeadZone_12; }
	inline float* get_address_of_lowerDeadZone_12() { return &___lowerDeadZone_12; }
	inline void set_lowerDeadZone_12(float value)
	{
		___lowerDeadZone_12 = value;
	}

	inline static int32_t get_offset_of_upperDeadZone_13() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297, ___upperDeadZone_13)); }
	inline float get_upperDeadZone_13() const { return ___upperDeadZone_13; }
	inline float* get_address_of_upperDeadZone_13() { return &___upperDeadZone_13; }
	inline void set_upperDeadZone_13(float value)
	{
		___upperDeadZone_13 = value;
	}
};

struct InputDeviceProfile_t1545508297_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.Type> InControl.InputDeviceProfile::hideList
	HashSet_1_t3932231376 * ___hideList_10;

public:
	inline static int32_t get_offset_of_hideList_10() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t1545508297_StaticFields, ___hideList_10)); }
	inline HashSet_1_t3932231376 * get_hideList_10() const { return ___hideList_10; }
	inline HashSet_1_t3932231376 ** get_address_of_hideList_10() { return &___hideList_10; }
	inline void set_hideList_10(HashSet_1_t3932231376 * value)
	{
		___hideList_10 = value;
		Il2CppCodeGenWriteBarrier(&___hideList_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
