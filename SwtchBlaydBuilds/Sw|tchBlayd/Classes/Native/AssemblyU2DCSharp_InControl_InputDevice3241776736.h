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
#include "mscorlib_System_Guid2533601593.h"

// InControl.InputDevice
struct InputDevice_t3241776736;
// System.String
struct String_t;
// System.Collections.Generic.List`1<InControl.InputControl>
struct List_1_t2356075661;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputControl>
struct ReadOnlyCollection_1_t3172740221;
// InControl.InputControl[]
struct InputControlU5BU5D_t339972924;
// InControl.TwoAxisInputControl
struct TwoAxisInputControl_t203125368;
// InControl.InputDevice/AnalogSnapshotEntry[]
struct AnalogSnapshotEntryU5BU5D_t4053652286;
// InControl.InputControl
struct InputControl_t2986954529;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputDevice
struct  InputDevice_t3241776736  : public Il2CppObject
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
	List_1_t2356075661 * ___controls_10;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputControl> InControl.InputDevice::<Controls>k__BackingField
	ReadOnlyCollection_1_t3172740221 * ___U3CControlsU3Ek__BackingField_11;
	// InControl.InputControl[] InControl.InputDevice::<ControlsByTarget>k__BackingField
	InputControlU5BU5D_t339972924* ___U3CControlsByTargetU3Ek__BackingField_12;
	// InControl.TwoAxisInputControl InControl.InputDevice::<LeftStick>k__BackingField
	TwoAxisInputControl_t203125368 * ___U3CLeftStickU3Ek__BackingField_13;
	// InControl.TwoAxisInputControl InControl.InputDevice::<RightStick>k__BackingField
	TwoAxisInputControl_t203125368 * ___U3CRightStickU3Ek__BackingField_14;
	// InControl.TwoAxisInputControl InControl.InputDevice::<DPad>k__BackingField
	TwoAxisInputControl_t203125368 * ___U3CDPadU3Ek__BackingField_15;
	// System.Boolean InControl.InputDevice::Passive
	bool ___Passive_16;
	// InControl.InputDevice/AnalogSnapshotEntry[] InControl.InputDevice::<AnalogSnapshot>k__BackingField
	AnalogSnapshotEntryU5BU5D_t4053652286* ___U3CAnalogSnapshotU3Ek__BackingField_17;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickUp
	InputControl_t2986954529 * ___cachedLeftStickUp_18;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickDown
	InputControl_t2986954529 * ___cachedLeftStickDown_19;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickLeft
	InputControl_t2986954529 * ___cachedLeftStickLeft_20;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickRight
	InputControl_t2986954529 * ___cachedLeftStickRight_21;
	// InControl.InputControl InControl.InputDevice::cachedRightStickUp
	InputControl_t2986954529 * ___cachedRightStickUp_22;
	// InControl.InputControl InControl.InputDevice::cachedRightStickDown
	InputControl_t2986954529 * ___cachedRightStickDown_23;
	// InControl.InputControl InControl.InputDevice::cachedRightStickLeft
	InputControl_t2986954529 * ___cachedRightStickLeft_24;
	// InControl.InputControl InControl.InputDevice::cachedRightStickRight
	InputControl_t2986954529 * ___cachedRightStickRight_25;
	// InControl.InputControl InControl.InputDevice::cachedDPadUp
	InputControl_t2986954529 * ___cachedDPadUp_26;
	// InControl.InputControl InControl.InputDevice::cachedDPadDown
	InputControl_t2986954529 * ___cachedDPadDown_27;
	// InControl.InputControl InControl.InputDevice::cachedDPadLeft
	InputControl_t2986954529 * ___cachedDPadLeft_28;
	// InControl.InputControl InControl.InputDevice::cachedDPadRight
	InputControl_t2986954529 * ___cachedDPadRight_29;
	// InControl.InputControl InControl.InputDevice::cachedAction1
	InputControl_t2986954529 * ___cachedAction1_30;
	// InControl.InputControl InControl.InputDevice::cachedAction2
	InputControl_t2986954529 * ___cachedAction2_31;
	// InControl.InputControl InControl.InputDevice::cachedAction3
	InputControl_t2986954529 * ___cachedAction3_32;
	// InControl.InputControl InControl.InputDevice::cachedAction4
	InputControl_t2986954529 * ___cachedAction4_33;
	// InControl.InputControl InControl.InputDevice::cachedLeftTrigger
	InputControl_t2986954529 * ___cachedLeftTrigger_34;
	// InControl.InputControl InControl.InputDevice::cachedRightTrigger
	InputControl_t2986954529 * ___cachedRightTrigger_35;
	// InControl.InputControl InControl.InputDevice::cachedLeftBumper
	InputControl_t2986954529 * ___cachedLeftBumper_36;
	// InControl.InputControl InControl.InputDevice::cachedRightBumper
	InputControl_t2986954529 * ___cachedRightBumper_37;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickButton
	InputControl_t2986954529 * ___cachedLeftStickButton_38;
	// InControl.InputControl InControl.InputDevice::cachedRightStickButton
	InputControl_t2986954529 * ___cachedRightStickButton_39;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickX
	InputControl_t2986954529 * ___cachedLeftStickX_40;
	// InControl.InputControl InControl.InputDevice::cachedLeftStickY
	InputControl_t2986954529 * ___cachedLeftStickY_41;
	// InControl.InputControl InControl.InputDevice::cachedRightStickX
	InputControl_t2986954529 * ___cachedRightStickX_42;
	// InControl.InputControl InControl.InputDevice::cachedRightStickY
	InputControl_t2986954529 * ___cachedRightStickY_43;
	// InControl.InputControl InControl.InputDevice::cachedDPadX
	InputControl_t2986954529 * ___cachedDPadX_44;
	// InControl.InputControl InControl.InputDevice::cachedDPadY
	InputControl_t2986954529 * ___cachedDPadY_45;
	// InControl.InputControl InControl.InputDevice::cachedCommand
	InputControl_t2986954529 * ___cachedCommand_46;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CMetaU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CMetaU3Ek__BackingField_2)); }
	inline String_t* get_U3CMetaU3Ek__BackingField_2() const { return ___U3CMetaU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMetaU3Ek__BackingField_2() { return &___U3CMetaU3Ek__BackingField_2; }
	inline void set_U3CMetaU3Ek__BackingField_2(String_t* value)
	{
		___U3CMetaU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMetaU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CSortOrderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CSortOrderU3Ek__BackingField_3)); }
	inline int32_t get_U3CSortOrderU3Ek__BackingField_3() const { return ___U3CSortOrderU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CSortOrderU3Ek__BackingField_3() { return &___U3CSortOrderU3Ek__BackingField_3; }
	inline void set_U3CSortOrderU3Ek__BackingField_3(int32_t value)
	{
		___U3CSortOrderU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceClassU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CDeviceClassU3Ek__BackingField_4)); }
	inline int32_t get_U3CDeviceClassU3Ek__BackingField_4() const { return ___U3CDeviceClassU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CDeviceClassU3Ek__BackingField_4() { return &___U3CDeviceClassU3Ek__BackingField_4; }
	inline void set_U3CDeviceClassU3Ek__BackingField_4(int32_t value)
	{
		___U3CDeviceClassU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceStyleU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CDeviceStyleU3Ek__BackingField_5)); }
	inline int32_t get_U3CDeviceStyleU3Ek__BackingField_5() const { return ___U3CDeviceStyleU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CDeviceStyleU3Ek__BackingField_5() { return &___U3CDeviceStyleU3Ek__BackingField_5; }
	inline void set_U3CDeviceStyleU3Ek__BackingField_5(int32_t value)
	{
		___U3CDeviceStyleU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGUIDU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CGUIDU3Ek__BackingField_6)); }
	inline Guid_t  get_U3CGUIDU3Ek__BackingField_6() const { return ___U3CGUIDU3Ek__BackingField_6; }
	inline Guid_t * get_address_of_U3CGUIDU3Ek__BackingField_6() { return &___U3CGUIDU3Ek__BackingField_6; }
	inline void set_U3CGUIDU3Ek__BackingField_6(Guid_t  value)
	{
		___U3CGUIDU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLastChangeTickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CLastChangeTickU3Ek__BackingField_7)); }
	inline uint64_t get_U3CLastChangeTickU3Ek__BackingField_7() const { return ___U3CLastChangeTickU3Ek__BackingField_7; }
	inline uint64_t* get_address_of_U3CLastChangeTickU3Ek__BackingField_7() { return &___U3CLastChangeTickU3Ek__BackingField_7; }
	inline void set_U3CLastChangeTickU3Ek__BackingField_7(uint64_t value)
	{
		___U3CLastChangeTickU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsAttachedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CIsAttachedU3Ek__BackingField_8)); }
	inline bool get_U3CIsAttachedU3Ek__BackingField_8() const { return ___U3CIsAttachedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsAttachedU3Ek__BackingField_8() { return &___U3CIsAttachedU3Ek__BackingField_8; }
	inline void set_U3CIsAttachedU3Ek__BackingField_8(bool value)
	{
		___U3CIsAttachedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CRawSticksU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CRawSticksU3Ek__BackingField_9)); }
	inline bool get_U3CRawSticksU3Ek__BackingField_9() const { return ___U3CRawSticksU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CRawSticksU3Ek__BackingField_9() { return &___U3CRawSticksU3Ek__BackingField_9; }
	inline void set_U3CRawSticksU3Ek__BackingField_9(bool value)
	{
		___U3CRawSticksU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_controls_10() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___controls_10)); }
	inline List_1_t2356075661 * get_controls_10() const { return ___controls_10; }
	inline List_1_t2356075661 ** get_address_of_controls_10() { return &___controls_10; }
	inline void set_controls_10(List_1_t2356075661 * value)
	{
		___controls_10 = value;
		Il2CppCodeGenWriteBarrier(&___controls_10, value);
	}

	inline static int32_t get_offset_of_U3CControlsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CControlsU3Ek__BackingField_11)); }
	inline ReadOnlyCollection_1_t3172740221 * get_U3CControlsU3Ek__BackingField_11() const { return ___U3CControlsU3Ek__BackingField_11; }
	inline ReadOnlyCollection_1_t3172740221 ** get_address_of_U3CControlsU3Ek__BackingField_11() { return &___U3CControlsU3Ek__BackingField_11; }
	inline void set_U3CControlsU3Ek__BackingField_11(ReadOnlyCollection_1_t3172740221 * value)
	{
		___U3CControlsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CControlsU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CControlsByTargetU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CControlsByTargetU3Ek__BackingField_12)); }
	inline InputControlU5BU5D_t339972924* get_U3CControlsByTargetU3Ek__BackingField_12() const { return ___U3CControlsByTargetU3Ek__BackingField_12; }
	inline InputControlU5BU5D_t339972924** get_address_of_U3CControlsByTargetU3Ek__BackingField_12() { return &___U3CControlsByTargetU3Ek__BackingField_12; }
	inline void set_U3CControlsByTargetU3Ek__BackingField_12(InputControlU5BU5D_t339972924* value)
	{
		___U3CControlsByTargetU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CControlsByTargetU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_U3CLeftStickU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CLeftStickU3Ek__BackingField_13)); }
	inline TwoAxisInputControl_t203125368 * get_U3CLeftStickU3Ek__BackingField_13() const { return ___U3CLeftStickU3Ek__BackingField_13; }
	inline TwoAxisInputControl_t203125368 ** get_address_of_U3CLeftStickU3Ek__BackingField_13() { return &___U3CLeftStickU3Ek__BackingField_13; }
	inline void set_U3CLeftStickU3Ek__BackingField_13(TwoAxisInputControl_t203125368 * value)
	{
		___U3CLeftStickU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLeftStickU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CRightStickU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CRightStickU3Ek__BackingField_14)); }
	inline TwoAxisInputControl_t203125368 * get_U3CRightStickU3Ek__BackingField_14() const { return ___U3CRightStickU3Ek__BackingField_14; }
	inline TwoAxisInputControl_t203125368 ** get_address_of_U3CRightStickU3Ek__BackingField_14() { return &___U3CRightStickU3Ek__BackingField_14; }
	inline void set_U3CRightStickU3Ek__BackingField_14(TwoAxisInputControl_t203125368 * value)
	{
		___U3CRightStickU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRightStickU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CDPadU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CDPadU3Ek__BackingField_15)); }
	inline TwoAxisInputControl_t203125368 * get_U3CDPadU3Ek__BackingField_15() const { return ___U3CDPadU3Ek__BackingField_15; }
	inline TwoAxisInputControl_t203125368 ** get_address_of_U3CDPadU3Ek__BackingField_15() { return &___U3CDPadU3Ek__BackingField_15; }
	inline void set_U3CDPadU3Ek__BackingField_15(TwoAxisInputControl_t203125368 * value)
	{
		___U3CDPadU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDPadU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_Passive_16() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___Passive_16)); }
	inline bool get_Passive_16() const { return ___Passive_16; }
	inline bool* get_address_of_Passive_16() { return &___Passive_16; }
	inline void set_Passive_16(bool value)
	{
		___Passive_16 = value;
	}

	inline static int32_t get_offset_of_U3CAnalogSnapshotU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___U3CAnalogSnapshotU3Ek__BackingField_17)); }
	inline AnalogSnapshotEntryU5BU5D_t4053652286* get_U3CAnalogSnapshotU3Ek__BackingField_17() const { return ___U3CAnalogSnapshotU3Ek__BackingField_17; }
	inline AnalogSnapshotEntryU5BU5D_t4053652286** get_address_of_U3CAnalogSnapshotU3Ek__BackingField_17() { return &___U3CAnalogSnapshotU3Ek__BackingField_17; }
	inline void set_U3CAnalogSnapshotU3Ek__BackingField_17(AnalogSnapshotEntryU5BU5D_t4053652286* value)
	{
		___U3CAnalogSnapshotU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAnalogSnapshotU3Ek__BackingField_17, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickUp_18() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedLeftStickUp_18)); }
	inline InputControl_t2986954529 * get_cachedLeftStickUp_18() const { return ___cachedLeftStickUp_18; }
	inline InputControl_t2986954529 ** get_address_of_cachedLeftStickUp_18() { return &___cachedLeftStickUp_18; }
	inline void set_cachedLeftStickUp_18(InputControl_t2986954529 * value)
	{
		___cachedLeftStickUp_18 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickUp_18, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickDown_19() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedLeftStickDown_19)); }
	inline InputControl_t2986954529 * get_cachedLeftStickDown_19() const { return ___cachedLeftStickDown_19; }
	inline InputControl_t2986954529 ** get_address_of_cachedLeftStickDown_19() { return &___cachedLeftStickDown_19; }
	inline void set_cachedLeftStickDown_19(InputControl_t2986954529 * value)
	{
		___cachedLeftStickDown_19 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickDown_19, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickLeft_20() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedLeftStickLeft_20)); }
	inline InputControl_t2986954529 * get_cachedLeftStickLeft_20() const { return ___cachedLeftStickLeft_20; }
	inline InputControl_t2986954529 ** get_address_of_cachedLeftStickLeft_20() { return &___cachedLeftStickLeft_20; }
	inline void set_cachedLeftStickLeft_20(InputControl_t2986954529 * value)
	{
		___cachedLeftStickLeft_20 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickLeft_20, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickRight_21() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedLeftStickRight_21)); }
	inline InputControl_t2986954529 * get_cachedLeftStickRight_21() const { return ___cachedLeftStickRight_21; }
	inline InputControl_t2986954529 ** get_address_of_cachedLeftStickRight_21() { return &___cachedLeftStickRight_21; }
	inline void set_cachedLeftStickRight_21(InputControl_t2986954529 * value)
	{
		___cachedLeftStickRight_21 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickRight_21, value);
	}

	inline static int32_t get_offset_of_cachedRightStickUp_22() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedRightStickUp_22)); }
	inline InputControl_t2986954529 * get_cachedRightStickUp_22() const { return ___cachedRightStickUp_22; }
	inline InputControl_t2986954529 ** get_address_of_cachedRightStickUp_22() { return &___cachedRightStickUp_22; }
	inline void set_cachedRightStickUp_22(InputControl_t2986954529 * value)
	{
		___cachedRightStickUp_22 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickUp_22, value);
	}

	inline static int32_t get_offset_of_cachedRightStickDown_23() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedRightStickDown_23)); }
	inline InputControl_t2986954529 * get_cachedRightStickDown_23() const { return ___cachedRightStickDown_23; }
	inline InputControl_t2986954529 ** get_address_of_cachedRightStickDown_23() { return &___cachedRightStickDown_23; }
	inline void set_cachedRightStickDown_23(InputControl_t2986954529 * value)
	{
		___cachedRightStickDown_23 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickDown_23, value);
	}

	inline static int32_t get_offset_of_cachedRightStickLeft_24() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedRightStickLeft_24)); }
	inline InputControl_t2986954529 * get_cachedRightStickLeft_24() const { return ___cachedRightStickLeft_24; }
	inline InputControl_t2986954529 ** get_address_of_cachedRightStickLeft_24() { return &___cachedRightStickLeft_24; }
	inline void set_cachedRightStickLeft_24(InputControl_t2986954529 * value)
	{
		___cachedRightStickLeft_24 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickLeft_24, value);
	}

	inline static int32_t get_offset_of_cachedRightStickRight_25() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedRightStickRight_25)); }
	inline InputControl_t2986954529 * get_cachedRightStickRight_25() const { return ___cachedRightStickRight_25; }
	inline InputControl_t2986954529 ** get_address_of_cachedRightStickRight_25() { return &___cachedRightStickRight_25; }
	inline void set_cachedRightStickRight_25(InputControl_t2986954529 * value)
	{
		___cachedRightStickRight_25 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickRight_25, value);
	}

	inline static int32_t get_offset_of_cachedDPadUp_26() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedDPadUp_26)); }
	inline InputControl_t2986954529 * get_cachedDPadUp_26() const { return ___cachedDPadUp_26; }
	inline InputControl_t2986954529 ** get_address_of_cachedDPadUp_26() { return &___cachedDPadUp_26; }
	inline void set_cachedDPadUp_26(InputControl_t2986954529 * value)
	{
		___cachedDPadUp_26 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadUp_26, value);
	}

	inline static int32_t get_offset_of_cachedDPadDown_27() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedDPadDown_27)); }
	inline InputControl_t2986954529 * get_cachedDPadDown_27() const { return ___cachedDPadDown_27; }
	inline InputControl_t2986954529 ** get_address_of_cachedDPadDown_27() { return &___cachedDPadDown_27; }
	inline void set_cachedDPadDown_27(InputControl_t2986954529 * value)
	{
		___cachedDPadDown_27 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadDown_27, value);
	}

	inline static int32_t get_offset_of_cachedDPadLeft_28() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedDPadLeft_28)); }
	inline InputControl_t2986954529 * get_cachedDPadLeft_28() const { return ___cachedDPadLeft_28; }
	inline InputControl_t2986954529 ** get_address_of_cachedDPadLeft_28() { return &___cachedDPadLeft_28; }
	inline void set_cachedDPadLeft_28(InputControl_t2986954529 * value)
	{
		___cachedDPadLeft_28 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadLeft_28, value);
	}

	inline static int32_t get_offset_of_cachedDPadRight_29() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedDPadRight_29)); }
	inline InputControl_t2986954529 * get_cachedDPadRight_29() const { return ___cachedDPadRight_29; }
	inline InputControl_t2986954529 ** get_address_of_cachedDPadRight_29() { return &___cachedDPadRight_29; }
	inline void set_cachedDPadRight_29(InputControl_t2986954529 * value)
	{
		___cachedDPadRight_29 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadRight_29, value);
	}

	inline static int32_t get_offset_of_cachedAction1_30() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedAction1_30)); }
	inline InputControl_t2986954529 * get_cachedAction1_30() const { return ___cachedAction1_30; }
	inline InputControl_t2986954529 ** get_address_of_cachedAction1_30() { return &___cachedAction1_30; }
	inline void set_cachedAction1_30(InputControl_t2986954529 * value)
	{
		___cachedAction1_30 = value;
		Il2CppCodeGenWriteBarrier(&___cachedAction1_30, value);
	}

	inline static int32_t get_offset_of_cachedAction2_31() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedAction2_31)); }
	inline InputControl_t2986954529 * get_cachedAction2_31() const { return ___cachedAction2_31; }
	inline InputControl_t2986954529 ** get_address_of_cachedAction2_31() { return &___cachedAction2_31; }
	inline void set_cachedAction2_31(InputControl_t2986954529 * value)
	{
		___cachedAction2_31 = value;
		Il2CppCodeGenWriteBarrier(&___cachedAction2_31, value);
	}

	inline static int32_t get_offset_of_cachedAction3_32() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedAction3_32)); }
	inline InputControl_t2986954529 * get_cachedAction3_32() const { return ___cachedAction3_32; }
	inline InputControl_t2986954529 ** get_address_of_cachedAction3_32() { return &___cachedAction3_32; }
	inline void set_cachedAction3_32(InputControl_t2986954529 * value)
	{
		___cachedAction3_32 = value;
		Il2CppCodeGenWriteBarrier(&___cachedAction3_32, value);
	}

	inline static int32_t get_offset_of_cachedAction4_33() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedAction4_33)); }
	inline InputControl_t2986954529 * get_cachedAction4_33() const { return ___cachedAction4_33; }
	inline InputControl_t2986954529 ** get_address_of_cachedAction4_33() { return &___cachedAction4_33; }
	inline void set_cachedAction4_33(InputControl_t2986954529 * value)
	{
		___cachedAction4_33 = value;
		Il2CppCodeGenWriteBarrier(&___cachedAction4_33, value);
	}

	inline static int32_t get_offset_of_cachedLeftTrigger_34() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedLeftTrigger_34)); }
	inline InputControl_t2986954529 * get_cachedLeftTrigger_34() const { return ___cachedLeftTrigger_34; }
	inline InputControl_t2986954529 ** get_address_of_cachedLeftTrigger_34() { return &___cachedLeftTrigger_34; }
	inline void set_cachedLeftTrigger_34(InputControl_t2986954529 * value)
	{
		___cachedLeftTrigger_34 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftTrigger_34, value);
	}

	inline static int32_t get_offset_of_cachedRightTrigger_35() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedRightTrigger_35)); }
	inline InputControl_t2986954529 * get_cachedRightTrigger_35() const { return ___cachedRightTrigger_35; }
	inline InputControl_t2986954529 ** get_address_of_cachedRightTrigger_35() { return &___cachedRightTrigger_35; }
	inline void set_cachedRightTrigger_35(InputControl_t2986954529 * value)
	{
		___cachedRightTrigger_35 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightTrigger_35, value);
	}

	inline static int32_t get_offset_of_cachedLeftBumper_36() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedLeftBumper_36)); }
	inline InputControl_t2986954529 * get_cachedLeftBumper_36() const { return ___cachedLeftBumper_36; }
	inline InputControl_t2986954529 ** get_address_of_cachedLeftBumper_36() { return &___cachedLeftBumper_36; }
	inline void set_cachedLeftBumper_36(InputControl_t2986954529 * value)
	{
		___cachedLeftBumper_36 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftBumper_36, value);
	}

	inline static int32_t get_offset_of_cachedRightBumper_37() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedRightBumper_37)); }
	inline InputControl_t2986954529 * get_cachedRightBumper_37() const { return ___cachedRightBumper_37; }
	inline InputControl_t2986954529 ** get_address_of_cachedRightBumper_37() { return &___cachedRightBumper_37; }
	inline void set_cachedRightBumper_37(InputControl_t2986954529 * value)
	{
		___cachedRightBumper_37 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightBumper_37, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickButton_38() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedLeftStickButton_38)); }
	inline InputControl_t2986954529 * get_cachedLeftStickButton_38() const { return ___cachedLeftStickButton_38; }
	inline InputControl_t2986954529 ** get_address_of_cachedLeftStickButton_38() { return &___cachedLeftStickButton_38; }
	inline void set_cachedLeftStickButton_38(InputControl_t2986954529 * value)
	{
		___cachedLeftStickButton_38 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickButton_38, value);
	}

	inline static int32_t get_offset_of_cachedRightStickButton_39() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedRightStickButton_39)); }
	inline InputControl_t2986954529 * get_cachedRightStickButton_39() const { return ___cachedRightStickButton_39; }
	inline InputControl_t2986954529 ** get_address_of_cachedRightStickButton_39() { return &___cachedRightStickButton_39; }
	inline void set_cachedRightStickButton_39(InputControl_t2986954529 * value)
	{
		___cachedRightStickButton_39 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickButton_39, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickX_40() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedLeftStickX_40)); }
	inline InputControl_t2986954529 * get_cachedLeftStickX_40() const { return ___cachedLeftStickX_40; }
	inline InputControl_t2986954529 ** get_address_of_cachedLeftStickX_40() { return &___cachedLeftStickX_40; }
	inline void set_cachedLeftStickX_40(InputControl_t2986954529 * value)
	{
		___cachedLeftStickX_40 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickX_40, value);
	}

	inline static int32_t get_offset_of_cachedLeftStickY_41() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedLeftStickY_41)); }
	inline InputControl_t2986954529 * get_cachedLeftStickY_41() const { return ___cachedLeftStickY_41; }
	inline InputControl_t2986954529 ** get_address_of_cachedLeftStickY_41() { return &___cachedLeftStickY_41; }
	inline void set_cachedLeftStickY_41(InputControl_t2986954529 * value)
	{
		___cachedLeftStickY_41 = value;
		Il2CppCodeGenWriteBarrier(&___cachedLeftStickY_41, value);
	}

	inline static int32_t get_offset_of_cachedRightStickX_42() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedRightStickX_42)); }
	inline InputControl_t2986954529 * get_cachedRightStickX_42() const { return ___cachedRightStickX_42; }
	inline InputControl_t2986954529 ** get_address_of_cachedRightStickX_42() { return &___cachedRightStickX_42; }
	inline void set_cachedRightStickX_42(InputControl_t2986954529 * value)
	{
		___cachedRightStickX_42 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickX_42, value);
	}

	inline static int32_t get_offset_of_cachedRightStickY_43() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedRightStickY_43)); }
	inline InputControl_t2986954529 * get_cachedRightStickY_43() const { return ___cachedRightStickY_43; }
	inline InputControl_t2986954529 ** get_address_of_cachedRightStickY_43() { return &___cachedRightStickY_43; }
	inline void set_cachedRightStickY_43(InputControl_t2986954529 * value)
	{
		___cachedRightStickY_43 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRightStickY_43, value);
	}

	inline static int32_t get_offset_of_cachedDPadX_44() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedDPadX_44)); }
	inline InputControl_t2986954529 * get_cachedDPadX_44() const { return ___cachedDPadX_44; }
	inline InputControl_t2986954529 ** get_address_of_cachedDPadX_44() { return &___cachedDPadX_44; }
	inline void set_cachedDPadX_44(InputControl_t2986954529 * value)
	{
		___cachedDPadX_44 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadX_44, value);
	}

	inline static int32_t get_offset_of_cachedDPadY_45() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedDPadY_45)); }
	inline InputControl_t2986954529 * get_cachedDPadY_45() const { return ___cachedDPadY_45; }
	inline InputControl_t2986954529 ** get_address_of_cachedDPadY_45() { return &___cachedDPadY_45; }
	inline void set_cachedDPadY_45(InputControl_t2986954529 * value)
	{
		___cachedDPadY_45 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDPadY_45, value);
	}

	inline static int32_t get_offset_of_cachedCommand_46() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736, ___cachedCommand_46)); }
	inline InputControl_t2986954529 * get_cachedCommand_46() const { return ___cachedCommand_46; }
	inline InputControl_t2986954529 ** get_address_of_cachedCommand_46() { return &___cachedCommand_46; }
	inline void set_cachedCommand_46(InputControl_t2986954529 * value)
	{
		___cachedCommand_46 = value;
		Il2CppCodeGenWriteBarrier(&___cachedCommand_46, value);
	}
};

struct InputDevice_t3241776736_StaticFields
{
public:
	// InControl.InputDevice InControl.InputDevice::Null
	InputDevice_t3241776736 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(InputDevice_t3241776736_StaticFields, ___Null_0)); }
	inline InputDevice_t3241776736 * get_Null_0() const { return ___Null_0; }
	inline InputDevice_t3241776736 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(InputDevice_t3241776736 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier(&___Null_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
