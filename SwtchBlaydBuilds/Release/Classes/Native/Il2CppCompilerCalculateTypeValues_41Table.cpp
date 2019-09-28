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


// InControl.InputControl
struct InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E;
// InControl.InputControlMapping[]
struct InputControlMappingU5BU5D_t13401F4D23F07C5BC17834E33BE3B306E9C10DA3;
// InControl.InputControlSource
struct InputControlSource_tF2A9C980214074F57E56AA735EE1494FB1D5CA99;
// InControl.InputControl[]
struct InputControlU5BU5D_t3549264F00BCACC4F946A39DCF87FC3E87533022;
// InControl.InputDevice/AnalogSnapshotEntry[]
struct AnalogSnapshotEntryU5BU5D_t8A0741C1D56C051D40361E693DF2FF7156D23B34;
// InControl.NativeInputDeviceMatcher[]
struct NativeInputDeviceMatcherU5BU5D_tEF1AF14242A1C615BB43A2F1238AFCD8E0CF2664;
// InControl.TwoAxisInputControl
struct TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75;
// InControl.UnityInputDeviceProfileBase
struct UnityInputDeviceProfileBase_t0D6E446BB55E4495CED53E2842FDB5E2B6A268C6;
// System.Action`1<InControl.InputDevice>
struct Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t0AADC413B8AE37E5F22243315AD1388C97139717;
// System.Collections.Generic.List`1<InControl.InputControl>
struct List_1_t91B4DEDBC8AB9AD25EB8F8F9429CBF9691BBD3BC;
// System.Collections.Generic.List`1<InControl.InputDevice>
struct List_1_tC48B5DB051E11F71E68333C8905DDBC9BFAEFDFC;
// System.Collections.Generic.List`1<InControl.LogMessage>
struct List_1_t4951AD206F2BF89C06CA0FBB41B89CB1730E4FF2;
// System.Collections.Generic.List`1<InControl.UnityInputDeviceProfileBase>
struct List_1_tA230EC2D8AD5505EED9C590261055B2A481BA944;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputControl>
struct ReadOnlyCollection_1_tAFC125AF5C6A486D68F22E7D4A4419B5094175E0;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[0...,0...]
struct StringU5B0___U2C0___U5D_tE93164AE7893C771D8246C63F72E776F0207282B;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Font
struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26;
// UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;




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
#ifndef INPUTDEVICEMANAGER_T79047C64985C1DDD66C8B622AA5FECAB6A7AC54A_H
#define INPUTDEVICEMANAGER_T79047C64985C1DDD66C8B622AA5FECAB6A7AC54A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDeviceManager
struct  InputDeviceManager_t79047C64985C1DDD66C8B622AA5FECAB6A7AC54A  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<InControl.InputDevice> InControl.InputDeviceManager::devices
	List_1_tC48B5DB051E11F71E68333C8905DDBC9BFAEFDFC * ___devices_0;

public:
	inline static int32_t get_offset_of_devices_0() { return static_cast<int32_t>(offsetof(InputDeviceManager_t79047C64985C1DDD66C8B622AA5FECAB6A7AC54A, ___devices_0)); }
	inline List_1_tC48B5DB051E11F71E68333C8905DDBC9BFAEFDFC * get_devices_0() const { return ___devices_0; }
	inline List_1_tC48B5DB051E11F71E68333C8905DDBC9BFAEFDFC ** get_address_of_devices_0() { return &___devices_0; }
	inline void set_devices_0(List_1_tC48B5DB051E11F71E68333C8905DDBC9BFAEFDFC * value)
	{
		___devices_0 = value;
		Il2CppCodeGenWriteBarrier((&___devices_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTDEVICEMANAGER_T79047C64985C1DDD66C8B622AA5FECAB6A7AC54A_H
#ifndef CODEWRITER_T8298A436C703758B141D75CC2C8E837282550558_H
#define CODEWRITER_T8298A436C703758B141D75CC2C8E837282550558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Internal.CodeWriter
struct  CodeWriter_t8298A436C703758B141D75CC2C8E837282550558  : public RuntimeObject
{
public:
	// System.Int32 InControl.Internal.CodeWriter::indent
	int32_t ___indent_1;
	// System.Text.StringBuilder InControl.Internal.CodeWriter::stringBuilder
	StringBuilder_t * ___stringBuilder_2;

public:
	inline static int32_t get_offset_of_indent_1() { return static_cast<int32_t>(offsetof(CodeWriter_t8298A436C703758B141D75CC2C8E837282550558, ___indent_1)); }
	inline int32_t get_indent_1() const { return ___indent_1; }
	inline int32_t* get_address_of_indent_1() { return &___indent_1; }
	inline void set_indent_1(int32_t value)
	{
		___indent_1 = value;
	}

	inline static int32_t get_offset_of_stringBuilder_2() { return static_cast<int32_t>(offsetof(CodeWriter_t8298A436C703758B141D75CC2C8E837282550558, ___stringBuilder_2)); }
	inline StringBuilder_t * get_stringBuilder_2() const { return ___stringBuilder_2; }
	inline StringBuilder_t ** get_address_of_stringBuilder_2() { return &___stringBuilder_2; }
	inline void set_stringBuilder_2(StringBuilder_t * value)
	{
		___stringBuilder_2 = value;
		Il2CppCodeGenWriteBarrier((&___stringBuilder_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEWRITER_T8298A436C703758B141D75CC2C8E837282550558_H
#ifndef MARSHALUTILITY_T626CF434097CCF3570194E409E1CD82176E5570E_H
#define MARSHALUTILITY_T626CF434097CCF3570194E409E1CD82176E5570E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.MarshalUtility
struct  MarshalUtility_t626CF434097CCF3570194E409E1CD82176E5570E  : public RuntimeObject
{
public:

public:
};

struct MarshalUtility_t626CF434097CCF3570194E409E1CD82176E5570E_StaticFields
{
public:
	// System.Int32[] InControl.MarshalUtility::buffer
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buffer_0;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(MarshalUtility_t626CF434097CCF3570194E409E1CD82176E5570E_StaticFields, ___buffer_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buffer_0() const { return ___buffer_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALUTILITY_T626CF434097CCF3570194E409E1CD82176E5570E_H
#ifndef U3CU3EC_TE5D14339E4D58407B20461C71BA435FE9B74138A_H
#define U3CU3EC_TE5D14339E4D58407B20461C71BA435FE9B74138A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TestInputManager_<>c
struct  U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A_StaticFields
{
public:
	// InControl.TestInputManager_<>c InControl.TestInputManager_<>c::<>9
	U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A * ___U3CU3E9_0;
	// System.Action`1<InControl.InputDevice> InControl.TestInputManager_<>c::<>9__4_1
	Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 * ___U3CU3E9__4_1_1;
	// System.Action`1<InControl.InputDevice> InControl.TestInputManager_<>c::<>9__4_2
	Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 * ___U3CU3E9__4_2_2;
	// System.Action`1<InControl.InputDevice> InControl.TestInputManager_<>c::<>9__4_3
	Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 * ___U3CU3E9__4_3_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A_StaticFields, ___U3CU3E9__4_1_1)); }
	inline Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 * get_U3CU3E9__4_1_1() const { return ___U3CU3E9__4_1_1; }
	inline Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 ** get_address_of_U3CU3E9__4_1_1() { return &___U3CU3E9__4_1_1; }
	inline void set_U3CU3E9__4_1_1(Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 * value)
	{
		___U3CU3E9__4_1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__4_1_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_2_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A_StaticFields, ___U3CU3E9__4_2_2)); }
	inline Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 * get_U3CU3E9__4_2_2() const { return ___U3CU3E9__4_2_2; }
	inline Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 ** get_address_of_U3CU3E9__4_2_2() { return &___U3CU3E9__4_2_2; }
	inline void set_U3CU3E9__4_2_2(Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 * value)
	{
		___U3CU3E9__4_2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__4_2_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_3_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A_StaticFields, ___U3CU3E9__4_3_3)); }
	inline Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 * get_U3CU3E9__4_3_3() const { return ___U3CU3E9__4_3_3; }
	inline Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 ** get_address_of_U3CU3E9__4_3_3() { return &___U3CU3E9__4_3_3; }
	inline void set_U3CU3E9__4_3_3(Action_1_t50E3408D3B7A8BAE1D8999509BD578E4D8A01719 * value)
	{
		___U3CU3E9__4_3_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__4_3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_TE5D14339E4D58407B20461C71BA435FE9B74138A_H
#ifndef U3CU3EC__DISPLAYCLASS21_0_T6C589DAE8D37BE1B5999DDB829A3475AF72D6172_H
#define U3CU3EC__DISPLAYCLASS21_0_T6C589DAE8D37BE1B5999DDB829A3475AF72D6172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDeviceManager_<>c__DisplayClass21_0
struct  U3CU3Ec__DisplayClass21_0_t6C589DAE8D37BE1B5999DDB829A3475AF72D6172  : public RuntimeObject
{
public:
	// System.String InControl.UnityInputDeviceManager_<>c__DisplayClass21_0::unityJoystickName
	String_t* ___unityJoystickName_0;

public:
	inline static int32_t get_offset_of_unityJoystickName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t6C589DAE8D37BE1B5999DDB829A3475AF72D6172, ___unityJoystickName_0)); }
	inline String_t* get_unityJoystickName_0() const { return ___unityJoystickName_0; }
	inline String_t** get_address_of_unityJoystickName_0() { return &___unityJoystickName_0; }
	inline void set_unityJoystickName_0(String_t* value)
	{
		___unityJoystickName_0 = value;
		Il2CppCodeGenWriteBarrier((&___unityJoystickName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS21_0_T6C589DAE8D37BE1B5999DDB829A3475AF72D6172_H
#ifndef UTILITY_T305955C60DA21A14A6D7B8B122194EC92F3A2B20_H
#define UTILITY_T305955C60DA21A14A6D7B8B122194EC92F3A2B20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Utility
struct  Utility_t305955C60DA21A14A6D7B8B122194EC92F3A2B20  : public RuntimeObject
{
public:

public:
};

struct Utility_t305955C60DA21A14A6D7B8B122194EC92F3A2B20_StaticFields
{
public:
	// UnityEngine.Vector2[] InControl.Utility::circleVertexList
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___circleVertexList_1;

public:
	inline static int32_t get_offset_of_circleVertexList_1() { return static_cast<int32_t>(offsetof(Utility_t305955C60DA21A14A6D7B8B122194EC92F3A2B20_StaticFields, ___circleVertexList_1)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_circleVertexList_1() const { return ___circleVertexList_1; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_circleVertexList_1() { return &___circleVertexList_1; }
	inline void set_circleVertexList_1(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___circleVertexList_1 = value;
		Il2CppCodeGenWriteBarrier((&___circleVertexList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILITY_T305955C60DA21A14A6D7B8B122194EC92F3A2B20_H
#ifndef ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#define ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef AUTODISCOVER_T6FC3326255DC60D56A0931871A68CFEFB34D2D12_H
#define AUTODISCOVER_T6FC3326255DC60D56A0931871A68CFEFB34D2D12_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.AutoDiscover
struct  AutoDiscover_t6FC3326255DC60D56A0931871A68CFEFB34D2D12  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTODISCOVER_T6FC3326255DC60D56A0931871A68CFEFB34D2D12_H
#ifndef SINGLETONPREFABATTRIBUTE_TB86D9728B6F278A2DEE994E0FEEC4926E4D0442A_H
#define SINGLETONPREFABATTRIBUTE_TB86D9728B6F278A2DEE994E0FEEC4926E4D0442A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SingletonPrefabAttribute
struct  SingletonPrefabAttribute_tB86D9728B6F278A2DEE994E0FEEC4926E4D0442A  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String InControl.SingletonPrefabAttribute::Name
	String_t* ___Name_0;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(SingletonPrefabAttribute_tB86D9728B6F278A2DEE994E0FEEC4926E4D0442A, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETONPREFABATTRIBUTE_TB86D9728B6F278A2DEE994E0FEEC4926E4D0442A_H
#ifndef UNITYINPUTDEVICEMANAGER_TE7EC7845156F9889D707E1561ADA411476754539_H
#define UNITYINPUTDEVICEMANAGER_TE7EC7845156F9889D707E1561ADA411476754539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDeviceManager
struct  UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539  : public InputDeviceManager_t79047C64985C1DDD66C8B622AA5FECAB6A7AC54A
{
public:
	// System.Single InControl.UnityInputDeviceManager::deviceRefreshTimer
	float ___deviceRefreshTimer_2;
	// System.Collections.Generic.List`1<InControl.UnityInputDeviceProfileBase> InControl.UnityInputDeviceManager::systemDeviceProfiles
	List_1_tA230EC2D8AD5505EED9C590261055B2A481BA944 * ___systemDeviceProfiles_3;
	// System.Collections.Generic.List`1<InControl.UnityInputDeviceProfileBase> InControl.UnityInputDeviceManager::customDeviceProfiles
	List_1_tA230EC2D8AD5505EED9C590261055B2A481BA944 * ___customDeviceProfiles_4;
	// System.String[] InControl.UnityInputDeviceManager::joystickNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___joystickNames_5;
	// System.Int32 InControl.UnityInputDeviceManager::lastJoystickCount
	int32_t ___lastJoystickCount_6;
	// System.Int32 InControl.UnityInputDeviceManager::lastJoystickHash
	int32_t ___lastJoystickHash_7;
	// System.Int32 InControl.UnityInputDeviceManager::joystickCount
	int32_t ___joystickCount_8;
	// System.Int32 InControl.UnityInputDeviceManager::joystickHash
	int32_t ___joystickHash_9;

public:
	inline static int32_t get_offset_of_deviceRefreshTimer_2() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539, ___deviceRefreshTimer_2)); }
	inline float get_deviceRefreshTimer_2() const { return ___deviceRefreshTimer_2; }
	inline float* get_address_of_deviceRefreshTimer_2() { return &___deviceRefreshTimer_2; }
	inline void set_deviceRefreshTimer_2(float value)
	{
		___deviceRefreshTimer_2 = value;
	}

	inline static int32_t get_offset_of_systemDeviceProfiles_3() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539, ___systemDeviceProfiles_3)); }
	inline List_1_tA230EC2D8AD5505EED9C590261055B2A481BA944 * get_systemDeviceProfiles_3() const { return ___systemDeviceProfiles_3; }
	inline List_1_tA230EC2D8AD5505EED9C590261055B2A481BA944 ** get_address_of_systemDeviceProfiles_3() { return &___systemDeviceProfiles_3; }
	inline void set_systemDeviceProfiles_3(List_1_tA230EC2D8AD5505EED9C590261055B2A481BA944 * value)
	{
		___systemDeviceProfiles_3 = value;
		Il2CppCodeGenWriteBarrier((&___systemDeviceProfiles_3), value);
	}

	inline static int32_t get_offset_of_customDeviceProfiles_4() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539, ___customDeviceProfiles_4)); }
	inline List_1_tA230EC2D8AD5505EED9C590261055B2A481BA944 * get_customDeviceProfiles_4() const { return ___customDeviceProfiles_4; }
	inline List_1_tA230EC2D8AD5505EED9C590261055B2A481BA944 ** get_address_of_customDeviceProfiles_4() { return &___customDeviceProfiles_4; }
	inline void set_customDeviceProfiles_4(List_1_tA230EC2D8AD5505EED9C590261055B2A481BA944 * value)
	{
		___customDeviceProfiles_4 = value;
		Il2CppCodeGenWriteBarrier((&___customDeviceProfiles_4), value);
	}

	inline static int32_t get_offset_of_joystickNames_5() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539, ___joystickNames_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_joystickNames_5() const { return ___joystickNames_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_joystickNames_5() { return &___joystickNames_5; }
	inline void set_joystickNames_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___joystickNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___joystickNames_5), value);
	}

	inline static int32_t get_offset_of_lastJoystickCount_6() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539, ___lastJoystickCount_6)); }
	inline int32_t get_lastJoystickCount_6() const { return ___lastJoystickCount_6; }
	inline int32_t* get_address_of_lastJoystickCount_6() { return &___lastJoystickCount_6; }
	inline void set_lastJoystickCount_6(int32_t value)
	{
		___lastJoystickCount_6 = value;
	}

	inline static int32_t get_offset_of_lastJoystickHash_7() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539, ___lastJoystickHash_7)); }
	inline int32_t get_lastJoystickHash_7() const { return ___lastJoystickHash_7; }
	inline int32_t* get_address_of_lastJoystickHash_7() { return &___lastJoystickHash_7; }
	inline void set_lastJoystickHash_7(int32_t value)
	{
		___lastJoystickHash_7 = value;
	}

	inline static int32_t get_offset_of_joystickCount_8() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539, ___joystickCount_8)); }
	inline int32_t get_joystickCount_8() const { return ___joystickCount_8; }
	inline int32_t* get_address_of_joystickCount_8() { return &___joystickCount_8; }
	inline void set_joystickCount_8(int32_t value)
	{
		___joystickCount_8 = value;
	}

	inline static int32_t get_offset_of_joystickHash_9() { return static_cast<int32_t>(offsetof(UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539, ___joystickHash_9)); }
	inline int32_t get_joystickHash_9() const { return ___joystickHash_9; }
	inline int32_t* get_address_of_joystickHash_9() { return &___joystickHash_9; }
	inline void set_joystickHash_9(int32_t value)
	{
		___joystickHash_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYINPUTDEVICEMANAGER_TE7EC7845156F9889D707E1561ADA411476754539_H
#ifndef VERSIONINFO_TA70ED30EB2EF7A63C1080C1D382B1FF37E13376C_H
#define VERSIONINFO_TA70ED30EB2EF7A63C1080C1D382B1FF37E13376C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.VersionInfo
struct  VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C 
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
	inline static int32_t get_offset_of_Major_0() { return static_cast<int32_t>(offsetof(VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C, ___Major_0)); }
	inline int32_t get_Major_0() const { return ___Major_0; }
	inline int32_t* get_address_of_Major_0() { return &___Major_0; }
	inline void set_Major_0(int32_t value)
	{
		___Major_0 = value;
	}

	inline static int32_t get_offset_of_Minor_1() { return static_cast<int32_t>(offsetof(VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C, ___Minor_1)); }
	inline int32_t get_Minor_1() const { return ___Minor_1; }
	inline int32_t* get_address_of_Minor_1() { return &___Minor_1; }
	inline void set_Minor_1(int32_t value)
	{
		___Minor_1 = value;
	}

	inline static int32_t get_offset_of_Patch_2() { return static_cast<int32_t>(offsetof(VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C, ___Patch_2)); }
	inline int32_t get_Patch_2() const { return ___Patch_2; }
	inline int32_t* get_address_of_Patch_2() { return &___Patch_2; }
	inline void set_Patch_2(int32_t value)
	{
		___Patch_2 = value;
	}

	inline static int32_t get_offset_of_Build_3() { return static_cast<int32_t>(offsetof(VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C, ___Build_3)); }
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
#endif // VERSIONINFO_TA70ED30EB2EF7A63C1080C1D382B1FF37E13376C_H
#ifndef XBOXONEINPUTDEVICEMANAGER_T8021F7FB4338CDF57C964715BAF6DB1412059B41_H
#define XBOXONEINPUTDEVICEMANAGER_T8021F7FB4338CDF57C964715BAF6DB1412059B41_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XboxOneInputDeviceManager
struct  XboxOneInputDeviceManager_t8021F7FB4338CDF57C964715BAF6DB1412059B41  : public InputDeviceManager_t79047C64985C1DDD66C8B622AA5FECAB6A7AC54A
{
public:
	// System.Boolean[] InControl.XboxOneInputDeviceManager::deviceConnected
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___deviceConnected_2;

public:
	inline static int32_t get_offset_of_deviceConnected_2() { return static_cast<int32_t>(offsetof(XboxOneInputDeviceManager_t8021F7FB4338CDF57C964715BAF6DB1412059B41, ___deviceConnected_2)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get_deviceConnected_2() const { return ___deviceConnected_2; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of_deviceConnected_2() { return &___deviceConnected_2; }
	inline void set_deviceConnected_2(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		___deviceConnected_2 = value;
		Il2CppCodeGenWriteBarrier((&___deviceConnected_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXONEINPUTDEVICEMANAGER_T8021F7FB4338CDF57C964715BAF6DB1412059B41_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INPUTDEVICECLASS_T637766789B9631472D4AC0180ED2167877F007E8_H
#define INPUTDEVICECLASS_T637766789B9631472D4AC0180ED2167877F007E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDeviceClass
struct  InputDeviceClass_t637766789B9631472D4AC0180ED2167877F007E8 
{
public:
	// System.Int32 InControl.InputDeviceClass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceClass_t637766789B9631472D4AC0180ED2167877F007E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTDEVICECLASS_T637766789B9631472D4AC0180ED2167877F007E8_H
#ifndef INPUTDEVICESTYLE_T0DC0207185A79F9B50AD1325FD7C1B85F708C1AB_H
#define INPUTDEVICESTYLE_T0DC0207185A79F9B50AD1325FD7C1B85F708C1AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDeviceStyle
struct  InputDeviceStyle_t0DC0207185A79F9B50AD1325FD7C1B85F708C1AB 
{
public:
	// System.Int32 InControl.InputDeviceStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceStyle_t0DC0207185A79F9B50AD1325FD7C1B85F708C1AB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTDEVICESTYLE_T0DC0207185A79F9B50AD1325FD7C1B85F708C1AB_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef INPUTDEVICE_T48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74_H
#define INPUTDEVICE_T48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDevice
struct  InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74  : public RuntimeObject
{
public:
	// System.String InControl.InputDevice::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String InControl.InputDevice::<Meta>k__BackingField
	String_t* ___U3CMetaU3Ek__BackingField_2;
	// System.Int32 InControl.InputDevice::<SortOrder>k__BackingField
	int32_t ___U3CSortOrderU3Ek__BackingField_3;
	// InControl.InputDeviceClass InControl.InputDevice::<DeviceClass>k__BackingField
	int32_t ___U3CDeviceClassU3Ek__BackingField_4;
	// InControl.InputDeviceStyle InControl.InputDevice::<DeviceStyle>k__BackingField
	int32_t ___U3CDeviceStyleU3Ek__BackingField_5;
	// System.Guid InControl.InputDevice::<GUID>k__BackingField
	Guid_t  ___U3CGUIDU3Ek__BackingField_6;
	// System.UInt64 InControl.InputDevice::<LastChangeTick>k__BackingField
	uint64_t ___U3CLastChangeTickU3Ek__BackingField_7;
	// System.Boolean InControl.InputDevice::<IsAttached>k__BackingField
	bool ___U3CIsAttachedU3Ek__BackingField_8;
	// System.Boolean InControl.InputDevice::<RawSticks>k__BackingField
	bool ___U3CRawSticksU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<InControl.InputControl> InControl.InputDevice::controls
	List_1_t91B4DEDBC8AB9AD25EB8F8F9429CBF9691BBD3BC * ___controls_10;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputControl> InControl.InputDevice::<Controls>k__BackingField
	ReadOnlyCollection_1_tAFC125AF5C6A486D68F22E7D4A4419B5094175E0 * ___U3CControlsU3Ek__BackingField_11;
	// InControl.InputControl[] InControl.InputDevice::<ControlsByTarget>k__BackingField
	InputControlU5BU5D_t3549264F00BCACC4F946A39DCF87FC3E87533022* ___U3CControlsByTargetU3Ek__BackingField_12;
	// InControl.TwoAxisInputControl InControl.InputDevice::<LeftStick>k__BackingField
	TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 * ___U3CLeftStickU3Ek__BackingField_13;
	// InControl.TwoAxisInputControl InControl.InputDevice::<RightStick>k__BackingField
	TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 * ___U3CRightStickU3Ek__BackingField_14;
	// InControl.TwoAxisInputControl InControl.InputDevice::<DPad>k__BackingField
	TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 * ___U3CDPadU3Ek__BackingField_15;
	// System.Boolean InControl.InputDevice::Passive
	bool ___Passive_16;
	// InControl.InputDevice_AnalogSnapshotEntry[] InControl.InputDevice::<AnalogSnapshot>k__BackingField
	AnalogSnapshotEntryU5BU5D_t8A0741C1D56C051D40361E693DF2FF7156D23B34* ___U3CAnalogSnapshotU3Ek__BackingField_17;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickUp
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedLeftStickUp_18;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickDown
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedLeftStickDown_19;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickLeft
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedLeftStickLeft_20;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickRight
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedLeftStickRight_21;
	// InControl.InputControl InControl.InputDevice::cachedRightStickUp
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedRightStickUp_22;
	// InControl.InputControl InControl.InputDevice::cachedRightStickDown
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedRightStickDown_23;
	// InControl.InputControl InControl.InputDevice::cachedRightStickLeft
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedRightStickLeft_24;
	// InControl.InputControl InControl.InputDevice::cachedRightStickRight
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedRightStickRight_25;
	// InControl.InputControl InControl.InputDevice::cachedDPadUp
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedDPadUp_26;
	// InControl.InputControl InControl.InputDevice::cachedDPadDown
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedDPadDown_27;
	// InControl.InputControl InControl.InputDevice::cachedDPadLeft
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedDPadLeft_28;
	// InControl.InputControl InControl.InputDevice::cachedDPadRight
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedDPadRight_29;
	// InControl.InputControl InControl.InputDevice::cachedAction1
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedAction1_30;
	// InControl.InputControl InControl.InputDevice::cachedAction2
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedAction2_31;
	// InControl.InputControl InControl.InputDevice::cachedAction3
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedAction3_32;
	// InControl.InputControl InControl.InputDevice::cachedAction4
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedAction4_33;
	// InControl.InputControl InControl.InputDevice::cachedLeftTrigger
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedLeftTrigger_34;
	// InControl.InputControl InControl.InputDevice::cachedRightTrigger
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedRightTrigger_35;
	// InControl.InputControl InControl.InputDevice::cachedLeftBumper
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedLeftBumper_36;
	// InControl.InputControl InControl.InputDevice::cachedRightBumper
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedRightBumper_37;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickButton
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedLeftStickButton_38;
	// InControl.InputControl InControl.InputDevice::cachedRightStickButton
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedRightStickButton_39;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickX
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedLeftStickX_40;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickY
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedLeftStickY_41;
	// InControl.InputControl InControl.InputDevice::cachedRightStickX
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedRightStickX_42;
	// InControl.InputControl InControl.InputDevice::cachedRightStickY
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedRightStickY_43;
	// InControl.InputControl InControl.InputDevice::cachedDPadX
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedDPadX_44;
	// InControl.InputControl InControl.InputDevice::cachedDPadY
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedDPadY_45;
	// InControl.InputControl InControl.InputDevice::cachedCommand
	InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * ___cachedCommand_46;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CMetaU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CMetaU3Ek__BackingField_2)); }
	inline String_t* get_U3CMetaU3Ek__BackingField_2() const { return ___U3CMetaU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMetaU3Ek__BackingField_2() { return &___U3CMetaU3Ek__BackingField_2; }
	inline void set_U3CMetaU3Ek__BackingField_2(String_t* value)
	{
		___U3CMetaU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMetaU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CSortOrderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CSortOrderU3Ek__BackingField_3)); }
	inline int32_t get_U3CSortOrderU3Ek__BackingField_3() const { return ___U3CSortOrderU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSortOrderU3Ek__BackingField_3() { return &___U3CSortOrderU3Ek__BackingField_3; }
	inline void set_U3CSortOrderU3Ek__BackingField_3(int32_t value)
	{
		___U3CSortOrderU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceClassU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CDeviceClassU3Ek__BackingField_4)); }
	inline int32_t get_U3CDeviceClassU3Ek__BackingField_4() const { return ___U3CDeviceClassU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CDeviceClassU3Ek__BackingField_4() { return &___U3CDeviceClassU3Ek__BackingField_4; }
	inline void set_U3CDeviceClassU3Ek__BackingField_4(int32_t value)
	{
		___U3CDeviceClassU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceStyleU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CDeviceStyleU3Ek__BackingField_5)); }
	inline int32_t get_U3CDeviceStyleU3Ek__BackingField_5() const { return ___U3CDeviceStyleU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CDeviceStyleU3Ek__BackingField_5() { return &___U3CDeviceStyleU3Ek__BackingField_5; }
	inline void set_U3CDeviceStyleU3Ek__BackingField_5(int32_t value)
	{
		___U3CDeviceStyleU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGUIDU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CGUIDU3Ek__BackingField_6)); }
	inline Guid_t  get_U3CGUIDU3Ek__BackingField_6() const { return ___U3CGUIDU3Ek__BackingField_6; }
	inline Guid_t * get_address_of_U3CGUIDU3Ek__BackingField_6() { return &___U3CGUIDU3Ek__BackingField_6; }
	inline void set_U3CGUIDU3Ek__BackingField_6(Guid_t  value)
	{
		___U3CGUIDU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLastChangeTickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CLastChangeTickU3Ek__BackingField_7)); }
	inline uint64_t get_U3CLastChangeTickU3Ek__BackingField_7() const { return ___U3CLastChangeTickU3Ek__BackingField_7; }
	inline uint64_t* get_address_of_U3CLastChangeTickU3Ek__BackingField_7() { return &___U3CLastChangeTickU3Ek__BackingField_7; }
	inline void set_U3CLastChangeTickU3Ek__BackingField_7(uint64_t value)
	{
		___U3CLastChangeTickU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsAttachedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CIsAttachedU3Ek__BackingField_8)); }
	inline bool get_U3CIsAttachedU3Ek__BackingField_8() const { return ___U3CIsAttachedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsAttachedU3Ek__BackingField_8() { return &___U3CIsAttachedU3Ek__BackingField_8; }
	inline void set_U3CIsAttachedU3Ek__BackingField_8(bool value)
	{
		___U3CIsAttachedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CRawSticksU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CRawSticksU3Ek__BackingField_9)); }
	inline bool get_U3CRawSticksU3Ek__BackingField_9() const { return ___U3CRawSticksU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CRawSticksU3Ek__BackingField_9() { return &___U3CRawSticksU3Ek__BackingField_9; }
	inline void set_U3CRawSticksU3Ek__BackingField_9(bool value)
	{
		___U3CRawSticksU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_controls_10() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___controls_10)); }
	inline List_1_t91B4DEDBC8AB9AD25EB8F8F9429CBF9691BBD3BC * get_controls_10() const { return ___controls_10; }
	inline List_1_t91B4DEDBC8AB9AD25EB8F8F9429CBF9691BBD3BC ** get_address_of_controls_10() { return &___controls_10; }
	inline void set_controls_10(List_1_t91B4DEDBC8AB9AD25EB8F8F9429CBF9691BBD3BC * value)
	{
		___controls_10 = value;
		Il2CppCodeGenWriteBarrier((&___controls_10), value);
	}

	inline static int32_t get_offset_of_U3CControlsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CControlsU3Ek__BackingField_11)); }
	inline ReadOnlyCollection_1_tAFC125AF5C6A486D68F22E7D4A4419B5094175E0 * get_U3CControlsU3Ek__BackingField_11() const { return ___U3CControlsU3Ek__BackingField_11; }
	inline ReadOnlyCollection_1_tAFC125AF5C6A486D68F22E7D4A4419B5094175E0 ** get_address_of_U3CControlsU3Ek__BackingField_11() { return &___U3CControlsU3Ek__BackingField_11; }
	inline void set_U3CControlsU3Ek__BackingField_11(ReadOnlyCollection_1_tAFC125AF5C6A486D68F22E7D4A4419B5094175E0 * value)
	{
		___U3CControlsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CControlsU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CControlsByTargetU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CControlsByTargetU3Ek__BackingField_12)); }
	inline InputControlU5BU5D_t3549264F00BCACC4F946A39DCF87FC3E87533022* get_U3CControlsByTargetU3Ek__BackingField_12() const { return ___U3CControlsByTargetU3Ek__BackingField_12; }
	inline InputControlU5BU5D_t3549264F00BCACC4F946A39DCF87FC3E87533022** get_address_of_U3CControlsByTargetU3Ek__BackingField_12() { return &___U3CControlsByTargetU3Ek__BackingField_12; }
	inline void set_U3CControlsByTargetU3Ek__BackingField_12(InputControlU5BU5D_t3549264F00BCACC4F946A39DCF87FC3E87533022* value)
	{
		___U3CControlsByTargetU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CControlsByTargetU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CLeftStickU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CLeftStickU3Ek__BackingField_13)); }
	inline TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 * get_U3CLeftStickU3Ek__BackingField_13() const { return ___U3CLeftStickU3Ek__BackingField_13; }
	inline TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 ** get_address_of_U3CLeftStickU3Ek__BackingField_13() { return &___U3CLeftStickU3Ek__BackingField_13; }
	inline void set_U3CLeftStickU3Ek__BackingField_13(TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 * value)
	{
		___U3CLeftStickU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLeftStickU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CRightStickU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CRightStickU3Ek__BackingField_14)); }
	inline TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 * get_U3CRightStickU3Ek__BackingField_14() const { return ___U3CRightStickU3Ek__BackingField_14; }
	inline TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 ** get_address_of_U3CRightStickU3Ek__BackingField_14() { return &___U3CRightStickU3Ek__BackingField_14; }
	inline void set_U3CRightStickU3Ek__BackingField_14(TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 * value)
	{
		___U3CRightStickU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRightStickU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_U3CDPadU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CDPadU3Ek__BackingField_15)); }
	inline TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 * get_U3CDPadU3Ek__BackingField_15() const { return ___U3CDPadU3Ek__BackingField_15; }
	inline TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 ** get_address_of_U3CDPadU3Ek__BackingField_15() { return &___U3CDPadU3Ek__BackingField_15; }
	inline void set_U3CDPadU3Ek__BackingField_15(TwoAxisInputControl_tC6E7A18337B3E39CAD25B88FB389F5D57F442B75 * value)
	{
		___U3CDPadU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDPadU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_Passive_16() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___Passive_16)); }
	inline bool get_Passive_16() const { return ___Passive_16; }
	inline bool* get_address_of_Passive_16() { return &___Passive_16; }
	inline void set_Passive_16(bool value)
	{
		___Passive_16 = value;
	}

	inline static int32_t get_offset_of_U3CAnalogSnapshotU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___U3CAnalogSnapshotU3Ek__BackingField_17)); }
	inline AnalogSnapshotEntryU5BU5D_t8A0741C1D56C051D40361E693DF2FF7156D23B34* get_U3CAnalogSnapshotU3Ek__BackingField_17() const { return ___U3CAnalogSnapshotU3Ek__BackingField_17; }
	inline AnalogSnapshotEntryU5BU5D_t8A0741C1D56C051D40361E693DF2FF7156D23B34** get_address_of_U3CAnalogSnapshotU3Ek__BackingField_17() { return &___U3CAnalogSnapshotU3Ek__BackingField_17; }
	inline void set_U3CAnalogSnapshotU3Ek__BackingField_17(AnalogSnapshotEntryU5BU5D_t8A0741C1D56C051D40361E693DF2FF7156D23B34* value)
	{
		___U3CAnalogSnapshotU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAnalogSnapshotU3Ek__BackingField_17), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickUp_18() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedLeftStickUp_18)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedLeftStickUp_18() const { return ___cachedLeftStickUp_18; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedLeftStickUp_18() { return &___cachedLeftStickUp_18; }
	inline void set_cachedLeftStickUp_18(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedLeftStickUp_18 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickUp_18), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickDown_19() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedLeftStickDown_19)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedLeftStickDown_19() const { return ___cachedLeftStickDown_19; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedLeftStickDown_19() { return &___cachedLeftStickDown_19; }
	inline void set_cachedLeftStickDown_19(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedLeftStickDown_19 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickDown_19), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickLeft_20() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedLeftStickLeft_20)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedLeftStickLeft_20() const { return ___cachedLeftStickLeft_20; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedLeftStickLeft_20() { return &___cachedLeftStickLeft_20; }
	inline void set_cachedLeftStickLeft_20(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedLeftStickLeft_20 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickLeft_20), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickRight_21() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedLeftStickRight_21)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedLeftStickRight_21() const { return ___cachedLeftStickRight_21; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedLeftStickRight_21() { return &___cachedLeftStickRight_21; }
	inline void set_cachedLeftStickRight_21(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedLeftStickRight_21 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickRight_21), value);
	}

	inline static int32_t get_offset_of_cachedRightStickUp_22() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedRightStickUp_22)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedRightStickUp_22() const { return ___cachedRightStickUp_22; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedRightStickUp_22() { return &___cachedRightStickUp_22; }
	inline void set_cachedRightStickUp_22(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedRightStickUp_22 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickUp_22), value);
	}

	inline static int32_t get_offset_of_cachedRightStickDown_23() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedRightStickDown_23)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedRightStickDown_23() const { return ___cachedRightStickDown_23; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedRightStickDown_23() { return &___cachedRightStickDown_23; }
	inline void set_cachedRightStickDown_23(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedRightStickDown_23 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickDown_23), value);
	}

	inline static int32_t get_offset_of_cachedRightStickLeft_24() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedRightStickLeft_24)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedRightStickLeft_24() const { return ___cachedRightStickLeft_24; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedRightStickLeft_24() { return &___cachedRightStickLeft_24; }
	inline void set_cachedRightStickLeft_24(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedRightStickLeft_24 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickLeft_24), value);
	}

	inline static int32_t get_offset_of_cachedRightStickRight_25() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedRightStickRight_25)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedRightStickRight_25() const { return ___cachedRightStickRight_25; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedRightStickRight_25() { return &___cachedRightStickRight_25; }
	inline void set_cachedRightStickRight_25(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedRightStickRight_25 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickRight_25), value);
	}

	inline static int32_t get_offset_of_cachedDPadUp_26() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedDPadUp_26)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedDPadUp_26() const { return ___cachedDPadUp_26; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedDPadUp_26() { return &___cachedDPadUp_26; }
	inline void set_cachedDPadUp_26(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedDPadUp_26 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadUp_26), value);
	}

	inline static int32_t get_offset_of_cachedDPadDown_27() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedDPadDown_27)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedDPadDown_27() const { return ___cachedDPadDown_27; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedDPadDown_27() { return &___cachedDPadDown_27; }
	inline void set_cachedDPadDown_27(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedDPadDown_27 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadDown_27), value);
	}

	inline static int32_t get_offset_of_cachedDPadLeft_28() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedDPadLeft_28)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedDPadLeft_28() const { return ___cachedDPadLeft_28; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedDPadLeft_28() { return &___cachedDPadLeft_28; }
	inline void set_cachedDPadLeft_28(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedDPadLeft_28 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadLeft_28), value);
	}

	inline static int32_t get_offset_of_cachedDPadRight_29() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedDPadRight_29)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedDPadRight_29() const { return ___cachedDPadRight_29; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedDPadRight_29() { return &___cachedDPadRight_29; }
	inline void set_cachedDPadRight_29(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedDPadRight_29 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadRight_29), value);
	}

	inline static int32_t get_offset_of_cachedAction1_30() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedAction1_30)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedAction1_30() const { return ___cachedAction1_30; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedAction1_30() { return &___cachedAction1_30; }
	inline void set_cachedAction1_30(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedAction1_30 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAction1_30), value);
	}

	inline static int32_t get_offset_of_cachedAction2_31() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedAction2_31)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedAction2_31() const { return ___cachedAction2_31; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedAction2_31() { return &___cachedAction2_31; }
	inline void set_cachedAction2_31(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedAction2_31 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAction2_31), value);
	}

	inline static int32_t get_offset_of_cachedAction3_32() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedAction3_32)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedAction3_32() const { return ___cachedAction3_32; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedAction3_32() { return &___cachedAction3_32; }
	inline void set_cachedAction3_32(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedAction3_32 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAction3_32), value);
	}

	inline static int32_t get_offset_of_cachedAction4_33() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedAction4_33)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedAction4_33() const { return ___cachedAction4_33; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedAction4_33() { return &___cachedAction4_33; }
	inline void set_cachedAction4_33(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedAction4_33 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAction4_33), value);
	}

	inline static int32_t get_offset_of_cachedLeftTrigger_34() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedLeftTrigger_34)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedLeftTrigger_34() const { return ___cachedLeftTrigger_34; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedLeftTrigger_34() { return &___cachedLeftTrigger_34; }
	inline void set_cachedLeftTrigger_34(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedLeftTrigger_34 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftTrigger_34), value);
	}

	inline static int32_t get_offset_of_cachedRightTrigger_35() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedRightTrigger_35)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedRightTrigger_35() const { return ___cachedRightTrigger_35; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedRightTrigger_35() { return &___cachedRightTrigger_35; }
	inline void set_cachedRightTrigger_35(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedRightTrigger_35 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightTrigger_35), value);
	}

	inline static int32_t get_offset_of_cachedLeftBumper_36() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedLeftBumper_36)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedLeftBumper_36() const { return ___cachedLeftBumper_36; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedLeftBumper_36() { return &___cachedLeftBumper_36; }
	inline void set_cachedLeftBumper_36(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedLeftBumper_36 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftBumper_36), value);
	}

	inline static int32_t get_offset_of_cachedRightBumper_37() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedRightBumper_37)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedRightBumper_37() const { return ___cachedRightBumper_37; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedRightBumper_37() { return &___cachedRightBumper_37; }
	inline void set_cachedRightBumper_37(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedRightBumper_37 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightBumper_37), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickButton_38() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedLeftStickButton_38)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedLeftStickButton_38() const { return ___cachedLeftStickButton_38; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedLeftStickButton_38() { return &___cachedLeftStickButton_38; }
	inline void set_cachedLeftStickButton_38(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedLeftStickButton_38 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickButton_38), value);
	}

	inline static int32_t get_offset_of_cachedRightStickButton_39() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedRightStickButton_39)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedRightStickButton_39() const { return ___cachedRightStickButton_39; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedRightStickButton_39() { return &___cachedRightStickButton_39; }
	inline void set_cachedRightStickButton_39(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedRightStickButton_39 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickButton_39), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickX_40() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedLeftStickX_40)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedLeftStickX_40() const { return ___cachedLeftStickX_40; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedLeftStickX_40() { return &___cachedLeftStickX_40; }
	inline void set_cachedLeftStickX_40(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedLeftStickX_40 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickX_40), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickY_41() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedLeftStickY_41)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedLeftStickY_41() const { return ___cachedLeftStickY_41; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedLeftStickY_41() { return &___cachedLeftStickY_41; }
	inline void set_cachedLeftStickY_41(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedLeftStickY_41 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickY_41), value);
	}

	inline static int32_t get_offset_of_cachedRightStickX_42() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedRightStickX_42)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedRightStickX_42() const { return ___cachedRightStickX_42; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedRightStickX_42() { return &___cachedRightStickX_42; }
	inline void set_cachedRightStickX_42(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedRightStickX_42 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickX_42), value);
	}

	inline static int32_t get_offset_of_cachedRightStickY_43() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedRightStickY_43)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedRightStickY_43() const { return ___cachedRightStickY_43; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedRightStickY_43() { return &___cachedRightStickY_43; }
	inline void set_cachedRightStickY_43(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedRightStickY_43 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickY_43), value);
	}

	inline static int32_t get_offset_of_cachedDPadX_44() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedDPadX_44)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedDPadX_44() const { return ___cachedDPadX_44; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedDPadX_44() { return &___cachedDPadX_44; }
	inline void set_cachedDPadX_44(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedDPadX_44 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadX_44), value);
	}

	inline static int32_t get_offset_of_cachedDPadY_45() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedDPadY_45)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedDPadY_45() const { return ___cachedDPadY_45; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedDPadY_45() { return &___cachedDPadY_45; }
	inline void set_cachedDPadY_45(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedDPadY_45 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadY_45), value);
	}

	inline static int32_t get_offset_of_cachedCommand_46() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74, ___cachedCommand_46)); }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * get_cachedCommand_46() const { return ___cachedCommand_46; }
	inline InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E ** get_address_of_cachedCommand_46() { return &___cachedCommand_46; }
	inline void set_cachedCommand_46(InputControl_t71D5D4AD17C363506D67FC03EA866A5EC0F5C95E * value)
	{
		___cachedCommand_46 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCommand_46), value);
	}
};

struct InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74_StaticFields
{
public:
	// InControl.InputDevice InControl.InputDevice::Null
	InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74_StaticFields, ___Null_0)); }
	inline InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74 * get_Null_0() const { return ___Null_0; }
	inline InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTDEVICE_T48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74_H
#ifndef INPUTDEVICEPROFILE_TC7F7BAA5A059763330D847BB80F96626A465D870_H
#define INPUTDEVICEPROFILE_TC7F7BAA5A059763330D847BB80F96626A465D870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDeviceProfile
struct  InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870  : public RuntimeObject
{
public:
	// System.String InControl.InputDeviceProfile::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String InControl.InputDeviceProfile::<Meta>k__BackingField
	String_t* ___U3CMetaU3Ek__BackingField_1;
	// InControl.InputControlMapping[] InControl.InputDeviceProfile::<AnalogMappings>k__BackingField
	InputControlMappingU5BU5D_t13401F4D23F07C5BC17834E33BE3B306E9C10DA3* ___U3CAnalogMappingsU3Ek__BackingField_2;
	// InControl.InputControlMapping[] InControl.InputDeviceProfile::<ButtonMappings>k__BackingField
	InputControlMappingU5BU5D_t13401F4D23F07C5BC17834E33BE3B306E9C10DA3* ___U3CButtonMappingsU3Ek__BackingField_3;
	// System.String[] InControl.InputDeviceProfile::<IncludePlatforms>k__BackingField
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___U3CIncludePlatformsU3Ek__BackingField_4;
	// System.String[] InControl.InputDeviceProfile::<ExcludePlatforms>k__BackingField
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___U3CExcludePlatformsU3Ek__BackingField_5;
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
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CMetaU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___U3CMetaU3Ek__BackingField_1)); }
	inline String_t* get_U3CMetaU3Ek__BackingField_1() const { return ___U3CMetaU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMetaU3Ek__BackingField_1() { return &___U3CMetaU3Ek__BackingField_1; }
	inline void set_U3CMetaU3Ek__BackingField_1(String_t* value)
	{
		___U3CMetaU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMetaU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CAnalogMappingsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___U3CAnalogMappingsU3Ek__BackingField_2)); }
	inline InputControlMappingU5BU5D_t13401F4D23F07C5BC17834E33BE3B306E9C10DA3* get_U3CAnalogMappingsU3Ek__BackingField_2() const { return ___U3CAnalogMappingsU3Ek__BackingField_2; }
	inline InputControlMappingU5BU5D_t13401F4D23F07C5BC17834E33BE3B306E9C10DA3** get_address_of_U3CAnalogMappingsU3Ek__BackingField_2() { return &___U3CAnalogMappingsU3Ek__BackingField_2; }
	inline void set_U3CAnalogMappingsU3Ek__BackingField_2(InputControlMappingU5BU5D_t13401F4D23F07C5BC17834E33BE3B306E9C10DA3* value)
	{
		___U3CAnalogMappingsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAnalogMappingsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CButtonMappingsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___U3CButtonMappingsU3Ek__BackingField_3)); }
	inline InputControlMappingU5BU5D_t13401F4D23F07C5BC17834E33BE3B306E9C10DA3* get_U3CButtonMappingsU3Ek__BackingField_3() const { return ___U3CButtonMappingsU3Ek__BackingField_3; }
	inline InputControlMappingU5BU5D_t13401F4D23F07C5BC17834E33BE3B306E9C10DA3** get_address_of_U3CButtonMappingsU3Ek__BackingField_3() { return &___U3CButtonMappingsU3Ek__BackingField_3; }
	inline void set_U3CButtonMappingsU3Ek__BackingField_3(InputControlMappingU5BU5D_t13401F4D23F07C5BC17834E33BE3B306E9C10DA3* value)
	{
		___U3CButtonMappingsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CButtonMappingsU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CIncludePlatformsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___U3CIncludePlatformsU3Ek__BackingField_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_U3CIncludePlatformsU3Ek__BackingField_4() const { return ___U3CIncludePlatformsU3Ek__BackingField_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_U3CIncludePlatformsU3Ek__BackingField_4() { return &___U3CIncludePlatformsU3Ek__BackingField_4; }
	inline void set_U3CIncludePlatformsU3Ek__BackingField_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___U3CIncludePlatformsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIncludePlatformsU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CExcludePlatformsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___U3CExcludePlatformsU3Ek__BackingField_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_U3CExcludePlatformsU3Ek__BackingField_5() const { return ___U3CExcludePlatformsU3Ek__BackingField_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_U3CExcludePlatformsU3Ek__BackingField_5() { return &___U3CExcludePlatformsU3Ek__BackingField_5; }
	inline void set_U3CExcludePlatformsU3Ek__BackingField_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___U3CExcludePlatformsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CExcludePlatformsU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CMaxSystemBuildNumberU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___U3CMaxSystemBuildNumberU3Ek__BackingField_6)); }
	inline int32_t get_U3CMaxSystemBuildNumberU3Ek__BackingField_6() const { return ___U3CMaxSystemBuildNumberU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CMaxSystemBuildNumberU3Ek__BackingField_6() { return &___U3CMaxSystemBuildNumberU3Ek__BackingField_6; }
	inline void set_U3CMaxSystemBuildNumberU3Ek__BackingField_6(int32_t value)
	{
		___U3CMaxSystemBuildNumberU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CMinSystemBuildNumberU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___U3CMinSystemBuildNumberU3Ek__BackingField_7)); }
	inline int32_t get_U3CMinSystemBuildNumberU3Ek__BackingField_7() const { return ___U3CMinSystemBuildNumberU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CMinSystemBuildNumberU3Ek__BackingField_7() { return &___U3CMinSystemBuildNumberU3Ek__BackingField_7; }
	inline void set_U3CMinSystemBuildNumberU3Ek__BackingField_7(int32_t value)
	{
		___U3CMinSystemBuildNumberU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceClassU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___U3CDeviceClassU3Ek__BackingField_8)); }
	inline int32_t get_U3CDeviceClassU3Ek__BackingField_8() const { return ___U3CDeviceClassU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CDeviceClassU3Ek__BackingField_8() { return &___U3CDeviceClassU3Ek__BackingField_8; }
	inline void set_U3CDeviceClassU3Ek__BackingField_8(int32_t value)
	{
		___U3CDeviceClassU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceStyleU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___U3CDeviceStyleU3Ek__BackingField_9)); }
	inline int32_t get_U3CDeviceStyleU3Ek__BackingField_9() const { return ___U3CDeviceStyleU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CDeviceStyleU3Ek__BackingField_9() { return &___U3CDeviceStyleU3Ek__BackingField_9; }
	inline void set_U3CDeviceStyleU3Ek__BackingField_9(int32_t value)
	{
		___U3CDeviceStyleU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_sensitivity_11() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___sensitivity_11)); }
	inline float get_sensitivity_11() const { return ___sensitivity_11; }
	inline float* get_address_of_sensitivity_11() { return &___sensitivity_11; }
	inline void set_sensitivity_11(float value)
	{
		___sensitivity_11 = value;
	}

	inline static int32_t get_offset_of_lowerDeadZone_12() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___lowerDeadZone_12)); }
	inline float get_lowerDeadZone_12() const { return ___lowerDeadZone_12; }
	inline float* get_address_of_lowerDeadZone_12() { return &___lowerDeadZone_12; }
	inline void set_lowerDeadZone_12(float value)
	{
		___lowerDeadZone_12 = value;
	}

	inline static int32_t get_offset_of_upperDeadZone_13() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870, ___upperDeadZone_13)); }
	inline float get_upperDeadZone_13() const { return ___upperDeadZone_13; }
	inline float* get_address_of_upperDeadZone_13() { return &___upperDeadZone_13; }
	inline void set_upperDeadZone_13(float value)
	{
		___upperDeadZone_13 = value;
	}
};

struct InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.Type> InControl.InputDeviceProfile::hideList
	HashSet_1_t0AADC413B8AE37E5F22243315AD1388C97139717 * ___hideList_10;

public:
	inline static int32_t get_offset_of_hideList_10() { return static_cast<int32_t>(offsetof(InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870_StaticFields, ___hideList_10)); }
	inline HashSet_1_t0AADC413B8AE37E5F22243315AD1388C97139717 * get_hideList_10() const { return ___hideList_10; }
	inline HashSet_1_t0AADC413B8AE37E5F22243315AD1388C97139717 ** get_address_of_hideList_10() { return &___hideList_10; }
	inline void set_hideList_10(HashSet_1_t0AADC413B8AE37E5F22243315AD1388C97139717 * value)
	{
		___hideList_10 = value;
		Il2CppCodeGenWriteBarrier((&___hideList_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTDEVICEPROFILE_TC7F7BAA5A059763330D847BB80F96626A465D870_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef NATIVEINPUTDEVICEPROFILE_T06D248889783453C74E270EDA2D59D8AD5633115_H
#define NATIVEINPUTDEVICEPROFILE_T06D248889783453C74E270EDA2D59D8AD5633115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeInputDeviceProfile
struct  NativeInputDeviceProfile_t06D248889783453C74E270EDA2D59D8AD5633115  : public InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870
{
public:
	// InControl.NativeInputDeviceMatcher[] InControl.NativeInputDeviceProfile::Matchers
	NativeInputDeviceMatcherU5BU5D_tEF1AF14242A1C615BB43A2F1238AFCD8E0CF2664* ___Matchers_14;
	// InControl.NativeInputDeviceMatcher[] InControl.NativeInputDeviceProfile::LastResortMatchers
	NativeInputDeviceMatcherU5BU5D_tEF1AF14242A1C615BB43A2F1238AFCD8E0CF2664* ___LastResortMatchers_15;

public:
	inline static int32_t get_offset_of_Matchers_14() { return static_cast<int32_t>(offsetof(NativeInputDeviceProfile_t06D248889783453C74E270EDA2D59D8AD5633115, ___Matchers_14)); }
	inline NativeInputDeviceMatcherU5BU5D_tEF1AF14242A1C615BB43A2F1238AFCD8E0CF2664* get_Matchers_14() const { return ___Matchers_14; }
	inline NativeInputDeviceMatcherU5BU5D_tEF1AF14242A1C615BB43A2F1238AFCD8E0CF2664** get_address_of_Matchers_14() { return &___Matchers_14; }
	inline void set_Matchers_14(NativeInputDeviceMatcherU5BU5D_tEF1AF14242A1C615BB43A2F1238AFCD8E0CF2664* value)
	{
		___Matchers_14 = value;
		Il2CppCodeGenWriteBarrier((&___Matchers_14), value);
	}

	inline static int32_t get_offset_of_LastResortMatchers_15() { return static_cast<int32_t>(offsetof(NativeInputDeviceProfile_t06D248889783453C74E270EDA2D59D8AD5633115, ___LastResortMatchers_15)); }
	inline NativeInputDeviceMatcherU5BU5D_tEF1AF14242A1C615BB43A2F1238AFCD8E0CF2664* get_LastResortMatchers_15() const { return ___LastResortMatchers_15; }
	inline NativeInputDeviceMatcherU5BU5D_tEF1AF14242A1C615BB43A2F1238AFCD8E0CF2664** get_address_of_LastResortMatchers_15() { return &___LastResortMatchers_15; }
	inline void set_LastResortMatchers_15(NativeInputDeviceMatcherU5BU5D_tEF1AF14242A1C615BB43A2F1238AFCD8E0CF2664* value)
	{
		___LastResortMatchers_15 = value;
		Il2CppCodeGenWriteBarrier((&___LastResortMatchers_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEINPUTDEVICEPROFILE_T06D248889783453C74E270EDA2D59D8AD5633115_H
#ifndef UNITYINPUTDEVICE_T78DDD3F0366FDA2266720F37476DEECD1079C392_H
#define UNITYINPUTDEVICE_T78DDD3F0366FDA2266720F37476DEECD1079C392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDevice
struct  UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392  : public InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74
{
public:
	// System.Int32 InControl.UnityInputDevice::<JoystickId>k__BackingField
	int32_t ___U3CJoystickIdU3Ek__BackingField_52;
	// InControl.UnityInputDeviceProfileBase InControl.UnityInputDevice::profile
	UnityInputDeviceProfileBase_t0D6E446BB55E4495CED53E2842FDB5E2B6A268C6 * ___profile_53;

public:
	inline static int32_t get_offset_of_U3CJoystickIdU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392, ___U3CJoystickIdU3Ek__BackingField_52)); }
	inline int32_t get_U3CJoystickIdU3Ek__BackingField_52() const { return ___U3CJoystickIdU3Ek__BackingField_52; }
	inline int32_t* get_address_of_U3CJoystickIdU3Ek__BackingField_52() { return &___U3CJoystickIdU3Ek__BackingField_52; }
	inline void set_U3CJoystickIdU3Ek__BackingField_52(int32_t value)
	{
		___U3CJoystickIdU3Ek__BackingField_52 = value;
	}

	inline static int32_t get_offset_of_profile_53() { return static_cast<int32_t>(offsetof(UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392, ___profile_53)); }
	inline UnityInputDeviceProfileBase_t0D6E446BB55E4495CED53E2842FDB5E2B6A268C6 * get_profile_53() const { return ___profile_53; }
	inline UnityInputDeviceProfileBase_t0D6E446BB55E4495CED53E2842FDB5E2B6A268C6 ** get_address_of_profile_53() { return &___profile_53; }
	inline void set_profile_53(UnityInputDeviceProfileBase_t0D6E446BB55E4495CED53E2842FDB5E2B6A268C6 * value)
	{
		___profile_53 = value;
		Il2CppCodeGenWriteBarrier((&___profile_53), value);
	}
};

struct UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392_StaticFields
{
public:
	// System.String[0...,0...] InControl.UnityInputDevice::analogQueries
	StringU5B0___U2C0___U5D_tE93164AE7893C771D8246C63F72E776F0207282B* ___analogQueries_47;
	// System.String[0...,0...] InControl.UnityInputDevice::buttonQueries
	StringU5B0___U2C0___U5D_tE93164AE7893C771D8246C63F72E776F0207282B* ___buttonQueries_48;

public:
	inline static int32_t get_offset_of_analogQueries_47() { return static_cast<int32_t>(offsetof(UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392_StaticFields, ___analogQueries_47)); }
	inline StringU5B0___U2C0___U5D_tE93164AE7893C771D8246C63F72E776F0207282B* get_analogQueries_47() const { return ___analogQueries_47; }
	inline StringU5B0___U2C0___U5D_tE93164AE7893C771D8246C63F72E776F0207282B** get_address_of_analogQueries_47() { return &___analogQueries_47; }
	inline void set_analogQueries_47(StringU5B0___U2C0___U5D_tE93164AE7893C771D8246C63F72E776F0207282B* value)
	{
		___analogQueries_47 = value;
		Il2CppCodeGenWriteBarrier((&___analogQueries_47), value);
	}

	inline static int32_t get_offset_of_buttonQueries_48() { return static_cast<int32_t>(offsetof(UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392_StaticFields, ___buttonQueries_48)); }
	inline StringU5B0___U2C0___U5D_tE93164AE7893C771D8246C63F72E776F0207282B* get_buttonQueries_48() const { return ___buttonQueries_48; }
	inline StringU5B0___U2C0___U5D_tE93164AE7893C771D8246C63F72E776F0207282B** get_address_of_buttonQueries_48() { return &___buttonQueries_48; }
	inline void set_buttonQueries_48(StringU5B0___U2C0___U5D_tE93164AE7893C771D8246C63F72E776F0207282B* value)
	{
		___buttonQueries_48 = value;
		Il2CppCodeGenWriteBarrier((&___buttonQueries_48), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYINPUTDEVICE_T78DDD3F0366FDA2266720F37476DEECD1079C392_H
#ifndef UNITYINPUTDEVICEPROFILEBASE_T0D6E446BB55E4495CED53E2842FDB5E2B6A268C6_H
#define UNITYINPUTDEVICEPROFILEBASE_T0D6E446BB55E4495CED53E2842FDB5E2B6A268C6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDeviceProfileBase
struct  UnityInputDeviceProfileBase_t0D6E446BB55E4495CED53E2842FDB5E2B6A268C6  : public InputDeviceProfile_tC7F7BAA5A059763330D847BB80F96626A465D870
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYINPUTDEVICEPROFILEBASE_T0D6E446BB55E4495CED53E2842FDB5E2B6A268C6_H
#ifndef UNITYINPUTDEVICEPROFILELIST_T60D5216147D7CEE43F8FAB6EB215DB7FFC080A5C_H
#define UNITYINPUTDEVICEPROFILELIST_T60D5216147D7CEE43F8FAB6EB215DB7FFC080A5C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDeviceProfileList
struct  UnityInputDeviceProfileList_t60D5216147D7CEE43F8FAB6EB215DB7FFC080A5C  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};

struct UnityInputDeviceProfileList_t60D5216147D7CEE43F8FAB6EB215DB7FFC080A5C_StaticFields
{
public:
	// System.String[] InControl.UnityInputDeviceProfileList::Profiles
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___Profiles_4;

public:
	inline static int32_t get_offset_of_Profiles_4() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfileList_t60D5216147D7CEE43F8FAB6EB215DB7FFC080A5C_StaticFields, ___Profiles_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_Profiles_4() const { return ___Profiles_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_Profiles_4() { return &___Profiles_4; }
	inline void set_Profiles_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___Profiles_4 = value;
		Il2CppCodeGenWriteBarrier((&___Profiles_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYINPUTDEVICEPROFILELIST_T60D5216147D7CEE43F8FAB6EB215DB7FFC080A5C_H
#ifndef XBOXONEINPUTDEVICE_T9ABA9F56C5AC16D36243F5F0C888E2DB6B4E063C_H
#define XBOXONEINPUTDEVICE_T9ABA9F56C5AC16D36243F5F0C888E2DB6B4E063C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XboxOneInputDevice
struct  XboxOneInputDevice_t9ABA9F56C5AC16D36243F5F0C888E2DB6B4E063C  : public InputDevice_t48B7178F5E34571D6FCD8F0C9339BFB43ECF4A74
{
public:
	// System.UInt32 InControl.XboxOneInputDevice::<JoystickId>k__BackingField
	uint32_t ___U3CJoystickIdU3Ek__BackingField_55;
	// System.UInt64 InControl.XboxOneInputDevice::<ControllerId>k__BackingField
	uint64_t ___U3CControllerIdU3Ek__BackingField_56;
	// System.String[] InControl.XboxOneInputDevice::analogAxisNameForId
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___analogAxisNameForId_57;

public:
	inline static int32_t get_offset_of_U3CJoystickIdU3Ek__BackingField_55() { return static_cast<int32_t>(offsetof(XboxOneInputDevice_t9ABA9F56C5AC16D36243F5F0C888E2DB6B4E063C, ___U3CJoystickIdU3Ek__BackingField_55)); }
	inline uint32_t get_U3CJoystickIdU3Ek__BackingField_55() const { return ___U3CJoystickIdU3Ek__BackingField_55; }
	inline uint32_t* get_address_of_U3CJoystickIdU3Ek__BackingField_55() { return &___U3CJoystickIdU3Ek__BackingField_55; }
	inline void set_U3CJoystickIdU3Ek__BackingField_55(uint32_t value)
	{
		___U3CJoystickIdU3Ek__BackingField_55 = value;
	}

	inline static int32_t get_offset_of_U3CControllerIdU3Ek__BackingField_56() { return static_cast<int32_t>(offsetof(XboxOneInputDevice_t9ABA9F56C5AC16D36243F5F0C888E2DB6B4E063C, ___U3CControllerIdU3Ek__BackingField_56)); }
	inline uint64_t get_U3CControllerIdU3Ek__BackingField_56() const { return ___U3CControllerIdU3Ek__BackingField_56; }
	inline uint64_t* get_address_of_U3CControllerIdU3Ek__BackingField_56() { return &___U3CControllerIdU3Ek__BackingField_56; }
	inline void set_U3CControllerIdU3Ek__BackingField_56(uint64_t value)
	{
		___U3CControllerIdU3Ek__BackingField_56 = value;
	}

	inline static int32_t get_offset_of_analogAxisNameForId_57() { return static_cast<int32_t>(offsetof(XboxOneInputDevice_t9ABA9F56C5AC16D36243F5F0C888E2DB6B4E063C, ___analogAxisNameForId_57)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_analogAxisNameForId_57() const { return ___analogAxisNameForId_57; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_analogAxisNameForId_57() { return &___analogAxisNameForId_57; }
	inline void set_analogAxisNameForId_57(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___analogAxisNameForId_57 = value;
		Il2CppCodeGenWriteBarrier((&___analogAxisNameForId_57), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXONEINPUTDEVICE_T9ABA9F56C5AC16D36243F5F0C888E2DB6B4E063C_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef XBOX360DRIVERMACPROFILE_T85862366C30957580596EFE6E9B710CC994FE81A_H
#define XBOX360DRIVERMACPROFILE_T85862366C30957580596EFE6E9B710CC994FE81A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.Xbox360DriverMacProfile
struct  Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A  : public NativeInputDeviceProfile_t06D248889783453C74E270EDA2D59D8AD5633115
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOX360DRIVERMACPROFILE_T85862366C30957580596EFE6E9B710CC994FE81A_H
#ifndef XBOXONEDRIVERMACPROFILE_TC88EA9088EE3643F43477EE604994A419B5B19A6_H
#define XBOXONEDRIVERMACPROFILE_TC88EA9088EE3643F43477EE604994A419B5B19A6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.XboxOneDriverMacProfile
struct  XboxOneDriverMacProfile_tC88EA9088EE3643F43477EE604994A419B5B19A6  : public NativeInputDeviceProfile_t06D248889783453C74E270EDA2D59D8AD5633115
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXONEDRIVERMACPROFILE_TC88EA9088EE3643F43477EE604994A419B5B19A6_H
#ifndef UNITYINPUTDEVICEPROFILE_T46088AA65F1206F5214298038664CFF7EDECD80E_H
#define UNITYINPUTDEVICEPROFILE_T46088AA65F1206F5214298038664CFF7EDECD80E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDeviceProfile
struct  UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E  : public UnityInputDeviceProfileBase_t0D6E446BB55E4495CED53E2842FDB5E2B6A268C6
{
public:
	// System.String[] InControl.UnityInputDeviceProfile::JoystickNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___JoystickNames_14;
	// System.String[] InControl.UnityInputDeviceProfile::JoystickRegex
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___JoystickRegex_15;
	// System.String InControl.UnityInputDeviceProfile::LastResortRegex
	String_t* ___LastResortRegex_16;
	// InControl.VersionInfo InControl.UnityInputDeviceProfile::<MinUnityVersion>k__BackingField
	VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C  ___U3CMinUnityVersionU3Ek__BackingField_17;
	// InControl.VersionInfo InControl.UnityInputDeviceProfile::<MaxUnityVersion>k__BackingField
	VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C  ___U3CMaxUnityVersionU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_JoystickNames_14() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E, ___JoystickNames_14)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_JoystickNames_14() const { return ___JoystickNames_14; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_JoystickNames_14() { return &___JoystickNames_14; }
	inline void set_JoystickNames_14(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___JoystickNames_14 = value;
		Il2CppCodeGenWriteBarrier((&___JoystickNames_14), value);
	}

	inline static int32_t get_offset_of_JoystickRegex_15() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E, ___JoystickRegex_15)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_JoystickRegex_15() const { return ___JoystickRegex_15; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_JoystickRegex_15() { return &___JoystickRegex_15; }
	inline void set_JoystickRegex_15(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___JoystickRegex_15 = value;
		Il2CppCodeGenWriteBarrier((&___JoystickRegex_15), value);
	}

	inline static int32_t get_offset_of_LastResortRegex_16() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E, ___LastResortRegex_16)); }
	inline String_t* get_LastResortRegex_16() const { return ___LastResortRegex_16; }
	inline String_t** get_address_of_LastResortRegex_16() { return &___LastResortRegex_16; }
	inline void set_LastResortRegex_16(String_t* value)
	{
		___LastResortRegex_16 = value;
		Il2CppCodeGenWriteBarrier((&___LastResortRegex_16), value);
	}

	inline static int32_t get_offset_of_U3CMinUnityVersionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E, ___U3CMinUnityVersionU3Ek__BackingField_17)); }
	inline VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C  get_U3CMinUnityVersionU3Ek__BackingField_17() const { return ___U3CMinUnityVersionU3Ek__BackingField_17; }
	inline VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C * get_address_of_U3CMinUnityVersionU3Ek__BackingField_17() { return &___U3CMinUnityVersionU3Ek__BackingField_17; }
	inline void set_U3CMinUnityVersionU3Ek__BackingField_17(VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C  value)
	{
		___U3CMinUnityVersionU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CMaxUnityVersionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E, ___U3CMaxUnityVersionU3Ek__BackingField_18)); }
	inline VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C  get_U3CMaxUnityVersionU3Ek__BackingField_18() const { return ___U3CMaxUnityVersionU3Ek__BackingField_18; }
	inline VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C * get_address_of_U3CMaxUnityVersionU3Ek__BackingField_18() { return &___U3CMaxUnityVersionU3Ek__BackingField_18; }
	inline void set_U3CMaxUnityVersionU3Ek__BackingField_18(VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C  value)
	{
		___U3CMaxUnityVersionU3Ek__BackingField_18 = value;
	}
};

struct UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields
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
	inline static int32_t get_offset_of_Button0_19() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button0_19)); }
	inline RuntimeObject* get_Button0_19() const { return ___Button0_19; }
	inline RuntimeObject** get_address_of_Button0_19() { return &___Button0_19; }
	inline void set_Button0_19(RuntimeObject* value)
	{
		___Button0_19 = value;
		Il2CppCodeGenWriteBarrier((&___Button0_19), value);
	}

	inline static int32_t get_offset_of_Button1_20() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button1_20)); }
	inline RuntimeObject* get_Button1_20() const { return ___Button1_20; }
	inline RuntimeObject** get_address_of_Button1_20() { return &___Button1_20; }
	inline void set_Button1_20(RuntimeObject* value)
	{
		___Button1_20 = value;
		Il2CppCodeGenWriteBarrier((&___Button1_20), value);
	}

	inline static int32_t get_offset_of_Button2_21() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button2_21)); }
	inline RuntimeObject* get_Button2_21() const { return ___Button2_21; }
	inline RuntimeObject** get_address_of_Button2_21() { return &___Button2_21; }
	inline void set_Button2_21(RuntimeObject* value)
	{
		___Button2_21 = value;
		Il2CppCodeGenWriteBarrier((&___Button2_21), value);
	}

	inline static int32_t get_offset_of_Button3_22() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button3_22)); }
	inline RuntimeObject* get_Button3_22() const { return ___Button3_22; }
	inline RuntimeObject** get_address_of_Button3_22() { return &___Button3_22; }
	inline void set_Button3_22(RuntimeObject* value)
	{
		___Button3_22 = value;
		Il2CppCodeGenWriteBarrier((&___Button3_22), value);
	}

	inline static int32_t get_offset_of_Button4_23() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button4_23)); }
	inline RuntimeObject* get_Button4_23() const { return ___Button4_23; }
	inline RuntimeObject** get_address_of_Button4_23() { return &___Button4_23; }
	inline void set_Button4_23(RuntimeObject* value)
	{
		___Button4_23 = value;
		Il2CppCodeGenWriteBarrier((&___Button4_23), value);
	}

	inline static int32_t get_offset_of_Button5_24() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button5_24)); }
	inline RuntimeObject* get_Button5_24() const { return ___Button5_24; }
	inline RuntimeObject** get_address_of_Button5_24() { return &___Button5_24; }
	inline void set_Button5_24(RuntimeObject* value)
	{
		___Button5_24 = value;
		Il2CppCodeGenWriteBarrier((&___Button5_24), value);
	}

	inline static int32_t get_offset_of_Button6_25() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button6_25)); }
	inline RuntimeObject* get_Button6_25() const { return ___Button6_25; }
	inline RuntimeObject** get_address_of_Button6_25() { return &___Button6_25; }
	inline void set_Button6_25(RuntimeObject* value)
	{
		___Button6_25 = value;
		Il2CppCodeGenWriteBarrier((&___Button6_25), value);
	}

	inline static int32_t get_offset_of_Button7_26() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button7_26)); }
	inline RuntimeObject* get_Button7_26() const { return ___Button7_26; }
	inline RuntimeObject** get_address_of_Button7_26() { return &___Button7_26; }
	inline void set_Button7_26(RuntimeObject* value)
	{
		___Button7_26 = value;
		Il2CppCodeGenWriteBarrier((&___Button7_26), value);
	}

	inline static int32_t get_offset_of_Button8_27() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button8_27)); }
	inline RuntimeObject* get_Button8_27() const { return ___Button8_27; }
	inline RuntimeObject** get_address_of_Button8_27() { return &___Button8_27; }
	inline void set_Button8_27(RuntimeObject* value)
	{
		___Button8_27 = value;
		Il2CppCodeGenWriteBarrier((&___Button8_27), value);
	}

	inline static int32_t get_offset_of_Button9_28() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button9_28)); }
	inline RuntimeObject* get_Button9_28() const { return ___Button9_28; }
	inline RuntimeObject** get_address_of_Button9_28() { return &___Button9_28; }
	inline void set_Button9_28(RuntimeObject* value)
	{
		___Button9_28 = value;
		Il2CppCodeGenWriteBarrier((&___Button9_28), value);
	}

	inline static int32_t get_offset_of_Button10_29() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button10_29)); }
	inline RuntimeObject* get_Button10_29() const { return ___Button10_29; }
	inline RuntimeObject** get_address_of_Button10_29() { return &___Button10_29; }
	inline void set_Button10_29(RuntimeObject* value)
	{
		___Button10_29 = value;
		Il2CppCodeGenWriteBarrier((&___Button10_29), value);
	}

	inline static int32_t get_offset_of_Button11_30() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button11_30)); }
	inline RuntimeObject* get_Button11_30() const { return ___Button11_30; }
	inline RuntimeObject** get_address_of_Button11_30() { return &___Button11_30; }
	inline void set_Button11_30(RuntimeObject* value)
	{
		___Button11_30 = value;
		Il2CppCodeGenWriteBarrier((&___Button11_30), value);
	}

	inline static int32_t get_offset_of_Button12_31() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button12_31)); }
	inline RuntimeObject* get_Button12_31() const { return ___Button12_31; }
	inline RuntimeObject** get_address_of_Button12_31() { return &___Button12_31; }
	inline void set_Button12_31(RuntimeObject* value)
	{
		___Button12_31 = value;
		Il2CppCodeGenWriteBarrier((&___Button12_31), value);
	}

	inline static int32_t get_offset_of_Button13_32() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button13_32)); }
	inline RuntimeObject* get_Button13_32() const { return ___Button13_32; }
	inline RuntimeObject** get_address_of_Button13_32() { return &___Button13_32; }
	inline void set_Button13_32(RuntimeObject* value)
	{
		___Button13_32 = value;
		Il2CppCodeGenWriteBarrier((&___Button13_32), value);
	}

	inline static int32_t get_offset_of_Button14_33() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button14_33)); }
	inline RuntimeObject* get_Button14_33() const { return ___Button14_33; }
	inline RuntimeObject** get_address_of_Button14_33() { return &___Button14_33; }
	inline void set_Button14_33(RuntimeObject* value)
	{
		___Button14_33 = value;
		Il2CppCodeGenWriteBarrier((&___Button14_33), value);
	}

	inline static int32_t get_offset_of_Button15_34() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button15_34)); }
	inline RuntimeObject* get_Button15_34() const { return ___Button15_34; }
	inline RuntimeObject** get_address_of_Button15_34() { return &___Button15_34; }
	inline void set_Button15_34(RuntimeObject* value)
	{
		___Button15_34 = value;
		Il2CppCodeGenWriteBarrier((&___Button15_34), value);
	}

	inline static int32_t get_offset_of_Button16_35() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button16_35)); }
	inline RuntimeObject* get_Button16_35() const { return ___Button16_35; }
	inline RuntimeObject** get_address_of_Button16_35() { return &___Button16_35; }
	inline void set_Button16_35(RuntimeObject* value)
	{
		___Button16_35 = value;
		Il2CppCodeGenWriteBarrier((&___Button16_35), value);
	}

	inline static int32_t get_offset_of_Button17_36() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button17_36)); }
	inline RuntimeObject* get_Button17_36() const { return ___Button17_36; }
	inline RuntimeObject** get_address_of_Button17_36() { return &___Button17_36; }
	inline void set_Button17_36(RuntimeObject* value)
	{
		___Button17_36 = value;
		Il2CppCodeGenWriteBarrier((&___Button17_36), value);
	}

	inline static int32_t get_offset_of_Button18_37() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button18_37)); }
	inline RuntimeObject* get_Button18_37() const { return ___Button18_37; }
	inline RuntimeObject** get_address_of_Button18_37() { return &___Button18_37; }
	inline void set_Button18_37(RuntimeObject* value)
	{
		___Button18_37 = value;
		Il2CppCodeGenWriteBarrier((&___Button18_37), value);
	}

	inline static int32_t get_offset_of_Button19_38() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Button19_38)); }
	inline RuntimeObject* get_Button19_38() const { return ___Button19_38; }
	inline RuntimeObject** get_address_of_Button19_38() { return &___Button19_38; }
	inline void set_Button19_38(RuntimeObject* value)
	{
		___Button19_38 = value;
		Il2CppCodeGenWriteBarrier((&___Button19_38), value);
	}

	inline static int32_t get_offset_of_Analog0_39() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog0_39)); }
	inline RuntimeObject* get_Analog0_39() const { return ___Analog0_39; }
	inline RuntimeObject** get_address_of_Analog0_39() { return &___Analog0_39; }
	inline void set_Analog0_39(RuntimeObject* value)
	{
		___Analog0_39 = value;
		Il2CppCodeGenWriteBarrier((&___Analog0_39), value);
	}

	inline static int32_t get_offset_of_Analog1_40() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog1_40)); }
	inline RuntimeObject* get_Analog1_40() const { return ___Analog1_40; }
	inline RuntimeObject** get_address_of_Analog1_40() { return &___Analog1_40; }
	inline void set_Analog1_40(RuntimeObject* value)
	{
		___Analog1_40 = value;
		Il2CppCodeGenWriteBarrier((&___Analog1_40), value);
	}

	inline static int32_t get_offset_of_Analog2_41() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog2_41)); }
	inline RuntimeObject* get_Analog2_41() const { return ___Analog2_41; }
	inline RuntimeObject** get_address_of_Analog2_41() { return &___Analog2_41; }
	inline void set_Analog2_41(RuntimeObject* value)
	{
		___Analog2_41 = value;
		Il2CppCodeGenWriteBarrier((&___Analog2_41), value);
	}

	inline static int32_t get_offset_of_Analog3_42() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog3_42)); }
	inline RuntimeObject* get_Analog3_42() const { return ___Analog3_42; }
	inline RuntimeObject** get_address_of_Analog3_42() { return &___Analog3_42; }
	inline void set_Analog3_42(RuntimeObject* value)
	{
		___Analog3_42 = value;
		Il2CppCodeGenWriteBarrier((&___Analog3_42), value);
	}

	inline static int32_t get_offset_of_Analog4_43() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog4_43)); }
	inline RuntimeObject* get_Analog4_43() const { return ___Analog4_43; }
	inline RuntimeObject** get_address_of_Analog4_43() { return &___Analog4_43; }
	inline void set_Analog4_43(RuntimeObject* value)
	{
		___Analog4_43 = value;
		Il2CppCodeGenWriteBarrier((&___Analog4_43), value);
	}

	inline static int32_t get_offset_of_Analog5_44() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog5_44)); }
	inline RuntimeObject* get_Analog5_44() const { return ___Analog5_44; }
	inline RuntimeObject** get_address_of_Analog5_44() { return &___Analog5_44; }
	inline void set_Analog5_44(RuntimeObject* value)
	{
		___Analog5_44 = value;
		Il2CppCodeGenWriteBarrier((&___Analog5_44), value);
	}

	inline static int32_t get_offset_of_Analog6_45() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog6_45)); }
	inline RuntimeObject* get_Analog6_45() const { return ___Analog6_45; }
	inline RuntimeObject** get_address_of_Analog6_45() { return &___Analog6_45; }
	inline void set_Analog6_45(RuntimeObject* value)
	{
		___Analog6_45 = value;
		Il2CppCodeGenWriteBarrier((&___Analog6_45), value);
	}

	inline static int32_t get_offset_of_Analog7_46() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog7_46)); }
	inline RuntimeObject* get_Analog7_46() const { return ___Analog7_46; }
	inline RuntimeObject** get_address_of_Analog7_46() { return &___Analog7_46; }
	inline void set_Analog7_46(RuntimeObject* value)
	{
		___Analog7_46 = value;
		Il2CppCodeGenWriteBarrier((&___Analog7_46), value);
	}

	inline static int32_t get_offset_of_Analog8_47() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog8_47)); }
	inline RuntimeObject* get_Analog8_47() const { return ___Analog8_47; }
	inline RuntimeObject** get_address_of_Analog8_47() { return &___Analog8_47; }
	inline void set_Analog8_47(RuntimeObject* value)
	{
		___Analog8_47 = value;
		Il2CppCodeGenWriteBarrier((&___Analog8_47), value);
	}

	inline static int32_t get_offset_of_Analog9_48() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog9_48)); }
	inline RuntimeObject* get_Analog9_48() const { return ___Analog9_48; }
	inline RuntimeObject** get_address_of_Analog9_48() { return &___Analog9_48; }
	inline void set_Analog9_48(RuntimeObject* value)
	{
		___Analog9_48 = value;
		Il2CppCodeGenWriteBarrier((&___Analog9_48), value);
	}

	inline static int32_t get_offset_of_Analog10_49() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog10_49)); }
	inline RuntimeObject* get_Analog10_49() const { return ___Analog10_49; }
	inline RuntimeObject** get_address_of_Analog10_49() { return &___Analog10_49; }
	inline void set_Analog10_49(RuntimeObject* value)
	{
		___Analog10_49 = value;
		Il2CppCodeGenWriteBarrier((&___Analog10_49), value);
	}

	inline static int32_t get_offset_of_Analog11_50() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog11_50)); }
	inline RuntimeObject* get_Analog11_50() const { return ___Analog11_50; }
	inline RuntimeObject** get_address_of_Analog11_50() { return &___Analog11_50; }
	inline void set_Analog11_50(RuntimeObject* value)
	{
		___Analog11_50 = value;
		Il2CppCodeGenWriteBarrier((&___Analog11_50), value);
	}

	inline static int32_t get_offset_of_Analog12_51() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog12_51)); }
	inline RuntimeObject* get_Analog12_51() const { return ___Analog12_51; }
	inline RuntimeObject** get_address_of_Analog12_51() { return &___Analog12_51; }
	inline void set_Analog12_51(RuntimeObject* value)
	{
		___Analog12_51 = value;
		Il2CppCodeGenWriteBarrier((&___Analog12_51), value);
	}

	inline static int32_t get_offset_of_Analog13_52() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog13_52)); }
	inline RuntimeObject* get_Analog13_52() const { return ___Analog13_52; }
	inline RuntimeObject** get_address_of_Analog13_52() { return &___Analog13_52; }
	inline void set_Analog13_52(RuntimeObject* value)
	{
		___Analog13_52 = value;
		Il2CppCodeGenWriteBarrier((&___Analog13_52), value);
	}

	inline static int32_t get_offset_of_Analog14_53() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog14_53)); }
	inline RuntimeObject* get_Analog14_53() const { return ___Analog14_53; }
	inline RuntimeObject** get_address_of_Analog14_53() { return &___Analog14_53; }
	inline void set_Analog14_53(RuntimeObject* value)
	{
		___Analog14_53 = value;
		Il2CppCodeGenWriteBarrier((&___Analog14_53), value);
	}

	inline static int32_t get_offset_of_Analog15_54() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog15_54)); }
	inline RuntimeObject* get_Analog15_54() const { return ___Analog15_54; }
	inline RuntimeObject** get_address_of_Analog15_54() { return &___Analog15_54; }
	inline void set_Analog15_54(RuntimeObject* value)
	{
		___Analog15_54 = value;
		Il2CppCodeGenWriteBarrier((&___Analog15_54), value);
	}

	inline static int32_t get_offset_of_Analog16_55() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog16_55)); }
	inline RuntimeObject* get_Analog16_55() const { return ___Analog16_55; }
	inline RuntimeObject** get_address_of_Analog16_55() { return &___Analog16_55; }
	inline void set_Analog16_55(RuntimeObject* value)
	{
		___Analog16_55 = value;
		Il2CppCodeGenWriteBarrier((&___Analog16_55), value);
	}

	inline static int32_t get_offset_of_Analog17_56() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog17_56)); }
	inline RuntimeObject* get_Analog17_56() const { return ___Analog17_56; }
	inline RuntimeObject** get_address_of_Analog17_56() { return &___Analog17_56; }
	inline void set_Analog17_56(RuntimeObject* value)
	{
		___Analog17_56 = value;
		Il2CppCodeGenWriteBarrier((&___Analog17_56), value);
	}

	inline static int32_t get_offset_of_Analog18_57() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog18_57)); }
	inline RuntimeObject* get_Analog18_57() const { return ___Analog18_57; }
	inline RuntimeObject** get_address_of_Analog18_57() { return &___Analog18_57; }
	inline void set_Analog18_57(RuntimeObject* value)
	{
		___Analog18_57 = value;
		Il2CppCodeGenWriteBarrier((&___Analog18_57), value);
	}

	inline static int32_t get_offset_of_Analog19_58() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___Analog19_58)); }
	inline RuntimeObject* get_Analog19_58() const { return ___Analog19_58; }
	inline RuntimeObject** get_address_of_Analog19_58() { return &___Analog19_58; }
	inline void set_Analog19_58(RuntimeObject* value)
	{
		___Analog19_58 = value;
		Il2CppCodeGenWriteBarrier((&___Analog19_58), value);
	}

	inline static int32_t get_offset_of_MenuKey_59() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___MenuKey_59)); }
	inline RuntimeObject* get_MenuKey_59() const { return ___MenuKey_59; }
	inline RuntimeObject** get_address_of_MenuKey_59() { return &___MenuKey_59; }
	inline void set_MenuKey_59(RuntimeObject* value)
	{
		___MenuKey_59 = value;
		Il2CppCodeGenWriteBarrier((&___MenuKey_59), value);
	}

	inline static int32_t get_offset_of_EscapeKey_60() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___EscapeKey_60)); }
	inline RuntimeObject* get_EscapeKey_60() const { return ___EscapeKey_60; }
	inline RuntimeObject** get_address_of_EscapeKey_60() { return &___EscapeKey_60; }
	inline void set_EscapeKey_60(RuntimeObject* value)
	{
		___EscapeKey_60 = value;
		Il2CppCodeGenWriteBarrier((&___EscapeKey_60), value);
	}

	inline static int32_t get_offset_of_MouseButton0_61() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___MouseButton0_61)); }
	inline RuntimeObject* get_MouseButton0_61() const { return ___MouseButton0_61; }
	inline RuntimeObject** get_address_of_MouseButton0_61() { return &___MouseButton0_61; }
	inline void set_MouseButton0_61(RuntimeObject* value)
	{
		___MouseButton0_61 = value;
		Il2CppCodeGenWriteBarrier((&___MouseButton0_61), value);
	}

	inline static int32_t get_offset_of_MouseButton1_62() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___MouseButton1_62)); }
	inline RuntimeObject* get_MouseButton1_62() const { return ___MouseButton1_62; }
	inline RuntimeObject** get_address_of_MouseButton1_62() { return &___MouseButton1_62; }
	inline void set_MouseButton1_62(RuntimeObject* value)
	{
		___MouseButton1_62 = value;
		Il2CppCodeGenWriteBarrier((&___MouseButton1_62), value);
	}

	inline static int32_t get_offset_of_MouseButton2_63() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___MouseButton2_63)); }
	inline RuntimeObject* get_MouseButton2_63() const { return ___MouseButton2_63; }
	inline RuntimeObject** get_address_of_MouseButton2_63() { return &___MouseButton2_63; }
	inline void set_MouseButton2_63(RuntimeObject* value)
	{
		___MouseButton2_63 = value;
		Il2CppCodeGenWriteBarrier((&___MouseButton2_63), value);
	}

	inline static int32_t get_offset_of_MouseXAxis_64() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___MouseXAxis_64)); }
	inline RuntimeObject* get_MouseXAxis_64() const { return ___MouseXAxis_64; }
	inline RuntimeObject** get_address_of_MouseXAxis_64() { return &___MouseXAxis_64; }
	inline void set_MouseXAxis_64(RuntimeObject* value)
	{
		___MouseXAxis_64 = value;
		Il2CppCodeGenWriteBarrier((&___MouseXAxis_64), value);
	}

	inline static int32_t get_offset_of_MouseYAxis_65() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___MouseYAxis_65)); }
	inline RuntimeObject* get_MouseYAxis_65() const { return ___MouseYAxis_65; }
	inline RuntimeObject** get_address_of_MouseYAxis_65() { return &___MouseYAxis_65; }
	inline void set_MouseYAxis_65(RuntimeObject* value)
	{
		___MouseYAxis_65 = value;
		Il2CppCodeGenWriteBarrier((&___MouseYAxis_65), value);
	}

	inline static int32_t get_offset_of_MouseScrollWheel_66() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields, ___MouseScrollWheel_66)); }
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
#endif // UNITYINPUTDEVICEPROFILE_T46088AA65F1206F5214298038664CFF7EDECD80E_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef NVIDIASHIELD2016ANDROIDPROFILE_TBBD877E2C688A67C07C881D675A60EC2589D7B2C_H
#define NVIDIASHIELD2016ANDROIDPROFILE_TBBD877E2C688A67C07C881D675A60EC2589D7B2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NVidiaShield2016AndroidProfile
struct  NVidiaShield2016AndroidProfile_tBBD877E2C688A67C07C881D675A60EC2589D7B2C  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NVIDIASHIELD2016ANDROIDPROFILE_TBBD877E2C688A67C07C881D675A60EC2589D7B2C_H
#ifndef NVIDIASHIELD2017ANDROIDPROFILE_TA82E845C0C13D395C635E6C1FB76588DEF76DE82_H
#define NVIDIASHIELD2017ANDROIDPROFILE_TA82E845C0C13D395C635E6C1FB76588DEF76DE82_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NVidiaShield2017AndroidProfile
struct  NVidiaShield2017AndroidProfile_tA82E845C0C13D395C635E6C1FB76588DEF76DE82  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NVIDIASHIELD2017ANDROIDPROFILE_TA82E845C0C13D395C635E6C1FB76588DEF76DE82_H
#ifndef NVIDIASHIELDWIN10PROFILE_TBBCB7C8D6D3F094CC6ECFD116FC2DEC38AA6E548_H
#define NVIDIASHIELDWIN10PROFILE_TBBCB7C8D6D3F094CC6ECFD116FC2DEC38AA6E548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NVidiaShieldWin10Profile
struct  NVidiaShieldWin10Profile_tBBCB7C8D6D3F094CC6ECFD116FC2DEC38AA6E548  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NVIDIASHIELDWIN10PROFILE_TBBCB7C8D6D3F094CC6ECFD116FC2DEC38AA6E548_H
#ifndef NVIDIASHIELDWINPROFILE_TD32E3B2FD111EB562282DDBEF2B4E52739F9B394_H
#define NVIDIASHIELDWINPROFILE_TD32E3B2FD111EB562282DDBEF2B4E52739F9B394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NVidiaShieldWinProfile
struct  NVidiaShieldWinProfile_tD32E3B2FD111EB562282DDBEF2B4E52739F9B394  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NVIDIASHIELDWINPROFILE_TD32E3B2FD111EB562282DDBEF2B4E52739F9B394_H
#ifndef APLAYCONTROLLERMACPROFILE_TC331EA0896A96AF3E066DD2632747F74D3300103_H
#define APLAYCONTROLLERMACPROFILE_TC331EA0896A96AF3E066DD2632747F74D3300103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.APlayControllerMacProfile
struct  APlayControllerMacProfile_tC331EA0896A96AF3E066DD2632747F74D3300103  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APLAYCONTROLLERMACPROFILE_TC331EA0896A96AF3E066DD2632747F74D3300103_H
#ifndef AFTERGLOWPRISMATICXBOXONECONTROLLERMACPROFILE_T0903E772BC7FE7A1E01ED4140238E4C50BCCCD00_H
#define AFTERGLOWPRISMATICXBOXONECONTROLLERMACPROFILE_T0903E772BC7FE7A1E01ED4140238E4C50BCCCD00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.AfterglowPrismaticXboxOneControllerMacProfile
struct  AfterglowPrismaticXboxOneControllerMacProfile_t0903E772BC7FE7A1E01ED4140238E4C50BCCCD00  : public XboxOneDriverMacProfile_tC88EA9088EE3643F43477EE604994A419B5B19A6
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AFTERGLOWPRISMATICXBOXONECONTROLLERMACPROFILE_T0903E772BC7FE7A1E01ED4140238E4C50BCCCD00_H
#ifndef BETAOPCONTROLLERMACPROFILE_TAB678960DD290CF688BD5A2161BF53A20AFD54B6_H
#define BETAOPCONTROLLERMACPROFILE_TAB678960DD290CF688BD5A2161BF53A20AFD54B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.BETAOPControllerMacProfile
struct  BETAOPControllerMacProfile_tAB678960DD290CF688BD5A2161BF53A20AFD54B6  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BETAOPCONTROLLERMACPROFILE_TAB678960DD290CF688BD5A2161BF53A20AFD54B6_H
#ifndef BATARANGCONTROLLERMACPROFILE_T5B3A37AA6916C234AEDDA00C016D9BAC259F572E_H
#define BATARANGCONTROLLERMACPROFILE_T5B3A37AA6916C234AEDDA00C016D9BAC259F572E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.BatarangControllerMacProfile
struct  BatarangControllerMacProfile_t5B3A37AA6916C234AEDDA00C016D9BAC259F572E  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATARANGCONTROLLERMACPROFILE_T5B3A37AA6916C234AEDDA00C016D9BAC259F572E_H
#ifndef BIGBENCONTROLLERMACPROFILE_T8E227FD951ABF1BE30370EEBC062E4A76C9CC590_H
#define BIGBENCONTROLLERMACPROFILE_T8E227FD951ABF1BE30370EEBC062E4A76C9CC590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.BigBenControllerMacProfile
struct  BigBenControllerMacProfile_t8E227FD951ABF1BE30370EEBC062E4A76C9CC590  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGBENCONTROLLERMACPROFILE_T8E227FD951ABF1BE30370EEBC062E4A76C9CC590_H
#ifndef EASPORTSCONTROLLERMACPROFILE_TFDD24CE6F689968B17CAF62F1FC63D7CF39CC704_H
#define EASPORTSCONTROLLERMACPROFILE_TFDD24CE6F689968B17CAF62F1FC63D7CF39CC704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.EASportsControllerMacProfile
struct  EASportsControllerMacProfile_tFDD24CE6F689968B17CAF62F1FC63D7CF39CC704  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASPORTSCONTROLLERMACPROFILE_TFDD24CE6F689968B17CAF62F1FC63D7CF39CC704_H
#ifndef GAMESTOPCONTROLLERMACPROFILE_TC2342C327E51535A05D220FFFC77026488933030_H
#define GAMESTOPCONTROLLERMACPROFILE_TC2342C327E51535A05D220FFFC77026488933030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.GameStopControllerMacProfile
struct  GameStopControllerMacProfile_tC2342C327E51535A05D220FFFC77026488933030  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTOPCONTROLLERMACPROFILE_TC2342C327E51535A05D220FFFC77026488933030_H
#ifndef GUITARHEROCONTROLLERMACPROFILE_T4073AA15EF22F748BD541B0A9D3122ED6AD31A6F_H
#define GUITARHEROCONTROLLERMACPROFILE_T4073AA15EF22F748BD541B0A9D3122ED6AD31A6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.GuitarHeroControllerMacProfile
struct  GuitarHeroControllerMacProfile_t4073AA15EF22F748BD541B0A9D3122ED6AD31A6F  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITARHEROCONTROLLERMACPROFILE_T4073AA15EF22F748BD541B0A9D3122ED6AD31A6F_H
#ifndef HORIBLUESOLOCONTROLLERMACPROFILE_TE6F84433AC8875B27D864427956197C80011CBA2_H
#define HORIBLUESOLOCONTROLLERMACPROFILE_TE6F84433AC8875B27D864427956197C80011CBA2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriBlueSoloControllerMacProfile
struct  HoriBlueSoloControllerMacProfile_tE6F84433AC8875B27D864427956197C80011CBA2  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIBLUESOLOCONTROLLERMACPROFILE_TE6F84433AC8875B27D864427956197C80011CBA2_H
#ifndef HORICONTROLLERMACPROFILE_TA44989B1CD5B66D7464C24A9D7482562CE1FD1FE_H
#define HORICONTROLLERMACPROFILE_TA44989B1CD5B66D7464C24A9D7482562CE1FD1FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriControllerMacProfile
struct  HoriControllerMacProfile_tA44989B1CD5B66D7464C24A9D7482562CE1FD1FE  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORICONTROLLERMACPROFILE_TA44989B1CD5B66D7464C24A9D7482562CE1FD1FE_H
#ifndef HORIDOA4ARCADESTICKMACPROFILE_T6A96E6F0F06F5EBC9B2AD63F87C4CCA4CF99168A_H
#define HORIDOA4ARCADESTICKMACPROFILE_T6A96E6F0F06F5EBC9B2AD63F87C4CCA4CF99168A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriDOA4ArcadeStickMacProfile
struct  HoriDOA4ArcadeStickMacProfile_t6A96E6F0F06F5EBC9B2AD63F87C4CCA4CF99168A  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIDOA4ARCADESTICKMACPROFILE_T6A96E6F0F06F5EBC9B2AD63F87C4CCA4CF99168A_H
#ifndef HORIEX2CONTROLLERMACPROFILE_T82875ABEFCD57F139AA67DFDDCACDF3178F3D8AE_H
#define HORIEX2CONTROLLERMACPROFILE_T82875ABEFCD57F139AA67DFDDCACDF3178F3D8AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriEX2ControllerMacProfile
struct  HoriEX2ControllerMacProfile_t82875ABEFCD57F139AA67DFDDCACDF3178F3D8AE  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIEX2CONTROLLERMACPROFILE_T82875ABEFCD57F139AA67DFDDCACDF3178F3D8AE_H
#ifndef HORIFIGHTSTICKMACPROFILE_T73BF562DD848BF88DC1E3023A10350981A262D0B_H
#define HORIFIGHTSTICKMACPROFILE_T73BF562DD848BF88DC1E3023A10350981A262D0B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriFightStickMacProfile
struct  HoriFightStickMacProfile_t73BF562DD848BF88DC1E3023A10350981A262D0B  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIFIGHTSTICKMACPROFILE_T73BF562DD848BF88DC1E3023A10350981A262D0B_H
#ifndef HORIFIGHTINGSTICKEX2MACPROFILE_T6890444B99580F221526BAD789921C73C248D8AD_H
#define HORIFIGHTINGSTICKEX2MACPROFILE_T6890444B99580F221526BAD789921C73C248D8AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriFightingStickEX2MacProfile
struct  HoriFightingStickEX2MacProfile_t6890444B99580F221526BAD789921C73C248D8AD  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIFIGHTINGSTICKEX2MACPROFILE_T6890444B99580F221526BAD789921C73C248D8AD_H
#ifndef HORIFIGHTINGSTICKVXMACPROFILE_T2ADACB77966581631FE066BC94DC2953EE68FBB8_H
#define HORIFIGHTINGSTICKVXMACPROFILE_T2ADACB77966581631FE066BC94DC2953EE68FBB8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriFightingStickVXMacProfile
struct  HoriFightingStickVXMacProfile_t2ADACB77966581631FE066BC94DC2953EE68FBB8  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIFIGHTINGSTICKVXMACPROFILE_T2ADACB77966581631FE066BC94DC2953EE68FBB8_H
#ifndef HORIPADEXTURBOCONTROLLERMACPROFILE_T6AC183B7F0925F5E5C4B1AED0700D8920E03B236_H
#define HORIPADEXTURBOCONTROLLERMACPROFILE_T6AC183B7F0925F5E5C4B1AED0700D8920E03B236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriPadEXTurboControllerMacProfile
struct  HoriPadEXTurboControllerMacProfile_t6AC183B7F0925F5E5C4B1AED0700D8920E03B236  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIPADEXTURBOCONTROLLERMACPROFILE_T6AC183B7F0925F5E5C4B1AED0700D8920E03B236_H
#ifndef HORIPADULTIMATEMACPROFILE_T329FA8DB5B14FB0C59D84DC546F50F2524D67528_H
#define HORIPADULTIMATEMACPROFILE_T329FA8DB5B14FB0C59D84DC546F50F2524D67528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriPadUltimateMacProfile
struct  HoriPadUltimateMacProfile_t329FA8DB5B14FB0C59D84DC546F50F2524D67528  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIPADULTIMATEMACPROFILE_T329FA8DB5B14FB0C59D84DC546F50F2524D67528_H
#ifndef HORIREALARCADEPROEXMACPROFILE_T91CBA0D76A4DD144F2C949731E9465B703AE719B_H
#define HORIREALARCADEPROEXMACPROFILE_T91CBA0D76A4DD144F2C949731E9465B703AE719B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriRealArcadeProEXMacProfile
struct  HoriRealArcadeProEXMacProfile_t91CBA0D76A4DD144F2C949731E9465B703AE719B  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIREALARCADEPROEXMACPROFILE_T91CBA0D76A4DD144F2C949731E9465B703AE719B_H
#ifndef HORIREALARCADEPROEXPREMIUMVLXMACPROFILE_TB2372DD7630E922892C7FBF262F51874E2B64F44_H
#define HORIREALARCADEPROEXPREMIUMVLXMACPROFILE_TB2372DD7630E922892C7FBF262F51874E2B64F44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriRealArcadeProEXPremiumVLXMacProfile
struct  HoriRealArcadeProEXPremiumVLXMacProfile_tB2372DD7630E922892C7FBF262F51874E2B64F44  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIREALARCADEPROEXPREMIUMVLXMACPROFILE_TB2372DD7630E922892C7FBF262F51874E2B64F44_H
#ifndef HORIREALARCADEPROEXSEMACPROFILE_T1E893CA2C9D500434CE786B941D3638C907CF6E4_H
#define HORIREALARCADEPROEXSEMACPROFILE_T1E893CA2C9D500434CE786B941D3638C907CF6E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriRealArcadeProEXSEMacProfile
struct  HoriRealArcadeProEXSEMacProfile_t1E893CA2C9D500434CE786B941D3638C907CF6E4  : public Xbox360DriverMacProfile_t85862366C30957580596EFE6E9B710CC994FE81A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIREALARCADEPROEXSEMACPROFILE_T1E893CA2C9D500434CE786B941D3638C907CF6E4_H
#ifndef NEXUSPLAYERPROFILE_TD2C810AAC01F5D1C2785CE309680B76AC00F32E0_H
#define NEXUSPLAYERPROFILE_TD2C810AAC01F5D1C2785CE309680B76AC00F32E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NexusPlayerProfile
struct  NexusPlayerProfile_tD2C810AAC01F5D1C2785CE309680B76AC00F32E0  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEXUSPLAYERPROFILE_TD2C810AAC01F5D1C2785CE309680B76AC00F32E0_H
#ifndef NEXUSPLAYERREMOTEPROFILE_T0223916BCD94D9B092188BF0B81A17E923C73951_H
#define NEXUSPLAYERREMOTEPROFILE_T0223916BCD94D9B092188BF0B81A17E923C73951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NexusPlayerRemoteProfile
struct  NexusPlayerRemoteProfile_t0223916BCD94D9B092188BF0B81A17E923C73951  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEXUSPLAYERREMOTEPROFILE_T0223916BCD94D9B092188BF0B81A17E923C73951_H
#ifndef NEXUSPLAYERWINPROFILE_T3CFC8749ACA3A8A3A19F492CA22D77680DFA2F99_H
#define NEXUSPLAYERWINPROFILE_T3CFC8749ACA3A8A3A19F492CA22D77680DFA2F99_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NexusPlayerWinProfile
struct  NexusPlayerWinProfile_t3CFC8749ACA3A8A3A19F492CA22D77680DFA2F99  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEXUSPLAYERWINPROFILE_T3CFC8749ACA3A8A3A19F492CA22D77680DFA2F99_H
#ifndef NYKOPLAYPADPROAMAZONPROFILE_T944B5EC06E9410653B84957892D62913F0742A81_H
#define NYKOPLAYPADPROAMAZONPROFILE_T944B5EC06E9410653B84957892D62913F0742A81_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NykoPlayPadProAmazonProfile
struct  NykoPlayPadProAmazonProfile_t944B5EC06E9410653B84957892D62913F0742A81  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NYKOPLAYPADPROAMAZONPROFILE_T944B5EC06E9410653B84957892D62913F0742A81_H
#ifndef OUYAAMAZONPROFILE_T2F6100B9BBB167FD48BB3982EBE9369A4B5E5F4D_H
#define OUYAAMAZONPROFILE_T2F6100B9BBB167FD48BB3982EBE9369A4B5E5F4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.OuyaAmazonProfile
struct  OuyaAmazonProfile_t2F6100B9BBB167FD48BB3982EBE9369A4B5E5F4D  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUYAAMAZONPROFILE_T2F6100B9BBB167FD48BB3982EBE9369A4B5E5F4D_H
#ifndef OUYALINUXPROFILE_T9AB7034EB9447313941900B762DD77B5652E3276_H
#define OUYALINUXPROFILE_T9AB7034EB9447313941900B762DD77B5652E3276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.OuyaLinuxProfile
struct  OuyaLinuxProfile_t9AB7034EB9447313941900B762DD77B5652E3276  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUYALINUXPROFILE_T9AB7034EB9447313941900B762DD77B5652E3276_H
#ifndef OUYAWINPROFILE_T275C7944EC17994445A325F2176E93F84ED79AD3_H
#define OUYAWINPROFILE_T275C7944EC17994445A325F2176E93F84ED79AD3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.OuyaWinProfile
struct  OuyaWinProfile_t275C7944EC17994445A325F2176E93F84ED79AD3  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUYAWINPROFILE_T275C7944EC17994445A325F2176E93F84ED79AD3_H
#ifndef PLAYSTATION2WINPROFILE_TB1270C94046243A298BD53479F11E1906A9838C5_H
#define PLAYSTATION2WINPROFILE_TB1270C94046243A298BD53479F11E1906A9838C5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation2WinProfile
struct  PlayStation2WinProfile_tB1270C94046243A298BD53479F11E1906A9838C5  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION2WINPROFILE_TB1270C94046243A298BD53479F11E1906A9838C5_H
#ifndef PLAYSTATION3ANDROIDPROFILE_T4D71B1064FF040414D5DEBF0F04CF492D7963BF1_H
#define PLAYSTATION3ANDROIDPROFILE_T4D71B1064FF040414D5DEBF0F04CF492D7963BF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3AndroidProfile
struct  PlayStation3AndroidProfile_t4D71B1064FF040414D5DEBF0F04CF492D7963BF1  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3ANDROIDPROFILE_T4D71B1064FF040414D5DEBF0F04CF492D7963BF1_H
#ifndef PLAYSTATION3BWINPROFILE_T1C8EBCD65C8C3F1CE92BD9F3C71B66B40E090A06_H
#define PLAYSTATION3BWINPROFILE_T1C8EBCD65C8C3F1CE92BD9F3C71B66B40E090A06_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3BWinProfile
struct  PlayStation3BWinProfile_t1C8EBCD65C8C3F1CE92BD9F3C71B66B40E090A06  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3BWINPROFILE_T1C8EBCD65C8C3F1CE92BD9F3C71B66B40E090A06_H
#ifndef PLAYSTATION3LINUXPROFILE_T94BCAA4CE2AD4310D3290C1C04CCF88B964F071E_H
#define PLAYSTATION3LINUXPROFILE_T94BCAA4CE2AD4310D3290C1C04CCF88B964F071E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3LinuxProfile
struct  PlayStation3LinuxProfile_t94BCAA4CE2AD4310D3290C1C04CCF88B964F071E  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3LINUXPROFILE_T94BCAA4CE2AD4310D3290C1C04CCF88B964F071E_H
#ifndef PLAYSTATION3MACPROFILE_TFCC66D5B69BE75A3C27C717AF02B6198085EA8B7_H
#define PLAYSTATION3MACPROFILE_TFCC66D5B69BE75A3C27C717AF02B6198085EA8B7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3MacProfile
struct  PlayStation3MacProfile_tFCC66D5B69BE75A3C27C717AF02B6198085EA8B7  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3MACPROFILE_TFCC66D5B69BE75A3C27C717AF02B6198085EA8B7_H
#ifndef PLAYSTATION3SHENGHICWINPROFILE_TFDA24A52E30AB8608C6EE396EC64A39189641137_H
#define PLAYSTATION3SHENGHICWINPROFILE_TFDA24A52E30AB8608C6EE396EC64A39189641137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3ShenghicWinProfile
struct  PlayStation3ShenghicWinProfile_tFDA24A52E30AB8608C6EE396EC64A39189641137  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3SHENGHICWINPROFILE_TFDA24A52E30AB8608C6EE396EC64A39189641137_H
#ifndef PLAYSTATION3WINPROFILE_T92762E3F75B1668F0BC91A29DEAF3D5432EBEF0A_H
#define PLAYSTATION3WINPROFILE_T92762E3F75B1668F0BC91A29DEAF3D5432EBEF0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation3WinProfile
struct  PlayStation3WinProfile_t92762E3F75B1668F0BC91A29DEAF3D5432EBEF0A  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION3WINPROFILE_T92762E3F75B1668F0BC91A29DEAF3D5432EBEF0A_H
#ifndef PLAYSTATION4AMAZONPROFILE_T595CD7F2909E00BEDB552A225CD7AB70A60393F8_H
#define PLAYSTATION4AMAZONPROFILE_T595CD7F2909E00BEDB552A225CD7AB70A60393F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation4AmazonProfile
struct  PlayStation4AmazonProfile_t595CD7F2909E00BEDB552A225CD7AB70A60393F8  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION4AMAZONPROFILE_T595CD7F2909E00BEDB552A225CD7AB70A60393F8_H
#ifndef PLAYSTATION4ANDROIDPROFILE_TD9119EBBB08A10BFFE19258E40ADD9C1185C68CE_H
#define PLAYSTATION4ANDROIDPROFILE_TD9119EBBB08A10BFFE19258E40ADD9C1185C68CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation4AndroidProfile
struct  PlayStation4AndroidProfile_tD9119EBBB08A10BFFE19258E40ADD9C1185C68CE  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION4ANDROIDPROFILE_TD9119EBBB08A10BFFE19258E40ADD9C1185C68CE_H
#ifndef PLAYSTATION4ANDROIDXPERIAZ5PROFILE_T756C8CF6A928DF0AF1C6E69298C67F346D09A44C_H
#define PLAYSTATION4ANDROIDXPERIAZ5PROFILE_T756C8CF6A928DF0AF1C6E69298C67F346D09A44C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation4AndroidXperiaZ5Profile
struct  PlayStation4AndroidXperiaZ5Profile_t756C8CF6A928DF0AF1C6E69298C67F346D09A44C  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION4ANDROIDXPERIAZ5PROFILE_T756C8CF6A928DF0AF1C6E69298C67F346D09A44C_H
#ifndef PLAYSTATION4LINUXPROFILE_T2B08DBC6B8B12F622AC120DCD4444B4AAA1F9AE1_H
#define PLAYSTATION4LINUXPROFILE_T2B08DBC6B8B12F622AC120DCD4444B4AAA1F9AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation4LinuxProfile
struct  PlayStation4LinuxProfile_t2B08DBC6B8B12F622AC120DCD4444B4AAA1F9AE1  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION4LINUXPROFILE_T2B08DBC6B8B12F622AC120DCD4444B4AAA1F9AE1_H
#ifndef PLAYSTATION4MACBTPROFILE_T649B932A6A01EE85ACB0EC75BEBC113F9CFBE0EA_H
#define PLAYSTATION4MACBTPROFILE_T649B932A6A01EE85ACB0EC75BEBC113F9CFBE0EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation4MacBTProfile
struct  PlayStation4MacBTProfile_t649B932A6A01EE85ACB0EC75BEBC113F9CFBE0EA  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION4MACBTPROFILE_T649B932A6A01EE85ACB0EC75BEBC113F9CFBE0EA_H
#ifndef PLAYSTATION4MACUSBPROFILE_T8757D9847FDA03BC91CDEC35172469D4DAF2A42E_H
#define PLAYSTATION4MACUSBPROFILE_T8757D9847FDA03BC91CDEC35172469D4DAF2A42E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation4MacUSBProfile
struct  PlayStation4MacUSBProfile_t8757D9847FDA03BC91CDEC35172469D4DAF2A42E  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION4MACUSBPROFILE_T8757D9847FDA03BC91CDEC35172469D4DAF2A42E_H
#ifndef PLAYSTATION4PROFILE_TD68BF9579AA5315E06A794568B8E5315D7D7D4DE_H
#define PLAYSTATION4PROFILE_TD68BF9579AA5315E06A794568B8E5315D7D7D4DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation4Profile
struct  PlayStation4Profile_tD68BF9579AA5315E06A794568B8E5315D7D7D4DE  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION4PROFILE_TD68BF9579AA5315E06A794568B8E5315D7D7D4DE_H
#ifndef PLAYSTATION4STEAMLINKMACPROFILE_TFB087A3674DED6A67730FA3546800CE8BEDE1E28_H
#define PLAYSTATION4STEAMLINKMACPROFILE_TFB087A3674DED6A67730FA3546800CE8BEDE1E28_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation4SteamLinkMacProfile
struct  PlayStation4SteamLinkMacProfile_tFB087A3674DED6A67730FA3546800CE8BEDE1E28  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION4STEAMLINKMACPROFILE_TFB087A3674DED6A67730FA3546800CE8BEDE1E28_H
#ifndef PLAYSTATION4WINPROFILE_T93CEA9CAD266723F7674DEEC303587DE641E3509_H
#define PLAYSTATION4WINPROFILE_T93CEA9CAD266723F7674DEEC303587DE641E3509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStation4WinProfile
struct  PlayStation4WinProfile_t93CEA9CAD266723F7674DEEC303587DE641E3509  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATION4WINPROFILE_T93CEA9CAD266723F7674DEEC303587DE641E3509_H
#ifndef PLAYSTATIONVITAPSMPROFILE_T43B4EB2F219E6F102573046EF073E5642C9900A2_H
#define PLAYSTATIONVITAPSMPROFILE_T43B4EB2F219E6F102573046EF073E5642C9900A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayStationVitaPSMProfile
struct  PlayStationVitaPSMProfile_t43B4EB2F219E6F102573046EF073E5642C9900A2  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATIONVITAPSMPROFILE_T43B4EB2F219E6F102573046EF073E5642C9900A2_H
#ifndef RAZERSERVALFORGETVPROFILE_T2A60D1A415FDF7E16CD1E0202372F8778983E52F_H
#define RAZERSERVALFORGETVPROFILE_T2A60D1A415FDF7E16CD1E0202372F8778983E52F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.RazerServalForgeTVProfile
struct  RazerServalForgeTVProfile_t2A60D1A415FDF7E16CD1E0202372F8778983E52F  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAZERSERVALFORGETVPROFILE_T2A60D1A415FDF7E16CD1E0202372F8778983E52F_H
#ifndef RAZERSERVALMACPROFILE_T007B3E0C073E09D86D2D53DE1FE45DAF06FE4EE6_H
#define RAZERSERVALMACPROFILE_T007B3E0C073E09D86D2D53DE1FE45DAF06FE4EE6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.RazerServalMacProfile
struct  RazerServalMacProfile_t007B3E0C073E09D86D2D53DE1FE45DAF06FE4EE6  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAZERSERVALMACPROFILE_T007B3E0C073E09D86D2D53DE1FE45DAF06FE4EE6_H
#ifndef REDSAMURAIANDROIDPROFILE_TFE7CF0F57424FD71BB4C53F6D8616E2F6AFB7923_H
#define REDSAMURAIANDROIDPROFILE_TFE7CF0F57424FD71BB4C53F6D8616E2F6AFB7923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.RedSamuraiAndroidProfile
struct  RedSamuraiAndroidProfile_tFE7CF0F57424FD71BB4C53F6D8616E2F6AFB7923  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REDSAMURAIANDROIDPROFILE_TFE7CF0F57424FD71BB4C53F6D8616E2F6AFB7923_H
#ifndef SAITEKAVIATORWINPROFILE_T90515ECA4404417FAC4726CB2600FD5F6C8226C0_H
#define SAITEKAVIATORWINPROFILE_T90515ECA4404417FAC4726CB2600FD5F6C8226C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SaitekAviatorWinProfile
struct  SaitekAviatorWinProfile_t90515ECA4404417FAC4726CB2600FD5F6C8226C0  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAITEKAVIATORWINPROFILE_T90515ECA4404417FAC4726CB2600FD5F6C8226C0_H
#ifndef SAMSUNGGP20ANDROIDPROFILE_TA2193F2C1AEF47D19EC705A19891B1B3E80A7606_H
#define SAMSUNGGP20ANDROIDPROFILE_TA2193F2C1AEF47D19EC705A19891B1B3E80A7606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SamsungGP20AndroidProfile
struct  SamsungGP20AndroidProfile_tA2193F2C1AEF47D19EC705A19891B1B3E80A7606  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMSUNGGP20ANDROIDPROFILE_TA2193F2C1AEF47D19EC705A19891B1B3E80A7606_H
#ifndef SPEEDLINKSTRIKEMACPROFILE_T821589F5C4D116FAAA5DEE52B4B72A750FD63B6A_H
#define SPEEDLINKSTRIKEMACPROFILE_T821589F5C4D116FAAA5DEE52B4B72A750FD63B6A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SpeedlinkStrikeMacProfile
struct  SpeedlinkStrikeMacProfile_t821589F5C4D116FAAA5DEE52B4B72A750FD63B6A  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEEDLINKSTRIKEMACPROFILE_T821589F5C4D116FAAA5DEE52B4B72A750FD63B6A_H
#ifndef SPEEDLINKSTRIKEWINPROFILE_T67368B1F1FFAA1574D8F93EFA60FAE12F77AC2BE_H
#define SPEEDLINKSTRIKEWINPROFILE_T67368B1F1FFAA1574D8F93EFA60FAE12F77AC2BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SpeedlinkStrikeWinProfile
struct  SpeedlinkStrikeWinProfile_t67368B1F1FFAA1574D8F93EFA60FAE12F77AC2BE  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEEDLINKSTRIKEWINPROFILE_T67368B1F1FFAA1574D8F93EFA60FAE12F77AC2BE_H
#ifndef STEELSERIESFREEANDROIDPROFILE_T0606E7EC922C6C5F9C2FC28528F4C4E0F691D59F_H
#define STEELSERIESFREEANDROIDPROFILE_T0606E7EC922C6C5F9C2FC28528F4C4E0F691D59F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SteelSeriesFreeAndroidProfile
struct  SteelSeriesFreeAndroidProfile_t0606E7EC922C6C5F9C2FC28528F4C4E0F691D59F  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEELSERIESFREEANDROIDPROFILE_T0606E7EC922C6C5F9C2FC28528F4C4E0F691D59F_H
#ifndef STEELSERIESFREELINUXPROFILE_T21B8CFE1659305BB9027C8CB363337F49796198A_H
#define STEELSERIESFREELINUXPROFILE_T21B8CFE1659305BB9027C8CB363337F49796198A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SteelSeriesFreeLinuxProfile
struct  SteelSeriesFreeLinuxProfile_t21B8CFE1659305BB9027C8CB363337F49796198A  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEELSERIESFREELINUXPROFILE_T21B8CFE1659305BB9027C8CB363337F49796198A_H
#ifndef STEELSERIESFREEMACPROFILE_TB7336D34D21CEE55B21D878596E356F8756FC9B5_H
#define STEELSERIESFREEMACPROFILE_TB7336D34D21CEE55B21D878596E356F8756FC9B5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SteelSeriesFreeMacProfile
struct  SteelSeriesFreeMacProfile_tB7336D34D21CEE55B21D878596E356F8756FC9B5  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEELSERIESFREEMACPROFILE_TB7336D34D21CEE55B21D878596E356F8756FC9B5_H
#ifndef STEELSERIESFREEWINPROFILE_TBF89FD7C721999284D40F36E79A76D8206ECA027_H
#define STEELSERIESFREEWINPROFILE_TBF89FD7C721999284D40F36E79A76D8206ECA027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SteelSeriesFreeWinProfile
struct  SteelSeriesFreeWinProfile_tBF89FD7C721999284D40F36E79A76D8206ECA027  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEELSERIESFREEWINPROFILE_TBF89FD7C721999284D40F36E79A76D8206ECA027_H
#ifndef STEELSERIESSTRATUSXLANDROIDPROFILE_T66C2C43527C13B5BA597B8EB0EFC49366F886449_H
#define STEELSERIESSTRATUSXLANDROIDPROFILE_T66C2C43527C13B5BA597B8EB0EFC49366F886449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SteelSeriesStratusXLAndroidProfile
struct  SteelSeriesStratusXLAndroidProfile_t66C2C43527C13B5BA597B8EB0EFC49366F886449  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEELSERIESSTRATUSXLANDROIDPROFILE_T66C2C43527C13B5BA597B8EB0EFC49366F886449_H
#ifndef STEELSERIESSTRATUSXLWINPROFILE_T97690DA52DF5694080FEF0106ACCDE7C1CD93873_H
#define STEELSERIESSTRATUSXLWINPROFILE_T97690DA52DF5694080FEF0106ACCDE7C1CD93873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.SteelSeriesStratusXLWinProfile
struct  SteelSeriesStratusXLWinProfile_t97690DA52DF5694080FEF0106ACCDE7C1CD93873  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEELSERIESSTRATUSXLWINPROFILE_T97690DA52DF5694080FEF0106ACCDE7C1CD93873_H
#ifndef TESTINPUTMANAGER_T1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE_H
#define TESTINPUTMANAGER_T1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.TestInputManager
struct  TestInputManager_t1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Font InControl.TestInputManager::font
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___font_4;
	// UnityEngine.GUIStyle InControl.TestInputManager::style
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style_5;
	// System.Collections.Generic.List`1<InControl.LogMessage> InControl.TestInputManager::logMessages
	List_1_t4951AD206F2BF89C06CA0FBB41B89CB1730E4FF2 * ___logMessages_6;
	// System.Boolean InControl.TestInputManager::isPaused
	bool ___isPaused_7;

public:
	inline static int32_t get_offset_of_font_4() { return static_cast<int32_t>(offsetof(TestInputManager_t1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE, ___font_4)); }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * get_font_4() const { return ___font_4; }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 ** get_address_of_font_4() { return &___font_4; }
	inline void set_font_4(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * value)
	{
		___font_4 = value;
		Il2CppCodeGenWriteBarrier((&___font_4), value);
	}

	inline static int32_t get_offset_of_style_5() { return static_cast<int32_t>(offsetof(TestInputManager_t1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE, ___style_5)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_style_5() const { return ___style_5; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_style_5() { return &___style_5; }
	inline void set_style_5(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___style_5 = value;
		Il2CppCodeGenWriteBarrier((&___style_5), value);
	}

	inline static int32_t get_offset_of_logMessages_6() { return static_cast<int32_t>(offsetof(TestInputManager_t1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE, ___logMessages_6)); }
	inline List_1_t4951AD206F2BF89C06CA0FBB41B89CB1730E4FF2 * get_logMessages_6() const { return ___logMessages_6; }
	inline List_1_t4951AD206F2BF89C06CA0FBB41B89CB1730E4FF2 ** get_address_of_logMessages_6() { return &___logMessages_6; }
	inline void set_logMessages_6(List_1_t4951AD206F2BF89C06CA0FBB41B89CB1730E4FF2 * value)
	{
		___logMessages_6 = value;
		Il2CppCodeGenWriteBarrier((&___logMessages_6), value);
	}

	inline static int32_t get_offset_of_isPaused_7() { return static_cast<int32_t>(offsetof(TestInputManager_t1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE, ___isPaused_7)); }
	inline bool get_isPaused_7() const { return ___isPaused_7; }
	inline bool* get_address_of_isPaused_7() { return &___isPaused_7; }
	inline void set_isPaused_7(bool value)
	{
		___isPaused_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TESTINPUTMANAGER_T1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE_H
#ifndef VALVESTREAMINGWINPROFILE_TF0D556412D8A6891161166186F8FE3281359ED02_H
#define VALVESTREAMINGWINPROFILE_TF0D556412D8A6891161166186F8FE3281359ED02_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.ValveStreamingWinProfile
struct  ValveStreamingWinProfile_tF0D556412D8A6891161166186F8FE3281359ED02  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALVESTREAMINGWINPROFILE_TF0D556412D8A6891161166186F8FE3281359ED02_H
#ifndef XTR55_G2_MACUNITYPROFILE_TA31893D0C4209618E2876EAC1965549FCBCE0811_H
#define XTR55_G2_MACUNITYPROFILE_TA31893D0C4209618E2876EAC1965549FCBCE0811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XTR55_G2_MacUnityProfile
struct  XTR55_G2_MacUnityProfile_tA31893D0C4209618E2876EAC1965549FCBCE0811  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XTR55_G2_MACUNITYPROFILE_TA31893D0C4209618E2876EAC1965549FCBCE0811_H
#ifndef XTR55_G2_WINDOWSUNITYPROFILE_T47F30C8758BB11B63185DC21053BDB400ADC2925_H
#define XTR55_G2_WINDOWSUNITYPROFILE_T47F30C8758BB11B63185DC21053BDB400ADC2925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XTR55_G2_WindowsUnityProfile
struct  XTR55_G2_WindowsUnityProfile_t47F30C8758BB11B63185DC21053BDB400ADC2925  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XTR55_G2_WINDOWSUNITYPROFILE_T47F30C8758BB11B63185DC21053BDB400ADC2925_H
#ifndef XTR_G2_MACUNITYPROFILE_T190F600A7B95AC3D6EF9AF6E92B8992203A12A49_H
#define XTR_G2_MACUNITYPROFILE_T190F600A7B95AC3D6EF9AF6E92B8992203A12A49_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XTR_G2_MacUnityProfile
struct  XTR_G2_MacUnityProfile_t190F600A7B95AC3D6EF9AF6E92B8992203A12A49  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XTR_G2_MACUNITYPROFILE_T190F600A7B95AC3D6EF9AF6E92B8992203A12A49_H
#ifndef XTR_G2_WINDOWSUNITYPROFILE_T52EBA92EC67C140D71C4885C5A395828FB6FAD4C_H
#define XTR_G2_WINDOWSUNITYPROFILE_T52EBA92EC67C140D71C4885C5A395828FB6FAD4C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XTR_G2_WindowsUnityProfile
struct  XTR_G2_WindowsUnityProfile_t52EBA92EC67C140D71C4885C5A395828FB6FAD4C  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XTR_G2_WINDOWSUNITYPROFILE_T52EBA92EC67C140D71C4885C5A395828FB6FAD4C_H
#ifndef XBOX360AMAZONPROFILE_T9A2F2088F4FBF3AFE512CD76584C9050BD7A6D22_H
#define XBOX360AMAZONPROFILE_T9A2F2088F4FBF3AFE512CD76584C9050BD7A6D22_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Xbox360AmazonProfile
struct  Xbox360AmazonProfile_t9A2F2088F4FBF3AFE512CD76584C9050BD7A6D22  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOX360AMAZONPROFILE_T9A2F2088F4FBF3AFE512CD76584C9050BD7A6D22_H
#ifndef XBOX360ANDROIDPROFILE_TFD3C41DD0ED42873C9EDC6AF53D9736631B73688_H
#define XBOX360ANDROIDPROFILE_TFD3C41DD0ED42873C9EDC6AF53D9736631B73688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Xbox360AndroidProfile
struct  Xbox360AndroidProfile_tFD3C41DD0ED42873C9EDC6AF53D9736631B73688  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOX360ANDROIDPROFILE_TFD3C41DD0ED42873C9EDC6AF53D9736631B73688_H
#ifndef XBOX360LINUXPROFILE_T242A00D6A5B3A8545CCDBC43B02E282E1036EE34_H
#define XBOX360LINUXPROFILE_T242A00D6A5B3A8545CCDBC43B02E282E1036EE34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Xbox360LinuxProfile
struct  Xbox360LinuxProfile_t242A00D6A5B3A8545CCDBC43B02E282E1036EE34  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOX360LINUXPROFILE_T242A00D6A5B3A8545CCDBC43B02E282E1036EE34_H
#ifndef XBOX360MACPROFILE_T384EAC20252F5367FAA495EB98F5E6429F2B48FA_H
#define XBOX360MACPROFILE_T384EAC20252F5367FAA495EB98F5E6429F2B48FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Xbox360MacProfile
struct  Xbox360MacProfile_t384EAC20252F5367FAA495EB98F5E6429F2B48FA  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOX360MACPROFILE_T384EAC20252F5367FAA495EB98F5E6429F2B48FA_H
#ifndef XBOX360ROCKCANDYANDROIDPROFILE_T49FA8AA2DD854BC1944B1DDC606EC156A18EEFFB_H
#define XBOX360ROCKCANDYANDROIDPROFILE_T49FA8AA2DD854BC1944B1DDC606EC156A18EEFFB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Xbox360RockCandyAndroidProfile
struct  Xbox360RockCandyAndroidProfile_t49FA8AA2DD854BC1944B1DDC606EC156A18EEFFB  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOX360ROCKCANDYANDROIDPROFILE_T49FA8AA2DD854BC1944B1DDC606EC156A18EEFFB_H
#ifndef XBOX360WINPROFILE_T59982B6F1036CEA8977BADD5D9C427106FACCE33_H
#define XBOX360WINPROFILE_T59982B6F1036CEA8977BADD5D9C427106FACCE33_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Xbox360WinProfile
struct  Xbox360WinProfile_t59982B6F1036CEA8977BADD5D9C427106FACCE33  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOX360WINPROFILE_T59982B6F1036CEA8977BADD5D9C427106FACCE33_H
#ifndef XBOXONEBLUETOOTHANDROIDPROFILE_T11EBDE6AFD7D974BADF30DABBE7C74166228FDFF_H
#define XBOXONEBLUETOOTHANDROIDPROFILE_T11EBDE6AFD7D974BADF30DABBE7C74166228FDFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XboxOneBluetoothAndroidProfile
struct  XboxOneBluetoothAndroidProfile_t11EBDE6AFD7D974BADF30DABBE7C74166228FDFF  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXONEBLUETOOTHANDROIDPROFILE_T11EBDE6AFD7D974BADF30DABBE7C74166228FDFF_H
#ifndef XBOXONEMACPROFILE_T7056F7265804471D7BFBF7C1517593CEB48D1E76_H
#define XBOXONEMACPROFILE_T7056F7265804471D7BFBF7C1517593CEB48D1E76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XboxOneMacProfile
struct  XboxOneMacProfile_t7056F7265804471D7BFBF7C1517593CEB48D1E76  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXONEMACPROFILE_T7056F7265804471D7BFBF7C1517593CEB48D1E76_H
#ifndef XBOXONEPROFILE_T45D44875F14A26458F5BB7E0A6A813BC807A8CC4_H
#define XBOXONEPROFILE_T45D44875F14A26458F5BB7E0A6A813BC807A8CC4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XboxOneProfile
struct  XboxOneProfile_t45D44875F14A26458F5BB7E0A6A813BC807A8CC4  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXONEPROFILE_T45D44875F14A26458F5BB7E0A6A813BC807A8CC4_H
#ifndef XBOXONEWIN10AEPROFILE_T594C89F380E108D892EF8B4FA42A2CC0162BB09C_H
#define XBOXONEWIN10AEPROFILE_T594C89F380E108D892EF8B4FA42A2CC0162BB09C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XboxOneWin10AEProfile
struct  XboxOneWin10AEProfile_t594C89F380E108D892EF8B4FA42A2CC0162BB09C  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXONEWIN10AEPROFILE_T594C89F380E108D892EF8B4FA42A2CC0162BB09C_H
#ifndef XBOXONEWIN10PROFILE_T617BBB4E27D09F689C64CC9B4655B5BA288322BA_H
#define XBOXONEWIN10PROFILE_T617BBB4E27D09F689C64CC9B4655B5BA288322BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XboxOneWin10Profile
struct  XboxOneWin10Profile_t617BBB4E27D09F689C64CC9B4655B5BA288322BA  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXONEWIN10PROFILE_T617BBB4E27D09F689C64CC9B4655B5BA288322BA_H
#ifndef XBOXONEWINPROFILE_T4C78C69AA1878B385899BCA4DA1DB21F28EB4D4C_H
#define XBOXONEWINPROFILE_T4C78C69AA1878B385899BCA4DA1DB21F28EB4D4C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XboxOneWinProfile
struct  XboxOneWinProfile_t4C78C69AA1878B385899BCA4DA1DB21F28EB4D4C  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XBOXONEWINPROFILE_T4C78C69AA1878B385899BCA4DA1DB21F28EB4D4C_H
#ifndef XIAMOIMACPROFILE_T6F5118C1213CE3F241713DCA2AFF8C2BE0E7DA1B_H
#define XIAMOIMACPROFILE_T6F5118C1213CE3F241713DCA2AFF8C2BE0E7DA1B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XiamoiMacProfile
struct  XiamoiMacProfile_t6F5118C1213CE3F241713DCA2AFF8C2BE0E7DA1B  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XIAMOIMACPROFILE_T6F5118C1213CE3F241713DCA2AFF8C2BE0E7DA1B_H
#ifndef XIAMOIWINPROFILE_TFE60E74C0872A34830E3D550302F81D68EBA031F_H
#define XIAMOIWINPROFILE_TFE60E74C0872A34830E3D550302F81D68EBA031F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.XiamoiWinProfile
struct  XiamoiWinProfile_tFE60E74C0872A34830E3D550302F81D68EBA031F  : public UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XIAMOIWINPROFILE_TFE60E74C0872A34830E3D550302F81D68EBA031F_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4100 = { sizeof (NexusPlayerProfile_tD2C810AAC01F5D1C2785CE309680B76AC00F32E0), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4101 = { sizeof (NexusPlayerRemoteProfile_t0223916BCD94D9B092188BF0B81A17E923C73951), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4102 = { sizeof (NexusPlayerWinProfile_t3CFC8749ACA3A8A3A19F492CA22D77680DFA2F99), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4103 = { sizeof (NVidiaShield2016AndroidProfile_tBBD877E2C688A67C07C881D675A60EC2589D7B2C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4104 = { sizeof (NVidiaShield2017AndroidProfile_tA82E845C0C13D395C635E6C1FB76588DEF76DE82), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4105 = { sizeof (NVidiaShieldWin10Profile_tBBCB7C8D6D3F094CC6ECFD116FC2DEC38AA6E548), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4106 = { sizeof (NVidiaShieldWinProfile_tD32E3B2FD111EB562282DDBEF2B4E52739F9B394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4107 = { sizeof (NykoPlayPadProAmazonProfile_t944B5EC06E9410653B84957892D62913F0742A81), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4108 = { sizeof (OuyaAmazonProfile_t2F6100B9BBB167FD48BB3982EBE9369A4B5E5F4D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4109 = { sizeof (OuyaLinuxProfile_t9AB7034EB9447313941900B762DD77B5652E3276), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4110 = { sizeof (OuyaWinProfile_t275C7944EC17994445A325F2176E93F84ED79AD3), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4111 = { sizeof (PlayStation2WinProfile_tB1270C94046243A298BD53479F11E1906A9838C5), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4112 = { sizeof (PlayStation3AndroidProfile_t4D71B1064FF040414D5DEBF0F04CF492D7963BF1), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4113 = { sizeof (PlayStation3BWinProfile_t1C8EBCD65C8C3F1CE92BD9F3C71B66B40E090A06), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4114 = { sizeof (PlayStation3LinuxProfile_t94BCAA4CE2AD4310D3290C1C04CCF88B964F071E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4115 = { sizeof (PlayStation3MacProfile_tFCC66D5B69BE75A3C27C717AF02B6198085EA8B7), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4116 = { sizeof (PlayStation3ShenghicWinProfile_tFDA24A52E30AB8608C6EE396EC64A39189641137), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4117 = { sizeof (PlayStation3WinProfile_t92762E3F75B1668F0BC91A29DEAF3D5432EBEF0A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4118 = { sizeof (PlayStation4AmazonProfile_t595CD7F2909E00BEDB552A225CD7AB70A60393F8), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4119 = { sizeof (PlayStation4AndroidProfile_tD9119EBBB08A10BFFE19258E40ADD9C1185C68CE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4120 = { sizeof (PlayStation4AndroidXperiaZ5Profile_t756C8CF6A928DF0AF1C6E69298C67F346D09A44C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4121 = { sizeof (PlayStation4LinuxProfile_t2B08DBC6B8B12F622AC120DCD4444B4AAA1F9AE1), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4122 = { sizeof (PlayStation4MacBTProfile_t649B932A6A01EE85ACB0EC75BEBC113F9CFBE0EA), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4123 = { sizeof (PlayStation4MacUSBProfile_t8757D9847FDA03BC91CDEC35172469D4DAF2A42E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4124 = { sizeof (PlayStation4Profile_tD68BF9579AA5315E06A794568B8E5315D7D7D4DE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4125 = { sizeof (PlayStation4SteamLinkMacProfile_tFB087A3674DED6A67730FA3546800CE8BEDE1E28), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4126 = { sizeof (PlayStation4WinProfile_t93CEA9CAD266723F7674DEEC303587DE641E3509), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4127 = { sizeof (PlayStationVitaPSMProfile_t43B4EB2F219E6F102573046EF073E5642C9900A2), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4128 = { sizeof (RazerServalForgeTVProfile_t2A60D1A415FDF7E16CD1E0202372F8778983E52F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4129 = { sizeof (RazerServalMacProfile_t007B3E0C073E09D86D2D53DE1FE45DAF06FE4EE6), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4130 = { sizeof (RedSamuraiAndroidProfile_tFE7CF0F57424FD71BB4C53F6D8616E2F6AFB7923), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4131 = { sizeof (SaitekAviatorWinProfile_t90515ECA4404417FAC4726CB2600FD5F6C8226C0), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4132 = { sizeof (SamsungGP20AndroidProfile_tA2193F2C1AEF47D19EC705A19891B1B3E80A7606), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4133 = { sizeof (SpeedlinkStrikeMacProfile_t821589F5C4D116FAAA5DEE52B4B72A750FD63B6A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4134 = { sizeof (SpeedlinkStrikeWinProfile_t67368B1F1FFAA1574D8F93EFA60FAE12F77AC2BE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4135 = { sizeof (SteelSeriesFreeAndroidProfile_t0606E7EC922C6C5F9C2FC28528F4C4E0F691D59F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4136 = { sizeof (SteelSeriesFreeLinuxProfile_t21B8CFE1659305BB9027C8CB363337F49796198A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4137 = { sizeof (SteelSeriesFreeMacProfile_tB7336D34D21CEE55B21D878596E356F8756FC9B5), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4138 = { sizeof (SteelSeriesFreeWinProfile_tBF89FD7C721999284D40F36E79A76D8206ECA027), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4139 = { sizeof (SteelSeriesStratusXLAndroidProfile_t66C2C43527C13B5BA597B8EB0EFC49366F886449), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4140 = { sizeof (SteelSeriesStratusXLWinProfile_t97690DA52DF5694080FEF0106ACCDE7C1CD93873), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4141 = { sizeof (ValveStreamingWinProfile_tF0D556412D8A6891161166186F8FE3281359ED02), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4142 = { sizeof (Xbox360AmazonProfile_t9A2F2088F4FBF3AFE512CD76584C9050BD7A6D22), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4143 = { sizeof (Xbox360AndroidProfile_tFD3C41DD0ED42873C9EDC6AF53D9736631B73688), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4144 = { sizeof (Xbox360LinuxProfile_t242A00D6A5B3A8545CCDBC43B02E282E1036EE34), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4145 = { sizeof (Xbox360MacProfile_t384EAC20252F5367FAA495EB98F5E6429F2B48FA), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4146 = { sizeof (Xbox360RockCandyAndroidProfile_t49FA8AA2DD854BC1944B1DDC606EC156A18EEFFB), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4147 = { sizeof (Xbox360WinProfile_t59982B6F1036CEA8977BADD5D9C427106FACCE33), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4148 = { sizeof (XboxOneBluetoothAndroidProfile_t11EBDE6AFD7D974BADF30DABBE7C74166228FDFF), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4149 = { sizeof (XboxOneMacProfile_t7056F7265804471D7BFBF7C1517593CEB48D1E76), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4150 = { sizeof (XboxOneProfile_t45D44875F14A26458F5BB7E0A6A813BC807A8CC4), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4151 = { sizeof (XboxOneWin10AEProfile_t594C89F380E108D892EF8B4FA42A2CC0162BB09C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4152 = { sizeof (XboxOneWin10Profile_t617BBB4E27D09F689C64CC9B4655B5BA288322BA), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4153 = { sizeof (XboxOneWinProfile_t4C78C69AA1878B385899BCA4DA1DB21F28EB4D4C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4154 = { sizeof (XiamoiMacProfile_t6F5118C1213CE3F241713DCA2AFF8C2BE0E7DA1B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4155 = { sizeof (XiamoiWinProfile_tFE60E74C0872A34830E3D550302F81D68EBA031F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4156 = { sizeof (XTR_G2_MacUnityProfile_t190F600A7B95AC3D6EF9AF6E92B8992203A12A49), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4157 = { sizeof (XTR_G2_WindowsUnityProfile_t52EBA92EC67C140D71C4885C5A395828FB6FAD4C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4158 = { sizeof (XTR55_G2_MacUnityProfile_tA31893D0C4209618E2876EAC1965549FCBCE0811), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4159 = { sizeof (XTR55_G2_WindowsUnityProfile_t47F30C8758BB11B63185DC21053BDB400ADC2925), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4160 = { sizeof (UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392), -1, sizeof(UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4160[7] = 
{
	UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392_StaticFields::get_offset_of_analogQueries_47(),
	UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392_StaticFields::get_offset_of_buttonQueries_48(),
	0,
	0,
	0,
	UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392::get_offset_of_U3CJoystickIdU3Ek__BackingField_52(),
	UnityInputDevice_t78DDD3F0366FDA2266720F37476DEECD1079C392::get_offset_of_profile_53(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4161 = { sizeof (UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4161[9] = 
{
	0,
	UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539::get_offset_of_deviceRefreshTimer_2(),
	UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539::get_offset_of_systemDeviceProfiles_3(),
	UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539::get_offset_of_customDeviceProfiles_4(),
	UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539::get_offset_of_joystickNames_5(),
	UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539::get_offset_of_lastJoystickCount_6(),
	UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539::get_offset_of_lastJoystickHash_7(),
	UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539::get_offset_of_joystickCount_8(),
	UnityInputDeviceManager_tE7EC7845156F9889D707E1561ADA411476754539::get_offset_of_joystickHash_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4162 = { sizeof (U3CU3Ec__DisplayClass21_0_t6C589DAE8D37BE1B5999DDB829A3475AF72D6172), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4162[1] = 
{
	U3CU3Ec__DisplayClass21_0_t6C589DAE8D37BE1B5999DDB829A3475AF72D6172::get_offset_of_unityJoystickName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4163 = { sizeof (AutoDiscover_t6FC3326255DC60D56A0931871A68CFEFB34D2D12), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4164 = { sizeof (UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E), -1, sizeof(UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4164[53] = 
{
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E::get_offset_of_JoystickNames_14(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E::get_offset_of_JoystickRegex_15(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E::get_offset_of_LastResortRegex_16(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E::get_offset_of_U3CMinUnityVersionU3Ek__BackingField_17(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E::get_offset_of_U3CMaxUnityVersionU3Ek__BackingField_18(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button0_19(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button1_20(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button2_21(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button3_22(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button4_23(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button5_24(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button6_25(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button7_26(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button8_27(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button9_28(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button10_29(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button11_30(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button12_31(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button13_32(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button14_33(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button15_34(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button16_35(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button17_36(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button18_37(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Button19_38(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog0_39(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog1_40(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog2_41(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog3_42(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog4_43(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog5_44(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog6_45(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog7_46(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog8_47(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog9_48(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog10_49(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog11_50(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog12_51(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog13_52(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog14_53(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog15_54(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog16_55(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog17_56(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog18_57(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_Analog19_58(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_MenuKey_59(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_EscapeKey_60(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_MouseButton0_61(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_MouseButton1_62(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_MouseButton2_63(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_MouseXAxis_64(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_MouseYAxis_65(),
	UnityInputDeviceProfile_t46088AA65F1206F5214298038664CFF7EDECD80E_StaticFields::get_offset_of_MouseScrollWheel_66(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4165 = { sizeof (UnityInputDeviceProfileBase_t0D6E446BB55E4495CED53E2842FDB5E2B6A268C6), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4166 = { sizeof (UnityInputDeviceProfileList_t60D5216147D7CEE43F8FAB6EB215DB7FFC080A5C), -1, sizeof(UnityInputDeviceProfileList_t60D5216147D7CEE43F8FAB6EB215DB7FFC080A5C_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4166[1] = 
{
	UnityInputDeviceProfileList_t60D5216147D7CEE43F8FAB6EB215DB7FFC080A5C_StaticFields::get_offset_of_Profiles_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4167 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4168 = { sizeof (MarshalUtility_t626CF434097CCF3570194E409E1CD82176E5570E), -1, sizeof(MarshalUtility_t626CF434097CCF3570194E409E1CD82176E5570E_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4168[1] = 
{
	MarshalUtility_t626CF434097CCF3570194E409E1CD82176E5570E_StaticFields::get_offset_of_buffer_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4169 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4169[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4170 = { sizeof (SingletonPrefabAttribute_tB86D9728B6F278A2DEE994E0FEEC4926E4D0442A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4170[1] = 
{
	SingletonPrefabAttribute_tB86D9728B6F278A2DEE994E0FEEC4926E4D0442A::get_offset_of_Name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4171 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4171[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4172 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4172[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4173 = { sizeof (Utility_t305955C60DA21A14A6D7B8B122194EC92F3A2B20), -1, sizeof(Utility_t305955C60DA21A14A6D7B8B122194EC92F3A2B20_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4173[2] = 
{
	0,
	Utility_t305955C60DA21A14A6D7B8B122194EC92F3A2B20_StaticFields::get_offset_of_circleVertexList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4174 = { sizeof (VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C)+ sizeof (RuntimeObject), sizeof(VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C ), 0, 0 };
extern const int32_t g_FieldOffsetTable4174[4] = 
{
	VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C::get_offset_of_Major_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C::get_offset_of_Minor_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C::get_offset_of_Patch_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VersionInfo_tA70ED30EB2EF7A63C1080C1D382B1FF37E13376C::get_offset_of_Build_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4175 = { sizeof (XboxOneInputDevice_t9ABA9F56C5AC16D36243F5F0C888E2DB6B4E063C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4175[11] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	XboxOneInputDevice_t9ABA9F56C5AC16D36243F5F0C888E2DB6B4E063C::get_offset_of_U3CJoystickIdU3Ek__BackingField_55(),
	XboxOneInputDevice_t9ABA9F56C5AC16D36243F5F0C888E2DB6B4E063C::get_offset_of_U3CControllerIdU3Ek__BackingField_56(),
	XboxOneInputDevice_t9ABA9F56C5AC16D36243F5F0C888E2DB6B4E063C::get_offset_of_analogAxisNameForId_57(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4176 = { sizeof (XboxOneInputDeviceManager_t8021F7FB4338CDF57C964715BAF6DB1412059B41), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4176[2] = 
{
	0,
	XboxOneInputDeviceManager_t8021F7FB4338CDF57C964715BAF6DB1412059B41::get_offset_of_deviceConnected_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4177 = { sizeof (TestInputManager_t1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4177[4] = 
{
	TestInputManager_t1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE::get_offset_of_font_4(),
	TestInputManager_t1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE::get_offset_of_style_5(),
	TestInputManager_t1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE::get_offset_of_logMessages_6(),
	TestInputManager_t1CDF138BD81F6F7D1BA84349C9BA6E88F8B4B4AE::get_offset_of_isPaused_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4178 = { sizeof (U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A), -1, sizeof(U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4178[4] = 
{
	U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A_StaticFields::get_offset_of_U3CU3E9__4_1_1(),
	U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A_StaticFields::get_offset_of_U3CU3E9__4_2_2(),
	U3CU3Ec_tE5D14339E4D58407B20461C71BA435FE9B74138A_StaticFields::get_offset_of_U3CU3E9__4_3_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4179 = { sizeof (CodeWriter_t8298A436C703758B141D75CC2C8E837282550558), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4179[3] = 
{
	0,
	CodeWriter_t8298A436C703758B141D75CC2C8E837282550558::get_offset_of_indent_1(),
	CodeWriter_t8298A436C703758B141D75CC2C8E837282550558::get_offset_of_stringBuilder_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4180 = { sizeof (AfterglowPrismaticXboxOneControllerMacProfile_t0903E772BC7FE7A1E01ED4140238E4C50BCCCD00), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4181 = { sizeof (APlayControllerMacProfile_tC331EA0896A96AF3E066DD2632747F74D3300103), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4182 = { sizeof (BatarangControllerMacProfile_t5B3A37AA6916C234AEDDA00C016D9BAC259F572E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4183 = { sizeof (BETAOPControllerMacProfile_tAB678960DD290CF688BD5A2161BF53A20AFD54B6), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4184 = { sizeof (BigBenControllerMacProfile_t8E227FD951ABF1BE30370EEBC062E4A76C9CC590), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4185 = { sizeof (EASportsControllerMacProfile_tFDD24CE6F689968B17CAF62F1FC63D7CF39CC704), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4186 = { sizeof (GameStopControllerMacProfile_tC2342C327E51535A05D220FFFC77026488933030), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4187 = { sizeof (GuitarHeroControllerMacProfile_t4073AA15EF22F748BD541B0A9D3122ED6AD31A6F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4188 = { sizeof (HoriBlueSoloControllerMacProfile_tE6F84433AC8875B27D864427956197C80011CBA2), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4189 = { sizeof (HoriControllerMacProfile_tA44989B1CD5B66D7464C24A9D7482562CE1FD1FE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4190 = { sizeof (HoriDOA4ArcadeStickMacProfile_t6A96E6F0F06F5EBC9B2AD63F87C4CCA4CF99168A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4191 = { sizeof (HoriEX2ControllerMacProfile_t82875ABEFCD57F139AA67DFDDCACDF3178F3D8AE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4192 = { sizeof (HoriFightingStickEX2MacProfile_t6890444B99580F221526BAD789921C73C248D8AD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4193 = { sizeof (HoriFightingStickVXMacProfile_t2ADACB77966581631FE066BC94DC2953EE68FBB8), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4194 = { sizeof (HoriFightStickMacProfile_t73BF562DD848BF88DC1E3023A10350981A262D0B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4195 = { sizeof (HoriPadEXTurboControllerMacProfile_t6AC183B7F0925F5E5C4B1AED0700D8920E03B236), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4196 = { sizeof (HoriPadUltimateMacProfile_t329FA8DB5B14FB0C59D84DC546F50F2524D67528), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4197 = { sizeof (HoriRealArcadeProEXMacProfile_t91CBA0D76A4DD144F2C949731E9465B703AE719B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4198 = { sizeof (HoriRealArcadeProEXPremiumVLXMacProfile_tB2372DD7630E922892C7FBF262F51874E2B64F44), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4199 = { sizeof (HoriRealArcadeProEXSEMacProfile_t1E893CA2C9D500434CE786B941D3638C907CF6E4), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
