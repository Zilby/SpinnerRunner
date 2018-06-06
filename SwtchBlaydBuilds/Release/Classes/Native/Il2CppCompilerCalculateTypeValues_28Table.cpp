#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// InControl.InputControlMapping[]
struct InputControlMappingU5BU5D_t2585457374;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t1048894234;
// InControl.NativeInputDeviceMatcher[]
struct NativeInputDeviceMatcherU5BU5D_t19578164;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INPUTDEVICESTYLE_T1725670786_H
#define INPUTDEVICESTYLE_T1725670786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDeviceStyle
struct  InputDeviceStyle_t1725670786 
{
public:
	// System.Int32 InControl.InputDeviceStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputDeviceStyle_t1725670786, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTDEVICESTYLE_T1725670786_H
#ifndef INPUTDEVICECLASS_T4101111967_H
#define INPUTDEVICECLASS_T4101111967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDeviceClass
struct  InputDeviceClass_t4101111967 
{
public:
	// System.Int32 InControl.InputDeviceClass::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputDeviceClass_t4101111967, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTDEVICECLASS_T4101111967_H
#ifndef INPUTDEVICEPROFILE_T2270363578_H
#define INPUTDEVICEPROFILE_T2270363578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDeviceProfile
struct  InputDeviceProfile_t2270363578  : public RuntimeObject
{
public:
	// System.String InControl.InputDeviceProfile::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String InControl.InputDeviceProfile::<Meta>k__BackingField
	String_t* ___U3CMetaU3Ek__BackingField_1;
	// InControl.InputControlMapping[] InControl.InputDeviceProfile::<AnalogMappings>k__BackingField
	InputControlMappingU5BU5D_t2585457374* ___U3CAnalogMappingsU3Ek__BackingField_2;
	// InControl.InputControlMapping[] InControl.InputDeviceProfile::<ButtonMappings>k__BackingField
	InputControlMappingU5BU5D_t2585457374* ___U3CButtonMappingsU3Ek__BackingField_3;
	// System.String[] InControl.InputDeviceProfile::<IncludePlatforms>k__BackingField
	StringU5BU5D_t1281789340* ___U3CIncludePlatformsU3Ek__BackingField_4;
	// System.String[] InControl.InputDeviceProfile::<ExcludePlatforms>k__BackingField
	StringU5BU5D_t1281789340* ___U3CExcludePlatformsU3Ek__BackingField_5;
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
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CMetaU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___U3CMetaU3Ek__BackingField_1)); }
	inline String_t* get_U3CMetaU3Ek__BackingField_1() const { return ___U3CMetaU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMetaU3Ek__BackingField_1() { return &___U3CMetaU3Ek__BackingField_1; }
	inline void set_U3CMetaU3Ek__BackingField_1(String_t* value)
	{
		___U3CMetaU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMetaU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CAnalogMappingsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___U3CAnalogMappingsU3Ek__BackingField_2)); }
	inline InputControlMappingU5BU5D_t2585457374* get_U3CAnalogMappingsU3Ek__BackingField_2() const { return ___U3CAnalogMappingsU3Ek__BackingField_2; }
	inline InputControlMappingU5BU5D_t2585457374** get_address_of_U3CAnalogMappingsU3Ek__BackingField_2() { return &___U3CAnalogMappingsU3Ek__BackingField_2; }
	inline void set_U3CAnalogMappingsU3Ek__BackingField_2(InputControlMappingU5BU5D_t2585457374* value)
	{
		___U3CAnalogMappingsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAnalogMappingsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CButtonMappingsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___U3CButtonMappingsU3Ek__BackingField_3)); }
	inline InputControlMappingU5BU5D_t2585457374* get_U3CButtonMappingsU3Ek__BackingField_3() const { return ___U3CButtonMappingsU3Ek__BackingField_3; }
	inline InputControlMappingU5BU5D_t2585457374** get_address_of_U3CButtonMappingsU3Ek__BackingField_3() { return &___U3CButtonMappingsU3Ek__BackingField_3; }
	inline void set_U3CButtonMappingsU3Ek__BackingField_3(InputControlMappingU5BU5D_t2585457374* value)
	{
		___U3CButtonMappingsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CButtonMappingsU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CIncludePlatformsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___U3CIncludePlatformsU3Ek__BackingField_4)); }
	inline StringU5BU5D_t1281789340* get_U3CIncludePlatformsU3Ek__BackingField_4() const { return ___U3CIncludePlatformsU3Ek__BackingField_4; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CIncludePlatformsU3Ek__BackingField_4() { return &___U3CIncludePlatformsU3Ek__BackingField_4; }
	inline void set_U3CIncludePlatformsU3Ek__BackingField_4(StringU5BU5D_t1281789340* value)
	{
		___U3CIncludePlatformsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIncludePlatformsU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CExcludePlatformsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___U3CExcludePlatformsU3Ek__BackingField_5)); }
	inline StringU5BU5D_t1281789340* get_U3CExcludePlatformsU3Ek__BackingField_5() const { return ___U3CExcludePlatformsU3Ek__BackingField_5; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CExcludePlatformsU3Ek__BackingField_5() { return &___U3CExcludePlatformsU3Ek__BackingField_5; }
	inline void set_U3CExcludePlatformsU3Ek__BackingField_5(StringU5BU5D_t1281789340* value)
	{
		___U3CExcludePlatformsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CExcludePlatformsU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CMaxSystemBuildNumberU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___U3CMaxSystemBuildNumberU3Ek__BackingField_6)); }
	inline int32_t get_U3CMaxSystemBuildNumberU3Ek__BackingField_6() const { return ___U3CMaxSystemBuildNumberU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CMaxSystemBuildNumberU3Ek__BackingField_6() { return &___U3CMaxSystemBuildNumberU3Ek__BackingField_6; }
	inline void set_U3CMaxSystemBuildNumberU3Ek__BackingField_6(int32_t value)
	{
		___U3CMaxSystemBuildNumberU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CMinSystemBuildNumberU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___U3CMinSystemBuildNumberU3Ek__BackingField_7)); }
	inline int32_t get_U3CMinSystemBuildNumberU3Ek__BackingField_7() const { return ___U3CMinSystemBuildNumberU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CMinSystemBuildNumberU3Ek__BackingField_7() { return &___U3CMinSystemBuildNumberU3Ek__BackingField_7; }
	inline void set_U3CMinSystemBuildNumberU3Ek__BackingField_7(int32_t value)
	{
		___U3CMinSystemBuildNumberU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceClassU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___U3CDeviceClassU3Ek__BackingField_8)); }
	inline int32_t get_U3CDeviceClassU3Ek__BackingField_8() const { return ___U3CDeviceClassU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CDeviceClassU3Ek__BackingField_8() { return &___U3CDeviceClassU3Ek__BackingField_8; }
	inline void set_U3CDeviceClassU3Ek__BackingField_8(int32_t value)
	{
		___U3CDeviceClassU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceStyleU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___U3CDeviceStyleU3Ek__BackingField_9)); }
	inline int32_t get_U3CDeviceStyleU3Ek__BackingField_9() const { return ___U3CDeviceStyleU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CDeviceStyleU3Ek__BackingField_9() { return &___U3CDeviceStyleU3Ek__BackingField_9; }
	inline void set_U3CDeviceStyleU3Ek__BackingField_9(int32_t value)
	{
		___U3CDeviceStyleU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_sensitivity_11() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___sensitivity_11)); }
	inline float get_sensitivity_11() const { return ___sensitivity_11; }
	inline float* get_address_of_sensitivity_11() { return &___sensitivity_11; }
	inline void set_sensitivity_11(float value)
	{
		___sensitivity_11 = value;
	}

	inline static int32_t get_offset_of_lowerDeadZone_12() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___lowerDeadZone_12)); }
	inline float get_lowerDeadZone_12() const { return ___lowerDeadZone_12; }
	inline float* get_address_of_lowerDeadZone_12() { return &___lowerDeadZone_12; }
	inline void set_lowerDeadZone_12(float value)
	{
		___lowerDeadZone_12 = value;
	}

	inline static int32_t get_offset_of_upperDeadZone_13() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578, ___upperDeadZone_13)); }
	inline float get_upperDeadZone_13() const { return ___upperDeadZone_13; }
	inline float* get_address_of_upperDeadZone_13() { return &___upperDeadZone_13; }
	inline void set_upperDeadZone_13(float value)
	{
		___upperDeadZone_13 = value;
	}
};

struct InputDeviceProfile_t2270363578_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.Type> InControl.InputDeviceProfile::hideList
	HashSet_1_t1048894234 * ___hideList_10;

public:
	inline static int32_t get_offset_of_hideList_10() { return static_cast<int32_t>(offsetof(InputDeviceProfile_t2270363578_StaticFields, ___hideList_10)); }
	inline HashSet_1_t1048894234 * get_hideList_10() const { return ___hideList_10; }
	inline HashSet_1_t1048894234 ** get_address_of_hideList_10() { return &___hideList_10; }
	inline void set_hideList_10(HashSet_1_t1048894234 * value)
	{
		___hideList_10 = value;
		Il2CppCodeGenWriteBarrier((&___hideList_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTDEVICEPROFILE_T2270363578_H
#ifndef NATIVEINPUTDEVICEPROFILE_T2018902418_H
#define NATIVEINPUTDEVICEPROFILE_T2018902418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeInputDeviceProfile
struct  NativeInputDeviceProfile_t2018902418  : public InputDeviceProfile_t2270363578
{
public:
	// InControl.NativeInputDeviceMatcher[] InControl.NativeInputDeviceProfile::Matchers
	NativeInputDeviceMatcherU5BU5D_t19578164* ___Matchers_14;
	// InControl.NativeInputDeviceMatcher[] InControl.NativeInputDeviceProfile::LastResortMatchers
	NativeInputDeviceMatcherU5BU5D_t19578164* ___LastResortMatchers_15;

public:
	inline static int32_t get_offset_of_Matchers_14() { return static_cast<int32_t>(offsetof(NativeInputDeviceProfile_t2018902418, ___Matchers_14)); }
	inline NativeInputDeviceMatcherU5BU5D_t19578164* get_Matchers_14() const { return ___Matchers_14; }
	inline NativeInputDeviceMatcherU5BU5D_t19578164** get_address_of_Matchers_14() { return &___Matchers_14; }
	inline void set_Matchers_14(NativeInputDeviceMatcherU5BU5D_t19578164* value)
	{
		___Matchers_14 = value;
		Il2CppCodeGenWriteBarrier((&___Matchers_14), value);
	}

	inline static int32_t get_offset_of_LastResortMatchers_15() { return static_cast<int32_t>(offsetof(NativeInputDeviceProfile_t2018902418, ___LastResortMatchers_15)); }
	inline NativeInputDeviceMatcherU5BU5D_t19578164* get_LastResortMatchers_15() const { return ___LastResortMatchers_15; }
	inline NativeInputDeviceMatcherU5BU5D_t19578164** get_address_of_LastResortMatchers_15() { return &___LastResortMatchers_15; }
	inline void set_LastResortMatchers_15(NativeInputDeviceMatcherU5BU5D_t19578164* value)
	{
		___LastResortMatchers_15 = value;
		Il2CppCodeGenWriteBarrier((&___LastResortMatchers_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEINPUTDEVICEPROFILE_T2018902418_H
#ifndef LOGITECHF310MODEDMACPROFILE_T2819152549_H
#define LOGITECHF310MODEDMACPROFILE_T2819152549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.LogitechF310ModeDMacProfile
struct  LogitechF310ModeDMacProfile_t2819152549  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF310MODEDMACPROFILE_T2819152549_H
#ifndef EIGHTBITDOSNES30MACNATIVEPROFILE_T1129567008_H
#define EIGHTBITDOSNES30MACNATIVEPROFILE_T1129567008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoSNES30MacNativeProfile
struct  EightBitdoSNES30MacNativeProfile_t1129567008  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDOSNES30MACNATIVEPROFILE_T1129567008_H
#ifndef EIGHTBITDOSFC30MACNATIVEPROFILE_T3543070208_H
#define EIGHTBITDOSFC30MACNATIVEPROFILE_T3543070208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoSFC30MacNativeProfile
struct  EightBitdoSFC30MacNativeProfile_t3543070208  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDOSFC30MACNATIVEPROFILE_T3543070208_H
#ifndef EIGHTBITDONES30PROUSBMACNATIVEPROFILE_T2738840770_H
#define EIGHTBITDONES30PROUSBMACNATIVEPROFILE_T2738840770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoNES30ProUSBMacNativeProfile
struct  EightBitdoNES30ProUSBMacNativeProfile_t2738840770  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDONES30PROUSBMACNATIVEPROFILE_T2738840770_H
#ifndef EIGHTBITDONES30PROBTMACNATIVEPROFILE_T3682009390_H
#define EIGHTBITDONES30PROBTMACNATIVEPROFILE_T3682009390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoNES30ProBTMacNativeProfile
struct  EightBitdoNES30ProBTMacNativeProfile_t3682009390  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDONES30PROBTMACNATIVEPROFILE_T3682009390_H
#ifndef BUFFALOCLASSICMACPROFILE_T63300768_H
#define BUFFALOCLASSICMACPROFILE_T63300768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.BuffaloClassicMacProfile
struct  BuffaloClassicMacProfile_t63300768  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFALOCLASSICMACPROFILE_T63300768_H
#ifndef LOGITECHF510MODEDMACPROFILE_T1654053648_H
#define LOGITECHF510MODEDMACPROFILE_T1654053648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.LogitechF510ModeDMacProfile
struct  LogitechF510ModeDMacProfile_t1654053648  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF510MODEDMACPROFILE_T1654053648_H
#ifndef XTR_G2_MACNATIVEPROFILE_T849697443_H
#define XTR_G2_MACNATIVEPROFILE_T849697443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XTR_G2_MacNativeProfile
struct  XTR_G2_MacNativeProfile_t849697443  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XTR_G2_MACNATIVEPROFILE_T849697443_H
#ifndef XBOXONEDRIVERMACPROFILE_T4249812493_H
#define XBOXONEDRIVERMACPROFILE_T4249812493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.XboxOneDriverMacProfile
struct  XboxOneDriverMacProfile_t4249812493  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXONEDRIVERMACPROFILE_T4249812493_H
#ifndef XBOX360DRIVERMACPROFILE_T1968726057_H
#define XBOX360DRIVERMACPROFILE_T1968726057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.Xbox360DriverMacProfile
struct  Xbox360DriverMacProfile_t1968726057  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOX360DRIVERMACPROFILE_T1968726057_H
#ifndef PLAYSTATION4MACPROFILE_T119028265_H
#define PLAYSTATION4MACPROFILE_T119028265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PlayStation4MacProfile
struct  PlayStation4MacProfile_t119028265  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION4MACPROFILE_T119028265_H
#ifndef LOGITECHF710MODEDMACPROFILE_T3372538729_H
#define LOGITECHF710MODEDMACPROFILE_T3372538729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.LogitechF710ModeDMacProfile
struct  LogitechF710ModeDMacProfile_t3372538729  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF710MODEDMACPROFILE_T3372538729_H
#ifndef NINTENDOSWITCHPROMACNATIVEPROFILE_T3897883157_H
#define NINTENDOSWITCHPROMACNATIVEPROFILE_T3897883157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NintendoSwitchProMacNativeProfile
struct  NintendoSwitchProMacNativeProfile_t3897883157  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NINTENDOSWITCHPROMACNATIVEPROFILE_T3897883157_H
#ifndef PLAYSTATION3MACPROFILE_T25246249_H
#define PLAYSTATION3MACPROFILE_T25246249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PlayStation3MacProfile
struct  PlayStation3MacProfile_t25246249  : public NativeInputDeviceProfile_t2018902418
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3MACPROFILE_T25246249_H
#ifndef POWERASPECTRAILLUMINATEDCONTROLLERMACPROFILE_T1373853501_H
#define POWERASPECTRAILLUMINATEDCONTROLLERMACPROFILE_T1373853501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PowerASpectraIlluminatedControllerMacProfile
struct  PowerASpectraIlluminatedControllerMacProfile_t1373853501  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POWERASPECTRAILLUMINATEDCONTROLLERMACPROFILE_T1373853501_H
#ifndef PROEXXBOX360CONTROLLERMACPROFILE_T1573983937_H
#define PROEXXBOX360CONTROLLERMACPROFILE_T1573983937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.ProEXXbox360ControllerMacProfile
struct  ProEXXbox360ControllerMacProfile_t1573983937  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROEXXBOX360CONTROLLERMACPROFILE_T1573983937_H
#ifndef PROEXXBOXONECONTROLLERMACPROFILE_T1827355586_H
#define PROEXXBOXONECONTROLLERMACPROFILE_T1827355586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.ProEXXboxOneControllerMacProfile
struct  ProEXXboxOneControllerMacProfile_t1827355586  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROEXXBOXONECONTROLLERMACPROFILE_T1827355586_H
#ifndef QANBAFIGHTSTICKPLUSMACPROFILE_T865257184_H
#define QANBAFIGHTSTICKPLUSMACPROFILE_T865257184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.QanbaFightStickPlusMacProfile
struct  QanbaFightStickPlusMacProfile_t865257184  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QANBAFIGHTSTICKPLUSMACPROFILE_T865257184_H
#ifndef RAZERATROXARCADESTICKMACPROFILE_T3012475922_H
#define RAZERATROXARCADESTICKMACPROFILE_T3012475922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RazerAtroxArcadeStickMacProfile
struct  RazerAtroxArcadeStickMacProfile_t3012475922  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAZERATROXARCADESTICKMACPROFILE_T3012475922_H
#ifndef RAZERONZACONTROLLERMACPROFILE_T1827044606_H
#define RAZERONZACONTROLLERMACPROFILE_T1827044606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RazerOnzaControllerMacProfile
struct  RazerOnzaControllerMacProfile_t1827044606  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAZERONZACONTROLLERMACPROFILE_T1827044606_H
#ifndef RAZERONZATECONTROLLERMACPROFILE_T2581177765_H
#define RAZERONZATECONTROLLERMACPROFILE_T2581177765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RazerOnzaTEControllerMacProfile
struct  RazerOnzaTEControllerMacProfile_t2581177765  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAZERONZATECONTROLLERMACPROFILE_T2581177765_H
#ifndef POWERAMINIXBOXONECONTROLLERMACPROFILE_T2642713835_H
#define POWERAMINIXBOXONECONTROLLERMACPROFILE_T2642713835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PowerAMiniXboxOneControllerMacProfile
struct  PowerAMiniXboxOneControllerMacProfile_t2642713835  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POWERAMINIXBOXONECONTROLLERMACPROFILE_T2642713835_H
#ifndef PDPXBOX360CONTROLLERMACPROFILE_T447465477_H
#define PDPXBOX360CONTROLLERMACPROFILE_T447465477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PDPXbox360ControllerMacProfile
struct  PDPXbox360ControllerMacProfile_t447465477  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDPXBOX360CONTROLLERMACPROFILE_T447465477_H
#ifndef PDPXBOXONEARCADESTICKMACPROFILE_T3097356591_H
#define PDPXBOXONEARCADESTICKMACPROFILE_T3097356591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PDPXboxOneArcadeStickMacProfile
struct  PDPXboxOneArcadeStickMacProfile_t3097356591  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDPXBOXONEARCADESTICKMACPROFILE_T3097356591_H
#ifndef PDPXBOXONECONTROLLERMACPROFILE_T3335119988_H
#define PDPXBOXONECONTROLLERMACPROFILE_T3335119988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PDPXboxOneControllerMacProfile
struct  PDPXboxOneControllerMacProfile_t3335119988  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDPXBOXONECONTROLLERMACPROFILE_T3335119988_H
#ifndef POWERAAIRFLOWCONTROLLERMACPROFILE_T1422981755_H
#define POWERAAIRFLOWCONTROLLERMACPROFILE_T1422981755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PowerAAirflowControllerMacProfile
struct  PowerAAirflowControllerMacProfile_t1422981755  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POWERAAIRFLOWCONTROLLERMACPROFILE_T1422981755_H
#ifndef POWERAFUS1ONTOURNAMENTCONTROLLERMACPROFILE_T2226959540_H
#define POWERAFUS1ONTOURNAMENTCONTROLLERMACPROFILE_T2226959540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.POWERAFUS1ONTournamentControllerMacProfile
struct  POWERAFUS1ONTournamentControllerMacProfile_t2226959540  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POWERAFUS1ONTOURNAMENTCONTROLLERMACPROFILE_T2226959540_H
#ifndef POWERAMINICONTROLLERMACPROFILE_T475998391_H
#define POWERAMINICONTROLLERMACPROFILE_T475998391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PowerAMiniControllerMacProfile
struct  PowerAMiniControllerMacProfile_t475998391  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POWERAMINICONTROLLERMACPROFILE_T475998391_H
#ifndef POWERAMINIPROEXCONTROLLERMACPROFILE_T683302340_H
#define POWERAMINIPROEXCONTROLLERMACPROFILE_T683302340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PowerAMiniProExControllerMacProfile
struct  PowerAMiniProExControllerMacProfile_t683302340  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POWERAMINIPROEXCONTROLLERMACPROFILE_T683302340_H
#ifndef RAZERSABERTOOTHELITECONTROLLERMACPROFILE_T1128221419_H
#define RAZERSABERTOOTHELITECONTROLLERMACPROFILE_T1128221419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RazerSabertoothEliteControllerMacProfile
struct  RazerSabertoothEliteControllerMacProfile_t1128221419  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAZERSABERTOOTHELITECONTROLLERMACPROFILE_T1128221419_H
#ifndef THRUSTMASTERFERRARI458RACINGWHEELMACPROFILE_T2598697958_H
#define THRUSTMASTERFERRARI458RACINGWHEELMACPROFILE_T2598697958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.ThrustmasterFerrari458RacingWheelMacProfile
struct  ThrustmasterFerrari458RacingWheelMacProfile_t2598697958  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THRUSTMASTERFERRARI458RACINGWHEELMACPROFILE_T2598697958_H
#ifndef THRUSTMASTERGPXCONTROLLERMACPROFILE_T1472817713_H
#define THRUSTMASTERGPXCONTROLLERMACPROFILE_T1472817713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.ThrustmasterGPXControllerMacProfile
struct  ThrustmasterGPXControllerMacProfile_t1472817713  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THRUSTMASTERGPXCONTROLLERMACPROFILE_T1472817713_H
#ifndef TRUSTPREDATORJOYSTICKMACPROFILE_T2452298155_H
#define TRUSTPREDATORJOYSTICKMACPROFILE_T2452298155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.TrustPredatorJoystickMacProfile
struct  TrustPredatorJoystickMacProfile_t2452298155  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRUSTPREDATORJOYSTICKMACPROFILE_T2452298155_H
#ifndef TSZPELICANCONTROLLERMACPROFILE_T85048678_H
#define TSZPELICANCONTROLLERMACPROFILE_T85048678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.TSZPelicanControllerMacProfile
struct  TSZPelicanControllerMacProfile_t85048678  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TSZPELICANCONTROLLERMACPROFILE_T85048678_H
#ifndef XBOX360CONTROLLERMACPROFILE_T667764469_H
#define XBOX360CONTROLLERMACPROFILE_T667764469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.Xbox360ControllerMacProfile
struct  Xbox360ControllerMacProfile_t667764469  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOX360CONTROLLERMACPROFILE_T667764469_H
#ifndef XBOX360MORTALKOMBATFIGHTSTICKMACPROFILE_T2906396905_H
#define XBOX360MORTALKOMBATFIGHTSTICKMACPROFILE_T2906396905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.Xbox360MortalKombatFightStickMacProfile
struct  Xbox360MortalKombatFightStickMacProfile_t2906396905  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOX360MORTALKOMBATFIGHTSTICKMACPROFILE_T2906396905_H
#ifndef XBOXONECONTROLLERMACPROFILE_T1250787628_H
#define XBOXONECONTROLLERMACPROFILE_T1250787628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.XboxOneControllerMacProfile
struct  XboxOneControllerMacProfile_t1250787628  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXONECONTROLLERMACPROFILE_T1250787628_H
#ifndef SAITEKXBOX360CONTROLLERMACPROFILE_T2825766300_H
#define SAITEKXBOX360CONTROLLERMACPROFILE_T2825766300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.SaitekXbox360ControllerMacProfile
struct  SaitekXbox360ControllerMacProfile_t2825766300  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAITEKXBOX360CONTROLLERMACPROFILE_T2825766300_H
#ifndef RAZERSTRIKECONTROLLERMACPROFILE_T1132282710_H
#define RAZERSTRIKECONTROLLERMACPROFILE_T1132282710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RazerStrikeControllerMacProfile
struct  RazerStrikeControllerMacProfile_t1132282710  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAZERSTRIKECONTROLLERMACPROFILE_T1132282710_H
#ifndef RAZERWILDCATCONTROLLERMACPROFILE_T1980770595_H
#define RAZERWILDCATCONTROLLERMACPROFILE_T1980770595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RazerWildcatControllerMacProfile
struct  RazerWildcatControllerMacProfile_t1980770595  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAZERWILDCATCONTROLLERMACPROFILE_T1980770595_H
#ifndef REDOCTANECONTROLLERMACPROFILE_T2691488847_H
#define REDOCTANECONTROLLERMACPROFILE_T2691488847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RedOctaneControllerMacProfile
struct  RedOctaneControllerMacProfile_t2691488847  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REDOCTANECONTROLLERMACPROFILE_T2691488847_H
#ifndef ROCKBANDDRUMSMACPROFILE_T317399413_H
#define ROCKBANDDRUMSMACPROFILE_T317399413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RockBandDrumsMacProfile
struct  RockBandDrumsMacProfile_t317399413  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROCKBANDDRUMSMACPROFILE_T317399413_H
#ifndef ROCKBANDGUITARMACPROFILE_T646148976_H
#define ROCKBANDGUITARMACPROFILE_T646148976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RockBandGuitarMacProfile
struct  RockBandGuitarMacProfile_t646148976  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROCKBANDGUITARMACPROFILE_T646148976_H
#ifndef ROCKCANDYCONTROLLERMACPROFILE_T98473943_H
#define ROCKCANDYCONTROLLERMACPROFILE_T98473943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RockCandyControllerMacProfile
struct  RockCandyControllerMacProfile_t98473943  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROCKCANDYCONTROLLERMACPROFILE_T98473943_H
#ifndef ROCKCANDYXBOX360CONTROLLERMACPROFILE_T136885549_H
#define ROCKCANDYXBOX360CONTROLLERMACPROFILE_T136885549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RockCandyXbox360ControllerMacProfile
struct  RockCandyXbox360ControllerMacProfile_t136885549  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROCKCANDYXBOX360CONTROLLERMACPROFILE_T136885549_H
#ifndef ROCKCANDYXBOXONECONTROLLERMACPROFILE_T263496214_H
#define ROCKCANDYXBOXONECONTROLLERMACPROFILE_T263496214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.RockCandyXboxOneControllerMacProfile
struct  RockCandyXboxOneControllerMacProfile_t263496214  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROCKCANDYXBOXONECONTROLLERMACPROFILE_T263496214_H
#ifndef HORIREALARCADEPROEXSEMACPROFILE_T2441627136_H
#define HORIREALARCADEPROEXSEMACPROFILE_T2441627136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriRealArcadeProEXSEMacProfile
struct  HoriRealArcadeProEXSEMacProfile_t2441627136  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIREALARCADEPROEXSEMACPROFILE_T2441627136_H
#ifndef LOGITECHF510CONTROLLERMACPROFILE_T4285109518_H
#define LOGITECHF510CONTROLLERMACPROFILE_T4285109518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.LogitechF510ControllerMacProfile
struct  LogitechF510ControllerMacProfile_t4285109518  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF510CONTROLLERMACPROFILE_T4285109518_H
#ifndef LOGITECHF710CONTROLLERMACPROFILE_T143500279_H
#define LOGITECHF710CONTROLLERMACPROFILE_T143500279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.LogitechF710ControllerMacProfile
struct  LogitechF710ControllerMacProfile_t143500279  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF710CONTROLLERMACPROFILE_T143500279_H
#ifndef LOGITECHG920RACINGWHEELMACPROFILE_T2346673367_H
#define LOGITECHG920RACINGWHEELMACPROFILE_T2346673367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.LogitechG920RacingWheelMacProfile
struct  LogitechG920RacingWheelMacProfile_t2346673367  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHG920RACINGWHEELMACPROFILE_T2346673367_H
#ifndef MADCATZARCADESTICKMACPROFILE_T4092740279_H
#define MADCATZARCADESTICKMACPROFILE_T4092740279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzArcadeStickMacProfile
struct  MadCatzArcadeStickMacProfile_t4092740279  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZARCADESTICKMACPROFILE_T4092740279_H
#ifndef MADCATZBRAWLSTICKMACPROFILE_T1837722862_H
#define MADCATZBRAWLSTICKMACPROFILE_T1837722862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzBrawlStickMacProfile
struct  MadCatzBrawlStickMacProfile_t1837722862  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZBRAWLSTICKMACPROFILE_T1837722862_H
#ifndef MADCATZCODCONTROLLERMACPROFILE_T664220459_H
#define MADCATZCODCONTROLLERMACPROFILE_T664220459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzCODControllerMacProfile
struct  MadCatzCODControllerMacProfile_t664220459  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZCODCONTROLLERMACPROFILE_T664220459_H
#ifndef MADCATZFPSPROMACPROFILE_T3500170159_H
#define MADCATZFPSPROMACPROFILE_T3500170159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzFPSProMacProfile
struct  MadCatzFPSProMacProfile_t3500170159  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZFPSPROMACPROFILE_T3500170159_H
#ifndef MADCATZFIGHTSTICKTESPLUSMACPROFILE_T1050370474_H
#define MADCATZFIGHTSTICKTESPLUSMACPROFILE_T1050370474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzFightStickTESPlusMacProfile
struct  MadCatzFightStickTESPlusMacProfile_t1050370474  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZFIGHTSTICKTESPLUSMACPROFILE_T1050370474_H
#ifndef MADCATZFIGHTSTICKTE2MACPROFILE_T3625133579_H
#define MADCATZFIGHTSTICKTE2MACPROFILE_T3625133579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzFightStickTE2MacProfile
struct  MadCatzFightStickTE2MacProfile_t3625133579  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZFIGHTSTICKTE2MACPROFILE_T3625133579_H
#ifndef MADCATZFIGHTPADMACPROFILE_T2959001431_H
#define MADCATZFIGHTPADMACPROFILE_T2959001431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzFightPadMacProfile
struct  MadCatzFightPadMacProfile_t2959001431  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZFIGHTPADMACPROFILE_T2959001431_H
#ifndef MADCATZFIGHTPADCONTROLLERMACPROFILE_T2383453132_H
#define MADCATZFIGHTPADCONTROLLERMACPROFILE_T2383453132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzFightPadControllerMacProfile
struct  MadCatzFightPadControllerMacProfile_t2383453132  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZFIGHTPADCONTROLLERMACPROFILE_T2383453132_H
#ifndef MADCATZCONTROLLERMACPROFILE_T2008056521_H
#define MADCATZCONTROLLERMACPROFILE_T2008056521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzControllerMacProfile
struct  MadCatzControllerMacProfile_t2008056521  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZCONTROLLERMACPROFILE_T2008056521_H
#ifndef LOGITECHF310CONTROLLERMACPROFILE_T3339299887_H
#define LOGITECHF310CONTROLLERMACPROFILE_T3339299887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.LogitechF310ControllerMacProfile
struct  LogitechF310ControllerMacProfile_t3339299887  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF310CONTROLLERMACPROFILE_T3339299887_H
#ifndef HORIREALARCADEPROHAYABUSAMACPROFILE_T1747208258_H
#define HORIREALARCADEPROHAYABUSAMACPROFILE_T1747208258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriRealArcadeProHayabusaMacProfile
struct  HoriRealArcadeProHayabusaMacProfile_t1747208258  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIREALARCADEPROHAYABUSAMACPROFILE_T1747208258_H
#ifndef HORIREALARCADEPROVKAIFIGHTINGSTICKMACPROFILE_T1438267406_H
#define HORIREALARCADEPROVKAIFIGHTINGSTICKMACPROFILE_T1438267406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HORIRealArcadeProVKaiFightingStickMacProfile
struct  HORIRealArcadeProVKaiFightingStickMacProfile_t1438267406  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIREALARCADEPROVKAIFIGHTINGSTICKMACPROFILE_T1438267406_H
#ifndef HORIREALARCADEPROVXMACPROFILE_T1669997122_H
#define HORIREALARCADEPROVXMACPROFILE_T1669997122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HORIRealArcadeProVXMacProfile
struct  HORIRealArcadeProVXMacProfile_t1669997122  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIREALARCADEPROVXMACPROFILE_T1669997122_H
#ifndef HORIREALARCADEPROVXSAMACPROFILE_T2096444663_H
#define HORIREALARCADEPROVXSAMACPROFILE_T2096444663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriRealArcadeProVXSAMacProfile
struct  HoriRealArcadeProVXSAMacProfile_t2096444663  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIREALARCADEPROVXSAMACPROFILE_T2096444663_H
#ifndef HORIXBOX360GEMPADEXMACPROFILE_T4093949697_H
#define HORIXBOX360GEMPADEXMACPROFILE_T4093949697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriXbox360GemPadExMacProfile
struct  HoriXbox360GemPadExMacProfile_t4093949697  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIXBOX360GEMPADEXMACPROFILE_T4093949697_H
#ifndef HORIXBOXONECONTROLLERMACPROFILE_T3292379608_H
#define HORIXBOXONECONTROLLERMACPROFILE_T3292379608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriXboxOneControllerMacProfile
struct  HoriXboxOneControllerMacProfile_t3292379608  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIXBOXONECONTROLLERMACPROFILE_T3292379608_H
#ifndef LOGITECHDRIVEFXRACINGWHEELMACPROFILE_T3134665563_H
#define LOGITECHDRIVEFXRACINGWHEELMACPROFILE_T3134665563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.LogitechDriveFXRacingWheelMacProfile
struct  LogitechDriveFXRacingWheelMacProfile_t3134665563  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHDRIVEFXRACINGWHEELMACPROFILE_T3134665563_H
#ifndef LOGITECHCONTROLLERMACPROFILE_T198493670_H
#define LOGITECHCONTROLLERMACPROFILE_T198493670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.LogitechControllerMacProfile
struct  LogitechControllerMacProfile_t198493670  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHCONTROLLERMACPROFILE_T198493670_H
#ifndef LOGITECHCHILLSTREAMCONTROLLERMACPROFILE_T2172843024_H
#define LOGITECHCHILLSTREAMCONTROLLERMACPROFILE_T2172843024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.LogitechChillStreamControllerMacProfile
struct  LogitechChillStreamControllerMacProfile_t2172843024  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHCHILLSTREAMCONTROLLERMACPROFILE_T2172843024_H
#ifndef KONAMIDANCEPADMACPROFILE_T2708504938_H
#define KONAMIDANCEPADMACPROFILE_T2708504938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.KonamiDancePadMacProfile
struct  KonamiDancePadMacProfile_t2708504938  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KONAMIDANCEPADMACPROFILE_T2708504938_H
#ifndef JOYTEKXBOX360CONTROLLERMACPROFILE_T314140253_H
#define JOYTEKXBOX360CONTROLLERMACPROFILE_T314140253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.JoytekXbox360ControllerMacProfile
struct  JoytekXbox360ControllerMacProfile_t314140253  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYTEKXBOX360CONTROLLERMACPROFILE_T314140253_H
#ifndef IONDRUMROCKERMACPROFILE_T3847448431_H
#define IONDRUMROCKERMACPROFILE_T3847448431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.IonDrumRockerMacProfile
struct  IonDrumRockerMacProfile_t3847448431  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IONDRUMROCKERMACPROFILE_T3847448431_H
#ifndef MADCATZMICROCONCONTROLLERMACPROFILE_T2553451175_H
#define MADCATZMICROCONCONTROLLERMACPROFILE_T2553451175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzMicroConControllerMacProfile
struct  MadCatzMicroConControllerMacProfile_t2553451175  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZMICROCONCONTROLLERMACPROFILE_T2553451175_H
#ifndef MICROSOFTXBOXCONTROLLERMACPROFILE_T532146484_H
#define MICROSOFTXBOXCONTROLLERMACPROFILE_T532146484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MicrosoftXboxControllerMacProfile
struct  MicrosoftXboxControllerMacProfile_t532146484  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MICROSOFTXBOXCONTROLLERMACPROFILE_T532146484_H
#ifndef MICROSOFTXBOXONECONTROLLERMACPROFILE_T2410377206_H
#define MICROSOFTXBOXONECONTROLLERMACPROFILE_T2410377206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MicrosoftXboxOneControllerMacProfile
struct  MicrosoftXboxOneControllerMacProfile_t2410377206  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MICROSOFTXBOXONECONTROLLERMACPROFILE_T2410377206_H
#ifndef MICROSOFTXBOXONEELITECONTROLLERMACPROFILE_T4237082878_H
#define MICROSOFTXBOXONEELITECONTROLLERMACPROFILE_T4237082878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MicrosoftXboxOneEliteControllerMacProfile
struct  MicrosoftXboxOneEliteControllerMacProfile_t4237082878  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MICROSOFTXBOXONEELITECONTROLLERMACPROFILE_T4237082878_H
#ifndef MKKLASSIKFIGHTSTICKMACPROFILE_T3649385735_H
#define MKKLASSIKFIGHTSTICKMACPROFILE_T3649385735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MKKlassikFightStickMacProfile
struct  MKKlassikFightStickMacProfile_t3649385735  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MKKLASSIKFIGHTSTICKMACPROFILE_T3649385735_H
#ifndef MLGCONTROLLERMACPROFILE_T1513752687_H
#define MLGCONTROLLERMACPROFILE_T1513752687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MLGControllerMacProfile
struct  MLGControllerMacProfile_t1513752687  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MLGCONTROLLERMACPROFILE_T1513752687_H
#ifndef MVCTESTICKMACPROFILE_T4225761182_H
#define MVCTESTICKMACPROFILE_T4225761182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MVCTEStickMacProfile
struct  MVCTEStickMacProfile_t4225761182  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MVCTESTICKMACPROFILE_T4225761182_H
#ifndef PDPTRONCONTROLLERMACPROFILE_T953062917_H
#define PDPTRONCONTROLLERMACPROFILE_T953062917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PDPTronControllerMacProfile
struct  PDPTronControllerMacProfile_t953062917  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDPTRONCONTROLLERMACPROFILE_T953062917_H
#ifndef PDPTITANFALL2XBOXONECONTROLLERMACPROFILE_T3252585292_H
#define PDPTITANFALL2XBOXONECONTROLLERMACPROFILE_T3252585292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PDPTitanfall2XboxOneControllerMacProfile
struct  PDPTitanfall2XboxOneControllerMacProfile_t3252585292  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDPTITANFALL2XBOXONECONTROLLERMACPROFILE_T3252585292_H
#ifndef PDPMARVELCONTROLLERMACPROFILE_T4098526584_H
#define PDPMARVELCONTROLLERMACPROFILE_T4098526584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PDPMarvelControllerMacProfile
struct  PDPMarvelControllerMacProfile_t4098526584  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDPMARVELCONTROLLERMACPROFILE_T4098526584_H
#ifndef PDPBATTLEFIELDXBOXONECONTROLLERMACPROFILE_T2210644831_H
#define PDPBATTLEFIELDXBOXONECONTROLLERMACPROFILE_T2210644831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PDPBattlefieldXBoxOneControllerMacProfile
struct  PDPBattlefieldXBoxOneControllerMacProfile_t2210644831  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDPBATTLEFIELDXBOXONECONTROLLERMACPROFILE_T2210644831_H
#ifndef PDPAFTERGLOWCONTROLLERMACPROFILE_T1588976563_H
#define PDPAFTERGLOWCONTROLLERMACPROFILE_T1588976563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PDPAfterglowControllerMacProfile
struct  PDPAfterglowControllerMacProfile_t1588976563  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDPAFTERGLOWCONTROLLERMACPROFILE_T1588976563_H
#ifndef NACONGC100XFCONTROLLERMACPROFILE_T3663274790_H
#define NACONGC100XFCONTROLLERMACPROFILE_T3663274790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.NaconGC100XFControllerMacProfile
struct  NaconGC100XFControllerMacProfile_t3663274790  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NACONGC100XFCONTROLLERMACPROFILE_T3663274790_H
#ifndef MICROSOFTXBOX360CONTROLLERMACPROFILE_T805763698_H
#define MICROSOFTXBOX360CONTROLLERMACPROFILE_T805763698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MicrosoftXbox360ControllerMacProfile
struct  MicrosoftXbox360ControllerMacProfile_t805763698  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MICROSOFTXBOX360CONTROLLERMACPROFILE_T805763698_H
#ifndef MADCATZSAITEKAV8R02MACPROFILE_T3762371193_H
#define MADCATZSAITEKAV8R02MACPROFILE_T3762371193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzSaitekAV8R02MacProfile
struct  MadCatzSaitekAV8R02MacProfile_t3762371193  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZSAITEKAV8R02MACPROFILE_T3762371193_H
#ifndef MADCATZPROCONTROLLERMACPROFILE_T413010098_H
#define MADCATZPROCONTROLLERMACPROFILE_T413010098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzProControllerMacProfile
struct  MadCatzProControllerMacProfile_t413010098  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZPROCONTROLLERMACPROFILE_T413010098_H
#ifndef MADCATZPORTABLEDRUMMACPROFILE_T3702046962_H
#define MADCATZPORTABLEDRUMMACPROFILE_T3702046962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzPortableDrumMacProfile
struct  MadCatzPortableDrumMacProfile_t3702046962  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZPORTABLEDRUMMACPROFILE_T3702046962_H
#ifndef MADCATZNEOFIGHTSTICKMACPROFILE_T2701266815_H
#define MADCATZNEOFIGHTSTICKMACPROFILE_T2701266815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzNeoFightStickMacProfile
struct  MadCatzNeoFightStickMacProfile_t2701266815  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZNEOFIGHTSTICKMACPROFILE_T2701266815_H
#ifndef MADCATZMLGFIGHTSTICKTEMACPROFILE_T528516121_H
#define MADCATZMLGFIGHTSTICKTEMACPROFILE_T528516121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzMLGFightStickTEMacProfile
struct  MadCatzMLGFightStickTEMacProfile_t528516121  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZMLGFIGHTSTICKTEMACPROFILE_T528516121_H
#ifndef MADCATZMICROCONTROLLERMACPROFILE_T1959321018_H
#define MADCATZMICROCONTROLLERMACPROFILE_T1959321018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzMicroControllerMacProfile
struct  MadCatzMicroControllerMacProfile_t1959321018  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZMICROCONTROLLERMACPROFILE_T1959321018_H
#ifndef MADCATZSF4FIGHTSTICKROUND2TEMACPROFILE_T403357773_H
#define MADCATZSF4FIGHTSTICKROUND2TEMACPROFILE_T403357773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzSF4FightStickRound2TEMacProfile
struct  MadCatzSF4FightStickRound2TEMacProfile_t403357773  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZSF4FIGHTSTICKROUND2TEMACPROFILE_T403357773_H
#ifndef MATCATZCONTROLLERMACPROFILE_T1745398184_H
#define MATCATZCONTROLLERMACPROFILE_T1745398184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MatCatzControllerMacProfile
struct  MatCatzControllerMacProfile_t1745398184  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCATZCONTROLLERMACPROFILE_T1745398184_H
#ifndef MADCATZSSF4FIGHTSTICKTEMACPROFILE_T2665834373_H
#define MADCATZSSF4FIGHTSTICKTEMACPROFILE_T2665834373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzSSF4FightStickTEMacProfile
struct  MadCatzSSF4FightStickTEMacProfile_t2665834373  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZSSF4FIGHTSTICKTEMACPROFILE_T2665834373_H
#ifndef MADCATZSSF4CHUNLIFIGHTSTICKTEMACPROFILE_T712973421_H
#define MADCATZSSF4CHUNLIFIGHTSTICKTEMACPROFILE_T712973421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzSSF4ChunLiFightStickTEMacProfile
struct  MadCatzSSF4ChunLiFightStickTEMacProfile_t712973421  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZSSF4CHUNLIFIGHTSTICKTEMACPROFILE_T712973421_H
#ifndef MADCATZSOULCALIBERFIGHTSTICKMACPROFILE_T2806805970_H
#define MADCATZSOULCALIBERFIGHTSTICKMACPROFILE_T2806805970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzSoulCaliberFightStickMacProfile
struct  MadCatzSoulCaliberFightStickMacProfile_t2806805970  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZSOULCALIBERFIGHTSTICKMACPROFILE_T2806805970_H
#ifndef MADCATZSF4FIGHTSTICKTEMACPROFILE_T2679135359_H
#define MADCATZSF4FIGHTSTICKTEMACPROFILE_T2679135359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzSF4FightStickTEMacProfile
struct  MadCatzSF4FightStickTEMacProfile_t2679135359  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZSF4FIGHTSTICKTEMACPROFILE_T2679135359_H
#ifndef MADCATZSF4FIGHTSTICKSEMACPROFILE_T2679146942_H
#define MADCATZSF4FIGHTSTICKSEMACPROFILE_T2679146942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.MadCatzSF4FightStickSEMacProfile
struct  MadCatzSF4FightStickSEMacProfile_t2679146942  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZSF4FIGHTSTICKSEMACPROFILE_T2679146942_H
#ifndef PDPVERSUSCONTROLLERMACPROFILE_T2162518710_H
#define PDPVERSUSCONTROLLERMACPROFILE_T2162518710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.PDPVersusControllerMacProfile
struct  PDPVersusControllerMacProfile_t2162518710  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDPVERSUSCONTROLLERMACPROFILE_T2162518710_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2800 = { sizeof (HoriRealArcadeProEXSEMacProfile_t2441627136), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2801 = { sizeof (HoriRealArcadeProHayabusaMacProfile_t1747208258), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2802 = { sizeof (HORIRealArcadeProVKaiFightingStickMacProfile_t1438267406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2803 = { sizeof (HORIRealArcadeProVXMacProfile_t1669997122), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2804 = { sizeof (HoriRealArcadeProVXSAMacProfile_t2096444663), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2805 = { sizeof (HoriXbox360GemPadExMacProfile_t4093949697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2806 = { sizeof (HoriXboxOneControllerMacProfile_t3292379608), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2807 = { sizeof (IonDrumRockerMacProfile_t3847448431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2808 = { sizeof (JoytekXbox360ControllerMacProfile_t314140253), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2809 = { sizeof (KonamiDancePadMacProfile_t2708504938), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2810 = { sizeof (LogitechChillStreamControllerMacProfile_t2172843024), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2811 = { sizeof (LogitechControllerMacProfile_t198493670), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2812 = { sizeof (LogitechDriveFXRacingWheelMacProfile_t3134665563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2813 = { sizeof (LogitechF310ControllerMacProfile_t3339299887), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2814 = { sizeof (LogitechF510ControllerMacProfile_t4285109518), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2815 = { sizeof (LogitechF710ControllerMacProfile_t143500279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2816 = { sizeof (LogitechG920RacingWheelMacProfile_t2346673367), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2817 = { sizeof (MadCatzArcadeStickMacProfile_t4092740279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2818 = { sizeof (MadCatzBrawlStickMacProfile_t1837722862), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2819 = { sizeof (MadCatzCODControllerMacProfile_t664220459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2820 = { sizeof (MadCatzControllerMacProfile_t2008056521), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2821 = { sizeof (MadCatzFightPadControllerMacProfile_t2383453132), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2822 = { sizeof (MadCatzFightPadMacProfile_t2959001431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2823 = { sizeof (MadCatzFightStickTE2MacProfile_t3625133579), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2824 = { sizeof (MadCatzFightStickTESPlusMacProfile_t1050370474), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2825 = { sizeof (MadCatzFPSProMacProfile_t3500170159), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2826 = { sizeof (MadCatzMicroConControllerMacProfile_t2553451175), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2827 = { sizeof (MadCatzMicroControllerMacProfile_t1959321018), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2828 = { sizeof (MadCatzMLGFightStickTEMacProfile_t528516121), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2829 = { sizeof (MadCatzNeoFightStickMacProfile_t2701266815), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2830 = { sizeof (MadCatzPortableDrumMacProfile_t3702046962), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2831 = { sizeof (MadCatzProControllerMacProfile_t413010098), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2832 = { sizeof (MadCatzSaitekAV8R02MacProfile_t3762371193), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2833 = { sizeof (MadCatzSF4FightStickRound2TEMacProfile_t403357773), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2834 = { sizeof (MadCatzSF4FightStickSEMacProfile_t2679146942), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2835 = { sizeof (MadCatzSF4FightStickTEMacProfile_t2679135359), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2836 = { sizeof (MadCatzSoulCaliberFightStickMacProfile_t2806805970), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2837 = { sizeof (MadCatzSSF4ChunLiFightStickTEMacProfile_t712973421), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2838 = { sizeof (MadCatzSSF4FightStickTEMacProfile_t2665834373), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2839 = { sizeof (MatCatzControllerMacProfile_t1745398184), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2840 = { sizeof (MicrosoftXbox360ControllerMacProfile_t805763698), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2841 = { sizeof (MicrosoftXboxControllerMacProfile_t532146484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2842 = { sizeof (MicrosoftXboxOneControllerMacProfile_t2410377206), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2843 = { sizeof (MicrosoftXboxOneEliteControllerMacProfile_t4237082878), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2844 = { sizeof (MKKlassikFightStickMacProfile_t3649385735), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2845 = { sizeof (MLGControllerMacProfile_t1513752687), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2846 = { sizeof (MVCTEStickMacProfile_t4225761182), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2847 = { sizeof (NaconGC100XFControllerMacProfile_t3663274790), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2848 = { sizeof (PDPAfterglowControllerMacProfile_t1588976563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2849 = { sizeof (PDPBattlefieldXBoxOneControllerMacProfile_t2210644831), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2850 = { sizeof (PDPMarvelControllerMacProfile_t4098526584), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2851 = { sizeof (PDPTitanfall2XboxOneControllerMacProfile_t3252585292), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2852 = { sizeof (PDPTronControllerMacProfile_t953062917), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2853 = { sizeof (PDPVersusControllerMacProfile_t2162518710), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2854 = { sizeof (PDPXbox360ControllerMacProfile_t447465477), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2855 = { sizeof (PDPXboxOneArcadeStickMacProfile_t3097356591), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2856 = { sizeof (PDPXboxOneControllerMacProfile_t3335119988), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2857 = { sizeof (PowerAAirflowControllerMacProfile_t1422981755), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2858 = { sizeof (POWERAFUS1ONTournamentControllerMacProfile_t2226959540), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2859 = { sizeof (PowerAMiniControllerMacProfile_t475998391), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2860 = { sizeof (PowerAMiniProExControllerMacProfile_t683302340), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2861 = { sizeof (PowerAMiniXboxOneControllerMacProfile_t2642713835), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2862 = { sizeof (PowerASpectraIlluminatedControllerMacProfile_t1373853501), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2863 = { sizeof (ProEXXbox360ControllerMacProfile_t1573983937), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2864 = { sizeof (ProEXXboxOneControllerMacProfile_t1827355586), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2865 = { sizeof (QanbaFightStickPlusMacProfile_t865257184), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2866 = { sizeof (RazerAtroxArcadeStickMacProfile_t3012475922), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2867 = { sizeof (RazerOnzaControllerMacProfile_t1827044606), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2868 = { sizeof (RazerOnzaTEControllerMacProfile_t2581177765), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2869 = { sizeof (RazerSabertoothEliteControllerMacProfile_t1128221419), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2870 = { sizeof (RazerStrikeControllerMacProfile_t1132282710), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2871 = { sizeof (RazerWildcatControllerMacProfile_t1980770595), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2872 = { sizeof (RedOctaneControllerMacProfile_t2691488847), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2873 = { sizeof (RockBandDrumsMacProfile_t317399413), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2874 = { sizeof (RockBandGuitarMacProfile_t646148976), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2875 = { sizeof (RockCandyControllerMacProfile_t98473943), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2876 = { sizeof (RockCandyXbox360ControllerMacProfile_t136885549), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2877 = { sizeof (RockCandyXboxOneControllerMacProfile_t263496214), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2878 = { sizeof (SaitekXbox360ControllerMacProfile_t2825766300), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2879 = { sizeof (ThrustmasterFerrari458RacingWheelMacProfile_t2598697958), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2880 = { sizeof (ThrustmasterGPXControllerMacProfile_t1472817713), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2881 = { sizeof (TrustPredatorJoystickMacProfile_t2452298155), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2882 = { sizeof (TSZPelicanControllerMacProfile_t85048678), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2883 = { sizeof (Xbox360ControllerMacProfile_t667764469), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2884 = { sizeof (Xbox360MortalKombatFightStickMacProfile_t2906396905), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2885 = { sizeof (XboxOneControllerMacProfile_t1250787628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2886 = { sizeof (BuffaloClassicMacProfile_t63300768), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2887 = { sizeof (EightBitdoNES30ProBTMacNativeProfile_t3682009390), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2888 = { sizeof (EightBitdoNES30ProUSBMacNativeProfile_t2738840770), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2889 = { sizeof (EightBitdoSFC30MacNativeProfile_t3543070208), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2890 = { sizeof (EightBitdoSNES30MacNativeProfile_t1129567008), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2891 = { sizeof (LogitechF310ModeDMacProfile_t2819152549), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2892 = { sizeof (LogitechF510ModeDMacProfile_t1654053648), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2893 = { sizeof (LogitechF710ModeDMacProfile_t3372538729), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2894 = { sizeof (NintendoSwitchProMacNativeProfile_t3897883157), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2895 = { sizeof (PlayStation3MacProfile_t25246249), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2896 = { sizeof (PlayStation4MacProfile_t119028265), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2897 = { sizeof (Xbox360DriverMacProfile_t1968726057), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2898 = { sizeof (XboxOneDriverMacProfile_t4249812493), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2899 = { sizeof (XTR_G2_MacNativeProfile_t849697443), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
