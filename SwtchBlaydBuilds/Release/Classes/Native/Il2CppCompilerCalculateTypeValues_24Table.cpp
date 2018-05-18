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


// System.String
struct String_t;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_t2223234056;
// System.Char[]
struct CharU5BU5D_t3528271667;
// InControl.InputControlMapping[]
struct InputControlMappingU5BU5D_t2585457374;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t1048894234;
// InControl.InputControlSource
struct InputControlSource_t3317494335;




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
#ifndef UNITYMOUSEBUTTONSOURCE_T2295933936_H
#define UNITYMOUSEBUTTONSOURCE_T2295933936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityMouseButtonSource
struct  UnityMouseButtonSource_t2295933936  : public RuntimeObject
{
public:
	// System.Int32 InControl.UnityMouseButtonSource::ButtonId
	int32_t ___ButtonId_0;

public:
	inline static int32_t get_offset_of_ButtonId_0() { return static_cast<int32_t>(offsetof(UnityMouseButtonSource_t2295933936, ___ButtonId_0)); }
	inline int32_t get_ButtonId_0() const { return ___ButtonId_0; }
	inline int32_t* get_address_of_ButtonId_0() { return &___ButtonId_0; }
	inline void set_ButtonId_0(int32_t value)
	{
		___ButtonId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYMOUSEBUTTONSOURCE_T2295933936_H
#ifndef UNITYMOUSEAXISSOURCE_T3674138238_H
#define UNITYMOUSEAXISSOURCE_T3674138238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityMouseAxisSource
struct  UnityMouseAxisSource_t3674138238  : public RuntimeObject
{
public:
	// System.String InControl.UnityMouseAxisSource::MouseAxisQuery
	String_t* ___MouseAxisQuery_0;

public:
	inline static int32_t get_offset_of_MouseAxisQuery_0() { return static_cast<int32_t>(offsetof(UnityMouseAxisSource_t3674138238, ___MouseAxisQuery_0)); }
	inline String_t* get_MouseAxisQuery_0() const { return ___MouseAxisQuery_0; }
	inline String_t** get_address_of_MouseAxisQuery_0() { return &___MouseAxisQuery_0; }
	inline void set_MouseAxisQuery_0(String_t* value)
	{
		___MouseAxisQuery_0 = value;
		Il2CppCodeGenWriteBarrier((&___MouseAxisQuery_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYMOUSEAXISSOURCE_T3674138238_H
#ifndef UNITYKEYCODESOURCE_T2879592556_H
#define UNITYKEYCODESOURCE_T2879592556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityKeyCodeSource
struct  UnityKeyCodeSource_t2879592556  : public RuntimeObject
{
public:
	// UnityEngine.KeyCode[] InControl.UnityKeyCodeSource::KeyCodeList
	KeyCodeU5BU5D_t2223234056* ___KeyCodeList_0;

public:
	inline static int32_t get_offset_of_KeyCodeList_0() { return static_cast<int32_t>(offsetof(UnityKeyCodeSource_t2879592556, ___KeyCodeList_0)); }
	inline KeyCodeU5BU5D_t2223234056* get_KeyCodeList_0() const { return ___KeyCodeList_0; }
	inline KeyCodeU5BU5D_t2223234056** get_address_of_KeyCodeList_0() { return &___KeyCodeList_0; }
	inline void set_KeyCodeList_0(KeyCodeU5BU5D_t2223234056* value)
	{
		___KeyCodeList_0 = value;
		Il2CppCodeGenWriteBarrier((&___KeyCodeList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYKEYCODESOURCE_T2879592556_H
#ifndef UNITYKEYCODECOMBOSOURCE_T1951961814_H
#define UNITYKEYCODECOMBOSOURCE_T1951961814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityKeyCodeComboSource
struct  UnityKeyCodeComboSource_t1951961814  : public RuntimeObject
{
public:
	// UnityEngine.KeyCode[] InControl.UnityKeyCodeComboSource::KeyCodeList
	KeyCodeU5BU5D_t2223234056* ___KeyCodeList_0;

public:
	inline static int32_t get_offset_of_KeyCodeList_0() { return static_cast<int32_t>(offsetof(UnityKeyCodeComboSource_t1951961814, ___KeyCodeList_0)); }
	inline KeyCodeU5BU5D_t2223234056* get_KeyCodeList_0() const { return ___KeyCodeList_0; }
	inline KeyCodeU5BU5D_t2223234056** get_address_of_KeyCodeList_0() { return &___KeyCodeList_0; }
	inline void set_KeyCodeList_0(KeyCodeU5BU5D_t2223234056* value)
	{
		___KeyCodeList_0 = value;
		Il2CppCodeGenWriteBarrier((&___KeyCodeList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYKEYCODECOMBOSOURCE_T1951961814_H
#ifndef VERSIONINFO_T3887684359_H
#define VERSIONINFO_T3887684359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.VersionInfo
struct  VersionInfo_t3887684359 
{
public:
	// System.Int32 InControl.VersionInfo::Major
	int32_t ___Major_0;
	// System.Int32 InControl.VersionInfo::Minor
	int32_t ___Minor_1;
	// System.Int32 InControl.VersionInfo::Patch
	int32_t ___Patch_2;
	// System.Int32 InControl.VersionInfo::Build
	int32_t ___Build_3;

public:
	inline static int32_t get_offset_of_Major_0() { return static_cast<int32_t>(offsetof(VersionInfo_t3887684359, ___Major_0)); }
	inline int32_t get_Major_0() const { return ___Major_0; }
	inline int32_t* get_address_of_Major_0() { return &___Major_0; }
	inline void set_Major_0(int32_t value)
	{
		___Major_0 = value;
	}

	inline static int32_t get_offset_of_Minor_1() { return static_cast<int32_t>(offsetof(VersionInfo_t3887684359, ___Minor_1)); }
	inline int32_t get_Minor_1() const { return ___Minor_1; }
	inline int32_t* get_address_of_Minor_1() { return &___Minor_1; }
	inline void set_Minor_1(int32_t value)
	{
		___Minor_1 = value;
	}

	inline static int32_t get_offset_of_Patch_2() { return static_cast<int32_t>(offsetof(VersionInfo_t3887684359, ___Patch_2)); }
	inline int32_t get_Patch_2() const { return ___Patch_2; }
	inline int32_t* get_address_of_Patch_2() { return &___Patch_2; }
	inline void set_Patch_2(int32_t value)
	{
		___Patch_2 = value;
	}

	inline static int32_t get_offset_of_Build_3() { return static_cast<int32_t>(offsetof(VersionInfo_t3887684359, ___Build_3)); }
	inline int32_t get_Build_3() const { return ___Build_3; }
	inline int32_t* get_address_of_Build_3() { return &___Build_3; }
	inline void set_Build_3(int32_t value)
	{
		___Build_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSIONINFO_T3887684359_H
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
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
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
#endif // KEYCODE_T2599294277_H
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
#ifndef UNITYKEYCODEAXISSOURCE_T1535843908_H
#define UNITYKEYCODEAXISSOURCE_T1535843908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityKeyCodeAxisSource
struct  UnityKeyCodeAxisSource_t1535843908  : public RuntimeObject
{
public:
	// UnityEngine.KeyCode InControl.UnityKeyCodeAxisSource::NegativeKeyCode
	int32_t ___NegativeKeyCode_0;
	// UnityEngine.KeyCode InControl.UnityKeyCodeAxisSource::PositiveKeyCode
	int32_t ___PositiveKeyCode_1;

public:
	inline static int32_t get_offset_of_NegativeKeyCode_0() { return static_cast<int32_t>(offsetof(UnityKeyCodeAxisSource_t1535843908, ___NegativeKeyCode_0)); }
	inline int32_t get_NegativeKeyCode_0() const { return ___NegativeKeyCode_0; }
	inline int32_t* get_address_of_NegativeKeyCode_0() { return &___NegativeKeyCode_0; }
	inline void set_NegativeKeyCode_0(int32_t value)
	{
		___NegativeKeyCode_0 = value;
	}

	inline static int32_t get_offset_of_PositiveKeyCode_1() { return static_cast<int32_t>(offsetof(UnityKeyCodeAxisSource_t1535843908, ___PositiveKeyCode_1)); }
	inline int32_t get_PositiveKeyCode_1() const { return ___PositiveKeyCode_1; }
	inline int32_t* get_address_of_PositiveKeyCode_1() { return &___PositiveKeyCode_1; }
	inline void set_PositiveKeyCode_1(int32_t value)
	{
		___PositiveKeyCode_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYKEYCODEAXISSOURCE_T1535843908_H
#ifndef UNITYINPUTDEVICEPROFILEBASE_T3429842239_H
#define UNITYINPUTDEVICEPROFILEBASE_T3429842239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDeviceProfileBase
struct  UnityInputDeviceProfileBase_t3429842239  : public InputDeviceProfile_t2270363578
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYINPUTDEVICEPROFILEBASE_T3429842239_H
#ifndef CUSTOMINPUTDEVICEPROFILE_T3140671940_H
#define CUSTOMINPUTDEVICEPROFILE_T3140671940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.CustomInputDeviceProfile
struct  CustomInputDeviceProfile_t3140671940  : public UnityInputDeviceProfileBase_t3429842239
{
public:

public:
};

struct CustomInputDeviceProfile_t3140671940_StaticFields
{
public:
	// InControl.InputControlSource InControl.CustomInputDeviceProfile::MouseButton0
	RuntimeObject* ___MouseButton0_14;
	// InControl.InputControlSource InControl.CustomInputDeviceProfile::MouseButton1
	RuntimeObject* ___MouseButton1_15;
	// InControl.InputControlSource InControl.CustomInputDeviceProfile::MouseButton2
	RuntimeObject* ___MouseButton2_16;
	// InControl.InputControlSource InControl.CustomInputDeviceProfile::MouseXAxis
	RuntimeObject* ___MouseXAxis_17;
	// InControl.InputControlSource InControl.CustomInputDeviceProfile::MouseYAxis
	RuntimeObject* ___MouseYAxis_18;
	// InControl.InputControlSource InControl.CustomInputDeviceProfile::MouseScrollWheel
	RuntimeObject* ___MouseScrollWheel_19;

public:
	inline static int32_t get_offset_of_MouseButton0_14() { return static_cast<int32_t>(offsetof(CustomInputDeviceProfile_t3140671940_StaticFields, ___MouseButton0_14)); }
	inline RuntimeObject* get_MouseButton0_14() const { return ___MouseButton0_14; }
	inline RuntimeObject** get_address_of_MouseButton0_14() { return &___MouseButton0_14; }
	inline void set_MouseButton0_14(RuntimeObject* value)
	{
		___MouseButton0_14 = value;
		Il2CppCodeGenWriteBarrier((&___MouseButton0_14), value);
	}

	inline static int32_t get_offset_of_MouseButton1_15() { return static_cast<int32_t>(offsetof(CustomInputDeviceProfile_t3140671940_StaticFields, ___MouseButton1_15)); }
	inline RuntimeObject* get_MouseButton1_15() const { return ___MouseButton1_15; }
	inline RuntimeObject** get_address_of_MouseButton1_15() { return &___MouseButton1_15; }
	inline void set_MouseButton1_15(RuntimeObject* value)
	{
		___MouseButton1_15 = value;
		Il2CppCodeGenWriteBarrier((&___MouseButton1_15), value);
	}

	inline static int32_t get_offset_of_MouseButton2_16() { return static_cast<int32_t>(offsetof(CustomInputDeviceProfile_t3140671940_StaticFields, ___MouseButton2_16)); }
	inline RuntimeObject* get_MouseButton2_16() const { return ___MouseButton2_16; }
	inline RuntimeObject** get_address_of_MouseButton2_16() { return &___MouseButton2_16; }
	inline void set_MouseButton2_16(RuntimeObject* value)
	{
		___MouseButton2_16 = value;
		Il2CppCodeGenWriteBarrier((&___MouseButton2_16), value);
	}

	inline static int32_t get_offset_of_MouseXAxis_17() { return static_cast<int32_t>(offsetof(CustomInputDeviceProfile_t3140671940_StaticFields, ___MouseXAxis_17)); }
	inline RuntimeObject* get_MouseXAxis_17() const { return ___MouseXAxis_17; }
	inline RuntimeObject** get_address_of_MouseXAxis_17() { return &___MouseXAxis_17; }
	inline void set_MouseXAxis_17(RuntimeObject* value)
	{
		___MouseXAxis_17 = value;
		Il2CppCodeGenWriteBarrier((&___MouseXAxis_17), value);
	}

	inline static int32_t get_offset_of_MouseYAxis_18() { return static_cast<int32_t>(offsetof(CustomInputDeviceProfile_t3140671940_StaticFields, ___MouseYAxis_18)); }
	inline RuntimeObject* get_MouseYAxis_18() const { return ___MouseYAxis_18; }
	inline RuntimeObject** get_address_of_MouseYAxis_18() { return &___MouseYAxis_18; }
	inline void set_MouseYAxis_18(RuntimeObject* value)
	{
		___MouseYAxis_18 = value;
		Il2CppCodeGenWriteBarrier((&___MouseYAxis_18), value);
	}

	inline static int32_t get_offset_of_MouseScrollWheel_19() { return static_cast<int32_t>(offsetof(CustomInputDeviceProfile_t3140671940_StaticFields, ___MouseScrollWheel_19)); }
	inline RuntimeObject* get_MouseScrollWheel_19() const { return ___MouseScrollWheel_19; }
	inline RuntimeObject** get_address_of_MouseScrollWheel_19() { return &___MouseScrollWheel_19; }
	inline void set_MouseScrollWheel_19(RuntimeObject* value)
	{
		___MouseScrollWheel_19 = value;
		Il2CppCodeGenWriteBarrier((&___MouseScrollWheel_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMINPUTDEVICEPROFILE_T3140671940_H
#ifndef UNITYINPUTDEVICEPROFILE_T3356944389_H
#define UNITYINPUTDEVICEPROFILE_T3356944389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDeviceProfile
struct  UnityInputDeviceProfile_t3356944389  : public UnityInputDeviceProfileBase_t3429842239
{
public:
	// System.String[] InControl.UnityInputDeviceProfile::JoystickNames
	StringU5BU5D_t1281789340* ___JoystickNames_14;
	// System.String[] InControl.UnityInputDeviceProfile::JoystickRegex
	StringU5BU5D_t1281789340* ___JoystickRegex_15;
	// System.String InControl.UnityInputDeviceProfile::LastResortRegex
	String_t* ___LastResortRegex_16;
	// InControl.VersionInfo InControl.UnityInputDeviceProfile::<MinUnityVersion>k__BackingField
	VersionInfo_t3887684359  ___U3CMinUnityVersionU3Ek__BackingField_17;
	// InControl.VersionInfo InControl.UnityInputDeviceProfile::<MaxUnityVersion>k__BackingField
	VersionInfo_t3887684359  ___U3CMaxUnityVersionU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_JoystickNames_14() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389, ___JoystickNames_14)); }
	inline StringU5BU5D_t1281789340* get_JoystickNames_14() const { return ___JoystickNames_14; }
	inline StringU5BU5D_t1281789340** get_address_of_JoystickNames_14() { return &___JoystickNames_14; }
	inline void set_JoystickNames_14(StringU5BU5D_t1281789340* value)
	{
		___JoystickNames_14 = value;
		Il2CppCodeGenWriteBarrier((&___JoystickNames_14), value);
	}

	inline static int32_t get_offset_of_JoystickRegex_15() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389, ___JoystickRegex_15)); }
	inline StringU5BU5D_t1281789340* get_JoystickRegex_15() const { return ___JoystickRegex_15; }
	inline StringU5BU5D_t1281789340** get_address_of_JoystickRegex_15() { return &___JoystickRegex_15; }
	inline void set_JoystickRegex_15(StringU5BU5D_t1281789340* value)
	{
		___JoystickRegex_15 = value;
		Il2CppCodeGenWriteBarrier((&___JoystickRegex_15), value);
	}

	inline static int32_t get_offset_of_LastResortRegex_16() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389, ___LastResortRegex_16)); }
	inline String_t* get_LastResortRegex_16() const { return ___LastResortRegex_16; }
	inline String_t** get_address_of_LastResortRegex_16() { return &___LastResortRegex_16; }
	inline void set_LastResortRegex_16(String_t* value)
	{
		___LastResortRegex_16 = value;
		Il2CppCodeGenWriteBarrier((&___LastResortRegex_16), value);
	}

	inline static int32_t get_offset_of_U3CMinUnityVersionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389, ___U3CMinUnityVersionU3Ek__BackingField_17)); }
	inline VersionInfo_t3887684359  get_U3CMinUnityVersionU3Ek__BackingField_17() const { return ___U3CMinUnityVersionU3Ek__BackingField_17; }
	inline VersionInfo_t3887684359 * get_address_of_U3CMinUnityVersionU3Ek__BackingField_17() { return &___U3CMinUnityVersionU3Ek__BackingField_17; }
	inline void set_U3CMinUnityVersionU3Ek__BackingField_17(VersionInfo_t3887684359  value)
	{
		___U3CMinUnityVersionU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CMaxUnityVersionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389, ___U3CMaxUnityVersionU3Ek__BackingField_18)); }
	inline VersionInfo_t3887684359  get_U3CMaxUnityVersionU3Ek__BackingField_18() const { return ___U3CMaxUnityVersionU3Ek__BackingField_18; }
	inline VersionInfo_t3887684359 * get_address_of_U3CMaxUnityVersionU3Ek__BackingField_18() { return &___U3CMaxUnityVersionU3Ek__BackingField_18; }
	inline void set_U3CMaxUnityVersionU3Ek__BackingField_18(VersionInfo_t3887684359  value)
	{
		___U3CMaxUnityVersionU3Ek__BackingField_18 = value;
	}
};

struct UnityInputDeviceProfile_t3356944389_StaticFields
{
public:
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button0
	RuntimeObject* ___Button0_19;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button1
	RuntimeObject* ___Button1_20;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button2
	RuntimeObject* ___Button2_21;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button3
	RuntimeObject* ___Button3_22;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button4
	RuntimeObject* ___Button4_23;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button5
	RuntimeObject* ___Button5_24;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button6
	RuntimeObject* ___Button6_25;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button7
	RuntimeObject* ___Button7_26;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button8
	RuntimeObject* ___Button8_27;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button9
	RuntimeObject* ___Button9_28;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button10
	RuntimeObject* ___Button10_29;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button11
	RuntimeObject* ___Button11_30;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button12
	RuntimeObject* ___Button12_31;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button13
	RuntimeObject* ___Button13_32;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button14
	RuntimeObject* ___Button14_33;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button15
	RuntimeObject* ___Button15_34;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button16
	RuntimeObject* ___Button16_35;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button17
	RuntimeObject* ___Button17_36;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button18
	RuntimeObject* ___Button18_37;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button19
	RuntimeObject* ___Button19_38;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog0
	RuntimeObject* ___Analog0_39;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog1
	RuntimeObject* ___Analog1_40;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog2
	RuntimeObject* ___Analog2_41;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog3
	RuntimeObject* ___Analog3_42;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog4
	RuntimeObject* ___Analog4_43;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog5
	RuntimeObject* ___Analog5_44;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog6
	RuntimeObject* ___Analog6_45;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog7
	RuntimeObject* ___Analog7_46;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog8
	RuntimeObject* ___Analog8_47;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog9
	RuntimeObject* ___Analog9_48;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog10
	RuntimeObject* ___Analog10_49;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog11
	RuntimeObject* ___Analog11_50;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog12
	RuntimeObject* ___Analog12_51;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog13
	RuntimeObject* ___Analog13_52;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog14
	RuntimeObject* ___Analog14_53;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog15
	RuntimeObject* ___Analog15_54;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog16
	RuntimeObject* ___Analog16_55;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog17
	RuntimeObject* ___Analog17_56;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog18
	RuntimeObject* ___Analog18_57;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog19
	RuntimeObject* ___Analog19_58;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MenuKey
	RuntimeObject* ___MenuKey_59;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::EscapeKey
	RuntimeObject* ___EscapeKey_60;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseButton0
	RuntimeObject* ___MouseButton0_61;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseButton1
	RuntimeObject* ___MouseButton1_62;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseButton2
	RuntimeObject* ___MouseButton2_63;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseXAxis
	RuntimeObject* ___MouseXAxis_64;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseYAxis
	RuntimeObject* ___MouseYAxis_65;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseScrollWheel
	RuntimeObject* ___MouseScrollWheel_66;

public:
	inline static int32_t get_offset_of_Button0_19() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button0_19)); }
	inline RuntimeObject* get_Button0_19() const { return ___Button0_19; }
	inline RuntimeObject** get_address_of_Button0_19() { return &___Button0_19; }
	inline void set_Button0_19(RuntimeObject* value)
	{
		___Button0_19 = value;
		Il2CppCodeGenWriteBarrier((&___Button0_19), value);
	}

	inline static int32_t get_offset_of_Button1_20() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button1_20)); }
	inline RuntimeObject* get_Button1_20() const { return ___Button1_20; }
	inline RuntimeObject** get_address_of_Button1_20() { return &___Button1_20; }
	inline void set_Button1_20(RuntimeObject* value)
	{
		___Button1_20 = value;
		Il2CppCodeGenWriteBarrier((&___Button1_20), value);
	}

	inline static int32_t get_offset_of_Button2_21() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button2_21)); }
	inline RuntimeObject* get_Button2_21() const { return ___Button2_21; }
	inline RuntimeObject** get_address_of_Button2_21() { return &___Button2_21; }
	inline void set_Button2_21(RuntimeObject* value)
	{
		___Button2_21 = value;
		Il2CppCodeGenWriteBarrier((&___Button2_21), value);
	}

	inline static int32_t get_offset_of_Button3_22() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button3_22)); }
	inline RuntimeObject* get_Button3_22() const { return ___Button3_22; }
	inline RuntimeObject** get_address_of_Button3_22() { return &___Button3_22; }
	inline void set_Button3_22(RuntimeObject* value)
	{
		___Button3_22 = value;
		Il2CppCodeGenWriteBarrier((&___Button3_22), value);
	}

	inline static int32_t get_offset_of_Button4_23() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button4_23)); }
	inline RuntimeObject* get_Button4_23() const { return ___Button4_23; }
	inline RuntimeObject** get_address_of_Button4_23() { return &___Button4_23; }
	inline void set_Button4_23(RuntimeObject* value)
	{
		___Button4_23 = value;
		Il2CppCodeGenWriteBarrier((&___Button4_23), value);
	}

	inline static int32_t get_offset_of_Button5_24() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button5_24)); }
	inline RuntimeObject* get_Button5_24() const { return ___Button5_24; }
	inline RuntimeObject** get_address_of_Button5_24() { return &___Button5_24; }
	inline void set_Button5_24(RuntimeObject* value)
	{
		___Button5_24 = value;
		Il2CppCodeGenWriteBarrier((&___Button5_24), value);
	}

	inline static int32_t get_offset_of_Button6_25() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button6_25)); }
	inline RuntimeObject* get_Button6_25() const { return ___Button6_25; }
	inline RuntimeObject** get_address_of_Button6_25() { return &___Button6_25; }
	inline void set_Button6_25(RuntimeObject* value)
	{
		___Button6_25 = value;
		Il2CppCodeGenWriteBarrier((&___Button6_25), value);
	}

	inline static int32_t get_offset_of_Button7_26() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button7_26)); }
	inline RuntimeObject* get_Button7_26() const { return ___Button7_26; }
	inline RuntimeObject** get_address_of_Button7_26() { return &___Button7_26; }
	inline void set_Button7_26(RuntimeObject* value)
	{
		___Button7_26 = value;
		Il2CppCodeGenWriteBarrier((&___Button7_26), value);
	}

	inline static int32_t get_offset_of_Button8_27() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button8_27)); }
	inline RuntimeObject* get_Button8_27() const { return ___Button8_27; }
	inline RuntimeObject** get_address_of_Button8_27() { return &___Button8_27; }
	inline void set_Button8_27(RuntimeObject* value)
	{
		___Button8_27 = value;
		Il2CppCodeGenWriteBarrier((&___Button8_27), value);
	}

	inline static int32_t get_offset_of_Button9_28() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button9_28)); }
	inline RuntimeObject* get_Button9_28() const { return ___Button9_28; }
	inline RuntimeObject** get_address_of_Button9_28() { return &___Button9_28; }
	inline void set_Button9_28(RuntimeObject* value)
	{
		___Button9_28 = value;
		Il2CppCodeGenWriteBarrier((&___Button9_28), value);
	}

	inline static int32_t get_offset_of_Button10_29() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button10_29)); }
	inline RuntimeObject* get_Button10_29() const { return ___Button10_29; }
	inline RuntimeObject** get_address_of_Button10_29() { return &___Button10_29; }
	inline void set_Button10_29(RuntimeObject* value)
	{
		___Button10_29 = value;
		Il2CppCodeGenWriteBarrier((&___Button10_29), value);
	}

	inline static int32_t get_offset_of_Button11_30() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button11_30)); }
	inline RuntimeObject* get_Button11_30() const { return ___Button11_30; }
	inline RuntimeObject** get_address_of_Button11_30() { return &___Button11_30; }
	inline void set_Button11_30(RuntimeObject* value)
	{
		___Button11_30 = value;
		Il2CppCodeGenWriteBarrier((&___Button11_30), value);
	}

	inline static int32_t get_offset_of_Button12_31() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button12_31)); }
	inline RuntimeObject* get_Button12_31() const { return ___Button12_31; }
	inline RuntimeObject** get_address_of_Button12_31() { return &___Button12_31; }
	inline void set_Button12_31(RuntimeObject* value)
	{
		___Button12_31 = value;
		Il2CppCodeGenWriteBarrier((&___Button12_31), value);
	}

	inline static int32_t get_offset_of_Button13_32() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button13_32)); }
	inline RuntimeObject* get_Button13_32() const { return ___Button13_32; }
	inline RuntimeObject** get_address_of_Button13_32() { return &___Button13_32; }
	inline void set_Button13_32(RuntimeObject* value)
	{
		___Button13_32 = value;
		Il2CppCodeGenWriteBarrier((&___Button13_32), value);
	}

	inline static int32_t get_offset_of_Button14_33() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button14_33)); }
	inline RuntimeObject* get_Button14_33() const { return ___Button14_33; }
	inline RuntimeObject** get_address_of_Button14_33() { return &___Button14_33; }
	inline void set_Button14_33(RuntimeObject* value)
	{
		___Button14_33 = value;
		Il2CppCodeGenWriteBarrier((&___Button14_33), value);
	}

	inline static int32_t get_offset_of_Button15_34() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button15_34)); }
	inline RuntimeObject* get_Button15_34() const { return ___Button15_34; }
	inline RuntimeObject** get_address_of_Button15_34() { return &___Button15_34; }
	inline void set_Button15_34(RuntimeObject* value)
	{
		___Button15_34 = value;
		Il2CppCodeGenWriteBarrier((&___Button15_34), value);
	}

	inline static int32_t get_offset_of_Button16_35() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button16_35)); }
	inline RuntimeObject* get_Button16_35() const { return ___Button16_35; }
	inline RuntimeObject** get_address_of_Button16_35() { return &___Button16_35; }
	inline void set_Button16_35(RuntimeObject* value)
	{
		___Button16_35 = value;
		Il2CppCodeGenWriteBarrier((&___Button16_35), value);
	}

	inline static int32_t get_offset_of_Button17_36() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button17_36)); }
	inline RuntimeObject* get_Button17_36() const { return ___Button17_36; }
	inline RuntimeObject** get_address_of_Button17_36() { return &___Button17_36; }
	inline void set_Button17_36(RuntimeObject* value)
	{
		___Button17_36 = value;
		Il2CppCodeGenWriteBarrier((&___Button17_36), value);
	}

	inline static int32_t get_offset_of_Button18_37() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button18_37)); }
	inline RuntimeObject* get_Button18_37() const { return ___Button18_37; }
	inline RuntimeObject** get_address_of_Button18_37() { return &___Button18_37; }
	inline void set_Button18_37(RuntimeObject* value)
	{
		___Button18_37 = value;
		Il2CppCodeGenWriteBarrier((&___Button18_37), value);
	}

	inline static int32_t get_offset_of_Button19_38() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Button19_38)); }
	inline RuntimeObject* get_Button19_38() const { return ___Button19_38; }
	inline RuntimeObject** get_address_of_Button19_38() { return &___Button19_38; }
	inline void set_Button19_38(RuntimeObject* value)
	{
		___Button19_38 = value;
		Il2CppCodeGenWriteBarrier((&___Button19_38), value);
	}

	inline static int32_t get_offset_of_Analog0_39() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog0_39)); }
	inline RuntimeObject* get_Analog0_39() const { return ___Analog0_39; }
	inline RuntimeObject** get_address_of_Analog0_39() { return &___Analog0_39; }
	inline void set_Analog0_39(RuntimeObject* value)
	{
		___Analog0_39 = value;
		Il2CppCodeGenWriteBarrier((&___Analog0_39), value);
	}

	inline static int32_t get_offset_of_Analog1_40() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog1_40)); }
	inline RuntimeObject* get_Analog1_40() const { return ___Analog1_40; }
	inline RuntimeObject** get_address_of_Analog1_40() { return &___Analog1_40; }
	inline void set_Analog1_40(RuntimeObject* value)
	{
		___Analog1_40 = value;
		Il2CppCodeGenWriteBarrier((&___Analog1_40), value);
	}

	inline static int32_t get_offset_of_Analog2_41() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog2_41)); }
	inline RuntimeObject* get_Analog2_41() const { return ___Analog2_41; }
	inline RuntimeObject** get_address_of_Analog2_41() { return &___Analog2_41; }
	inline void set_Analog2_41(RuntimeObject* value)
	{
		___Analog2_41 = value;
		Il2CppCodeGenWriteBarrier((&___Analog2_41), value);
	}

	inline static int32_t get_offset_of_Analog3_42() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog3_42)); }
	inline RuntimeObject* get_Analog3_42() const { return ___Analog3_42; }
	inline RuntimeObject** get_address_of_Analog3_42() { return &___Analog3_42; }
	inline void set_Analog3_42(RuntimeObject* value)
	{
		___Analog3_42 = value;
		Il2CppCodeGenWriteBarrier((&___Analog3_42), value);
	}

	inline static int32_t get_offset_of_Analog4_43() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog4_43)); }
	inline RuntimeObject* get_Analog4_43() const { return ___Analog4_43; }
	inline RuntimeObject** get_address_of_Analog4_43() { return &___Analog4_43; }
	inline void set_Analog4_43(RuntimeObject* value)
	{
		___Analog4_43 = value;
		Il2CppCodeGenWriteBarrier((&___Analog4_43), value);
	}

	inline static int32_t get_offset_of_Analog5_44() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog5_44)); }
	inline RuntimeObject* get_Analog5_44() const { return ___Analog5_44; }
	inline RuntimeObject** get_address_of_Analog5_44() { return &___Analog5_44; }
	inline void set_Analog5_44(RuntimeObject* value)
	{
		___Analog5_44 = value;
		Il2CppCodeGenWriteBarrier((&___Analog5_44), value);
	}

	inline static int32_t get_offset_of_Analog6_45() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog6_45)); }
	inline RuntimeObject* get_Analog6_45() const { return ___Analog6_45; }
	inline RuntimeObject** get_address_of_Analog6_45() { return &___Analog6_45; }
	inline void set_Analog6_45(RuntimeObject* value)
	{
		___Analog6_45 = value;
		Il2CppCodeGenWriteBarrier((&___Analog6_45), value);
	}

	inline static int32_t get_offset_of_Analog7_46() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog7_46)); }
	inline RuntimeObject* get_Analog7_46() const { return ___Analog7_46; }
	inline RuntimeObject** get_address_of_Analog7_46() { return &___Analog7_46; }
	inline void set_Analog7_46(RuntimeObject* value)
	{
		___Analog7_46 = value;
		Il2CppCodeGenWriteBarrier((&___Analog7_46), value);
	}

	inline static int32_t get_offset_of_Analog8_47() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog8_47)); }
	inline RuntimeObject* get_Analog8_47() const { return ___Analog8_47; }
	inline RuntimeObject** get_address_of_Analog8_47() { return &___Analog8_47; }
	inline void set_Analog8_47(RuntimeObject* value)
	{
		___Analog8_47 = value;
		Il2CppCodeGenWriteBarrier((&___Analog8_47), value);
	}

	inline static int32_t get_offset_of_Analog9_48() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog9_48)); }
	inline RuntimeObject* get_Analog9_48() const { return ___Analog9_48; }
	inline RuntimeObject** get_address_of_Analog9_48() { return &___Analog9_48; }
	inline void set_Analog9_48(RuntimeObject* value)
	{
		___Analog9_48 = value;
		Il2CppCodeGenWriteBarrier((&___Analog9_48), value);
	}

	inline static int32_t get_offset_of_Analog10_49() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog10_49)); }
	inline RuntimeObject* get_Analog10_49() const { return ___Analog10_49; }
	inline RuntimeObject** get_address_of_Analog10_49() { return &___Analog10_49; }
	inline void set_Analog10_49(RuntimeObject* value)
	{
		___Analog10_49 = value;
		Il2CppCodeGenWriteBarrier((&___Analog10_49), value);
	}

	inline static int32_t get_offset_of_Analog11_50() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog11_50)); }
	inline RuntimeObject* get_Analog11_50() const { return ___Analog11_50; }
	inline RuntimeObject** get_address_of_Analog11_50() { return &___Analog11_50; }
	inline void set_Analog11_50(RuntimeObject* value)
	{
		___Analog11_50 = value;
		Il2CppCodeGenWriteBarrier((&___Analog11_50), value);
	}

	inline static int32_t get_offset_of_Analog12_51() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog12_51)); }
	inline RuntimeObject* get_Analog12_51() const { return ___Analog12_51; }
	inline RuntimeObject** get_address_of_Analog12_51() { return &___Analog12_51; }
	inline void set_Analog12_51(RuntimeObject* value)
	{
		___Analog12_51 = value;
		Il2CppCodeGenWriteBarrier((&___Analog12_51), value);
	}

	inline static int32_t get_offset_of_Analog13_52() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog13_52)); }
	inline RuntimeObject* get_Analog13_52() const { return ___Analog13_52; }
	inline RuntimeObject** get_address_of_Analog13_52() { return &___Analog13_52; }
	inline void set_Analog13_52(RuntimeObject* value)
	{
		___Analog13_52 = value;
		Il2CppCodeGenWriteBarrier((&___Analog13_52), value);
	}

	inline static int32_t get_offset_of_Analog14_53() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog14_53)); }
	inline RuntimeObject* get_Analog14_53() const { return ___Analog14_53; }
	inline RuntimeObject** get_address_of_Analog14_53() { return &___Analog14_53; }
	inline void set_Analog14_53(RuntimeObject* value)
	{
		___Analog14_53 = value;
		Il2CppCodeGenWriteBarrier((&___Analog14_53), value);
	}

	inline static int32_t get_offset_of_Analog15_54() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog15_54)); }
	inline RuntimeObject* get_Analog15_54() const { return ___Analog15_54; }
	inline RuntimeObject** get_address_of_Analog15_54() { return &___Analog15_54; }
	inline void set_Analog15_54(RuntimeObject* value)
	{
		___Analog15_54 = value;
		Il2CppCodeGenWriteBarrier((&___Analog15_54), value);
	}

	inline static int32_t get_offset_of_Analog16_55() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog16_55)); }
	inline RuntimeObject* get_Analog16_55() const { return ___Analog16_55; }
	inline RuntimeObject** get_address_of_Analog16_55() { return &___Analog16_55; }
	inline void set_Analog16_55(RuntimeObject* value)
	{
		___Analog16_55 = value;
		Il2CppCodeGenWriteBarrier((&___Analog16_55), value);
	}

	inline static int32_t get_offset_of_Analog17_56() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog17_56)); }
	inline RuntimeObject* get_Analog17_56() const { return ___Analog17_56; }
	inline RuntimeObject** get_address_of_Analog17_56() { return &___Analog17_56; }
	inline void set_Analog17_56(RuntimeObject* value)
	{
		___Analog17_56 = value;
		Il2CppCodeGenWriteBarrier((&___Analog17_56), value);
	}

	inline static int32_t get_offset_of_Analog18_57() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog18_57)); }
	inline RuntimeObject* get_Analog18_57() const { return ___Analog18_57; }
	inline RuntimeObject** get_address_of_Analog18_57() { return &___Analog18_57; }
	inline void set_Analog18_57(RuntimeObject* value)
	{
		___Analog18_57 = value;
		Il2CppCodeGenWriteBarrier((&___Analog18_57), value);
	}

	inline static int32_t get_offset_of_Analog19_58() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___Analog19_58)); }
	inline RuntimeObject* get_Analog19_58() const { return ___Analog19_58; }
	inline RuntimeObject** get_address_of_Analog19_58() { return &___Analog19_58; }
	inline void set_Analog19_58(RuntimeObject* value)
	{
		___Analog19_58 = value;
		Il2CppCodeGenWriteBarrier((&___Analog19_58), value);
	}

	inline static int32_t get_offset_of_MenuKey_59() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___MenuKey_59)); }
	inline RuntimeObject* get_MenuKey_59() const { return ___MenuKey_59; }
	inline RuntimeObject** get_address_of_MenuKey_59() { return &___MenuKey_59; }
	inline void set_MenuKey_59(RuntimeObject* value)
	{
		___MenuKey_59 = value;
		Il2CppCodeGenWriteBarrier((&___MenuKey_59), value);
	}

	inline static int32_t get_offset_of_EscapeKey_60() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___EscapeKey_60)); }
	inline RuntimeObject* get_EscapeKey_60() const { return ___EscapeKey_60; }
	inline RuntimeObject** get_address_of_EscapeKey_60() { return &___EscapeKey_60; }
	inline void set_EscapeKey_60(RuntimeObject* value)
	{
		___EscapeKey_60 = value;
		Il2CppCodeGenWriteBarrier((&___EscapeKey_60), value);
	}

	inline static int32_t get_offset_of_MouseButton0_61() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___MouseButton0_61)); }
	inline RuntimeObject* get_MouseButton0_61() const { return ___MouseButton0_61; }
	inline RuntimeObject** get_address_of_MouseButton0_61() { return &___MouseButton0_61; }
	inline void set_MouseButton0_61(RuntimeObject* value)
	{
		___MouseButton0_61 = value;
		Il2CppCodeGenWriteBarrier((&___MouseButton0_61), value);
	}

	inline static int32_t get_offset_of_MouseButton1_62() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___MouseButton1_62)); }
	inline RuntimeObject* get_MouseButton1_62() const { return ___MouseButton1_62; }
	inline RuntimeObject** get_address_of_MouseButton1_62() { return &___MouseButton1_62; }
	inline void set_MouseButton1_62(RuntimeObject* value)
	{
		___MouseButton1_62 = value;
		Il2CppCodeGenWriteBarrier((&___MouseButton1_62), value);
	}

	inline static int32_t get_offset_of_MouseButton2_63() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___MouseButton2_63)); }
	inline RuntimeObject* get_MouseButton2_63() const { return ___MouseButton2_63; }
	inline RuntimeObject** get_address_of_MouseButton2_63() { return &___MouseButton2_63; }
	inline void set_MouseButton2_63(RuntimeObject* value)
	{
		___MouseButton2_63 = value;
		Il2CppCodeGenWriteBarrier((&___MouseButton2_63), value);
	}

	inline static int32_t get_offset_of_MouseXAxis_64() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___MouseXAxis_64)); }
	inline RuntimeObject* get_MouseXAxis_64() const { return ___MouseXAxis_64; }
	inline RuntimeObject** get_address_of_MouseXAxis_64() { return &___MouseXAxis_64; }
	inline void set_MouseXAxis_64(RuntimeObject* value)
	{
		___MouseXAxis_64 = value;
		Il2CppCodeGenWriteBarrier((&___MouseXAxis_64), value);
	}

	inline static int32_t get_offset_of_MouseYAxis_65() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___MouseYAxis_65)); }
	inline RuntimeObject* get_MouseYAxis_65() const { return ___MouseYAxis_65; }
	inline RuntimeObject** get_address_of_MouseYAxis_65() { return &___MouseYAxis_65; }
	inline void set_MouseYAxis_65(RuntimeObject* value)
	{
		___MouseYAxis_65 = value;
		Il2CppCodeGenWriteBarrier((&___MouseYAxis_65), value);
	}

	inline static int32_t get_offset_of_MouseScrollWheel_66() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3356944389_StaticFields, ___MouseScrollWheel_66)); }
	inline RuntimeObject* get_MouseScrollWheel_66() const { return ___MouseScrollWheel_66; }
	inline RuntimeObject** get_address_of_MouseScrollWheel_66() { return &___MouseScrollWheel_66; }
	inline void set_MouseScrollWheel_66(RuntimeObject* value)
	{
		___MouseScrollWheel_66 = value;
		Il2CppCodeGenWriteBarrier((&___MouseScrollWheel_66), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYINPUTDEVICEPROFILE_T3356944389_H
#ifndef MOGAPROPOWERANDROIDPROFILE_T2476743942_H
#define MOGAPROPOWERANDROIDPROFILE_T2476743942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MogaProPowerAndroidProfile
struct  MogaProPowerAndroidProfile_t2476743942  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOGAPROPOWERANDROIDPROFILE_T2476743942_H
#ifndef MOGAPROMACPROFILE_T2140197206_H
#define MOGAPROMACPROFILE_T2140197206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MogaProMacProfile
struct  MogaProMacProfile_t2140197206  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOGAPROMACPROFILE_T2140197206_H
#ifndef MOGAPROLINUXPROFILE_T3685637074_H
#define MOGAPROLINUXPROFILE_T3685637074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MogaProLinuxProfile
struct  MogaProLinuxProfile_t3685637074  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOGAPROLINUXPROFILE_T3685637074_H
#ifndef MOGAPROANDROIDPROFILE_T3589760169_H
#define MOGAPROANDROIDPROFILE_T3589760169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MogaProAndroidProfile
struct  MogaProAndroidProfile_t3589760169  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOGAPROANDROIDPROFILE_T3589760169_H
#ifndef MOGAHEROPOWERANDROIDPROFILE_T2911998599_H
#define MOGAHEROPOWERANDROIDPROFILE_T2911998599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MogaHeroPowerAndroidProfile
struct  MogaHeroPowerAndroidProfile_t2911998599  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOGAHEROPOWERANDROIDPROFILE_T2911998599_H
#ifndef MOGAPROWINPROFILE_T3912741854_H
#define MOGAPROWINPROFILE_T3912741854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MogaProWinProfile
struct  MogaProWinProfile_t3912741854  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOGAPROWINPROFILE_T3912741854_H
#ifndef APPLEMFIPROFILE_T1786062273_H
#define APPLEMFIPROFILE_T1786062273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.AppleMFiProfile
struct  AppleMFiProfile_t1786062273  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLEMFIPROFILE_T1786062273_H
#ifndef NATECGENESISP44PROFILE_T3858843810_H
#define NATECGENESISP44PROFILE_T3858843810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NatecGenesisP44Profile
struct  NatecGenesisP44Profile_t3858843810  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATECGENESISP44PROFILE_T3858843810_H
#ifndef NEXUSPLAYERMACPROFILE_T3322376911_H
#define NEXUSPLAYERMACPROFILE_T3322376911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NexusPlayerMacProfile
struct  NexusPlayerMacProfile_t3322376911  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEXUSPLAYERMACPROFILE_T3322376911_H
#ifndef NEXUSPLAYERPROFILE_T300700291_H
#define NEXUSPLAYERPROFILE_T300700291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NexusPlayerProfile
struct  NexusPlayerProfile_t300700291  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEXUSPLAYERPROFILE_T300700291_H
#ifndef NEXUSPLAYERREMOTEPROFILE_T4211476022_H
#define NEXUSPLAYERREMOTEPROFILE_T4211476022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NexusPlayerRemoteProfile
struct  NexusPlayerRemoteProfile_t4211476022  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEXUSPLAYERREMOTEPROFILE_T4211476022_H
#ifndef MAXFIREBLAZE5PROFILE_T1412431509_H
#define MAXFIREBLAZE5PROFILE_T1412431509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MaxFireBlaze5Profile
struct  MaxFireBlaze5Profile_t1412431509  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAXFIREBLAZE5PROFILE_T1412431509_H
#ifndef LOGITECHF710LINUXPROFILE_T1396941506_H
#define LOGITECHF710LINUXPROFILE_T1396941506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF710LinuxProfile
struct  LogitechF710LinuxProfile_t1396941506  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF710LINUXPROFILE_T1396941506_H
#ifndef LOGITECHF710MACPROFILE_T619290460_H
#define LOGITECHF710MACPROFILE_T619290460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF710MacProfile
struct  LogitechF710MacProfile_t619290460  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF710MACPROFILE_T619290460_H
#ifndef LOGITECHF710MODEDWINPROFILE_T668846424_H
#define LOGITECHF710MODEDWINPROFILE_T668846424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF710ModeDWinProfile
struct  LogitechF710ModeDWinProfile_t668846424  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF710MODEDWINPROFILE_T668846424_H
#ifndef LOGITECHF710MODEXWINPROFILE_T3806697588_H
#define LOGITECHF710MODEXWINPROFILE_T3806697588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF710ModeXWinProfile
struct  LogitechF710ModeXWinProfile_t3806697588  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF710MODEXWINPROFILE_T3806697588_H
#ifndef LOGITECHMODEDAMAZONPROFILE_T3611442370_H
#define LOGITECHMODEDAMAZONPROFILE_T3611442370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechModeDAmazonProfile
struct  LogitechModeDAmazonProfile_t3611442370  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHMODEDAMAZONPROFILE_T3611442370_H
#ifndef LOGITECHMODEXAMAZONPROFILE_T2213445766_H
#define LOGITECHMODEXAMAZONPROFILE_T2213445766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechModeXAmazonProfile
struct  LogitechModeXAmazonProfile_t2213445766  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHMODEXAMAZONPROFILE_T2213445766_H
#ifndef LOGITECHWINGMANWINPROFILE_T2013890869_H
#define LOGITECHWINGMANWINPROFILE_T2013890869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechWingManWinProfile
struct  LogitechWingManWinProfile_t2013890869  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHWINGMANWINPROFILE_T2013890869_H
#ifndef MADCATZCTRLRAMAZONPROFILE_T155536728_H
#define MADCATZCTRLRAMAZONPROFILE_T155536728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MadCatzCTRLRAmazonProfile
struct  MadCatzCTRLRAmazonProfile_t155536728  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZCTRLRAMAZONPROFILE_T155536728_H
#ifndef MADCATZCTRLRANDROIDPROFILE_T3186756963_H
#define MADCATZCTRLRANDROIDPROFILE_T3186756963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MadCatzCTRLRAndroidProfile
struct  MadCatzCTRLRAndroidProfile_t3186756963  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZCTRLRANDROIDPROFILE_T3186756963_H
#ifndef MADCATZMICROCTRLRAMAZONPROFILE_T1245828716_H
#define MADCATZMICROCTRLRAMAZONPROFILE_T1245828716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MadCatzMicroCTRLRAmazonProfile
struct  MadCatzMicroCTRLRAmazonProfile_t1245828716  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MADCATZMICROCTRLRAMAZONPROFILE_T1245828716_H
#ifndef NEXUSPLAYERWINPROFILE_T423550727_H
#define NEXUSPLAYERWINPROFILE_T423550727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NexusPlayerWinProfile
struct  NexusPlayerWinProfile_t423550727  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEXUSPLAYERWINPROFILE_T423550727_H
#ifndef PLAYSTATION3MACPROFILE_T734590322_H
#define PLAYSTATION3MACPROFILE_T734590322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3MacProfile
struct  PlayStation3MacProfile_t734590322  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3MACPROFILE_T734590322_H
#ifndef PLAYSTATION3SHENGHICWINPROFILE_T3873632645_H
#define PLAYSTATION3SHENGHICWINPROFILE_T3873632645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3ShenghicWinProfile
struct  PlayStation3ShenghicWinProfile_t3873632645  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3SHENGHICWINPROFILE_T3873632645_H
#ifndef PLAYSTATION3WINPROFILE_T561465917_H
#define PLAYSTATION3WINPROFILE_T561465917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3WinProfile
struct  PlayStation3WinProfile_t561465917  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3WINPROFILE_T561465917_H
#ifndef PLAYSTATION4AMAZONPROFILE_T3079794094_H
#define PLAYSTATION4AMAZONPROFILE_T3079794094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation4AmazonProfile
struct  PlayStation4AmazonProfile_t3079794094  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION4AMAZONPROFILE_T3079794094_H
#ifndef ANDROIDTVPROFILE_T4262319905_H
#define ANDROIDTVPROFILE_T4262319905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.AndroidTVProfile
struct  AndroidTVProfile_t4262319905  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDTVPROFILE_T4262319905_H
#ifndef ANDROIDTVAMAZONPROFILE_T3127467521_H
#define ANDROIDTVAMAZONPROFILE_T3127467521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.AndroidTVAmazonProfile
struct  AndroidTVAmazonProfile_t3127467521  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDTVAMAZONPROFILE_T3127467521_H
#ifndef AMAZONFIRETVREMOTEPROFILE_T2755213202_H
#define AMAZONFIRETVREMOTEPROFILE_T2755213202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.AmazonFireTVRemoteProfile
struct  AmazonFireTVRemoteProfile_t2755213202  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMAZONFIRETVREMOTEPROFILE_T2755213202_H
#ifndef AMAZONFIRETVPROFILE_T641530669_H
#define AMAZONFIRETVPROFILE_T641530669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.AmazonFireTVProfile
struct  AmazonFireTVProfile_t641530669  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMAZONFIRETVPROFILE_T641530669_H
#ifndef AIRFLOWIREDPS3PROFILEWIN_T126333713_H
#define AIRFLOWIREDPS3PROFILEWIN_T126333713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.AirFloWiredPS3ProfileWin
struct  AirFloWiredPS3ProfileWin_t126333713  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AIRFLOWIREDPS3PROFILEWIN_T126333713_H
#ifndef AIRFLOWIREDPS3MACPROFILE_T2347494338_H
#define AIRFLOWIREDPS3MACPROFILE_T2347494338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.AirFloWiredPS3MacProfile
struct  AirFloWiredPS3MacProfile_t2347494338  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AIRFLOWIREDPS3MACPROFILE_T2347494338_H
#ifndef PLAYSTATION3LINUXPROFILE_T2387914304_H
#define PLAYSTATION3LINUXPROFILE_T2387914304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3LinuxProfile
struct  PlayStation3LinuxProfile_t2387914304  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3LINUXPROFILE_T2387914304_H
#ifndef NVIDIASHIELD2016ANDROIDPROFILE_T2262321597_H
#define NVIDIASHIELD2016ANDROIDPROFILE_T2262321597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NVidiaShield2016AndroidProfile
struct  NVidiaShield2016AndroidProfile_t2262321597  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NVIDIASHIELD2016ANDROIDPROFILE_T2262321597_H
#ifndef NVIDIASHIELD2017ANDROIDPROFILE_T45566397_H
#define NVIDIASHIELD2017ANDROIDPROFILE_T45566397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NVidiaShield2017AndroidProfile
struct  NVidiaShield2017AndroidProfile_t45566397  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NVIDIASHIELD2017ANDROIDPROFILE_T45566397_H
#ifndef NVIDIASHIELDWIN10PROFILE_T818366377_H
#define NVIDIASHIELDWIN10PROFILE_T818366377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NVidiaShieldWin10Profile
struct  NVidiaShieldWin10Profile_t818366377  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NVIDIASHIELDWIN10PROFILE_T818366377_H
#ifndef NVIDIASHIELDWINPROFILE_T1670138565_H
#define NVIDIASHIELDWINPROFILE_T1670138565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NVidiaShieldWinProfile
struct  NVidiaShieldWinProfile_t1670138565  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NVIDIASHIELDWINPROFILE_T1670138565_H
#ifndef NYKOPLAYPADPROAMAZONPROFILE_T472872046_H
#define NYKOPLAYPADPROAMAZONPROFILE_T472872046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NykoPlayPadProAmazonProfile
struct  NykoPlayPadProAmazonProfile_t472872046  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NYKOPLAYPADPROAMAZONPROFILE_T472872046_H
#ifndef OUYAAMAZONPROFILE_T2891658103_H
#define OUYAAMAZONPROFILE_T2891658103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.OuyaAmazonProfile
struct  OuyaAmazonProfile_t2891658103  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUYAAMAZONPROFILE_T2891658103_H
#ifndef OUYALINUXPROFILE_T3394651750_H
#define OUYALINUXPROFILE_T3394651750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.OuyaLinuxProfile
struct  OuyaLinuxProfile_t3394651750  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUYALINUXPROFILE_T3394651750_H
#ifndef OUYAWINPROFILE_T3157348473_H
#define OUYAWINPROFILE_T3157348473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.OuyaWinProfile
struct  OuyaWinProfile_t3157348473  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUYAWINPROFILE_T3157348473_H
#ifndef PLAYSTATION2WINPROFILE_T205802045_H
#define PLAYSTATION2WINPROFILE_T205802045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation2WinProfile
struct  PlayStation2WinProfile_t205802045  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION2WINPROFILE_T205802045_H
#ifndef PLAYSTATION3ANDROIDPROFILE_T3325347833_H
#define PLAYSTATION3ANDROIDPROFILE_T3325347833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3AndroidProfile
struct  PlayStation3AndroidProfile_t3325347833  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3ANDROIDPROFILE_T3325347833_H
#ifndef PLAYSTATION3BWINPROFILE_T3936212141_H
#define PLAYSTATION3BWINPROFILE_T3936212141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3BWinProfile
struct  PlayStation3BWinProfile_t3936212141  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3BWINPROFILE_T3936212141_H
#ifndef LOGITECHF510MODEXWINPROFILE_T3023886871_H
#define LOGITECHF510MODEXWINPROFILE_T3023886871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF510ModeXWinProfile
struct  LogitechF510ModeXWinProfile_t3023886871  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF510MODEXWINPROFILE_T3023886871_H
#ifndef EIGHTBITDONES30PROMACPROFILE_T463615800_H
#define EIGHTBITDONES30PROMACPROFILE_T463615800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoNES30ProMacProfile
struct  EightBitdoNES30ProMacProfile_t463615800  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDONES30PROMACPROFILE_T463615800_H
#ifndef EIGHTBITDONES30PROWINDOWSPROFILE_T1875245158_H
#define EIGHTBITDONES30PROWINDOWSPROFILE_T1875245158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoNES30ProWindowsProfile
struct  EightBitdoNES30ProWindowsProfile_t1875245158  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDONES30PROWINDOWSPROFILE_T1875245158_H
#ifndef EIGHTBITDOSFC30ANDROIDPROFILE_T3765043265_H
#define EIGHTBITDOSFC30ANDROIDPROFILE_T3765043265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoSFC30AndroidProfile
struct  EightBitdoSFC30AndroidProfile_t3765043265  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDOSFC30ANDROIDPROFILE_T3765043265_H
#ifndef EIGHTBITDOSFC30MACPROFILE_T116303183_H
#define EIGHTBITDOSFC30MACPROFILE_T116303183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoSFC30MacProfile
struct  EightBitdoSFC30MacProfile_t116303183  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDOSFC30MACPROFILE_T116303183_H
#ifndef EIGHTBITDOSFC30WINDOWSPROFILE_T39707303_H
#define EIGHTBITDOSFC30WINDOWSPROFILE_T39707303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoSFC30WindowsProfile
struct  EightBitdoSFC30WindowsProfile_t39707303  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDOSFC30WINDOWSPROFILE_T39707303_H
#ifndef EIGHTBITDOSNES30ANDROIDPROFILE_T1083508262_H
#define EIGHTBITDOSNES30ANDROIDPROFILE_T1083508262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoSNES30AndroidProfile
struct  EightBitdoSNES30AndroidProfile_t1083508262  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDOSNES30ANDROIDPROFILE_T1083508262_H
#ifndef EIGHTBITDOSNES30MACPROFILE_T598293590_H
#define EIGHTBITDOSNES30MACPROFILE_T598293590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoSNES30MacProfile
struct  EightBitdoSNES30MacProfile_t598293590  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDOSNES30MACPROFILE_T598293590_H
#ifndef EIGHTBITDOSNES30WINDOWSPROFILE_T611180648_H
#define EIGHTBITDOSNES30WINDOWSPROFILE_T611180648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoSNES30WindowsProfile
struct  EightBitdoSNES30WindowsProfile_t611180648  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDOSNES30WINDOWSPROFILE_T611180648_H
#ifndef EXECUTIONERXPROFILE_T2018384114_H
#define EXECUTIONERXPROFILE_T2018384114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.ExecutionerXProfile
struct  ExecutionerXProfile_t2018384114  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONERXPROFILE_T2018384114_H
#ifndef FIXXBG301ANDROIDPROFILE_T4078430048_H
#define FIXXBG301ANDROIDPROFILE_T4078430048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.FixXBG301AndroidProfile
struct  FixXBG301AndroidProfile_t4078430048  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXXBG301ANDROIDPROFILE_T4078430048_H
#ifndef FLAREANDROIDPROFILE_T2874683408_H
#define FLAREANDROIDPROFILE_T2874683408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.FlareAndroidProfile
struct  FlareAndroidProfile_t2874683408  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAREANDROIDPROFILE_T2874683408_H
#ifndef EIGHTBITDONES30PROANDROIDPROFILE_T2574820873_H
#define EIGHTBITDONES30PROANDROIDPROFILE_T2574820873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoNES30ProAndroidProfile
struct  EightBitdoNES30ProAndroidProfile_t2574820873  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDONES30PROANDROIDPROFILE_T2574820873_H
#ifndef APPLETVREMOTEPROFILE_T3099313090_H
#define APPLETVREMOTEPROFILE_T3099313090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.AppleTVRemoteProfile
struct  AppleTVRemoteProfile_t3099313090  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLETVREMOTEPROFILE_T3099313090_H
#ifndef APPLETVWIRELESSCONTROLLERPROFILE_T1715019857_H
#define APPLETVWIRELESSCONTROLLERPROFILE_T1715019857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.AppleTVWirelessControllerProfile
struct  AppleTVWirelessControllerProfile_t1715019857  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLETVWIRELESSCONTROLLERPROFILE_T1715019857_H
#ifndef BEBONCOOLDA015CAANDROIDPROFILE_T446642317_H
#define BEBONCOOLDA015CAANDROIDPROFILE_T446642317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.BeboncoolDA015CAAndroidProfile
struct  BeboncoolDA015CAAndroidProfile_t446642317  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEBONCOOLDA015CAANDROIDPROFILE_T446642317_H
#ifndef BETOPBTPAX1TANDROIDPROFILE_T238921542_H
#define BETOPBTPAX1TANDROIDPROFILE_T238921542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.BetopBTPAX1TAndroidProfile
struct  BetopBTPAX1TAndroidProfile_t238921542  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BETOPBTPAX1TANDROIDPROFILE_T238921542_H
#ifndef BETOPBTPGENERICANDROIDPROFILE_T1126015458_H
#define BETOPBTPGENERICANDROIDPROFILE_T1126015458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.BetopBTPGenericAndroidProfile
struct  BetopBTPGenericAndroidProfile_t1126015458  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BETOPBTPGENERICANDROIDPROFILE_T1126015458_H
#ifndef BUFFALOCLASSICAMAZONPROFILE_T3611194551_H
#define BUFFALOCLASSICAMAZONPROFILE_T3611194551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.BuffaloClassicAmazonProfile
struct  BuffaloClassicAmazonProfile_t3611194551  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFALOCLASSICAMAZONPROFILE_T3611194551_H
#ifndef BUFFALOCLASSICMACPROFILE_T866044546_H
#define BUFFALOCLASSICMACPROFILE_T866044546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.BuffaloClassicMacProfile
struct  BuffaloClassicMacProfile_t866044546  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFALOCLASSICMACPROFILE_T866044546_H
#ifndef BUFFALOCLASSICWINPROFILE_T589188875_H
#define BUFFALOCLASSICWINPROFILE_T589188875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.BuffaloClassicWinProfile
struct  BuffaloClassicWinProfile_t589188875  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFALOCLASSICWINPROFILE_T589188875_H
#ifndef DROIDBOXPS3ANDROIDPROFILE_T1440355238_H
#define DROIDBOXPS3ANDROIDPROFILE_T1440355238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.DroidBoxPS3AndroidProfile
struct  DroidBoxPS3AndroidProfile_t1440355238  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROIDBOXPS3ANDROIDPROFILE_T1440355238_H
#ifndef DROIDBOXXBOXANDROIDPROFILE_T3064937107_H
#define DROIDBOXXBOXANDROIDPROFILE_T3064937107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.DroidBoxXboxAndroidProfile
struct  DroidBoxXboxAndroidProfile_t3064937107  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROIDBOXXBOXANDROIDPROFILE_T3064937107_H
#ifndef EIGHTBITDOFC30PROANDROIDPROFILE_T2871080435_H
#define EIGHTBITDOFC30PROANDROIDPROFILE_T2871080435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.EightBitdoFC30ProAndroidProfile
struct  EightBitdoFC30ProAndroidProfile_t2871080435  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EIGHTBITDOFC30PROANDROIDPROFILE_T2871080435_H
#ifndef GAMECUBEMAYFLASHWINPROFILE_T2543785748_H
#define GAMECUBEMAYFLASHWINPROFILE_T2543785748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.GameCubeMayflashWinProfile
struct  GameCubeMayflashWinProfile_t2543785748  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECUBEMAYFLASHWINPROFILE_T2543785748_H
#ifndef IPEGAPG9025ANDROIDPROFILE_T3461382803_H
#define IPEGAPG9025ANDROIDPROFILE_T3461382803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.IpegaPG9025AndroidProfile
struct  IpegaPG9025AndroidProfile_t3461382803  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPEGAPG9025ANDROIDPROFILE_T3461382803_H
#ifndef LEVELUPBLACKHAWKWINPROFILE_T2970082271_H
#define LEVELUPBLACKHAWKWINPROFILE_T2970082271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LevelUpBlackHawkWinProfile
struct  LevelUpBlackHawkWinProfile_t2970082271  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELUPBLACKHAWKWINPROFILE_T2970082271_H
#ifndef LOGITECHF310LINUXPROFILE_T3019946380_H
#define LOGITECHF310LINUXPROFILE_T3019946380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF310LinuxProfile
struct  LogitechF310LinuxProfile_t3019946380  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF310LINUXPROFILE_T3019946380_H
#ifndef LOGITECHF310MODEDMACPROFILE_T3494856390_H
#define LOGITECHF310MODEDMACPROFILE_T3494856390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF310ModeDMacProfile
struct  LogitechF310ModeDMacProfile_t3494856390  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF310MODEDMACPROFILE_T3494856390_H
#ifndef ANDROIDTVREMOTEPROFILE_T660506948_H
#define ANDROIDTVREMOTEPROFILE_T660506948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.AndroidTVRemoteProfile
struct  AndroidTVRemoteProfile_t660506948  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDTVREMOTEPROFILE_T660506948_H
#ifndef LOGITECHF310MODEXMACPROFILE_T3823270626_H
#define LOGITECHF310MODEXMACPROFILE_T3823270626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF310ModeXMacProfile
struct  LogitechF310ModeXMacProfile_t3823270626  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF310MODEXMACPROFILE_T3823270626_H
#ifndef LOGITECHF310MODEXWINPROFILE_T2002475754_H
#define LOGITECHF310MODEXWINPROFILE_T2002475754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF310ModeXWinProfile
struct  LogitechF310ModeXWinProfile_t2002475754  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF310MODEXWINPROFILE_T2002475754_H
#ifndef LOGITECHF510LINUXPROFILE_T2154701790_H
#define LOGITECHF510LINUXPROFILE_T2154701790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF510LinuxProfile
struct  LogitechF510LinuxProfile_t2154701790  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF510LINUXPROFILE_T2154701790_H
#ifndef LOGITECHF510MODEDMACPROFILE_T2710338811_H
#define LOGITECHF510MODEDMACPROFILE_T2710338811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF510ModeDMacProfile
struct  LogitechF510ModeDMacProfile_t2710338811  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF510MODEDMACPROFILE_T2710338811_H
#ifndef LOGITECHF510MODEDWINPROFILE_T265379075_H
#define LOGITECHF510MODEDWINPROFILE_T265379075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF510ModeDWinProfile
struct  LogitechF510ModeDWinProfile_t265379075  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF510MODEDWINPROFILE_T265379075_H
#ifndef LOGITECHF510MODEXMACPROFILE_T1173879311_H
#define LOGITECHF510MODEXMACPROFILE_T1173879311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF510ModeXMacProfile
struct  LogitechF510ModeXMacProfile_t1173879311  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF510MODEXMACPROFILE_T1173879311_H
#ifndef IPEGAPG9023ANDROIDPROFILE_T3461311057_H
#define IPEGAPG9023ANDROIDPROFILE_T3461311057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.IpegaPG9023AndroidProfile
struct  IpegaPG9023AndroidProfile_t3461311057  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPEGAPG9023ANDROIDPROFILE_T3461311057_H
#ifndef GAMECUBEWINPROFILE_T212067569_H
#define GAMECUBEWINPROFILE_T212067569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.GameCubeWinProfile
struct  GameCubeWinProfile_t212067569  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECUBEWINPROFILE_T212067569_H
#ifndef GAMESIRG3SANDROIDPROFILE_T2843989703_H
#define GAMESIRG3SANDROIDPROFILE_T2843989703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.GameSirG3sAndroidProfile
struct  GameSirG3sAndroidProfile_t2843989703  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESIRG3SANDROIDPROFILE_T2843989703_H
#ifndef GAMESIRG3WANDROIDPROFILE_T2750091393_H
#define GAMESIRG3WANDROIDPROFILE_T2750091393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.GameSirG3wAndroidProfile
struct  GameSirG3wAndroidProfile_t2750091393  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESIRG3WANDROIDPROFILE_T2750091393_H
#ifndef GAMESIRG4SANDROIDPROFILE_T3199551386_H
#define GAMESIRG4SANDROIDPROFILE_T3199551386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.GameSirG4sAndroidProfile
struct  GameSirG4sAndroidProfile_t3199551386  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESIRG4SANDROIDPROFILE_T3199551386_H
#ifndef GAMESTICKLINUXPROFILE_T2708704101_H
#define GAMESTICKLINUXPROFILE_T2708704101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.GameStickLinuxProfile
struct  GameStickLinuxProfile_t2708704101  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTICKLINUXPROFILE_T2708704101_H
#ifndef GAMESTICKPROFILE_T2553330764_H
#define GAMESTICKPROFILE_T2553330764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.GameStickProfile
struct  GameStickProfile_t2553330764  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTICKPROFILE_T2553330764_H
#ifndef GENERICANDROIDPROFILE_T2785164054_H
#define GENERICANDROIDPROFILE_T2785164054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.GenericAndroidProfile
struct  GenericAndroidProfile_t2785164054  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICANDROIDPROFILE_T2785164054_H
#ifndef GENERICBLACKBERRYPROFILE_T1317325872_H
#define GENERICBLACKBERRYPROFILE_T1317325872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.GenericBlackBerryProfile
struct  GenericBlackBerryProfile_t1317325872  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICBLACKBERRYPROFILE_T1317325872_H
#ifndef GENERICLINUXPROFILE_T1781490287_H
#define GENERICLINUXPROFILE_T1781490287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.GenericLinuxProfile
struct  GenericLinuxProfile_t1781490287  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICLINUXPROFILE_T1781490287_H
#ifndef GREENTHROTTLEATLASANDROIDPROFILE_T208930435_H
#define GREENTHROTTLEATLASANDROIDPROFILE_T208930435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.GreenThrottleAtlasAndroidProfile
struct  GreenThrottleAtlasAndroidProfile_t208930435  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GREENTHROTTLEATLASANDROIDPROFILE_T208930435_H
#ifndef HAMABLACKFORCEWINPROFILE_T3311380014_H
#define HAMABLACKFORCEWINPROFILE_T3311380014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.HamaBlackForceWinProfile
struct  HamaBlackForceWinProfile_t3311380014  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HAMABLACKFORCEWINPROFILE_T3311380014_H
#ifndef LOGITECHF310MODEDWINPROFILE_T1674061518_H
#define LOGITECHF310MODEDWINPROFILE_T1674061518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.LogitechF310ModeDWinProfile
struct  LogitechF310ModeDWinProfile_t1674061518  : public UnityInputDeviceProfile_t3356944389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGITECHF310MODEDWINPROFILE_T1674061518_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2400 = { sizeof (UnityKeyCodeAxisSource_t1535843908), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2400[2] = 
{
	UnityKeyCodeAxisSource_t1535843908::get_offset_of_NegativeKeyCode_0(),
	UnityKeyCodeAxisSource_t1535843908::get_offset_of_PositiveKeyCode_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2401 = { sizeof (UnityKeyCodeComboSource_t1951961814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2401[1] = 
{
	UnityKeyCodeComboSource_t1951961814::get_offset_of_KeyCodeList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2402 = { sizeof (UnityKeyCodeSource_t2879592556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2402[1] = 
{
	UnityKeyCodeSource_t2879592556::get_offset_of_KeyCodeList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2403 = { sizeof (UnityMouseAxisSource_t3674138238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2403[1] = 
{
	UnityMouseAxisSource_t3674138238::get_offset_of_MouseAxisQuery_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2404 = { sizeof (UnityMouseButtonSource_t2295933936), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2404[1] = 
{
	UnityMouseButtonSource_t2295933936::get_offset_of_ButtonId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2405 = { sizeof (CustomInputDeviceProfile_t3140671940), -1, sizeof(CustomInputDeviceProfile_t3140671940_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2405[6] = 
{
	CustomInputDeviceProfile_t3140671940_StaticFields::get_offset_of_MouseButton0_14(),
	CustomInputDeviceProfile_t3140671940_StaticFields::get_offset_of_MouseButton1_15(),
	CustomInputDeviceProfile_t3140671940_StaticFields::get_offset_of_MouseButton2_16(),
	CustomInputDeviceProfile_t3140671940_StaticFields::get_offset_of_MouseXAxis_17(),
	CustomInputDeviceProfile_t3140671940_StaticFields::get_offset_of_MouseYAxis_18(),
	CustomInputDeviceProfile_t3140671940_StaticFields::get_offset_of_MouseScrollWheel_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2406 = { sizeof (AirFloWiredPS3MacProfile_t2347494338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2407 = { sizeof (AirFloWiredPS3ProfileWin_t126333713), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2408 = { sizeof (AmazonFireTVProfile_t641530669), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2409 = { sizeof (AmazonFireTVRemoteProfile_t2755213202), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2410 = { sizeof (AndroidTVAmazonProfile_t3127467521), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2411 = { sizeof (AndroidTVProfile_t4262319905), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2412 = { sizeof (AndroidTVRemoteProfile_t660506948), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2413 = { sizeof (AppleMFiProfile_t1786062273), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2414 = { sizeof (AppleTVRemoteProfile_t3099313090), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2415 = { sizeof (AppleTVWirelessControllerProfile_t1715019857), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2416 = { sizeof (BeboncoolDA015CAAndroidProfile_t446642317), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2417 = { sizeof (BetopBTPAX1TAndroidProfile_t238921542), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2418 = { sizeof (BetopBTPGenericAndroidProfile_t1126015458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2419 = { sizeof (BuffaloClassicAmazonProfile_t3611194551), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2420 = { sizeof (BuffaloClassicMacProfile_t866044546), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2421 = { sizeof (BuffaloClassicWinProfile_t589188875), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2422 = { sizeof (DroidBoxPS3AndroidProfile_t1440355238), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2423 = { sizeof (DroidBoxXboxAndroidProfile_t3064937107), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2424 = { sizeof (EightBitdoFC30ProAndroidProfile_t2871080435), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2425 = { sizeof (EightBitdoNES30ProAndroidProfile_t2574820873), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2426 = { sizeof (EightBitdoNES30ProMacProfile_t463615800), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2427 = { sizeof (EightBitdoNES30ProWindowsProfile_t1875245158), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2428 = { sizeof (EightBitdoSFC30AndroidProfile_t3765043265), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2429 = { sizeof (EightBitdoSFC30MacProfile_t116303183), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2430 = { sizeof (EightBitdoSFC30WindowsProfile_t39707303), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2431 = { sizeof (EightBitdoSNES30AndroidProfile_t1083508262), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2432 = { sizeof (EightBitdoSNES30MacProfile_t598293590), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2433 = { sizeof (EightBitdoSNES30WindowsProfile_t611180648), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2434 = { sizeof (ExecutionerXProfile_t2018384114), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2435 = { sizeof (FixXBG301AndroidProfile_t4078430048), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2436 = { sizeof (FlareAndroidProfile_t2874683408), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2437 = { sizeof (GameCubeMayflashWinProfile_t2543785748), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2438 = { sizeof (GameCubeWinProfile_t212067569), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2439 = { sizeof (GameSirG3sAndroidProfile_t2843989703), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2440 = { sizeof (GameSirG3wAndroidProfile_t2750091393), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2441 = { sizeof (GameSirG4sAndroidProfile_t3199551386), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2442 = { sizeof (GameStickLinuxProfile_t2708704101), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2443 = { sizeof (GameStickProfile_t2553330764), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2444 = { sizeof (GenericAndroidProfile_t2785164054), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2445 = { sizeof (GenericBlackBerryProfile_t1317325872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2446 = { sizeof (GenericLinuxProfile_t1781490287), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2447 = { sizeof (GreenThrottleAtlasAndroidProfile_t208930435), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2448 = { sizeof (HamaBlackForceWinProfile_t3311380014), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2449 = { sizeof (IpegaPG9023AndroidProfile_t3461311057), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2450 = { sizeof (IpegaPG9025AndroidProfile_t3461382803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2451 = { sizeof (LevelUpBlackHawkWinProfile_t2970082271), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2452 = { sizeof (LogitechF310LinuxProfile_t3019946380), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2453 = { sizeof (LogitechF310ModeDMacProfile_t3494856390), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2454 = { sizeof (LogitechF310ModeDWinProfile_t1674061518), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2455 = { sizeof (LogitechF310ModeXMacProfile_t3823270626), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2456 = { sizeof (LogitechF310ModeXWinProfile_t2002475754), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2457 = { sizeof (LogitechF510LinuxProfile_t2154701790), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2458 = { sizeof (LogitechF510ModeDMacProfile_t2710338811), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2459 = { sizeof (LogitechF510ModeDWinProfile_t265379075), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2460 = { sizeof (LogitechF510ModeXMacProfile_t1173879311), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2461 = { sizeof (LogitechF510ModeXWinProfile_t3023886871), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2462 = { sizeof (LogitechF710LinuxProfile_t1396941506), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2463 = { sizeof (LogitechF710MacProfile_t619290460), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2464 = { sizeof (LogitechF710ModeDWinProfile_t668846424), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2465 = { sizeof (LogitechF710ModeXWinProfile_t3806697588), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2466 = { sizeof (LogitechModeDAmazonProfile_t3611442370), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2467 = { sizeof (LogitechModeXAmazonProfile_t2213445766), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2468 = { sizeof (LogitechWingManWinProfile_t2013890869), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2469 = { sizeof (MadCatzCTRLRAmazonProfile_t155536728), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2470 = { sizeof (MadCatzCTRLRAndroidProfile_t3186756963), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2471 = { sizeof (MadCatzMicroCTRLRAmazonProfile_t1245828716), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2472 = { sizeof (MaxFireBlaze5Profile_t1412431509), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2473 = { sizeof (MogaHeroPowerAndroidProfile_t2911998599), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2474 = { sizeof (MogaProAndroidProfile_t3589760169), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2475 = { sizeof (MogaProLinuxProfile_t3685637074), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2476 = { sizeof (MogaProMacProfile_t2140197206), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2477 = { sizeof (MogaProPowerAndroidProfile_t2476743942), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2478 = { sizeof (MogaProWinProfile_t3912741854), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2479 = { sizeof (NatecGenesisP44Profile_t3858843810), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2480 = { sizeof (NexusPlayerMacProfile_t3322376911), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2481 = { sizeof (NexusPlayerProfile_t300700291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2482 = { sizeof (NexusPlayerRemoteProfile_t4211476022), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2483 = { sizeof (NexusPlayerWinProfile_t423550727), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2484 = { sizeof (NVidiaShield2016AndroidProfile_t2262321597), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2485 = { sizeof (NVidiaShield2017AndroidProfile_t45566397), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2486 = { sizeof (NVidiaShieldWin10Profile_t818366377), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2487 = { sizeof (NVidiaShieldWinProfile_t1670138565), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2488 = { sizeof (NykoPlayPadProAmazonProfile_t472872046), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2489 = { sizeof (OuyaAmazonProfile_t2891658103), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2490 = { sizeof (OuyaLinuxProfile_t3394651750), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2491 = { sizeof (OuyaWinProfile_t3157348473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2492 = { sizeof (PlayStation2WinProfile_t205802045), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2493 = { sizeof (PlayStation3AndroidProfile_t3325347833), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2494 = { sizeof (PlayStation3BWinProfile_t3936212141), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2495 = { sizeof (PlayStation3LinuxProfile_t2387914304), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2496 = { sizeof (PlayStation3MacProfile_t734590322), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2497 = { sizeof (PlayStation3ShenghicWinProfile_t3873632645), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2498 = { sizeof (PlayStation3WinProfile_t561465917), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2499 = { sizeof (PlayStation4AmazonProfile_t3079794094), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
