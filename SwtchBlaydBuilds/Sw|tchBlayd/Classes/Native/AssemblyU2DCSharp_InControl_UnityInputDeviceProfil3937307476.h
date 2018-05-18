﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_UnityInputDeviceProfil2104272291.h"
#include "AssemblyU2DCSharp_InControl_VersionInfo3271958654.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// InControl.InputControlSource
struct InputControlSource_t2588200774;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.UnityInputDeviceProfile
struct  UnityInputDeviceProfile_t3937307476  : public UnityInputDeviceProfileBase_t2104272291
{
public:
	// System.String[] InControl.UnityInputDeviceProfile::JoystickNames
	StringU5BU5D_t1642385972* ___JoystickNames_14;
	// System.String[] InControl.UnityInputDeviceProfile::JoystickRegex
	StringU5BU5D_t1642385972* ___JoystickRegex_15;
	// System.String InControl.UnityInputDeviceProfile::LastResortRegex
	String_t* ___LastResortRegex_16;
	// InControl.VersionInfo InControl.UnityInputDeviceProfile::<MinUnityVersion>k__BackingField
	VersionInfo_t3271958654  ___U3CMinUnityVersionU3Ek__BackingField_17;
	// InControl.VersionInfo InControl.UnityInputDeviceProfile::<MaxUnityVersion>k__BackingField
	VersionInfo_t3271958654  ___U3CMaxUnityVersionU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_JoystickNames_14() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476, ___JoystickNames_14)); }
	inline StringU5BU5D_t1642385972* get_JoystickNames_14() const { return ___JoystickNames_14; }
	inline StringU5BU5D_t1642385972** get_address_of_JoystickNames_14() { return &___JoystickNames_14; }
	inline void set_JoystickNames_14(StringU5BU5D_t1642385972* value)
	{
		___JoystickNames_14 = value;
		Il2CppCodeGenWriteBarrier(&___JoystickNames_14, value);
	}

	inline static int32_t get_offset_of_JoystickRegex_15() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476, ___JoystickRegex_15)); }
	inline StringU5BU5D_t1642385972* get_JoystickRegex_15() const { return ___JoystickRegex_15; }
	inline StringU5BU5D_t1642385972** get_address_of_JoystickRegex_15() { return &___JoystickRegex_15; }
	inline void set_JoystickRegex_15(StringU5BU5D_t1642385972* value)
	{
		___JoystickRegex_15 = value;
		Il2CppCodeGenWriteBarrier(&___JoystickRegex_15, value);
	}

	inline static int32_t get_offset_of_LastResortRegex_16() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476, ___LastResortRegex_16)); }
	inline String_t* get_LastResortRegex_16() const { return ___LastResortRegex_16; }
	inline String_t** get_address_of_LastResortRegex_16() { return &___LastResortRegex_16; }
	inline void set_LastResortRegex_16(String_t* value)
	{
		___LastResortRegex_16 = value;
		Il2CppCodeGenWriteBarrier(&___LastResortRegex_16, value);
	}

	inline static int32_t get_offset_of_U3CMinUnityVersionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476, ___U3CMinUnityVersionU3Ek__BackingField_17)); }
	inline VersionInfo_t3271958654  get_U3CMinUnityVersionU3Ek__BackingField_17() const { return ___U3CMinUnityVersionU3Ek__BackingField_17; }
	inline VersionInfo_t3271958654 * get_address_of_U3CMinUnityVersionU3Ek__BackingField_17() { return &___U3CMinUnityVersionU3Ek__BackingField_17; }
	inline void set_U3CMinUnityVersionU3Ek__BackingField_17(VersionInfo_t3271958654  value)
	{
		___U3CMinUnityVersionU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CMaxUnityVersionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476, ___U3CMaxUnityVersionU3Ek__BackingField_18)); }
	inline VersionInfo_t3271958654  get_U3CMaxUnityVersionU3Ek__BackingField_18() const { return ___U3CMaxUnityVersionU3Ek__BackingField_18; }
	inline VersionInfo_t3271958654 * get_address_of_U3CMaxUnityVersionU3Ek__BackingField_18() { return &___U3CMaxUnityVersionU3Ek__BackingField_18; }
	inline void set_U3CMaxUnityVersionU3Ek__BackingField_18(VersionInfo_t3271958654  value)
	{
		___U3CMaxUnityVersionU3Ek__BackingField_18 = value;
	}
};

struct UnityInputDeviceProfile_t3937307476_StaticFields
{
public:
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button0
	Il2CppObject * ___Button0_19;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button1
	Il2CppObject * ___Button1_20;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button2
	Il2CppObject * ___Button2_21;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button3
	Il2CppObject * ___Button3_22;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button4
	Il2CppObject * ___Button4_23;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button5
	Il2CppObject * ___Button5_24;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button6
	Il2CppObject * ___Button6_25;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button7
	Il2CppObject * ___Button7_26;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button8
	Il2CppObject * ___Button8_27;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button9
	Il2CppObject * ___Button9_28;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button10
	Il2CppObject * ___Button10_29;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button11
	Il2CppObject * ___Button11_30;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button12
	Il2CppObject * ___Button12_31;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button13
	Il2CppObject * ___Button13_32;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button14
	Il2CppObject * ___Button14_33;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button15
	Il2CppObject * ___Button15_34;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button16
	Il2CppObject * ___Button16_35;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button17
	Il2CppObject * ___Button17_36;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button18
	Il2CppObject * ___Button18_37;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Button19
	Il2CppObject * ___Button19_38;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog0
	Il2CppObject * ___Analog0_39;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog1
	Il2CppObject * ___Analog1_40;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog2
	Il2CppObject * ___Analog2_41;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog3
	Il2CppObject * ___Analog3_42;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog4
	Il2CppObject * ___Analog4_43;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog5
	Il2CppObject * ___Analog5_44;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog6
	Il2CppObject * ___Analog6_45;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog7
	Il2CppObject * ___Analog7_46;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog8
	Il2CppObject * ___Analog8_47;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog9
	Il2CppObject * ___Analog9_48;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog10
	Il2CppObject * ___Analog10_49;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog11
	Il2CppObject * ___Analog11_50;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog12
	Il2CppObject * ___Analog12_51;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog13
	Il2CppObject * ___Analog13_52;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog14
	Il2CppObject * ___Analog14_53;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog15
	Il2CppObject * ___Analog15_54;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog16
	Il2CppObject * ___Analog16_55;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog17
	Il2CppObject * ___Analog17_56;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog18
	Il2CppObject * ___Analog18_57;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::Analog19
	Il2CppObject * ___Analog19_58;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MenuKey
	Il2CppObject * ___MenuKey_59;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::EscapeKey
	Il2CppObject * ___EscapeKey_60;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseButton0
	Il2CppObject * ___MouseButton0_61;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseButton1
	Il2CppObject * ___MouseButton1_62;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseButton2
	Il2CppObject * ___MouseButton2_63;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseXAxis
	Il2CppObject * ___MouseXAxis_64;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseYAxis
	Il2CppObject * ___MouseYAxis_65;
	// InControl.InputControlSource InControl.UnityInputDeviceProfile::MouseScrollWheel
	Il2CppObject * ___MouseScrollWheel_66;

public:
	inline static int32_t get_offset_of_Button0_19() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button0_19)); }
	inline Il2CppObject * get_Button0_19() const { return ___Button0_19; }
	inline Il2CppObject ** get_address_of_Button0_19() { return &___Button0_19; }
	inline void set_Button0_19(Il2CppObject * value)
	{
		___Button0_19 = value;
		Il2CppCodeGenWriteBarrier(&___Button0_19, value);
	}

	inline static int32_t get_offset_of_Button1_20() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button1_20)); }
	inline Il2CppObject * get_Button1_20() const { return ___Button1_20; }
	inline Il2CppObject ** get_address_of_Button1_20() { return &___Button1_20; }
	inline void set_Button1_20(Il2CppObject * value)
	{
		___Button1_20 = value;
		Il2CppCodeGenWriteBarrier(&___Button1_20, value);
	}

	inline static int32_t get_offset_of_Button2_21() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button2_21)); }
	inline Il2CppObject * get_Button2_21() const { return ___Button2_21; }
	inline Il2CppObject ** get_address_of_Button2_21() { return &___Button2_21; }
	inline void set_Button2_21(Il2CppObject * value)
	{
		___Button2_21 = value;
		Il2CppCodeGenWriteBarrier(&___Button2_21, value);
	}

	inline static int32_t get_offset_of_Button3_22() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button3_22)); }
	inline Il2CppObject * get_Button3_22() const { return ___Button3_22; }
	inline Il2CppObject ** get_address_of_Button3_22() { return &___Button3_22; }
	inline void set_Button3_22(Il2CppObject * value)
	{
		___Button3_22 = value;
		Il2CppCodeGenWriteBarrier(&___Button3_22, value);
	}

	inline static int32_t get_offset_of_Button4_23() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button4_23)); }
	inline Il2CppObject * get_Button4_23() const { return ___Button4_23; }
	inline Il2CppObject ** get_address_of_Button4_23() { return &___Button4_23; }
	inline void set_Button4_23(Il2CppObject * value)
	{
		___Button4_23 = value;
		Il2CppCodeGenWriteBarrier(&___Button4_23, value);
	}

	inline static int32_t get_offset_of_Button5_24() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button5_24)); }
	inline Il2CppObject * get_Button5_24() const { return ___Button5_24; }
	inline Il2CppObject ** get_address_of_Button5_24() { return &___Button5_24; }
	inline void set_Button5_24(Il2CppObject * value)
	{
		___Button5_24 = value;
		Il2CppCodeGenWriteBarrier(&___Button5_24, value);
	}

	inline static int32_t get_offset_of_Button6_25() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button6_25)); }
	inline Il2CppObject * get_Button6_25() const { return ___Button6_25; }
	inline Il2CppObject ** get_address_of_Button6_25() { return &___Button6_25; }
	inline void set_Button6_25(Il2CppObject * value)
	{
		___Button6_25 = value;
		Il2CppCodeGenWriteBarrier(&___Button6_25, value);
	}

	inline static int32_t get_offset_of_Button7_26() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button7_26)); }
	inline Il2CppObject * get_Button7_26() const { return ___Button7_26; }
	inline Il2CppObject ** get_address_of_Button7_26() { return &___Button7_26; }
	inline void set_Button7_26(Il2CppObject * value)
	{
		___Button7_26 = value;
		Il2CppCodeGenWriteBarrier(&___Button7_26, value);
	}

	inline static int32_t get_offset_of_Button8_27() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button8_27)); }
	inline Il2CppObject * get_Button8_27() const { return ___Button8_27; }
	inline Il2CppObject ** get_address_of_Button8_27() { return &___Button8_27; }
	inline void set_Button8_27(Il2CppObject * value)
	{
		___Button8_27 = value;
		Il2CppCodeGenWriteBarrier(&___Button8_27, value);
	}

	inline static int32_t get_offset_of_Button9_28() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button9_28)); }
	inline Il2CppObject * get_Button9_28() const { return ___Button9_28; }
	inline Il2CppObject ** get_address_of_Button9_28() { return &___Button9_28; }
	inline void set_Button9_28(Il2CppObject * value)
	{
		___Button9_28 = value;
		Il2CppCodeGenWriteBarrier(&___Button9_28, value);
	}

	inline static int32_t get_offset_of_Button10_29() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button10_29)); }
	inline Il2CppObject * get_Button10_29() const { return ___Button10_29; }
	inline Il2CppObject ** get_address_of_Button10_29() { return &___Button10_29; }
	inline void set_Button10_29(Il2CppObject * value)
	{
		___Button10_29 = value;
		Il2CppCodeGenWriteBarrier(&___Button10_29, value);
	}

	inline static int32_t get_offset_of_Button11_30() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button11_30)); }
	inline Il2CppObject * get_Button11_30() const { return ___Button11_30; }
	inline Il2CppObject ** get_address_of_Button11_30() { return &___Button11_30; }
	inline void set_Button11_30(Il2CppObject * value)
	{
		___Button11_30 = value;
		Il2CppCodeGenWriteBarrier(&___Button11_30, value);
	}

	inline static int32_t get_offset_of_Button12_31() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button12_31)); }
	inline Il2CppObject * get_Button12_31() const { return ___Button12_31; }
	inline Il2CppObject ** get_address_of_Button12_31() { return &___Button12_31; }
	inline void set_Button12_31(Il2CppObject * value)
	{
		___Button12_31 = value;
		Il2CppCodeGenWriteBarrier(&___Button12_31, value);
	}

	inline static int32_t get_offset_of_Button13_32() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button13_32)); }
	inline Il2CppObject * get_Button13_32() const { return ___Button13_32; }
	inline Il2CppObject ** get_address_of_Button13_32() { return &___Button13_32; }
	inline void set_Button13_32(Il2CppObject * value)
	{
		___Button13_32 = value;
		Il2CppCodeGenWriteBarrier(&___Button13_32, value);
	}

	inline static int32_t get_offset_of_Button14_33() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button14_33)); }
	inline Il2CppObject * get_Button14_33() const { return ___Button14_33; }
	inline Il2CppObject ** get_address_of_Button14_33() { return &___Button14_33; }
	inline void set_Button14_33(Il2CppObject * value)
	{
		___Button14_33 = value;
		Il2CppCodeGenWriteBarrier(&___Button14_33, value);
	}

	inline static int32_t get_offset_of_Button15_34() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button15_34)); }
	inline Il2CppObject * get_Button15_34() const { return ___Button15_34; }
	inline Il2CppObject ** get_address_of_Button15_34() { return &___Button15_34; }
	inline void set_Button15_34(Il2CppObject * value)
	{
		___Button15_34 = value;
		Il2CppCodeGenWriteBarrier(&___Button15_34, value);
	}

	inline static int32_t get_offset_of_Button16_35() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button16_35)); }
	inline Il2CppObject * get_Button16_35() const { return ___Button16_35; }
	inline Il2CppObject ** get_address_of_Button16_35() { return &___Button16_35; }
	inline void set_Button16_35(Il2CppObject * value)
	{
		___Button16_35 = value;
		Il2CppCodeGenWriteBarrier(&___Button16_35, value);
	}

	inline static int32_t get_offset_of_Button17_36() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button17_36)); }
	inline Il2CppObject * get_Button17_36() const { return ___Button17_36; }
	inline Il2CppObject ** get_address_of_Button17_36() { return &___Button17_36; }
	inline void set_Button17_36(Il2CppObject * value)
	{
		___Button17_36 = value;
		Il2CppCodeGenWriteBarrier(&___Button17_36, value);
	}

	inline static int32_t get_offset_of_Button18_37() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button18_37)); }
	inline Il2CppObject * get_Button18_37() const { return ___Button18_37; }
	inline Il2CppObject ** get_address_of_Button18_37() { return &___Button18_37; }
	inline void set_Button18_37(Il2CppObject * value)
	{
		___Button18_37 = value;
		Il2CppCodeGenWriteBarrier(&___Button18_37, value);
	}

	inline static int32_t get_offset_of_Button19_38() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Button19_38)); }
	inline Il2CppObject * get_Button19_38() const { return ___Button19_38; }
	inline Il2CppObject ** get_address_of_Button19_38() { return &___Button19_38; }
	inline void set_Button19_38(Il2CppObject * value)
	{
		___Button19_38 = value;
		Il2CppCodeGenWriteBarrier(&___Button19_38, value);
	}

	inline static int32_t get_offset_of_Analog0_39() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog0_39)); }
	inline Il2CppObject * get_Analog0_39() const { return ___Analog0_39; }
	inline Il2CppObject ** get_address_of_Analog0_39() { return &___Analog0_39; }
	inline void set_Analog0_39(Il2CppObject * value)
	{
		___Analog0_39 = value;
		Il2CppCodeGenWriteBarrier(&___Analog0_39, value);
	}

	inline static int32_t get_offset_of_Analog1_40() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog1_40)); }
	inline Il2CppObject * get_Analog1_40() const { return ___Analog1_40; }
	inline Il2CppObject ** get_address_of_Analog1_40() { return &___Analog1_40; }
	inline void set_Analog1_40(Il2CppObject * value)
	{
		___Analog1_40 = value;
		Il2CppCodeGenWriteBarrier(&___Analog1_40, value);
	}

	inline static int32_t get_offset_of_Analog2_41() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog2_41)); }
	inline Il2CppObject * get_Analog2_41() const { return ___Analog2_41; }
	inline Il2CppObject ** get_address_of_Analog2_41() { return &___Analog2_41; }
	inline void set_Analog2_41(Il2CppObject * value)
	{
		___Analog2_41 = value;
		Il2CppCodeGenWriteBarrier(&___Analog2_41, value);
	}

	inline static int32_t get_offset_of_Analog3_42() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog3_42)); }
	inline Il2CppObject * get_Analog3_42() const { return ___Analog3_42; }
	inline Il2CppObject ** get_address_of_Analog3_42() { return &___Analog3_42; }
	inline void set_Analog3_42(Il2CppObject * value)
	{
		___Analog3_42 = value;
		Il2CppCodeGenWriteBarrier(&___Analog3_42, value);
	}

	inline static int32_t get_offset_of_Analog4_43() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog4_43)); }
	inline Il2CppObject * get_Analog4_43() const { return ___Analog4_43; }
	inline Il2CppObject ** get_address_of_Analog4_43() { return &___Analog4_43; }
	inline void set_Analog4_43(Il2CppObject * value)
	{
		___Analog4_43 = value;
		Il2CppCodeGenWriteBarrier(&___Analog4_43, value);
	}

	inline static int32_t get_offset_of_Analog5_44() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog5_44)); }
	inline Il2CppObject * get_Analog5_44() const { return ___Analog5_44; }
	inline Il2CppObject ** get_address_of_Analog5_44() { return &___Analog5_44; }
	inline void set_Analog5_44(Il2CppObject * value)
	{
		___Analog5_44 = value;
		Il2CppCodeGenWriteBarrier(&___Analog5_44, value);
	}

	inline static int32_t get_offset_of_Analog6_45() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog6_45)); }
	inline Il2CppObject * get_Analog6_45() const { return ___Analog6_45; }
	inline Il2CppObject ** get_address_of_Analog6_45() { return &___Analog6_45; }
	inline void set_Analog6_45(Il2CppObject * value)
	{
		___Analog6_45 = value;
		Il2CppCodeGenWriteBarrier(&___Analog6_45, value);
	}

	inline static int32_t get_offset_of_Analog7_46() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog7_46)); }
	inline Il2CppObject * get_Analog7_46() const { return ___Analog7_46; }
	inline Il2CppObject ** get_address_of_Analog7_46() { return &___Analog7_46; }
	inline void set_Analog7_46(Il2CppObject * value)
	{
		___Analog7_46 = value;
		Il2CppCodeGenWriteBarrier(&___Analog7_46, value);
	}

	inline static int32_t get_offset_of_Analog8_47() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog8_47)); }
	inline Il2CppObject * get_Analog8_47() const { return ___Analog8_47; }
	inline Il2CppObject ** get_address_of_Analog8_47() { return &___Analog8_47; }
	inline void set_Analog8_47(Il2CppObject * value)
	{
		___Analog8_47 = value;
		Il2CppCodeGenWriteBarrier(&___Analog8_47, value);
	}

	inline static int32_t get_offset_of_Analog9_48() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog9_48)); }
	inline Il2CppObject * get_Analog9_48() const { return ___Analog9_48; }
	inline Il2CppObject ** get_address_of_Analog9_48() { return &___Analog9_48; }
	inline void set_Analog9_48(Il2CppObject * value)
	{
		___Analog9_48 = value;
		Il2CppCodeGenWriteBarrier(&___Analog9_48, value);
	}

	inline static int32_t get_offset_of_Analog10_49() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog10_49)); }
	inline Il2CppObject * get_Analog10_49() const { return ___Analog10_49; }
	inline Il2CppObject ** get_address_of_Analog10_49() { return &___Analog10_49; }
	inline void set_Analog10_49(Il2CppObject * value)
	{
		___Analog10_49 = value;
		Il2CppCodeGenWriteBarrier(&___Analog10_49, value);
	}

	inline static int32_t get_offset_of_Analog11_50() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog11_50)); }
	inline Il2CppObject * get_Analog11_50() const { return ___Analog11_50; }
	inline Il2CppObject ** get_address_of_Analog11_50() { return &___Analog11_50; }
	inline void set_Analog11_50(Il2CppObject * value)
	{
		___Analog11_50 = value;
		Il2CppCodeGenWriteBarrier(&___Analog11_50, value);
	}

	inline static int32_t get_offset_of_Analog12_51() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog12_51)); }
	inline Il2CppObject * get_Analog12_51() const { return ___Analog12_51; }
	inline Il2CppObject ** get_address_of_Analog12_51() { return &___Analog12_51; }
	inline void set_Analog12_51(Il2CppObject * value)
	{
		___Analog12_51 = value;
		Il2CppCodeGenWriteBarrier(&___Analog12_51, value);
	}

	inline static int32_t get_offset_of_Analog13_52() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog13_52)); }
	inline Il2CppObject * get_Analog13_52() const { return ___Analog13_52; }
	inline Il2CppObject ** get_address_of_Analog13_52() { return &___Analog13_52; }
	inline void set_Analog13_52(Il2CppObject * value)
	{
		___Analog13_52 = value;
		Il2CppCodeGenWriteBarrier(&___Analog13_52, value);
	}

	inline static int32_t get_offset_of_Analog14_53() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog14_53)); }
	inline Il2CppObject * get_Analog14_53() const { return ___Analog14_53; }
	inline Il2CppObject ** get_address_of_Analog14_53() { return &___Analog14_53; }
	inline void set_Analog14_53(Il2CppObject * value)
	{
		___Analog14_53 = value;
		Il2CppCodeGenWriteBarrier(&___Analog14_53, value);
	}

	inline static int32_t get_offset_of_Analog15_54() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog15_54)); }
	inline Il2CppObject * get_Analog15_54() const { return ___Analog15_54; }
	inline Il2CppObject ** get_address_of_Analog15_54() { return &___Analog15_54; }
	inline void set_Analog15_54(Il2CppObject * value)
	{
		___Analog15_54 = value;
		Il2CppCodeGenWriteBarrier(&___Analog15_54, value);
	}

	inline static int32_t get_offset_of_Analog16_55() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog16_55)); }
	inline Il2CppObject * get_Analog16_55() const { return ___Analog16_55; }
	inline Il2CppObject ** get_address_of_Analog16_55() { return &___Analog16_55; }
	inline void set_Analog16_55(Il2CppObject * value)
	{
		___Analog16_55 = value;
		Il2CppCodeGenWriteBarrier(&___Analog16_55, value);
	}

	inline static int32_t get_offset_of_Analog17_56() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog17_56)); }
	inline Il2CppObject * get_Analog17_56() const { return ___Analog17_56; }
	inline Il2CppObject ** get_address_of_Analog17_56() { return &___Analog17_56; }
	inline void set_Analog17_56(Il2CppObject * value)
	{
		___Analog17_56 = value;
		Il2CppCodeGenWriteBarrier(&___Analog17_56, value);
	}

	inline static int32_t get_offset_of_Analog18_57() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog18_57)); }
	inline Il2CppObject * get_Analog18_57() const { return ___Analog18_57; }
	inline Il2CppObject ** get_address_of_Analog18_57() { return &___Analog18_57; }
	inline void set_Analog18_57(Il2CppObject * value)
	{
		___Analog18_57 = value;
		Il2CppCodeGenWriteBarrier(&___Analog18_57, value);
	}

	inline static int32_t get_offset_of_Analog19_58() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___Analog19_58)); }
	inline Il2CppObject * get_Analog19_58() const { return ___Analog19_58; }
	inline Il2CppObject ** get_address_of_Analog19_58() { return &___Analog19_58; }
	inline void set_Analog19_58(Il2CppObject * value)
	{
		___Analog19_58 = value;
		Il2CppCodeGenWriteBarrier(&___Analog19_58, value);
	}

	inline static int32_t get_offset_of_MenuKey_59() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___MenuKey_59)); }
	inline Il2CppObject * get_MenuKey_59() const { return ___MenuKey_59; }
	inline Il2CppObject ** get_address_of_MenuKey_59() { return &___MenuKey_59; }
	inline void set_MenuKey_59(Il2CppObject * value)
	{
		___MenuKey_59 = value;
		Il2CppCodeGenWriteBarrier(&___MenuKey_59, value);
	}

	inline static int32_t get_offset_of_EscapeKey_60() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___EscapeKey_60)); }
	inline Il2CppObject * get_EscapeKey_60() const { return ___EscapeKey_60; }
	inline Il2CppObject ** get_address_of_EscapeKey_60() { return &___EscapeKey_60; }
	inline void set_EscapeKey_60(Il2CppObject * value)
	{
		___EscapeKey_60 = value;
		Il2CppCodeGenWriteBarrier(&___EscapeKey_60, value);
	}

	inline static int32_t get_offset_of_MouseButton0_61() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___MouseButton0_61)); }
	inline Il2CppObject * get_MouseButton0_61() const { return ___MouseButton0_61; }
	inline Il2CppObject ** get_address_of_MouseButton0_61() { return &___MouseButton0_61; }
	inline void set_MouseButton0_61(Il2CppObject * value)
	{
		___MouseButton0_61 = value;
		Il2CppCodeGenWriteBarrier(&___MouseButton0_61, value);
	}

	inline static int32_t get_offset_of_MouseButton1_62() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___MouseButton1_62)); }
	inline Il2CppObject * get_MouseButton1_62() const { return ___MouseButton1_62; }
	inline Il2CppObject ** get_address_of_MouseButton1_62() { return &___MouseButton1_62; }
	inline void set_MouseButton1_62(Il2CppObject * value)
	{
		___MouseButton1_62 = value;
		Il2CppCodeGenWriteBarrier(&___MouseButton1_62, value);
	}

	inline static int32_t get_offset_of_MouseButton2_63() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___MouseButton2_63)); }
	inline Il2CppObject * get_MouseButton2_63() const { return ___MouseButton2_63; }
	inline Il2CppObject ** get_address_of_MouseButton2_63() { return &___MouseButton2_63; }
	inline void set_MouseButton2_63(Il2CppObject * value)
	{
		___MouseButton2_63 = value;
		Il2CppCodeGenWriteBarrier(&___MouseButton2_63, value);
	}

	inline static int32_t get_offset_of_MouseXAxis_64() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___MouseXAxis_64)); }
	inline Il2CppObject * get_MouseXAxis_64() const { return ___MouseXAxis_64; }
	inline Il2CppObject ** get_address_of_MouseXAxis_64() { return &___MouseXAxis_64; }
	inline void set_MouseXAxis_64(Il2CppObject * value)
	{
		___MouseXAxis_64 = value;
		Il2CppCodeGenWriteBarrier(&___MouseXAxis_64, value);
	}

	inline static int32_t get_offset_of_MouseYAxis_65() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___MouseYAxis_65)); }
	inline Il2CppObject * get_MouseYAxis_65() const { return ___MouseYAxis_65; }
	inline Il2CppObject ** get_address_of_MouseYAxis_65() { return &___MouseYAxis_65; }
	inline void set_MouseYAxis_65(Il2CppObject * value)
	{
		___MouseYAxis_65 = value;
		Il2CppCodeGenWriteBarrier(&___MouseYAxis_65, value);
	}

	inline static int32_t get_offset_of_MouseScrollWheel_66() { return static_cast<int32_t>(offsetof(UnityInputDeviceProfile_t3937307476_StaticFields, ___MouseScrollWheel_66)); }
	inline Il2CppObject * get_MouseScrollWheel_66() const { return ___MouseScrollWheel_66; }
	inline Il2CppObject ** get_address_of_MouseScrollWheel_66() { return &___MouseScrollWheel_66; }
	inline void set_MouseScrollWheel_66(Il2CppObject * value)
	{
		___MouseScrollWheel_66 = value;
		Il2CppCodeGenWriteBarrier(&___MouseScrollWheel_66, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
