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


// System.Collections.Generic.List`1<InControl.InputDevice>
struct List_1_t1716019080;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// InControl.InputDevice
struct InputDevice_t243944338;
// InControl.RingBuffer`1<InControl.ICadeState>
struct RingBuffer_1_t1945894233;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Action
struct Action_t1264377477;
// System.Action`2<System.UInt64,System.Single>
struct Action_2_t3897525408;
// System.Action`1<InControl.InputDevice>
struct Action_1_t416411933;
// System.Collections.Generic.List`1<InControl.InputDeviceManager>
struct List_1_t513466359;
// System.Collections.Generic.Dictionary`2<System.Type,InControl.InputDeviceManager>
struct Dictionary_2_t1485738681;
// System.Collections.Generic.List`1<InControl.PlayerActionSet>
struct List_1_t505020592;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputDevice>
struct ReadOnlyCollection_1_t1456520625;
// System.String
struct String_t;
// System.Comparison`1<InControl.InputDevice>
struct Comparison_1_t18875517;
// InControl.InputControlMapping[]
struct InputControlMappingU5BU5D_t2585457374;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t1048894234;
// System.Collections.Generic.List`1<InControl.InputControl>
struct List_1_t3655608361;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputControl>
struct ReadOnlyCollection_1_t3396109906;
// InControl.InputControl[]
struct InputControlU5BU5D_t3173617058;
// InControl.TwoAxisInputControl
struct TwoAxisInputControl_t1190563457;
// InControl.InputDevice/AnalogSnapshotEntry[]
struct AnalogSnapshotEntryU5BU5D_t1438382780;
// InControl.InputControl
struct InputControl_t2183533619;
// InControl.ICadeDeviceManager
struct ICadeDeviceManager_t451636877;
// InControl.NativeInputDeviceMatcher[]
struct NativeInputDeviceMatcherU5BU5D_t19578164;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t537414295;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t2331243652;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t3630163547;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t2696614423;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t384203932;
// InControl.PlayerAction
struct PlayerAction_t3289186710;
// InControl.PlayerTwoAxisAction
struct PlayerTwoAxisAction_t523650685;




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
#ifndef NATIVEBUTTONSOURCE_T1656032293_H
#define NATIVEBUTTONSOURCE_T1656032293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeButtonSource
struct  NativeButtonSource_t1656032293  : public RuntimeObject
{
public:
	// System.Int32 InControl.NativeButtonSource::ButtonIndex
	int32_t ___ButtonIndex_0;

public:
	inline static int32_t get_offset_of_ButtonIndex_0() { return static_cast<int32_t>(offsetof(NativeButtonSource_t1656032293, ___ButtonIndex_0)); }
	inline int32_t get_ButtonIndex_0() const { return ___ButtonIndex_0; }
	inline int32_t* get_address_of_ButtonIndex_0() { return &___ButtonIndex_0; }
	inline void set_ButtonIndex_0(int32_t value)
	{
		___ButtonIndex_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEBUTTONSOURCE_T1656032293_H
#ifndef INPUTDEVICEMANAGER_T3336358913_H
#define INPUTDEVICEMANAGER_T3336358913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDeviceManager
struct  InputDeviceManager_t3336358913  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<InControl.InputDevice> InControl.InputDeviceManager::devices
	List_1_t1716019080 * ___devices_0;

public:
	inline static int32_t get_offset_of_devices_0() { return static_cast<int32_t>(offsetof(InputDeviceManager_t3336358913, ___devices_0)); }
	inline List_1_t1716019080 * get_devices_0() const { return ___devices_0; }
	inline List_1_t1716019080 ** get_address_of_devices_0() { return &___devices_0; }
	inline void set_devices_0(List_1_t1716019080 * value)
	{
		___devices_0 = value;
		Il2CppCodeGenWriteBarrier((&___devices_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTDEVICEMANAGER_T3336358913_H
#ifndef ICADENATIVE_T921961869_H
#define ICADENATIVE_T921961869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.ICadeNative
struct  ICadeNative_t921961869  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICADENATIVE_T921961869_H
#ifndef NATIVEANALOGSOURCE_T3587642276_H
#define NATIVEANALOGSOURCE_T3587642276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeAnalogSource
struct  NativeAnalogSource_t3587642276  : public RuntimeObject
{
public:
	// System.Int32 InControl.NativeAnalogSource::AnalogIndex
	int32_t ___AnalogIndex_0;

public:
	inline static int32_t get_offset_of_AnalogIndex_0() { return static_cast<int32_t>(offsetof(NativeAnalogSource_t3587642276, ___AnalogIndex_0)); }
	inline int32_t get_AnalogIndex_0() const { return ___AnalogIndex_0; }
	inline int32_t* get_address_of_AnalogIndex_0() { return &___AnalogIndex_0; }
	inline void set_AnalogIndex_0(int32_t value)
	{
		___AnalogIndex_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEANALOGSOURCE_T3587642276_H
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
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
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
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef ICADEDEVICEMANAGER_T451636877_H
#define ICADEDEVICEMANAGER_T451636877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.ICadeDeviceManager
struct  ICadeDeviceManager_t451636877  : public InputDeviceManager_t3336358913
{
public:
	// InControl.InputDevice InControl.ICadeDeviceManager::device
	InputDevice_t243944338 * ___device_1;
	// InControl.RingBuffer`1<InControl.ICadeState> InControl.ICadeDeviceManager::state
	RingBuffer_1_t1945894233 * ___state_2;
	// System.Threading.Thread InControl.ICadeDeviceManager::thread
	Thread_t2300836069 * ___thread_3;
	// System.Int32 InControl.ICadeDeviceManager::timeStep
	int32_t ___timeStep_4;
	// System.Int32 InControl.ICadeDeviceManager::bufferSize
	int32_t ___bufferSize_5;
	// System.Boolean InControl.ICadeDeviceManager::active
	bool ___active_6;

public:
	inline static int32_t get_offset_of_device_1() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t451636877, ___device_1)); }
	inline InputDevice_t243944338 * get_device_1() const { return ___device_1; }
	inline InputDevice_t243944338 ** get_address_of_device_1() { return &___device_1; }
	inline void set_device_1(InputDevice_t243944338 * value)
	{
		___device_1 = value;
		Il2CppCodeGenWriteBarrier((&___device_1), value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t451636877, ___state_2)); }
	inline RingBuffer_1_t1945894233 * get_state_2() const { return ___state_2; }
	inline RingBuffer_1_t1945894233 ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(RingBuffer_1_t1945894233 * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier((&___state_2), value);
	}

	inline static int32_t get_offset_of_thread_3() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t451636877, ___thread_3)); }
	inline Thread_t2300836069 * get_thread_3() const { return ___thread_3; }
	inline Thread_t2300836069 ** get_address_of_thread_3() { return &___thread_3; }
	inline void set_thread_3(Thread_t2300836069 * value)
	{
		___thread_3 = value;
		Il2CppCodeGenWriteBarrier((&___thread_3), value);
	}

	inline static int32_t get_offset_of_timeStep_4() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t451636877, ___timeStep_4)); }
	inline int32_t get_timeStep_4() const { return ___timeStep_4; }
	inline int32_t* get_address_of_timeStep_4() { return &___timeStep_4; }
	inline void set_timeStep_4(int32_t value)
	{
		___timeStep_4 = value;
	}

	inline static int32_t get_offset_of_bufferSize_5() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t451636877, ___bufferSize_5)); }
	inline int32_t get_bufferSize_5() const { return ___bufferSize_5; }
	inline int32_t* get_address_of_bufferSize_5() { return &___bufferSize_5; }
	inline void set_bufferSize_5(int32_t value)
	{
		___bufferSize_5 = value;
	}

	inline static int32_t get_offset_of_active_6() { return static_cast<int32_t>(offsetof(ICadeDeviceManager_t451636877, ___active_6)); }
	inline bool get_active_6() const { return ___active_6; }
	inline bool* get_address_of_active_6() { return &___active_6; }
	inline void set_active_6(bool value)
	{
		___active_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICADEDEVICEMANAGER_T451636877_H
#ifndef BUTTON_T829055668_H
#define BUTTON_T829055668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InControlInputModule/Button
struct  Button_t829055668 
{
public:
	// System.Int32 InControl.InControlInputModule/Button::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Button_t829055668, ___value___1)); }
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
#endif // BUTTON_T829055668_H
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
#ifndef NULLABLE_1_T1315279145_H
#define NULLABLE_1_T1315279145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<InControl.VersionInfo>
struct  Nullable_1_t1315279145 
{
public:
	// T System.Nullable`1::value
	VersionInfo_t3887684359  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1315279145, ___value_0)); }
	inline VersionInfo_t3887684359  get_value_0() const { return ___value_0; }
	inline VersionInfo_t3887684359 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VersionInfo_t3887684359  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1315279145, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1315279145_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ICADESTATE_T2026727165_H
#define ICADESTATE_T2026727165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.ICadeState
struct  ICadeState_t2026727165 
{
public:
	// System.Int32 InControl.ICadeState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ICadeState_t2026727165, ___value___1)); }
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
#endif // ICADESTATE_T2026727165_H
#ifndef INPUTMANAGER_T3343230510_H
#define INPUTMANAGER_T3343230510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputManager
struct  InputManager_t3343230510  : public RuntimeObject
{
public:

public:
};

struct InputManager_t3343230510_StaticFields
{
public:
	// InControl.VersionInfo InControl.InputManager::Version
	VersionInfo_t3887684359  ___Version_0;
	// System.Action InControl.InputManager::OnSetup
	Action_t1264377477 * ___OnSetup_1;
	// System.Action`2<System.UInt64,System.Single> InControl.InputManager::OnUpdate
	Action_2_t3897525408 * ___OnUpdate_2;
	// System.Action InControl.InputManager::OnReset
	Action_t1264377477 * ___OnReset_3;
	// System.Action`1<InControl.InputDevice> InControl.InputManager::OnDeviceAttached
	Action_1_t416411933 * ___OnDeviceAttached_4;
	// System.Action`1<InControl.InputDevice> InControl.InputManager::OnDeviceDetached
	Action_1_t416411933 * ___OnDeviceDetached_5;
	// System.Action`1<InControl.InputDevice> InControl.InputManager::OnActiveDeviceChanged
	Action_1_t416411933 * ___OnActiveDeviceChanged_6;
	// System.Action`2<System.UInt64,System.Single> InControl.InputManager::OnUpdateDevices
	Action_2_t3897525408 * ___OnUpdateDevices_7;
	// System.Action`2<System.UInt64,System.Single> InControl.InputManager::OnCommitDevices
	Action_2_t3897525408 * ___OnCommitDevices_8;
	// System.Collections.Generic.List`1<InControl.InputDeviceManager> InControl.InputManager::deviceManagers
	List_1_t513466359 * ___deviceManagers_9;
	// System.Collections.Generic.Dictionary`2<System.Type,InControl.InputDeviceManager> InControl.InputManager::deviceManagerTable
	Dictionary_2_t1485738681 * ___deviceManagerTable_10;
	// InControl.InputDevice InControl.InputManager::activeDevice
	InputDevice_t243944338 * ___activeDevice_11;
	// System.Collections.Generic.List`1<InControl.InputDevice> InControl.InputManager::devices
	List_1_t1716019080 * ___devices_12;
	// System.Collections.Generic.List`1<InControl.PlayerActionSet> InControl.InputManager::playerActionSets
	List_1_t505020592 * ___playerActionSets_13;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputDevice> InControl.InputManager::Devices
	ReadOnlyCollection_1_t1456520625 * ___Devices_14;
	// System.Boolean InControl.InputManager::<CommandWasPressed>k__BackingField
	bool ___U3CCommandWasPressedU3Ek__BackingField_15;
	// System.Boolean InControl.InputManager::<InvertYAxis>k__BackingField
	bool ___U3CInvertYAxisU3Ek__BackingField_16;
	// System.Boolean InControl.InputManager::<IsSetup>k__BackingField
	bool ___U3CIsSetupU3Ek__BackingField_17;
	// System.String InControl.InputManager::<Platform>k__BackingField
	String_t* ___U3CPlatformU3Ek__BackingField_18;
	// System.Boolean InControl.InputManager::applicationIsFocused
	bool ___applicationIsFocused_19;
	// System.Single InControl.InputManager::initialTime
	float ___initialTime_20;
	// System.Single InControl.InputManager::currentTime
	float ___currentTime_21;
	// System.Single InControl.InputManager::lastUpdateTime
	float ___lastUpdateTime_22;
	// System.UInt64 InControl.InputManager::currentTick
	uint64_t ___currentTick_23;
	// System.Nullable`1<InControl.VersionInfo> InControl.InputManager::unityVersion
	Nullable_1_t1315279145  ___unityVersion_24;
	// System.Boolean InControl.InputManager::enabled
	bool ___enabled_25;
	// System.Boolean InControl.InputManager::<SuspendInBackground>k__BackingField
	bool ___U3CSuspendInBackgroundU3Ek__BackingField_26;
	// System.Boolean InControl.InputManager::<EnableNativeInput>k__BackingField
	bool ___U3CEnableNativeInputU3Ek__BackingField_27;
	// System.Boolean InControl.InputManager::<EnableXInput>k__BackingField
	bool ___U3CEnableXInputU3Ek__BackingField_28;
	// System.UInt32 InControl.InputManager::<XInputUpdateRate>k__BackingField
	uint32_t ___U3CXInputUpdateRateU3Ek__BackingField_29;
	// System.UInt32 InControl.InputManager::<XInputBufferSize>k__BackingField
	uint32_t ___U3CXInputBufferSizeU3Ek__BackingField_30;
	// System.Boolean InControl.InputManager::<NativeInputEnableXInput>k__BackingField
	bool ___U3CNativeInputEnableXInputU3Ek__BackingField_31;
	// System.Boolean InControl.InputManager::<NativeInputPreventSleep>k__BackingField
	bool ___U3CNativeInputPreventSleepU3Ek__BackingField_32;
	// System.UInt32 InControl.InputManager::<NativeInputUpdateRate>k__BackingField
	uint32_t ___U3CNativeInputUpdateRateU3Ek__BackingField_33;
	// System.Boolean InControl.InputManager::<EnableICade>k__BackingField
	bool ___U3CEnableICadeU3Ek__BackingField_34;
	// System.Comparison`1<InControl.InputDevice> InControl.InputManager::<>f__am$cache0
	Comparison_1_t18875517 * ___U3CU3Ef__amU24cache0_35;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___Version_0)); }
	inline VersionInfo_t3887684359  get_Version_0() const { return ___Version_0; }
	inline VersionInfo_t3887684359 * get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(VersionInfo_t3887684359  value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_OnSetup_1() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___OnSetup_1)); }
	inline Action_t1264377477 * get_OnSetup_1() const { return ___OnSetup_1; }
	inline Action_t1264377477 ** get_address_of_OnSetup_1() { return &___OnSetup_1; }
	inline void set_OnSetup_1(Action_t1264377477 * value)
	{
		___OnSetup_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnSetup_1), value);
	}

	inline static int32_t get_offset_of_OnUpdate_2() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___OnUpdate_2)); }
	inline Action_2_t3897525408 * get_OnUpdate_2() const { return ___OnUpdate_2; }
	inline Action_2_t3897525408 ** get_address_of_OnUpdate_2() { return &___OnUpdate_2; }
	inline void set_OnUpdate_2(Action_2_t3897525408 * value)
	{
		___OnUpdate_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnUpdate_2), value);
	}

	inline static int32_t get_offset_of_OnReset_3() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___OnReset_3)); }
	inline Action_t1264377477 * get_OnReset_3() const { return ___OnReset_3; }
	inline Action_t1264377477 ** get_address_of_OnReset_3() { return &___OnReset_3; }
	inline void set_OnReset_3(Action_t1264377477 * value)
	{
		___OnReset_3 = value;
		Il2CppCodeGenWriteBarrier((&___OnReset_3), value);
	}

	inline static int32_t get_offset_of_OnDeviceAttached_4() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___OnDeviceAttached_4)); }
	inline Action_1_t416411933 * get_OnDeviceAttached_4() const { return ___OnDeviceAttached_4; }
	inline Action_1_t416411933 ** get_address_of_OnDeviceAttached_4() { return &___OnDeviceAttached_4; }
	inline void set_OnDeviceAttached_4(Action_1_t416411933 * value)
	{
		___OnDeviceAttached_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnDeviceAttached_4), value);
	}

	inline static int32_t get_offset_of_OnDeviceDetached_5() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___OnDeviceDetached_5)); }
	inline Action_1_t416411933 * get_OnDeviceDetached_5() const { return ___OnDeviceDetached_5; }
	inline Action_1_t416411933 ** get_address_of_OnDeviceDetached_5() { return &___OnDeviceDetached_5; }
	inline void set_OnDeviceDetached_5(Action_1_t416411933 * value)
	{
		___OnDeviceDetached_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnDeviceDetached_5), value);
	}

	inline static int32_t get_offset_of_OnActiveDeviceChanged_6() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___OnActiveDeviceChanged_6)); }
	inline Action_1_t416411933 * get_OnActiveDeviceChanged_6() const { return ___OnActiveDeviceChanged_6; }
	inline Action_1_t416411933 ** get_address_of_OnActiveDeviceChanged_6() { return &___OnActiveDeviceChanged_6; }
	inline void set_OnActiveDeviceChanged_6(Action_1_t416411933 * value)
	{
		___OnActiveDeviceChanged_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnActiveDeviceChanged_6), value);
	}

	inline static int32_t get_offset_of_OnUpdateDevices_7() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___OnUpdateDevices_7)); }
	inline Action_2_t3897525408 * get_OnUpdateDevices_7() const { return ___OnUpdateDevices_7; }
	inline Action_2_t3897525408 ** get_address_of_OnUpdateDevices_7() { return &___OnUpdateDevices_7; }
	inline void set_OnUpdateDevices_7(Action_2_t3897525408 * value)
	{
		___OnUpdateDevices_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnUpdateDevices_7), value);
	}

	inline static int32_t get_offset_of_OnCommitDevices_8() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___OnCommitDevices_8)); }
	inline Action_2_t3897525408 * get_OnCommitDevices_8() const { return ___OnCommitDevices_8; }
	inline Action_2_t3897525408 ** get_address_of_OnCommitDevices_8() { return &___OnCommitDevices_8; }
	inline void set_OnCommitDevices_8(Action_2_t3897525408 * value)
	{
		___OnCommitDevices_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnCommitDevices_8), value);
	}

	inline static int32_t get_offset_of_deviceManagers_9() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___deviceManagers_9)); }
	inline List_1_t513466359 * get_deviceManagers_9() const { return ___deviceManagers_9; }
	inline List_1_t513466359 ** get_address_of_deviceManagers_9() { return &___deviceManagers_9; }
	inline void set_deviceManagers_9(List_1_t513466359 * value)
	{
		___deviceManagers_9 = value;
		Il2CppCodeGenWriteBarrier((&___deviceManagers_9), value);
	}

	inline static int32_t get_offset_of_deviceManagerTable_10() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___deviceManagerTable_10)); }
	inline Dictionary_2_t1485738681 * get_deviceManagerTable_10() const { return ___deviceManagerTable_10; }
	inline Dictionary_2_t1485738681 ** get_address_of_deviceManagerTable_10() { return &___deviceManagerTable_10; }
	inline void set_deviceManagerTable_10(Dictionary_2_t1485738681 * value)
	{
		___deviceManagerTable_10 = value;
		Il2CppCodeGenWriteBarrier((&___deviceManagerTable_10), value);
	}

	inline static int32_t get_offset_of_activeDevice_11() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___activeDevice_11)); }
	inline InputDevice_t243944338 * get_activeDevice_11() const { return ___activeDevice_11; }
	inline InputDevice_t243944338 ** get_address_of_activeDevice_11() { return &___activeDevice_11; }
	inline void set_activeDevice_11(InputDevice_t243944338 * value)
	{
		___activeDevice_11 = value;
		Il2CppCodeGenWriteBarrier((&___activeDevice_11), value);
	}

	inline static int32_t get_offset_of_devices_12() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___devices_12)); }
	inline List_1_t1716019080 * get_devices_12() const { return ___devices_12; }
	inline List_1_t1716019080 ** get_address_of_devices_12() { return &___devices_12; }
	inline void set_devices_12(List_1_t1716019080 * value)
	{
		___devices_12 = value;
		Il2CppCodeGenWriteBarrier((&___devices_12), value);
	}

	inline static int32_t get_offset_of_playerActionSets_13() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___playerActionSets_13)); }
	inline List_1_t505020592 * get_playerActionSets_13() const { return ___playerActionSets_13; }
	inline List_1_t505020592 ** get_address_of_playerActionSets_13() { return &___playerActionSets_13; }
	inline void set_playerActionSets_13(List_1_t505020592 * value)
	{
		___playerActionSets_13 = value;
		Il2CppCodeGenWriteBarrier((&___playerActionSets_13), value);
	}

	inline static int32_t get_offset_of_Devices_14() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___Devices_14)); }
	inline ReadOnlyCollection_1_t1456520625 * get_Devices_14() const { return ___Devices_14; }
	inline ReadOnlyCollection_1_t1456520625 ** get_address_of_Devices_14() { return &___Devices_14; }
	inline void set_Devices_14(ReadOnlyCollection_1_t1456520625 * value)
	{
		___Devices_14 = value;
		Il2CppCodeGenWriteBarrier((&___Devices_14), value);
	}

	inline static int32_t get_offset_of_U3CCommandWasPressedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CCommandWasPressedU3Ek__BackingField_15)); }
	inline bool get_U3CCommandWasPressedU3Ek__BackingField_15() const { return ___U3CCommandWasPressedU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CCommandWasPressedU3Ek__BackingField_15() { return &___U3CCommandWasPressedU3Ek__BackingField_15; }
	inline void set_U3CCommandWasPressedU3Ek__BackingField_15(bool value)
	{
		___U3CCommandWasPressedU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CInvertYAxisU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CInvertYAxisU3Ek__BackingField_16)); }
	inline bool get_U3CInvertYAxisU3Ek__BackingField_16() const { return ___U3CInvertYAxisU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CInvertYAxisU3Ek__BackingField_16() { return &___U3CInvertYAxisU3Ek__BackingField_16; }
	inline void set_U3CInvertYAxisU3Ek__BackingField_16(bool value)
	{
		___U3CInvertYAxisU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CIsSetupU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CIsSetupU3Ek__BackingField_17)); }
	inline bool get_U3CIsSetupU3Ek__BackingField_17() const { return ___U3CIsSetupU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CIsSetupU3Ek__BackingField_17() { return &___U3CIsSetupU3Ek__BackingField_17; }
	inline void set_U3CIsSetupU3Ek__BackingField_17(bool value)
	{
		___U3CIsSetupU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CPlatformU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CPlatformU3Ek__BackingField_18)); }
	inline String_t* get_U3CPlatformU3Ek__BackingField_18() const { return ___U3CPlatformU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CPlatformU3Ek__BackingField_18() { return &___U3CPlatformU3Ek__BackingField_18; }
	inline void set_U3CPlatformU3Ek__BackingField_18(String_t* value)
	{
		___U3CPlatformU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPlatformU3Ek__BackingField_18), value);
	}

	inline static int32_t get_offset_of_applicationIsFocused_19() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___applicationIsFocused_19)); }
	inline bool get_applicationIsFocused_19() const { return ___applicationIsFocused_19; }
	inline bool* get_address_of_applicationIsFocused_19() { return &___applicationIsFocused_19; }
	inline void set_applicationIsFocused_19(bool value)
	{
		___applicationIsFocused_19 = value;
	}

	inline static int32_t get_offset_of_initialTime_20() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___initialTime_20)); }
	inline float get_initialTime_20() const { return ___initialTime_20; }
	inline float* get_address_of_initialTime_20() { return &___initialTime_20; }
	inline void set_initialTime_20(float value)
	{
		___initialTime_20 = value;
	}

	inline static int32_t get_offset_of_currentTime_21() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___currentTime_21)); }
	inline float get_currentTime_21() const { return ___currentTime_21; }
	inline float* get_address_of_currentTime_21() { return &___currentTime_21; }
	inline void set_currentTime_21(float value)
	{
		___currentTime_21 = value;
	}

	inline static int32_t get_offset_of_lastUpdateTime_22() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___lastUpdateTime_22)); }
	inline float get_lastUpdateTime_22() const { return ___lastUpdateTime_22; }
	inline float* get_address_of_lastUpdateTime_22() { return &___lastUpdateTime_22; }
	inline void set_lastUpdateTime_22(float value)
	{
		___lastUpdateTime_22 = value;
	}

	inline static int32_t get_offset_of_currentTick_23() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___currentTick_23)); }
	inline uint64_t get_currentTick_23() const { return ___currentTick_23; }
	inline uint64_t* get_address_of_currentTick_23() { return &___currentTick_23; }
	inline void set_currentTick_23(uint64_t value)
	{
		___currentTick_23 = value;
	}

	inline static int32_t get_offset_of_unityVersion_24() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___unityVersion_24)); }
	inline Nullable_1_t1315279145  get_unityVersion_24() const { return ___unityVersion_24; }
	inline Nullable_1_t1315279145 * get_address_of_unityVersion_24() { return &___unityVersion_24; }
	inline void set_unityVersion_24(Nullable_1_t1315279145  value)
	{
		___unityVersion_24 = value;
	}

	inline static int32_t get_offset_of_enabled_25() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___enabled_25)); }
	inline bool get_enabled_25() const { return ___enabled_25; }
	inline bool* get_address_of_enabled_25() { return &___enabled_25; }
	inline void set_enabled_25(bool value)
	{
		___enabled_25 = value;
	}

	inline static int32_t get_offset_of_U3CSuspendInBackgroundU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CSuspendInBackgroundU3Ek__BackingField_26)); }
	inline bool get_U3CSuspendInBackgroundU3Ek__BackingField_26() const { return ___U3CSuspendInBackgroundU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CSuspendInBackgroundU3Ek__BackingField_26() { return &___U3CSuspendInBackgroundU3Ek__BackingField_26; }
	inline void set_U3CSuspendInBackgroundU3Ek__BackingField_26(bool value)
	{
		___U3CSuspendInBackgroundU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CEnableNativeInputU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CEnableNativeInputU3Ek__BackingField_27)); }
	inline bool get_U3CEnableNativeInputU3Ek__BackingField_27() const { return ___U3CEnableNativeInputU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CEnableNativeInputU3Ek__BackingField_27() { return &___U3CEnableNativeInputU3Ek__BackingField_27; }
	inline void set_U3CEnableNativeInputU3Ek__BackingField_27(bool value)
	{
		___U3CEnableNativeInputU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CEnableXInputU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CEnableXInputU3Ek__BackingField_28)); }
	inline bool get_U3CEnableXInputU3Ek__BackingField_28() const { return ___U3CEnableXInputU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CEnableXInputU3Ek__BackingField_28() { return &___U3CEnableXInputU3Ek__BackingField_28; }
	inline void set_U3CEnableXInputU3Ek__BackingField_28(bool value)
	{
		___U3CEnableXInputU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CXInputUpdateRateU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CXInputUpdateRateU3Ek__BackingField_29)); }
	inline uint32_t get_U3CXInputUpdateRateU3Ek__BackingField_29() const { return ___U3CXInputUpdateRateU3Ek__BackingField_29; }
	inline uint32_t* get_address_of_U3CXInputUpdateRateU3Ek__BackingField_29() { return &___U3CXInputUpdateRateU3Ek__BackingField_29; }
	inline void set_U3CXInputUpdateRateU3Ek__BackingField_29(uint32_t value)
	{
		___U3CXInputUpdateRateU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CXInputBufferSizeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CXInputBufferSizeU3Ek__BackingField_30)); }
	inline uint32_t get_U3CXInputBufferSizeU3Ek__BackingField_30() const { return ___U3CXInputBufferSizeU3Ek__BackingField_30; }
	inline uint32_t* get_address_of_U3CXInputBufferSizeU3Ek__BackingField_30() { return &___U3CXInputBufferSizeU3Ek__BackingField_30; }
	inline void set_U3CXInputBufferSizeU3Ek__BackingField_30(uint32_t value)
	{
		___U3CXInputBufferSizeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CNativeInputEnableXInputU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CNativeInputEnableXInputU3Ek__BackingField_31)); }
	inline bool get_U3CNativeInputEnableXInputU3Ek__BackingField_31() const { return ___U3CNativeInputEnableXInputU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CNativeInputEnableXInputU3Ek__BackingField_31() { return &___U3CNativeInputEnableXInputU3Ek__BackingField_31; }
	inline void set_U3CNativeInputEnableXInputU3Ek__BackingField_31(bool value)
	{
		___U3CNativeInputEnableXInputU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CNativeInputPreventSleepU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CNativeInputPreventSleepU3Ek__BackingField_32)); }
	inline bool get_U3CNativeInputPreventSleepU3Ek__BackingField_32() const { return ___U3CNativeInputPreventSleepU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CNativeInputPreventSleepU3Ek__BackingField_32() { return &___U3CNativeInputPreventSleepU3Ek__BackingField_32; }
	inline void set_U3CNativeInputPreventSleepU3Ek__BackingField_32(bool value)
	{
		___U3CNativeInputPreventSleepU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CNativeInputUpdateRateU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CNativeInputUpdateRateU3Ek__BackingField_33)); }
	inline uint32_t get_U3CNativeInputUpdateRateU3Ek__BackingField_33() const { return ___U3CNativeInputUpdateRateU3Ek__BackingField_33; }
	inline uint32_t* get_address_of_U3CNativeInputUpdateRateU3Ek__BackingField_33() { return &___U3CNativeInputUpdateRateU3Ek__BackingField_33; }
	inline void set_U3CNativeInputUpdateRateU3Ek__BackingField_33(uint32_t value)
	{
		___U3CNativeInputUpdateRateU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CEnableICadeU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CEnableICadeU3Ek__BackingField_34)); }
	inline bool get_U3CEnableICadeU3Ek__BackingField_34() const { return ___U3CEnableICadeU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CEnableICadeU3Ek__BackingField_34() { return &___U3CEnableICadeU3Ek__BackingField_34; }
	inline void set_U3CEnableICadeU3Ek__BackingField_34(bool value)
	{
		___U3CEnableICadeU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_35() { return static_cast<int32_t>(offsetof(InputManager_t3343230510_StaticFields, ___U3CU3Ef__amU24cache0_35)); }
	inline Comparison_1_t18875517 * get_U3CU3Ef__amU24cache0_35() const { return ___U3CU3Ef__amU24cache0_35; }
	inline Comparison_1_t18875517 ** get_address_of_U3CU3Ef__amU24cache0_35() { return &___U3CU3Ef__amU24cache0_35; }
	inline void set_U3CU3Ef__amU24cache0_35(Comparison_1_t18875517 * value)
	{
		___U3CU3Ef__amU24cache0_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTMANAGER_T3343230510_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
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
#ifndef INPUTDEVICE_T243944338_H
#define INPUTDEVICE_T243944338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDevice
struct  InputDevice_t243944338  : public RuntimeObject
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
	List_1_t3655608361 * ___controls_10;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputControl> InControl.InputDevice::<Controls>k__BackingField
	ReadOnlyCollection_1_t3396109906 * ___U3CControlsU3Ek__BackingField_11;
	// InControl.InputControl[] InControl.InputDevice::<ControlsByTarget>k__BackingField
	InputControlU5BU5D_t3173617058* ___U3CControlsByTargetU3Ek__BackingField_12;
	// InControl.TwoAxisInputControl InControl.InputDevice::<LeftStick>k__BackingField
	TwoAxisInputControl_t1190563457 * ___U3CLeftStickU3Ek__BackingField_13;
	// InControl.TwoAxisInputControl InControl.InputDevice::<RightStick>k__BackingField
	TwoAxisInputControl_t1190563457 * ___U3CRightStickU3Ek__BackingField_14;
	// InControl.TwoAxisInputControl InControl.InputDevice::<DPad>k__BackingField
	TwoAxisInputControl_t1190563457 * ___U3CDPadU3Ek__BackingField_15;
	// System.Boolean InControl.InputDevice::Passive
	bool ___Passive_16;
	// InControl.InputDevice/AnalogSnapshotEntry[] InControl.InputDevice::<AnalogSnapshot>k__BackingField
	AnalogSnapshotEntryU5BU5D_t1438382780* ___U3CAnalogSnapshotU3Ek__BackingField_17;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickUp
	InputControl_t2183533619 * ___cachedLeftStickUp_18;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickDown
	InputControl_t2183533619 * ___cachedLeftStickDown_19;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickLeft
	InputControl_t2183533619 * ___cachedLeftStickLeft_20;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickRight
	InputControl_t2183533619 * ___cachedLeftStickRight_21;
	// InControl.InputControl InControl.InputDevice::cachedRightStickUp
	InputControl_t2183533619 * ___cachedRightStickUp_22;
	// InControl.InputControl InControl.InputDevice::cachedRightStickDown
	InputControl_t2183533619 * ___cachedRightStickDown_23;
	// InControl.InputControl InControl.InputDevice::cachedRightStickLeft
	InputControl_t2183533619 * ___cachedRightStickLeft_24;
	// InControl.InputControl InControl.InputDevice::cachedRightStickRight
	InputControl_t2183533619 * ___cachedRightStickRight_25;
	// InControl.InputControl InControl.InputDevice::cachedDPadUp
	InputControl_t2183533619 * ___cachedDPadUp_26;
	// InControl.InputControl InControl.InputDevice::cachedDPadDown
	InputControl_t2183533619 * ___cachedDPadDown_27;
	// InControl.InputControl InControl.InputDevice::cachedDPadLeft
	InputControl_t2183533619 * ___cachedDPadLeft_28;
	// InControl.InputControl InControl.InputDevice::cachedDPadRight
	InputControl_t2183533619 * ___cachedDPadRight_29;
	// InControl.InputControl InControl.InputDevice::cachedAction1
	InputControl_t2183533619 * ___cachedAction1_30;
	// InControl.InputControl InControl.InputDevice::cachedAction2
	InputControl_t2183533619 * ___cachedAction2_31;
	// InControl.InputControl InControl.InputDevice::cachedAction3
	InputControl_t2183533619 * ___cachedAction3_32;
	// InControl.InputControl InControl.InputDevice::cachedAction4
	InputControl_t2183533619 * ___cachedAction4_33;
	// InControl.InputControl InControl.InputDevice::cachedLeftTrigger
	InputControl_t2183533619 * ___cachedLeftTrigger_34;
	// InControl.InputControl InControl.InputDevice::cachedRightTrigger
	InputControl_t2183533619 * ___cachedRightTrigger_35;
	// InControl.InputControl InControl.InputDevice::cachedLeftBumper
	InputControl_t2183533619 * ___cachedLeftBumper_36;
	// InControl.InputControl InControl.InputDevice::cachedRightBumper
	InputControl_t2183533619 * ___cachedRightBumper_37;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickButton
	InputControl_t2183533619 * ___cachedLeftStickButton_38;
	// InControl.InputControl InControl.InputDevice::cachedRightStickButton
	InputControl_t2183533619 * ___cachedRightStickButton_39;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickX
	InputControl_t2183533619 * ___cachedLeftStickX_40;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickY
	InputControl_t2183533619 * ___cachedLeftStickY_41;
	// InControl.InputControl InControl.InputDevice::cachedRightStickX
	InputControl_t2183533619 * ___cachedRightStickX_42;
	// InControl.InputControl InControl.InputDevice::cachedRightStickY
	InputControl_t2183533619 * ___cachedRightStickY_43;
	// InControl.InputControl InControl.InputDevice::cachedDPadX
	InputControl_t2183533619 * ___cachedDPadX_44;
	// InControl.InputControl InControl.InputDevice::cachedDPadY
	InputControl_t2183533619 * ___cachedDPadY_45;
	// InControl.InputControl InControl.InputDevice::cachedCommand
	InputControl_t2183533619 * ___cachedCommand_46;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CMetaU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CMetaU3Ek__BackingField_2)); }
	inline String_t* get_U3CMetaU3Ek__BackingField_2() const { return ___U3CMetaU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMetaU3Ek__BackingField_2() { return &___U3CMetaU3Ek__BackingField_2; }
	inline void set_U3CMetaU3Ek__BackingField_2(String_t* value)
	{
		___U3CMetaU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMetaU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CSortOrderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CSortOrderU3Ek__BackingField_3)); }
	inline int32_t get_U3CSortOrderU3Ek__BackingField_3() const { return ___U3CSortOrderU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSortOrderU3Ek__BackingField_3() { return &___U3CSortOrderU3Ek__BackingField_3; }
	inline void set_U3CSortOrderU3Ek__BackingField_3(int32_t value)
	{
		___U3CSortOrderU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceClassU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CDeviceClassU3Ek__BackingField_4)); }
	inline int32_t get_U3CDeviceClassU3Ek__BackingField_4() const { return ___U3CDeviceClassU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CDeviceClassU3Ek__BackingField_4() { return &___U3CDeviceClassU3Ek__BackingField_4; }
	inline void set_U3CDeviceClassU3Ek__BackingField_4(int32_t value)
	{
		___U3CDeviceClassU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceStyleU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CDeviceStyleU3Ek__BackingField_5)); }
	inline int32_t get_U3CDeviceStyleU3Ek__BackingField_5() const { return ___U3CDeviceStyleU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CDeviceStyleU3Ek__BackingField_5() { return &___U3CDeviceStyleU3Ek__BackingField_5; }
	inline void set_U3CDeviceStyleU3Ek__BackingField_5(int32_t value)
	{
		___U3CDeviceStyleU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGUIDU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CGUIDU3Ek__BackingField_6)); }
	inline Guid_t  get_U3CGUIDU3Ek__BackingField_6() const { return ___U3CGUIDU3Ek__BackingField_6; }
	inline Guid_t * get_address_of_U3CGUIDU3Ek__BackingField_6() { return &___U3CGUIDU3Ek__BackingField_6; }
	inline void set_U3CGUIDU3Ek__BackingField_6(Guid_t  value)
	{
		___U3CGUIDU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLastChangeTickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CLastChangeTickU3Ek__BackingField_7)); }
	inline uint64_t get_U3CLastChangeTickU3Ek__BackingField_7() const { return ___U3CLastChangeTickU3Ek__BackingField_7; }
	inline uint64_t* get_address_of_U3CLastChangeTickU3Ek__BackingField_7() { return &___U3CLastChangeTickU3Ek__BackingField_7; }
	inline void set_U3CLastChangeTickU3Ek__BackingField_7(uint64_t value)
	{
		___U3CLastChangeTickU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsAttachedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CIsAttachedU3Ek__BackingField_8)); }
	inline bool get_U3CIsAttachedU3Ek__BackingField_8() const { return ___U3CIsAttachedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsAttachedU3Ek__BackingField_8() { return &___U3CIsAttachedU3Ek__BackingField_8; }
	inline void set_U3CIsAttachedU3Ek__BackingField_8(bool value)
	{
		___U3CIsAttachedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CRawSticksU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CRawSticksU3Ek__BackingField_9)); }
	inline bool get_U3CRawSticksU3Ek__BackingField_9() const { return ___U3CRawSticksU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CRawSticksU3Ek__BackingField_9() { return &___U3CRawSticksU3Ek__BackingField_9; }
	inline void set_U3CRawSticksU3Ek__BackingField_9(bool value)
	{
		___U3CRawSticksU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_controls_10() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___controls_10)); }
	inline List_1_t3655608361 * get_controls_10() const { return ___controls_10; }
	inline List_1_t3655608361 ** get_address_of_controls_10() { return &___controls_10; }
	inline void set_controls_10(List_1_t3655608361 * value)
	{
		___controls_10 = value;
		Il2CppCodeGenWriteBarrier((&___controls_10), value);
	}

	inline static int32_t get_offset_of_U3CControlsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CControlsU3Ek__BackingField_11)); }
	inline ReadOnlyCollection_1_t3396109906 * get_U3CControlsU3Ek__BackingField_11() const { return ___U3CControlsU3Ek__BackingField_11; }
	inline ReadOnlyCollection_1_t3396109906 ** get_address_of_U3CControlsU3Ek__BackingField_11() { return &___U3CControlsU3Ek__BackingField_11; }
	inline void set_U3CControlsU3Ek__BackingField_11(ReadOnlyCollection_1_t3396109906 * value)
	{
		___U3CControlsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CControlsU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CControlsByTargetU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CControlsByTargetU3Ek__BackingField_12)); }
	inline InputControlU5BU5D_t3173617058* get_U3CControlsByTargetU3Ek__BackingField_12() const { return ___U3CControlsByTargetU3Ek__BackingField_12; }
	inline InputControlU5BU5D_t3173617058** get_address_of_U3CControlsByTargetU3Ek__BackingField_12() { return &___U3CControlsByTargetU3Ek__BackingField_12; }
	inline void set_U3CControlsByTargetU3Ek__BackingField_12(InputControlU5BU5D_t3173617058* value)
	{
		___U3CControlsByTargetU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CControlsByTargetU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CLeftStickU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CLeftStickU3Ek__BackingField_13)); }
	inline TwoAxisInputControl_t1190563457 * get_U3CLeftStickU3Ek__BackingField_13() const { return ___U3CLeftStickU3Ek__BackingField_13; }
	inline TwoAxisInputControl_t1190563457 ** get_address_of_U3CLeftStickU3Ek__BackingField_13() { return &___U3CLeftStickU3Ek__BackingField_13; }
	inline void set_U3CLeftStickU3Ek__BackingField_13(TwoAxisInputControl_t1190563457 * value)
	{
		___U3CLeftStickU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLeftStickU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CRightStickU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CRightStickU3Ek__BackingField_14)); }
	inline TwoAxisInputControl_t1190563457 * get_U3CRightStickU3Ek__BackingField_14() const { return ___U3CRightStickU3Ek__BackingField_14; }
	inline TwoAxisInputControl_t1190563457 ** get_address_of_U3CRightStickU3Ek__BackingField_14() { return &___U3CRightStickU3Ek__BackingField_14; }
	inline void set_U3CRightStickU3Ek__BackingField_14(TwoAxisInputControl_t1190563457 * value)
	{
		___U3CRightStickU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRightStickU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_U3CDPadU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CDPadU3Ek__BackingField_15)); }
	inline TwoAxisInputControl_t1190563457 * get_U3CDPadU3Ek__BackingField_15() const { return ___U3CDPadU3Ek__BackingField_15; }
	inline TwoAxisInputControl_t1190563457 ** get_address_of_U3CDPadU3Ek__BackingField_15() { return &___U3CDPadU3Ek__BackingField_15; }
	inline void set_U3CDPadU3Ek__BackingField_15(TwoAxisInputControl_t1190563457 * value)
	{
		___U3CDPadU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDPadU3Ek__BackingField_15), value);
	}

	inline static int32_t get_offset_of_Passive_16() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___Passive_16)); }
	inline bool get_Passive_16() const { return ___Passive_16; }
	inline bool* get_address_of_Passive_16() { return &___Passive_16; }
	inline void set_Passive_16(bool value)
	{
		___Passive_16 = value;
	}

	inline static int32_t get_offset_of_U3CAnalogSnapshotU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___U3CAnalogSnapshotU3Ek__BackingField_17)); }
	inline AnalogSnapshotEntryU5BU5D_t1438382780* get_U3CAnalogSnapshotU3Ek__BackingField_17() const { return ___U3CAnalogSnapshotU3Ek__BackingField_17; }
	inline AnalogSnapshotEntryU5BU5D_t1438382780** get_address_of_U3CAnalogSnapshotU3Ek__BackingField_17() { return &___U3CAnalogSnapshotU3Ek__BackingField_17; }
	inline void set_U3CAnalogSnapshotU3Ek__BackingField_17(AnalogSnapshotEntryU5BU5D_t1438382780* value)
	{
		___U3CAnalogSnapshotU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAnalogSnapshotU3Ek__BackingField_17), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickUp_18() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedLeftStickUp_18)); }
	inline InputControl_t2183533619 * get_cachedLeftStickUp_18() const { return ___cachedLeftStickUp_18; }
	inline InputControl_t2183533619 ** get_address_of_cachedLeftStickUp_18() { return &___cachedLeftStickUp_18; }
	inline void set_cachedLeftStickUp_18(InputControl_t2183533619 * value)
	{
		___cachedLeftStickUp_18 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickUp_18), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickDown_19() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedLeftStickDown_19)); }
	inline InputControl_t2183533619 * get_cachedLeftStickDown_19() const { return ___cachedLeftStickDown_19; }
	inline InputControl_t2183533619 ** get_address_of_cachedLeftStickDown_19() { return &___cachedLeftStickDown_19; }
	inline void set_cachedLeftStickDown_19(InputControl_t2183533619 * value)
	{
		___cachedLeftStickDown_19 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickDown_19), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickLeft_20() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedLeftStickLeft_20)); }
	inline InputControl_t2183533619 * get_cachedLeftStickLeft_20() const { return ___cachedLeftStickLeft_20; }
	inline InputControl_t2183533619 ** get_address_of_cachedLeftStickLeft_20() { return &___cachedLeftStickLeft_20; }
	inline void set_cachedLeftStickLeft_20(InputControl_t2183533619 * value)
	{
		___cachedLeftStickLeft_20 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickLeft_20), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickRight_21() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedLeftStickRight_21)); }
	inline InputControl_t2183533619 * get_cachedLeftStickRight_21() const { return ___cachedLeftStickRight_21; }
	inline InputControl_t2183533619 ** get_address_of_cachedLeftStickRight_21() { return &___cachedLeftStickRight_21; }
	inline void set_cachedLeftStickRight_21(InputControl_t2183533619 * value)
	{
		___cachedLeftStickRight_21 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickRight_21), value);
	}

	inline static int32_t get_offset_of_cachedRightStickUp_22() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedRightStickUp_22)); }
	inline InputControl_t2183533619 * get_cachedRightStickUp_22() const { return ___cachedRightStickUp_22; }
	inline InputControl_t2183533619 ** get_address_of_cachedRightStickUp_22() { return &___cachedRightStickUp_22; }
	inline void set_cachedRightStickUp_22(InputControl_t2183533619 * value)
	{
		___cachedRightStickUp_22 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickUp_22), value);
	}

	inline static int32_t get_offset_of_cachedRightStickDown_23() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedRightStickDown_23)); }
	inline InputControl_t2183533619 * get_cachedRightStickDown_23() const { return ___cachedRightStickDown_23; }
	inline InputControl_t2183533619 ** get_address_of_cachedRightStickDown_23() { return &___cachedRightStickDown_23; }
	inline void set_cachedRightStickDown_23(InputControl_t2183533619 * value)
	{
		___cachedRightStickDown_23 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickDown_23), value);
	}

	inline static int32_t get_offset_of_cachedRightStickLeft_24() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedRightStickLeft_24)); }
	inline InputControl_t2183533619 * get_cachedRightStickLeft_24() const { return ___cachedRightStickLeft_24; }
	inline InputControl_t2183533619 ** get_address_of_cachedRightStickLeft_24() { return &___cachedRightStickLeft_24; }
	inline void set_cachedRightStickLeft_24(InputControl_t2183533619 * value)
	{
		___cachedRightStickLeft_24 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickLeft_24), value);
	}

	inline static int32_t get_offset_of_cachedRightStickRight_25() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedRightStickRight_25)); }
	inline InputControl_t2183533619 * get_cachedRightStickRight_25() const { return ___cachedRightStickRight_25; }
	inline InputControl_t2183533619 ** get_address_of_cachedRightStickRight_25() { return &___cachedRightStickRight_25; }
	inline void set_cachedRightStickRight_25(InputControl_t2183533619 * value)
	{
		___cachedRightStickRight_25 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickRight_25), value);
	}

	inline static int32_t get_offset_of_cachedDPadUp_26() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedDPadUp_26)); }
	inline InputControl_t2183533619 * get_cachedDPadUp_26() const { return ___cachedDPadUp_26; }
	inline InputControl_t2183533619 ** get_address_of_cachedDPadUp_26() { return &___cachedDPadUp_26; }
	inline void set_cachedDPadUp_26(InputControl_t2183533619 * value)
	{
		___cachedDPadUp_26 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadUp_26), value);
	}

	inline static int32_t get_offset_of_cachedDPadDown_27() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedDPadDown_27)); }
	inline InputControl_t2183533619 * get_cachedDPadDown_27() const { return ___cachedDPadDown_27; }
	inline InputControl_t2183533619 ** get_address_of_cachedDPadDown_27() { return &___cachedDPadDown_27; }
	inline void set_cachedDPadDown_27(InputControl_t2183533619 * value)
	{
		___cachedDPadDown_27 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadDown_27), value);
	}

	inline static int32_t get_offset_of_cachedDPadLeft_28() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedDPadLeft_28)); }
	inline InputControl_t2183533619 * get_cachedDPadLeft_28() const { return ___cachedDPadLeft_28; }
	inline InputControl_t2183533619 ** get_address_of_cachedDPadLeft_28() { return &___cachedDPadLeft_28; }
	inline void set_cachedDPadLeft_28(InputControl_t2183533619 * value)
	{
		___cachedDPadLeft_28 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadLeft_28), value);
	}

	inline static int32_t get_offset_of_cachedDPadRight_29() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedDPadRight_29)); }
	inline InputControl_t2183533619 * get_cachedDPadRight_29() const { return ___cachedDPadRight_29; }
	inline InputControl_t2183533619 ** get_address_of_cachedDPadRight_29() { return &___cachedDPadRight_29; }
	inline void set_cachedDPadRight_29(InputControl_t2183533619 * value)
	{
		___cachedDPadRight_29 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadRight_29), value);
	}

	inline static int32_t get_offset_of_cachedAction1_30() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedAction1_30)); }
	inline InputControl_t2183533619 * get_cachedAction1_30() const { return ___cachedAction1_30; }
	inline InputControl_t2183533619 ** get_address_of_cachedAction1_30() { return &___cachedAction1_30; }
	inline void set_cachedAction1_30(InputControl_t2183533619 * value)
	{
		___cachedAction1_30 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAction1_30), value);
	}

	inline static int32_t get_offset_of_cachedAction2_31() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedAction2_31)); }
	inline InputControl_t2183533619 * get_cachedAction2_31() const { return ___cachedAction2_31; }
	inline InputControl_t2183533619 ** get_address_of_cachedAction2_31() { return &___cachedAction2_31; }
	inline void set_cachedAction2_31(InputControl_t2183533619 * value)
	{
		___cachedAction2_31 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAction2_31), value);
	}

	inline static int32_t get_offset_of_cachedAction3_32() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedAction3_32)); }
	inline InputControl_t2183533619 * get_cachedAction3_32() const { return ___cachedAction3_32; }
	inline InputControl_t2183533619 ** get_address_of_cachedAction3_32() { return &___cachedAction3_32; }
	inline void set_cachedAction3_32(InputControl_t2183533619 * value)
	{
		___cachedAction3_32 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAction3_32), value);
	}

	inline static int32_t get_offset_of_cachedAction4_33() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedAction4_33)); }
	inline InputControl_t2183533619 * get_cachedAction4_33() const { return ___cachedAction4_33; }
	inline InputControl_t2183533619 ** get_address_of_cachedAction4_33() { return &___cachedAction4_33; }
	inline void set_cachedAction4_33(InputControl_t2183533619 * value)
	{
		___cachedAction4_33 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAction4_33), value);
	}

	inline static int32_t get_offset_of_cachedLeftTrigger_34() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedLeftTrigger_34)); }
	inline InputControl_t2183533619 * get_cachedLeftTrigger_34() const { return ___cachedLeftTrigger_34; }
	inline InputControl_t2183533619 ** get_address_of_cachedLeftTrigger_34() { return &___cachedLeftTrigger_34; }
	inline void set_cachedLeftTrigger_34(InputControl_t2183533619 * value)
	{
		___cachedLeftTrigger_34 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftTrigger_34), value);
	}

	inline static int32_t get_offset_of_cachedRightTrigger_35() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedRightTrigger_35)); }
	inline InputControl_t2183533619 * get_cachedRightTrigger_35() const { return ___cachedRightTrigger_35; }
	inline InputControl_t2183533619 ** get_address_of_cachedRightTrigger_35() { return &___cachedRightTrigger_35; }
	inline void set_cachedRightTrigger_35(InputControl_t2183533619 * value)
	{
		___cachedRightTrigger_35 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightTrigger_35), value);
	}

	inline static int32_t get_offset_of_cachedLeftBumper_36() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedLeftBumper_36)); }
	inline InputControl_t2183533619 * get_cachedLeftBumper_36() const { return ___cachedLeftBumper_36; }
	inline InputControl_t2183533619 ** get_address_of_cachedLeftBumper_36() { return &___cachedLeftBumper_36; }
	inline void set_cachedLeftBumper_36(InputControl_t2183533619 * value)
	{
		___cachedLeftBumper_36 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftBumper_36), value);
	}

	inline static int32_t get_offset_of_cachedRightBumper_37() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedRightBumper_37)); }
	inline InputControl_t2183533619 * get_cachedRightBumper_37() const { return ___cachedRightBumper_37; }
	inline InputControl_t2183533619 ** get_address_of_cachedRightBumper_37() { return &___cachedRightBumper_37; }
	inline void set_cachedRightBumper_37(InputControl_t2183533619 * value)
	{
		___cachedRightBumper_37 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightBumper_37), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickButton_38() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedLeftStickButton_38)); }
	inline InputControl_t2183533619 * get_cachedLeftStickButton_38() const { return ___cachedLeftStickButton_38; }
	inline InputControl_t2183533619 ** get_address_of_cachedLeftStickButton_38() { return &___cachedLeftStickButton_38; }
	inline void set_cachedLeftStickButton_38(InputControl_t2183533619 * value)
	{
		___cachedLeftStickButton_38 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickButton_38), value);
	}

	inline static int32_t get_offset_of_cachedRightStickButton_39() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedRightStickButton_39)); }
	inline InputControl_t2183533619 * get_cachedRightStickButton_39() const { return ___cachedRightStickButton_39; }
	inline InputControl_t2183533619 ** get_address_of_cachedRightStickButton_39() { return &___cachedRightStickButton_39; }
	inline void set_cachedRightStickButton_39(InputControl_t2183533619 * value)
	{
		___cachedRightStickButton_39 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickButton_39), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickX_40() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedLeftStickX_40)); }
	inline InputControl_t2183533619 * get_cachedLeftStickX_40() const { return ___cachedLeftStickX_40; }
	inline InputControl_t2183533619 ** get_address_of_cachedLeftStickX_40() { return &___cachedLeftStickX_40; }
	inline void set_cachedLeftStickX_40(InputControl_t2183533619 * value)
	{
		___cachedLeftStickX_40 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickX_40), value);
	}

	inline static int32_t get_offset_of_cachedLeftStickY_41() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedLeftStickY_41)); }
	inline InputControl_t2183533619 * get_cachedLeftStickY_41() const { return ___cachedLeftStickY_41; }
	inline InputControl_t2183533619 ** get_address_of_cachedLeftStickY_41() { return &___cachedLeftStickY_41; }
	inline void set_cachedLeftStickY_41(InputControl_t2183533619 * value)
	{
		___cachedLeftStickY_41 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLeftStickY_41), value);
	}

	inline static int32_t get_offset_of_cachedRightStickX_42() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedRightStickX_42)); }
	inline InputControl_t2183533619 * get_cachedRightStickX_42() const { return ___cachedRightStickX_42; }
	inline InputControl_t2183533619 ** get_address_of_cachedRightStickX_42() { return &___cachedRightStickX_42; }
	inline void set_cachedRightStickX_42(InputControl_t2183533619 * value)
	{
		___cachedRightStickX_42 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickX_42), value);
	}

	inline static int32_t get_offset_of_cachedRightStickY_43() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedRightStickY_43)); }
	inline InputControl_t2183533619 * get_cachedRightStickY_43() const { return ___cachedRightStickY_43; }
	inline InputControl_t2183533619 ** get_address_of_cachedRightStickY_43() { return &___cachedRightStickY_43; }
	inline void set_cachedRightStickY_43(InputControl_t2183533619 * value)
	{
		___cachedRightStickY_43 = value;
		Il2CppCodeGenWriteBarrier((&___cachedRightStickY_43), value);
	}

	inline static int32_t get_offset_of_cachedDPadX_44() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedDPadX_44)); }
	inline InputControl_t2183533619 * get_cachedDPadX_44() const { return ___cachedDPadX_44; }
	inline InputControl_t2183533619 ** get_address_of_cachedDPadX_44() { return &___cachedDPadX_44; }
	inline void set_cachedDPadX_44(InputControl_t2183533619 * value)
	{
		___cachedDPadX_44 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadX_44), value);
	}

	inline static int32_t get_offset_of_cachedDPadY_45() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedDPadY_45)); }
	inline InputControl_t2183533619 * get_cachedDPadY_45() const { return ___cachedDPadY_45; }
	inline InputControl_t2183533619 ** get_address_of_cachedDPadY_45() { return &___cachedDPadY_45; }
	inline void set_cachedDPadY_45(InputControl_t2183533619 * value)
	{
		___cachedDPadY_45 = value;
		Il2CppCodeGenWriteBarrier((&___cachedDPadY_45), value);
	}

	inline static int32_t get_offset_of_cachedCommand_46() { return static_cast<int32_t>(offsetof(InputDevice_t243944338, ___cachedCommand_46)); }
	inline InputControl_t2183533619 * get_cachedCommand_46() const { return ___cachedCommand_46; }
	inline InputControl_t2183533619 ** get_address_of_cachedCommand_46() { return &___cachedCommand_46; }
	inline void set_cachedCommand_46(InputControl_t2183533619 * value)
	{
		___cachedCommand_46 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCommand_46), value);
	}
};

struct InputDevice_t243944338_StaticFields
{
public:
	// InControl.InputDevice InControl.InputDevice::Null
	InputDevice_t243944338 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(InputDevice_t243944338_StaticFields, ___Null_0)); }
	inline InputDevice_t243944338 * get_Null_0() const { return ___Null_0; }
	inline InputDevice_t243944338 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(InputDevice_t243944338 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTDEVICE_T243944338_H
#ifndef ICADEDEVICE_T1383269849_H
#define ICADEDEVICE_T1383269849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.ICadeDevice
struct  ICadeDevice_t1383269849  : public InputDevice_t243944338
{
public:
	// InControl.ICadeDeviceManager InControl.ICadeDevice::owner
	ICadeDeviceManager_t451636877 * ___owner_47;
	// InControl.ICadeState InControl.ICadeDevice::state
	int32_t ___state_48;

public:
	inline static int32_t get_offset_of_owner_47() { return static_cast<int32_t>(offsetof(ICadeDevice_t1383269849, ___owner_47)); }
	inline ICadeDeviceManager_t451636877 * get_owner_47() const { return ___owner_47; }
	inline ICadeDeviceManager_t451636877 ** get_address_of_owner_47() { return &___owner_47; }
	inline void set_owner_47(ICadeDeviceManager_t451636877 * value)
	{
		___owner_47 = value;
		Il2CppCodeGenWriteBarrier((&___owner_47), value);
	}

	inline static int32_t get_offset_of_state_48() { return static_cast<int32_t>(offsetof(ICadeDevice_t1383269849, ___state_48)); }
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
#endif // ICADEDEVICE_T1383269849_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
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
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
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
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
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
#ifndef HORIREALARCADEPROEXPREMIUMVLXMACPROFILE_T4128515403_H
#define HORIREALARCADEPROEXPREMIUMVLXMACPROFILE_T4128515403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriRealArcadeProEXPremiumVLXMacProfile
struct  HoriRealArcadeProEXPremiumVLXMacProfile_t4128515403  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIREALARCADEPROEXPREMIUMVLXMACPROFILE_T4128515403_H
#ifndef HORIREALARCADEPROEXMACPROFILE_T2355914713_H
#define HORIREALARCADEPROEXMACPROFILE_T2355914713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriRealArcadeProEXMacProfile
struct  HoriRealArcadeProEXMacProfile_t2355914713  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIREALARCADEPROEXMACPROFILE_T2355914713_H
#ifndef HORIPADULTIMATEMACPROFILE_T2614825158_H
#define HORIPADULTIMATEMACPROFILE_T2614825158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriPadUltimateMacProfile
struct  HoriPadUltimateMacProfile_t2614825158  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIPADULTIMATEMACPROFILE_T2614825158_H
#ifndef HORIPADEXTURBOCONTROLLERMACPROFILE_T3924191826_H
#define HORIPADEXTURBOCONTROLLERMACPROFILE_T3924191826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriPadEXTurboControllerMacProfile
struct  HoriPadEXTurboControllerMacProfile_t3924191826  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIPADEXTURBOCONTROLLERMACPROFILE_T3924191826_H
#ifndef HORIFIGHTSTICKMACPROFILE_T1614242406_H
#define HORIFIGHTSTICKMACPROFILE_T1614242406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriFightStickMacProfile
struct  HoriFightStickMacProfile_t1614242406  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIFIGHTSTICKMACPROFILE_T1614242406_H
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
#ifndef HORIFIGHTINGSTICKVXMACPROFILE_T3506454866_H
#define HORIFIGHTINGSTICKVXMACPROFILE_T3506454866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriFightingStickVXMacProfile
struct  HoriFightingStickVXMacProfile_t3506454866  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIFIGHTINGSTICKVXMACPROFILE_T3506454866_H
#ifndef EASPORTSCONTROLLERMACPROFILE_T4275855645_H
#define EASPORTSCONTROLLERMACPROFILE_T4275855645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.EASportsControllerMacProfile
struct  EASportsControllerMacProfile_t4275855645  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASPORTSCONTROLLERMACPROFILE_T4275855645_H
#ifndef BIGBENCONTROLLERMACPROFILE_T2185540012_H
#define BIGBENCONTROLLERMACPROFILE_T2185540012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.BigBenControllerMacProfile
struct  BigBenControllerMacProfile_t2185540012  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGBENCONTROLLERMACPROFILE_T2185540012_H
#ifndef BETAOPCONTROLLERMACPROFILE_T2389791307_H
#define BETAOPCONTROLLERMACPROFILE_T2389791307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.BETAOPControllerMacProfile
struct  BETAOPControllerMacProfile_t2389791307  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BETAOPCONTROLLERMACPROFILE_T2389791307_H
#ifndef BATARANGCONTROLLERMACPROFILE_T275398379_H
#define BATARANGCONTROLLERMACPROFILE_T275398379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.BatarangControllerMacProfile
struct  BatarangControllerMacProfile_t275398379  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATARANGCONTROLLERMACPROFILE_T275398379_H
#ifndef APLAYCONTROLLERMACPROFILE_T1002012349_H
#define APLAYCONTROLLERMACPROFILE_T1002012349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.APlayControllerMacProfile
struct  APlayControllerMacProfile_t1002012349  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APLAYCONTROLLERMACPROFILE_T1002012349_H
#ifndef AFTERGLOWPRISMATICXBOXONECONTROLLERMACPROFILE_T2824448015_H
#define AFTERGLOWPRISMATICXBOXONECONTROLLERMACPROFILE_T2824448015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.AfterglowPrismaticXboxOneControllerMacProfile
struct  AfterglowPrismaticXboxOneControllerMacProfile_t2824448015  : public XboxOneDriverMacProfile_t4249812493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AFTERGLOWPRISMATICXBOXONECONTROLLERMACPROFILE_T2824448015_H
#ifndef GAMESTOPCONTROLLERMACPROFILE_T3323527712_H
#define GAMESTOPCONTROLLERMACPROFILE_T3323527712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.GameStopControllerMacProfile
struct  GameStopControllerMacProfile_t3323527712  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTOPCONTROLLERMACPROFILE_T3323527712_H
#ifndef HORIFIGHTINGSTICKEX2MACPROFILE_T2762398431_H
#define HORIFIGHTINGSTICKEX2MACPROFILE_T2762398431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriFightingStickEX2MacProfile
struct  HoriFightingStickEX2MacProfile_t2762398431  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIFIGHTINGSTICKEX2MACPROFILE_T2762398431_H
#ifndef HORIEX2CONTROLLERMACPROFILE_T1235028675_H
#define HORIEX2CONTROLLERMACPROFILE_T1235028675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriEX2ControllerMacProfile
struct  HoriEX2ControllerMacProfile_t1235028675  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIEX2CONTROLLERMACPROFILE_T1235028675_H
#ifndef HORIDOA4ARCADESTICKMACPROFILE_T273793670_H
#define HORIDOA4ARCADESTICKMACPROFILE_T273793670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriDOA4ArcadeStickMacProfile
struct  HoriDOA4ArcadeStickMacProfile_t273793670  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIDOA4ARCADESTICKMACPROFILE_T273793670_H
#ifndef HORICONTROLLERMACPROFILE_T2497288034_H
#define HORICONTROLLERMACPROFILE_T2497288034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriControllerMacProfile
struct  HoriControllerMacProfile_t2497288034  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORICONTROLLERMACPROFILE_T2497288034_H
#ifndef HORIBLUESOLOCONTROLLERMACPROFILE_T2916127853_H
#define HORIBLUESOLOCONTROLLERMACPROFILE_T2916127853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.HoriBlueSoloControllerMacProfile
struct  HoriBlueSoloControllerMacProfile_t2916127853  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIBLUESOLOCONTROLLERMACPROFILE_T2916127853_H
#ifndef GUITARHEROCONTROLLERMACPROFILE_T3734750033_H
#define GUITARHEROCONTROLLERMACPROFILE_T3734750033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.NativeProfile.GuitarHeroControllerMacProfile
struct  GuitarHeroControllerMacProfile_t3734750033  : public Xbox360DriverMacProfile_t1968726057
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITARHEROCONTROLLERMACPROFILE_T3734750033_H
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
#ifndef BASEINPUTMODULE_T2019268878_H
#define BASEINPUTMODULE_T2019268878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t2019268878  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t537414295 * ___m_RaycastResultCache_2;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t2331243652 * ___m_AxisEventData_3;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_4;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t3903027533 * ___m_BaseEventData_5;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t3630163547 * ___m_InputOverride_6;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t3630163547 * ___m_DefaultInput_7;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_2() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_RaycastResultCache_2)); }
	inline List_1_t537414295 * get_m_RaycastResultCache_2() const { return ___m_RaycastResultCache_2; }
	inline List_1_t537414295 ** get_address_of_m_RaycastResultCache_2() { return &___m_RaycastResultCache_2; }
	inline void set_m_RaycastResultCache_2(List_1_t537414295 * value)
	{
		___m_RaycastResultCache_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastResultCache_2), value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_3() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_AxisEventData_3)); }
	inline AxisEventData_t2331243652 * get_m_AxisEventData_3() const { return ___m_AxisEventData_3; }
	inline AxisEventData_t2331243652 ** get_address_of_m_AxisEventData_3() { return &___m_AxisEventData_3; }
	inline void set_m_AxisEventData_3(AxisEventData_t2331243652 * value)
	{
		___m_AxisEventData_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AxisEventData_3), value);
	}

	inline static int32_t get_offset_of_m_EventSystem_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_EventSystem_4)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_4() const { return ___m_EventSystem_4; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_4() { return &___m_EventSystem_4; }
	inline void set_m_EventSystem_4(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_4), value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_BaseEventData_5)); }
	inline BaseEventData_t3903027533 * get_m_BaseEventData_5() const { return ___m_BaseEventData_5; }
	inline BaseEventData_t3903027533 ** get_address_of_m_BaseEventData_5() { return &___m_BaseEventData_5; }
	inline void set_m_BaseEventData_5(BaseEventData_t3903027533 * value)
	{
		___m_BaseEventData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_BaseEventData_5), value);
	}

	inline static int32_t get_offset_of_m_InputOverride_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_InputOverride_6)); }
	inline BaseInput_t3630163547 * get_m_InputOverride_6() const { return ___m_InputOverride_6; }
	inline BaseInput_t3630163547 ** get_address_of_m_InputOverride_6() { return &___m_InputOverride_6; }
	inline void set_m_InputOverride_6(BaseInput_t3630163547 * value)
	{
		___m_InputOverride_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputOverride_6), value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_DefaultInput_7)); }
	inline BaseInput_t3630163547 * get_m_DefaultInput_7() const { return ___m_DefaultInput_7; }
	inline BaseInput_t3630163547 ** get_address_of_m_DefaultInput_7() { return &___m_DefaultInput_7; }
	inline void set_m_DefaultInput_7(BaseInput_t3630163547 * value)
	{
		___m_DefaultInput_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefaultInput_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTMODULE_T2019268878_H
#ifndef POINTERINPUTMODULE_T3453173740_H
#define POINTERINPUTMODULE_T3453173740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_t3453173740  : public BaseInputModule_t2019268878
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t2696614423 * ___m_PointerData_12;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t384203932 * ___m_MouseState_13;

public:
	inline static int32_t get_offset_of_m_PointerData_12() { return static_cast<int32_t>(offsetof(PointerInputModule_t3453173740, ___m_PointerData_12)); }
	inline Dictionary_2_t2696614423 * get_m_PointerData_12() const { return ___m_PointerData_12; }
	inline Dictionary_2_t2696614423 ** get_address_of_m_PointerData_12() { return &___m_PointerData_12; }
	inline void set_m_PointerData_12(Dictionary_2_t2696614423 * value)
	{
		___m_PointerData_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerData_12), value);
	}

	inline static int32_t get_offset_of_m_MouseState_13() { return static_cast<int32_t>(offsetof(PointerInputModule_t3453173740, ___m_MouseState_13)); }
	inline MouseState_t384203932 * get_m_MouseState_13() const { return ___m_MouseState_13; }
	inline MouseState_t384203932 ** get_address_of_m_MouseState_13() { return &___m_MouseState_13; }
	inline void set_m_MouseState_13(MouseState_t384203932 * value)
	{
		___m_MouseState_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseState_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTERINPUTMODULE_T3453173740_H
#ifndef INCONTROLINPUTMODULE_T193250358_H
#define INCONTROLINPUTMODULE_T193250358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InControlInputModule
struct  InControlInputModule_t193250358  : public PointerInputModule_t3453173740
{
public:
	// InControl.InControlInputModule/Button InControl.InControlInputModule::submitButton
	int32_t ___submitButton_14;
	// InControl.InControlInputModule/Button InControl.InControlInputModule::cancelButton
	int32_t ___cancelButton_15;
	// System.Single InControl.InControlInputModule::analogMoveThreshold
	float ___analogMoveThreshold_16;
	// System.Single InControl.InControlInputModule::moveRepeatFirstDuration
	float ___moveRepeatFirstDuration_17;
	// System.Single InControl.InControlInputModule::moveRepeatDelayDuration
	float ___moveRepeatDelayDuration_18;
	// System.Boolean InControl.InControlInputModule::forceModuleActive
	bool ___forceModuleActive_19;
	// System.Boolean InControl.InControlInputModule::allowMouseInput
	bool ___allowMouseInput_20;
	// System.Boolean InControl.InControlInputModule::focusOnMouseHover
	bool ___focusOnMouseHover_21;
	// InControl.InputDevice InControl.InControlInputModule::inputDevice
	InputDevice_t243944338 * ___inputDevice_22;
	// UnityEngine.Vector3 InControl.InControlInputModule::thisMousePosition
	Vector3_t3722313464  ___thisMousePosition_23;
	// UnityEngine.Vector3 InControl.InControlInputModule::lastMousePosition
	Vector3_t3722313464  ___lastMousePosition_24;
	// UnityEngine.Vector2 InControl.InControlInputModule::thisVectorState
	Vector2_t2156229523  ___thisVectorState_25;
	// UnityEngine.Vector2 InControl.InControlInputModule::lastVectorState
	Vector2_t2156229523  ___lastVectorState_26;
	// System.Boolean InControl.InControlInputModule::thisSubmitState
	bool ___thisSubmitState_27;
	// System.Boolean InControl.InControlInputModule::lastSubmitState
	bool ___lastSubmitState_28;
	// System.Boolean InControl.InControlInputModule::thisCancelState
	bool ___thisCancelState_29;
	// System.Boolean InControl.InControlInputModule::lastCancelState
	bool ___lastCancelState_30;
	// System.Single InControl.InControlInputModule::nextMoveRepeatTime
	float ___nextMoveRepeatTime_31;
	// System.Single InControl.InControlInputModule::lastVectorPressedTime
	float ___lastVectorPressedTime_32;
	// InControl.TwoAxisInputControl InControl.InControlInputModule::direction
	TwoAxisInputControl_t1190563457 * ___direction_33;
	// InControl.PlayerAction InControl.InControlInputModule::<SubmitAction>k__BackingField
	PlayerAction_t3289186710 * ___U3CSubmitActionU3Ek__BackingField_34;
	// InControl.PlayerAction InControl.InControlInputModule::<CancelAction>k__BackingField
	PlayerAction_t3289186710 * ___U3CCancelActionU3Ek__BackingField_35;
	// InControl.PlayerTwoAxisAction InControl.InControlInputModule::<MoveAction>k__BackingField
	PlayerTwoAxisAction_t523650685 * ___U3CMoveActionU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_submitButton_14() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___submitButton_14)); }
	inline int32_t get_submitButton_14() const { return ___submitButton_14; }
	inline int32_t* get_address_of_submitButton_14() { return &___submitButton_14; }
	inline void set_submitButton_14(int32_t value)
	{
		___submitButton_14 = value;
	}

	inline static int32_t get_offset_of_cancelButton_15() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___cancelButton_15)); }
	inline int32_t get_cancelButton_15() const { return ___cancelButton_15; }
	inline int32_t* get_address_of_cancelButton_15() { return &___cancelButton_15; }
	inline void set_cancelButton_15(int32_t value)
	{
		___cancelButton_15 = value;
	}

	inline static int32_t get_offset_of_analogMoveThreshold_16() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___analogMoveThreshold_16)); }
	inline float get_analogMoveThreshold_16() const { return ___analogMoveThreshold_16; }
	inline float* get_address_of_analogMoveThreshold_16() { return &___analogMoveThreshold_16; }
	inline void set_analogMoveThreshold_16(float value)
	{
		___analogMoveThreshold_16 = value;
	}

	inline static int32_t get_offset_of_moveRepeatFirstDuration_17() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___moveRepeatFirstDuration_17)); }
	inline float get_moveRepeatFirstDuration_17() const { return ___moveRepeatFirstDuration_17; }
	inline float* get_address_of_moveRepeatFirstDuration_17() { return &___moveRepeatFirstDuration_17; }
	inline void set_moveRepeatFirstDuration_17(float value)
	{
		___moveRepeatFirstDuration_17 = value;
	}

	inline static int32_t get_offset_of_moveRepeatDelayDuration_18() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___moveRepeatDelayDuration_18)); }
	inline float get_moveRepeatDelayDuration_18() const { return ___moveRepeatDelayDuration_18; }
	inline float* get_address_of_moveRepeatDelayDuration_18() { return &___moveRepeatDelayDuration_18; }
	inline void set_moveRepeatDelayDuration_18(float value)
	{
		___moveRepeatDelayDuration_18 = value;
	}

	inline static int32_t get_offset_of_forceModuleActive_19() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___forceModuleActive_19)); }
	inline bool get_forceModuleActive_19() const { return ___forceModuleActive_19; }
	inline bool* get_address_of_forceModuleActive_19() { return &___forceModuleActive_19; }
	inline void set_forceModuleActive_19(bool value)
	{
		___forceModuleActive_19 = value;
	}

	inline static int32_t get_offset_of_allowMouseInput_20() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___allowMouseInput_20)); }
	inline bool get_allowMouseInput_20() const { return ___allowMouseInput_20; }
	inline bool* get_address_of_allowMouseInput_20() { return &___allowMouseInput_20; }
	inline void set_allowMouseInput_20(bool value)
	{
		___allowMouseInput_20 = value;
	}

	inline static int32_t get_offset_of_focusOnMouseHover_21() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___focusOnMouseHover_21)); }
	inline bool get_focusOnMouseHover_21() const { return ___focusOnMouseHover_21; }
	inline bool* get_address_of_focusOnMouseHover_21() { return &___focusOnMouseHover_21; }
	inline void set_focusOnMouseHover_21(bool value)
	{
		___focusOnMouseHover_21 = value;
	}

	inline static int32_t get_offset_of_inputDevice_22() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___inputDevice_22)); }
	inline InputDevice_t243944338 * get_inputDevice_22() const { return ___inputDevice_22; }
	inline InputDevice_t243944338 ** get_address_of_inputDevice_22() { return &___inputDevice_22; }
	inline void set_inputDevice_22(InputDevice_t243944338 * value)
	{
		___inputDevice_22 = value;
		Il2CppCodeGenWriteBarrier((&___inputDevice_22), value);
	}

	inline static int32_t get_offset_of_thisMousePosition_23() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___thisMousePosition_23)); }
	inline Vector3_t3722313464  get_thisMousePosition_23() const { return ___thisMousePosition_23; }
	inline Vector3_t3722313464 * get_address_of_thisMousePosition_23() { return &___thisMousePosition_23; }
	inline void set_thisMousePosition_23(Vector3_t3722313464  value)
	{
		___thisMousePosition_23 = value;
	}

	inline static int32_t get_offset_of_lastMousePosition_24() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___lastMousePosition_24)); }
	inline Vector3_t3722313464  get_lastMousePosition_24() const { return ___lastMousePosition_24; }
	inline Vector3_t3722313464 * get_address_of_lastMousePosition_24() { return &___lastMousePosition_24; }
	inline void set_lastMousePosition_24(Vector3_t3722313464  value)
	{
		___lastMousePosition_24 = value;
	}

	inline static int32_t get_offset_of_thisVectorState_25() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___thisVectorState_25)); }
	inline Vector2_t2156229523  get_thisVectorState_25() const { return ___thisVectorState_25; }
	inline Vector2_t2156229523 * get_address_of_thisVectorState_25() { return &___thisVectorState_25; }
	inline void set_thisVectorState_25(Vector2_t2156229523  value)
	{
		___thisVectorState_25 = value;
	}

	inline static int32_t get_offset_of_lastVectorState_26() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___lastVectorState_26)); }
	inline Vector2_t2156229523  get_lastVectorState_26() const { return ___lastVectorState_26; }
	inline Vector2_t2156229523 * get_address_of_lastVectorState_26() { return &___lastVectorState_26; }
	inline void set_lastVectorState_26(Vector2_t2156229523  value)
	{
		___lastVectorState_26 = value;
	}

	inline static int32_t get_offset_of_thisSubmitState_27() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___thisSubmitState_27)); }
	inline bool get_thisSubmitState_27() const { return ___thisSubmitState_27; }
	inline bool* get_address_of_thisSubmitState_27() { return &___thisSubmitState_27; }
	inline void set_thisSubmitState_27(bool value)
	{
		___thisSubmitState_27 = value;
	}

	inline static int32_t get_offset_of_lastSubmitState_28() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___lastSubmitState_28)); }
	inline bool get_lastSubmitState_28() const { return ___lastSubmitState_28; }
	inline bool* get_address_of_lastSubmitState_28() { return &___lastSubmitState_28; }
	inline void set_lastSubmitState_28(bool value)
	{
		___lastSubmitState_28 = value;
	}

	inline static int32_t get_offset_of_thisCancelState_29() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___thisCancelState_29)); }
	inline bool get_thisCancelState_29() const { return ___thisCancelState_29; }
	inline bool* get_address_of_thisCancelState_29() { return &___thisCancelState_29; }
	inline void set_thisCancelState_29(bool value)
	{
		___thisCancelState_29 = value;
	}

	inline static int32_t get_offset_of_lastCancelState_30() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___lastCancelState_30)); }
	inline bool get_lastCancelState_30() const { return ___lastCancelState_30; }
	inline bool* get_address_of_lastCancelState_30() { return &___lastCancelState_30; }
	inline void set_lastCancelState_30(bool value)
	{
		___lastCancelState_30 = value;
	}

	inline static int32_t get_offset_of_nextMoveRepeatTime_31() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___nextMoveRepeatTime_31)); }
	inline float get_nextMoveRepeatTime_31() const { return ___nextMoveRepeatTime_31; }
	inline float* get_address_of_nextMoveRepeatTime_31() { return &___nextMoveRepeatTime_31; }
	inline void set_nextMoveRepeatTime_31(float value)
	{
		___nextMoveRepeatTime_31 = value;
	}

	inline static int32_t get_offset_of_lastVectorPressedTime_32() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___lastVectorPressedTime_32)); }
	inline float get_lastVectorPressedTime_32() const { return ___lastVectorPressedTime_32; }
	inline float* get_address_of_lastVectorPressedTime_32() { return &___lastVectorPressedTime_32; }
	inline void set_lastVectorPressedTime_32(float value)
	{
		___lastVectorPressedTime_32 = value;
	}

	inline static int32_t get_offset_of_direction_33() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___direction_33)); }
	inline TwoAxisInputControl_t1190563457 * get_direction_33() const { return ___direction_33; }
	inline TwoAxisInputControl_t1190563457 ** get_address_of_direction_33() { return &___direction_33; }
	inline void set_direction_33(TwoAxisInputControl_t1190563457 * value)
	{
		___direction_33 = value;
		Il2CppCodeGenWriteBarrier((&___direction_33), value);
	}

	inline static int32_t get_offset_of_U3CSubmitActionU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___U3CSubmitActionU3Ek__BackingField_34)); }
	inline PlayerAction_t3289186710 * get_U3CSubmitActionU3Ek__BackingField_34() const { return ___U3CSubmitActionU3Ek__BackingField_34; }
	inline PlayerAction_t3289186710 ** get_address_of_U3CSubmitActionU3Ek__BackingField_34() { return &___U3CSubmitActionU3Ek__BackingField_34; }
	inline void set_U3CSubmitActionU3Ek__BackingField_34(PlayerAction_t3289186710 * value)
	{
		___U3CSubmitActionU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSubmitActionU3Ek__BackingField_34), value);
	}

	inline static int32_t get_offset_of_U3CCancelActionU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___U3CCancelActionU3Ek__BackingField_35)); }
	inline PlayerAction_t3289186710 * get_U3CCancelActionU3Ek__BackingField_35() const { return ___U3CCancelActionU3Ek__BackingField_35; }
	inline PlayerAction_t3289186710 ** get_address_of_U3CCancelActionU3Ek__BackingField_35() { return &___U3CCancelActionU3Ek__BackingField_35; }
	inline void set_U3CCancelActionU3Ek__BackingField_35(PlayerAction_t3289186710 * value)
	{
		___U3CCancelActionU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCancelActionU3Ek__BackingField_35), value);
	}

	inline static int32_t get_offset_of_U3CMoveActionU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InControlInputModule_t193250358, ___U3CMoveActionU3Ek__BackingField_36)); }
	inline PlayerTwoAxisAction_t523650685 * get_U3CMoveActionU3Ek__BackingField_36() const { return ___U3CMoveActionU3Ek__BackingField_36; }
	inline PlayerTwoAxisAction_t523650685 ** get_address_of_U3CMoveActionU3Ek__BackingField_36() { return &___U3CMoveActionU3Ek__BackingField_36; }
	inline void set_U3CMoveActionU3Ek__BackingField_36(PlayerTwoAxisAction_t523650685 * value)
	{
		___U3CMoveActionU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMoveActionU3Ek__BackingField_36), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INCONTROLINPUTMODULE_T193250358_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2400 = { sizeof (InControlInputModule_t193250358), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2400[23] = 
{
	InControlInputModule_t193250358::get_offset_of_submitButton_14(),
	InControlInputModule_t193250358::get_offset_of_cancelButton_15(),
	InControlInputModule_t193250358::get_offset_of_analogMoveThreshold_16(),
	InControlInputModule_t193250358::get_offset_of_moveRepeatFirstDuration_17(),
	InControlInputModule_t193250358::get_offset_of_moveRepeatDelayDuration_18(),
	InControlInputModule_t193250358::get_offset_of_forceModuleActive_19(),
	InControlInputModule_t193250358::get_offset_of_allowMouseInput_20(),
	InControlInputModule_t193250358::get_offset_of_focusOnMouseHover_21(),
	InControlInputModule_t193250358::get_offset_of_inputDevice_22(),
	InControlInputModule_t193250358::get_offset_of_thisMousePosition_23(),
	InControlInputModule_t193250358::get_offset_of_lastMousePosition_24(),
	InControlInputModule_t193250358::get_offset_of_thisVectorState_25(),
	InControlInputModule_t193250358::get_offset_of_lastVectorState_26(),
	InControlInputModule_t193250358::get_offset_of_thisSubmitState_27(),
	InControlInputModule_t193250358::get_offset_of_lastSubmitState_28(),
	InControlInputModule_t193250358::get_offset_of_thisCancelState_29(),
	InControlInputModule_t193250358::get_offset_of_lastCancelState_30(),
	InControlInputModule_t193250358::get_offset_of_nextMoveRepeatTime_31(),
	InControlInputModule_t193250358::get_offset_of_lastVectorPressedTime_32(),
	InControlInputModule_t193250358::get_offset_of_direction_33(),
	InControlInputModule_t193250358::get_offset_of_U3CSubmitActionU3Ek__BackingField_34(),
	InControlInputModule_t193250358::get_offset_of_U3CCancelActionU3Ek__BackingField_35(),
	InControlInputModule_t193250358::get_offset_of_U3CMoveActionU3Ek__BackingField_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2401 = { sizeof (Button_t829055668)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2401[5] = 
{
	Button_t829055668::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2402 = { sizeof (ICadeDevice_t1383269849), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2402[2] = 
{
	ICadeDevice_t1383269849::get_offset_of_owner_47(),
	ICadeDevice_t1383269849::get_offset_of_state_48(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2403 = { sizeof (ICadeDeviceManager_t451636877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2403[6] = 
{
	ICadeDeviceManager_t451636877::get_offset_of_device_1(),
	ICadeDeviceManager_t451636877::get_offset_of_state_2(),
	ICadeDeviceManager_t451636877::get_offset_of_thread_3(),
	ICadeDeviceManager_t451636877::get_offset_of_timeStep_4(),
	ICadeDeviceManager_t451636877::get_offset_of_bufferSize_5(),
	ICadeDeviceManager_t451636877::get_offset_of_active_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2404 = { sizeof (ICadeNative_t921961869), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2405 = { sizeof (ICadeState_t2026727165)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2405[14] = 
{
	ICadeState_t2026727165::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2406 = { sizeof (InputManager_t3343230510), -1, sizeof(InputManager_t3343230510_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2406[36] = 
{
	InputManager_t3343230510_StaticFields::get_offset_of_Version_0(),
	InputManager_t3343230510_StaticFields::get_offset_of_OnSetup_1(),
	InputManager_t3343230510_StaticFields::get_offset_of_OnUpdate_2(),
	InputManager_t3343230510_StaticFields::get_offset_of_OnReset_3(),
	InputManager_t3343230510_StaticFields::get_offset_of_OnDeviceAttached_4(),
	InputManager_t3343230510_StaticFields::get_offset_of_OnDeviceDetached_5(),
	InputManager_t3343230510_StaticFields::get_offset_of_OnActiveDeviceChanged_6(),
	InputManager_t3343230510_StaticFields::get_offset_of_OnUpdateDevices_7(),
	InputManager_t3343230510_StaticFields::get_offset_of_OnCommitDevices_8(),
	InputManager_t3343230510_StaticFields::get_offset_of_deviceManagers_9(),
	InputManager_t3343230510_StaticFields::get_offset_of_deviceManagerTable_10(),
	InputManager_t3343230510_StaticFields::get_offset_of_activeDevice_11(),
	InputManager_t3343230510_StaticFields::get_offset_of_devices_12(),
	InputManager_t3343230510_StaticFields::get_offset_of_playerActionSets_13(),
	InputManager_t3343230510_StaticFields::get_offset_of_Devices_14(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CCommandWasPressedU3Ek__BackingField_15(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CInvertYAxisU3Ek__BackingField_16(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CIsSetupU3Ek__BackingField_17(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CPlatformU3Ek__BackingField_18(),
	InputManager_t3343230510_StaticFields::get_offset_of_applicationIsFocused_19(),
	InputManager_t3343230510_StaticFields::get_offset_of_initialTime_20(),
	InputManager_t3343230510_StaticFields::get_offset_of_currentTime_21(),
	InputManager_t3343230510_StaticFields::get_offset_of_lastUpdateTime_22(),
	InputManager_t3343230510_StaticFields::get_offset_of_currentTick_23(),
	InputManager_t3343230510_StaticFields::get_offset_of_unityVersion_24(),
	InputManager_t3343230510_StaticFields::get_offset_of_enabled_25(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CSuspendInBackgroundU3Ek__BackingField_26(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CEnableNativeInputU3Ek__BackingField_27(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CEnableXInputU3Ek__BackingField_28(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CXInputUpdateRateU3Ek__BackingField_29(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CXInputBufferSizeU3Ek__BackingField_30(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CNativeInputEnableXInputU3Ek__BackingField_31(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CNativeInputPreventSleepU3Ek__BackingField_32(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CNativeInputUpdateRateU3Ek__BackingField_33(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CEnableICadeU3Ek__BackingField_34(),
	InputManager_t3343230510_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2407 = { sizeof (NativeAnalogSource_t3587642276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2407[1] = 
{
	NativeAnalogSource_t3587642276::get_offset_of_AnalogIndex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2408 = { sizeof (NativeButtonSource_t1656032293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2408[1] = 
{
	NativeButtonSource_t1656032293::get_offset_of_ButtonIndex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2409 = { sizeof (AfterglowPrismaticXboxOneControllerMacProfile_t2824448015), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2410 = { sizeof (APlayControllerMacProfile_t1002012349), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2411 = { sizeof (BatarangControllerMacProfile_t275398379), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2412 = { sizeof (BETAOPControllerMacProfile_t2389791307), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2413 = { sizeof (BigBenControllerMacProfile_t2185540012), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2414 = { sizeof (EASportsControllerMacProfile_t4275855645), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2415 = { sizeof (GameStopControllerMacProfile_t3323527712), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2416 = { sizeof (GuitarHeroControllerMacProfile_t3734750033), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2417 = { sizeof (HoriBlueSoloControllerMacProfile_t2916127853), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2418 = { sizeof (HoriControllerMacProfile_t2497288034), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2419 = { sizeof (HoriDOA4ArcadeStickMacProfile_t273793670), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2420 = { sizeof (HoriEX2ControllerMacProfile_t1235028675), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2421 = { sizeof (HoriFightingStickEX2MacProfile_t2762398431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2422 = { sizeof (HoriFightingStickVXMacProfile_t3506454866), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2423 = { sizeof (HoriFightStickMacProfile_t1614242406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2424 = { sizeof (HoriPadEXTurboControllerMacProfile_t3924191826), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2425 = { sizeof (HoriPadUltimateMacProfile_t2614825158), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2426 = { sizeof (HoriRealArcadeProEXMacProfile_t2355914713), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2427 = { sizeof (HoriRealArcadeProEXPremiumVLXMacProfile_t4128515403), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2428 = { sizeof (HoriRealArcadeProEXSEMacProfile_t2441627136), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2429 = { sizeof (HoriRealArcadeProHayabusaMacProfile_t1747208258), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2430 = { sizeof (HORIRealArcadeProVKaiFightingStickMacProfile_t1438267406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2431 = { sizeof (HORIRealArcadeProVXMacProfile_t1669997122), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2432 = { sizeof (HoriRealArcadeProVXSAMacProfile_t2096444663), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2433 = { sizeof (HoriXbox360GemPadExMacProfile_t4093949697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2434 = { sizeof (HoriXboxOneControllerMacProfile_t3292379608), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2435 = { sizeof (IonDrumRockerMacProfile_t3847448431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2436 = { sizeof (JoytekXbox360ControllerMacProfile_t314140253), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2437 = { sizeof (KonamiDancePadMacProfile_t2708504938), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2438 = { sizeof (LogitechChillStreamControllerMacProfile_t2172843024), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2439 = { sizeof (LogitechControllerMacProfile_t198493670), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2440 = { sizeof (LogitechDriveFXRacingWheelMacProfile_t3134665563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2441 = { sizeof (LogitechF310ControllerMacProfile_t3339299887), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2442 = { sizeof (LogitechF510ControllerMacProfile_t4285109518), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2443 = { sizeof (LogitechF710ControllerMacProfile_t143500279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2444 = { sizeof (LogitechG920RacingWheelMacProfile_t2346673367), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2445 = { sizeof (MadCatzArcadeStickMacProfile_t4092740279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2446 = { sizeof (MadCatzBrawlStickMacProfile_t1837722862), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2447 = { sizeof (MadCatzCODControllerMacProfile_t664220459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2448 = { sizeof (MadCatzControllerMacProfile_t2008056521), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2449 = { sizeof (MadCatzFightPadControllerMacProfile_t2383453132), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2450 = { sizeof (MadCatzFightPadMacProfile_t2959001431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2451 = { sizeof (MadCatzFightStickTE2MacProfile_t3625133579), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2452 = { sizeof (MadCatzFightStickTESPlusMacProfile_t1050370474), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2453 = { sizeof (MadCatzFPSProMacProfile_t3500170159), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2454 = { sizeof (MadCatzMicroConControllerMacProfile_t2553451175), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2455 = { sizeof (MadCatzMicroControllerMacProfile_t1959321018), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2456 = { sizeof (MadCatzMLGFightStickTEMacProfile_t528516121), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2457 = { sizeof (MadCatzNeoFightStickMacProfile_t2701266815), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2458 = { sizeof (MadCatzPortableDrumMacProfile_t3702046962), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2459 = { sizeof (MadCatzProControllerMacProfile_t413010098), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2460 = { sizeof (MadCatzSaitekAV8R02MacProfile_t3762371193), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2461 = { sizeof (MadCatzSF4FightStickRound2TEMacProfile_t403357773), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2462 = { sizeof (MadCatzSF4FightStickSEMacProfile_t2679146942), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2463 = { sizeof (MadCatzSF4FightStickTEMacProfile_t2679135359), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2464 = { sizeof (MadCatzSoulCaliberFightStickMacProfile_t2806805970), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2465 = { sizeof (MadCatzSSF4ChunLiFightStickTEMacProfile_t712973421), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2466 = { sizeof (MadCatzSSF4FightStickTEMacProfile_t2665834373), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2467 = { sizeof (MatCatzControllerMacProfile_t1745398184), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2468 = { sizeof (MicrosoftXbox360ControllerMacProfile_t805763698), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2469 = { sizeof (MicrosoftXboxControllerMacProfile_t532146484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2470 = { sizeof (MicrosoftXboxOneControllerMacProfile_t2410377206), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2471 = { sizeof (MicrosoftXboxOneEliteControllerMacProfile_t4237082878), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2472 = { sizeof (MKKlassikFightStickMacProfile_t3649385735), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2473 = { sizeof (MLGControllerMacProfile_t1513752687), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2474 = { sizeof (MVCTEStickMacProfile_t4225761182), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2475 = { sizeof (NaconGC100XFControllerMacProfile_t3663274790), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2476 = { sizeof (PDPAfterglowControllerMacProfile_t1588976563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2477 = { sizeof (PDPBattlefieldXBoxOneControllerMacProfile_t2210644831), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2478 = { sizeof (PDPMarvelControllerMacProfile_t4098526584), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2479 = { sizeof (PDPTitanfall2XboxOneControllerMacProfile_t3252585292), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2480 = { sizeof (PDPTronControllerMacProfile_t953062917), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2481 = { sizeof (PDPVersusControllerMacProfile_t2162518710), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2482 = { sizeof (PDPXbox360ControllerMacProfile_t447465477), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2483 = { sizeof (PDPXboxOneArcadeStickMacProfile_t3097356591), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2484 = { sizeof (PDPXboxOneControllerMacProfile_t3335119988), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2485 = { sizeof (PowerAAirflowControllerMacProfile_t1422981755), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2486 = { sizeof (POWERAFUS1ONTournamentControllerMacProfile_t2226959540), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2487 = { sizeof (PowerAMiniControllerMacProfile_t475998391), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2488 = { sizeof (PowerAMiniProExControllerMacProfile_t683302340), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2489 = { sizeof (PowerAMiniXboxOneControllerMacProfile_t2642713835), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2490 = { sizeof (PowerASpectraIlluminatedControllerMacProfile_t1373853501), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2491 = { sizeof (ProEXXbox360ControllerMacProfile_t1573983937), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2492 = { sizeof (ProEXXboxOneControllerMacProfile_t1827355586), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2493 = { sizeof (QanbaFightStickPlusMacProfile_t865257184), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2494 = { sizeof (RazerAtroxArcadeStickMacProfile_t3012475922), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2495 = { sizeof (RazerOnzaControllerMacProfile_t1827044606), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2496 = { sizeof (RazerOnzaTEControllerMacProfile_t2581177765), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2497 = { sizeof (RazerSabertoothEliteControllerMacProfile_t1128221419), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2498 = { sizeof (RazerStrikeControllerMacProfile_t1132282710), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2499 = { sizeof (RazerWildcatControllerMacProfile_t1980770595), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
