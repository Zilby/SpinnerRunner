#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType3503453366.h"
#include "AssemblyU2DCSharp_InControl_InputDeviceClass1119888148.h"
#include "AssemblyU2DCSharp_InControl_InputDeviceStyle3149538565.h"

// InControl.InputDevice
struct InputDevice_t3241776736;
// System.Collections.Generic.List`1<InControl.InputDevice>
struct List_1_t2610897868;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.PlayerAction>
struct ReadOnlyCollection_1_t1271662725;
// System.Action`1<InControl.BindingSourceType>
struct Action_1_t3305252748;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<InControl.PlayerAction>
struct List_1_t454998165;
// System.Collections.Generic.List`1<InControl.PlayerOneAxisAction>
struct List_1_t2181290218;
// System.Collections.Generic.List`1<InControl.PlayerTwoAxisAction>
struct List_1_t3197869864;
// System.Collections.Generic.Dictionary`2<System.String,InControl.PlayerAction>
struct Dictionary_2_t3000656295;
// InControl.BindingListenOptions
struct BindingListenOptions_t4282554178;
// InControl.PlayerAction
struct PlayerAction_t1085877033;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayerActionSet
struct  PlayerActionSet_t2408599239  : public Il2CppObject
{
public:
	// InControl.InputDevice InControl.PlayerActionSet::<Device>k__BackingField
	InputDevice_t3241776736 * ___U3CDeviceU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<InControl.InputDevice> InControl.PlayerActionSet::<IncludeDevices>k__BackingField
	List_1_t2610897868 * ___U3CIncludeDevicesU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<InControl.InputDevice> InControl.PlayerActionSet::<ExcludeDevices>k__BackingField
	List_1_t2610897868 * ___U3CExcludeDevicesU3Ek__BackingField_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.PlayerAction> InControl.PlayerActionSet::<Actions>k__BackingField
	ReadOnlyCollection_1_t1271662725 * ___U3CActionsU3Ek__BackingField_3;
	// System.UInt64 InControl.PlayerActionSet::<UpdateTick>k__BackingField
	uint64_t ___U3CUpdateTickU3Ek__BackingField_4;
	// InControl.BindingSourceType InControl.PlayerActionSet::LastInputType
	int32_t ___LastInputType_5;
	// System.Action`1<InControl.BindingSourceType> InControl.PlayerActionSet::OnLastInputTypeChanged
	Action_1_t3305252748 * ___OnLastInputTypeChanged_6;
	// System.UInt64 InControl.PlayerActionSet::LastInputTypeChangedTick
	uint64_t ___LastInputTypeChangedTick_7;
	// InControl.InputDeviceClass InControl.PlayerActionSet::LastDeviceClass
	int32_t ___LastDeviceClass_8;
	// InControl.InputDeviceStyle InControl.PlayerActionSet::LastDeviceStyle
	int32_t ___LastDeviceStyle_9;
	// System.Boolean InControl.PlayerActionSet::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_10;
	// System.Boolean InControl.PlayerActionSet::<PreventInputWhileListeningForBinding>k__BackingField
	bool ___U3CPreventInputWhileListeningForBindingU3Ek__BackingField_11;
	// System.Object InControl.PlayerActionSet::<UserData>k__BackingField
	Il2CppObject * ___U3CUserDataU3Ek__BackingField_12;
	// System.Collections.Generic.List`1<InControl.PlayerAction> InControl.PlayerActionSet::actions
	List_1_t454998165 * ___actions_13;
	// System.Collections.Generic.List`1<InControl.PlayerOneAxisAction> InControl.PlayerActionSet::oneAxisActions
	List_1_t2181290218 * ___oneAxisActions_14;
	// System.Collections.Generic.List`1<InControl.PlayerTwoAxisAction> InControl.PlayerActionSet::twoAxisActions
	List_1_t3197869864 * ___twoAxisActions_15;
	// System.Collections.Generic.Dictionary`2<System.String,InControl.PlayerAction> InControl.PlayerActionSet::actionsByName
	Dictionary_2_t3000656295 * ___actionsByName_16;
	// InControl.BindingListenOptions InControl.PlayerActionSet::listenOptions
	BindingListenOptions_t4282554178 * ___listenOptions_17;
	// InControl.PlayerAction InControl.PlayerActionSet::listenWithAction
	PlayerAction_t1085877033 * ___listenWithAction_18;
	// InControl.InputDevice InControl.PlayerActionSet::activeDevice
	InputDevice_t3241776736 * ___activeDevice_19;

public:
	inline static int32_t get_offset_of_U3CDeviceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___U3CDeviceU3Ek__BackingField_0)); }
	inline InputDevice_t3241776736 * get_U3CDeviceU3Ek__BackingField_0() const { return ___U3CDeviceU3Ek__BackingField_0; }
	inline InputDevice_t3241776736 ** get_address_of_U3CDeviceU3Ek__BackingField_0() { return &___U3CDeviceU3Ek__BackingField_0; }
	inline void set_U3CDeviceU3Ek__BackingField_0(InputDevice_t3241776736 * value)
	{
		___U3CDeviceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDeviceU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CIncludeDevicesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___U3CIncludeDevicesU3Ek__BackingField_1)); }
	inline List_1_t2610897868 * get_U3CIncludeDevicesU3Ek__BackingField_1() const { return ___U3CIncludeDevicesU3Ek__BackingField_1; }
	inline List_1_t2610897868 ** get_address_of_U3CIncludeDevicesU3Ek__BackingField_1() { return &___U3CIncludeDevicesU3Ek__BackingField_1; }
	inline void set_U3CIncludeDevicesU3Ek__BackingField_1(List_1_t2610897868 * value)
	{
		___U3CIncludeDevicesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIncludeDevicesU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CExcludeDevicesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___U3CExcludeDevicesU3Ek__BackingField_2)); }
	inline List_1_t2610897868 * get_U3CExcludeDevicesU3Ek__BackingField_2() const { return ___U3CExcludeDevicesU3Ek__BackingField_2; }
	inline List_1_t2610897868 ** get_address_of_U3CExcludeDevicesU3Ek__BackingField_2() { return &___U3CExcludeDevicesU3Ek__BackingField_2; }
	inline void set_U3CExcludeDevicesU3Ek__BackingField_2(List_1_t2610897868 * value)
	{
		___U3CExcludeDevicesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExcludeDevicesU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CActionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___U3CActionsU3Ek__BackingField_3)); }
	inline ReadOnlyCollection_1_t1271662725 * get_U3CActionsU3Ek__BackingField_3() const { return ___U3CActionsU3Ek__BackingField_3; }
	inline ReadOnlyCollection_1_t1271662725 ** get_address_of_U3CActionsU3Ek__BackingField_3() { return &___U3CActionsU3Ek__BackingField_3; }
	inline void set_U3CActionsU3Ek__BackingField_3(ReadOnlyCollection_1_t1271662725 * value)
	{
		___U3CActionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CActionsU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CUpdateTickU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___U3CUpdateTickU3Ek__BackingField_4)); }
	inline uint64_t get_U3CUpdateTickU3Ek__BackingField_4() const { return ___U3CUpdateTickU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CUpdateTickU3Ek__BackingField_4() { return &___U3CUpdateTickU3Ek__BackingField_4; }
	inline void set_U3CUpdateTickU3Ek__BackingField_4(uint64_t value)
	{
		___U3CUpdateTickU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_LastInputType_5() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___LastInputType_5)); }
	inline int32_t get_LastInputType_5() const { return ___LastInputType_5; }
	inline int32_t* get_address_of_LastInputType_5() { return &___LastInputType_5; }
	inline void set_LastInputType_5(int32_t value)
	{
		___LastInputType_5 = value;
	}

	inline static int32_t get_offset_of_OnLastInputTypeChanged_6() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___OnLastInputTypeChanged_6)); }
	inline Action_1_t3305252748 * get_OnLastInputTypeChanged_6() const { return ___OnLastInputTypeChanged_6; }
	inline Action_1_t3305252748 ** get_address_of_OnLastInputTypeChanged_6() { return &___OnLastInputTypeChanged_6; }
	inline void set_OnLastInputTypeChanged_6(Action_1_t3305252748 * value)
	{
		___OnLastInputTypeChanged_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnLastInputTypeChanged_6, value);
	}

	inline static int32_t get_offset_of_LastInputTypeChangedTick_7() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___LastInputTypeChangedTick_7)); }
	inline uint64_t get_LastInputTypeChangedTick_7() const { return ___LastInputTypeChangedTick_7; }
	inline uint64_t* get_address_of_LastInputTypeChangedTick_7() { return &___LastInputTypeChangedTick_7; }
	inline void set_LastInputTypeChangedTick_7(uint64_t value)
	{
		___LastInputTypeChangedTick_7 = value;
	}

	inline static int32_t get_offset_of_LastDeviceClass_8() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___LastDeviceClass_8)); }
	inline int32_t get_LastDeviceClass_8() const { return ___LastDeviceClass_8; }
	inline int32_t* get_address_of_LastDeviceClass_8() { return &___LastDeviceClass_8; }
	inline void set_LastDeviceClass_8(int32_t value)
	{
		___LastDeviceClass_8 = value;
	}

	inline static int32_t get_offset_of_LastDeviceStyle_9() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___LastDeviceStyle_9)); }
	inline int32_t get_LastDeviceStyle_9() const { return ___LastDeviceStyle_9; }
	inline int32_t* get_address_of_LastDeviceStyle_9() { return &___LastDeviceStyle_9; }
	inline void set_LastDeviceStyle_9(int32_t value)
	{
		___LastDeviceStyle_9 = value;
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___U3CEnabledU3Ek__BackingField_10)); }
	inline bool get_U3CEnabledU3Ek__BackingField_10() const { return ___U3CEnabledU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_10() { return &___U3CEnabledU3Ek__BackingField_10; }
	inline void set_U3CEnabledU3Ek__BackingField_10(bool value)
	{
		___U3CEnabledU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CPreventInputWhileListeningForBindingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___U3CPreventInputWhileListeningForBindingU3Ek__BackingField_11)); }
	inline bool get_U3CPreventInputWhileListeningForBindingU3Ek__BackingField_11() const { return ___U3CPreventInputWhileListeningForBindingU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CPreventInputWhileListeningForBindingU3Ek__BackingField_11() { return &___U3CPreventInputWhileListeningForBindingU3Ek__BackingField_11; }
	inline void set_U3CPreventInputWhileListeningForBindingU3Ek__BackingField_11(bool value)
	{
		___U3CPreventInputWhileListeningForBindingU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___U3CUserDataU3Ek__BackingField_12)); }
	inline Il2CppObject * get_U3CUserDataU3Ek__BackingField_12() const { return ___U3CUserDataU3Ek__BackingField_12; }
	inline Il2CppObject ** get_address_of_U3CUserDataU3Ek__BackingField_12() { return &___U3CUserDataU3Ek__BackingField_12; }
	inline void set_U3CUserDataU3Ek__BackingField_12(Il2CppObject * value)
	{
		___U3CUserDataU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserDataU3Ek__BackingField_12, value);
	}

	inline static int32_t get_offset_of_actions_13() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___actions_13)); }
	inline List_1_t454998165 * get_actions_13() const { return ___actions_13; }
	inline List_1_t454998165 ** get_address_of_actions_13() { return &___actions_13; }
	inline void set_actions_13(List_1_t454998165 * value)
	{
		___actions_13 = value;
		Il2CppCodeGenWriteBarrier(&___actions_13, value);
	}

	inline static int32_t get_offset_of_oneAxisActions_14() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___oneAxisActions_14)); }
	inline List_1_t2181290218 * get_oneAxisActions_14() const { return ___oneAxisActions_14; }
	inline List_1_t2181290218 ** get_address_of_oneAxisActions_14() { return &___oneAxisActions_14; }
	inline void set_oneAxisActions_14(List_1_t2181290218 * value)
	{
		___oneAxisActions_14 = value;
		Il2CppCodeGenWriteBarrier(&___oneAxisActions_14, value);
	}

	inline static int32_t get_offset_of_twoAxisActions_15() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___twoAxisActions_15)); }
	inline List_1_t3197869864 * get_twoAxisActions_15() const { return ___twoAxisActions_15; }
	inline List_1_t3197869864 ** get_address_of_twoAxisActions_15() { return &___twoAxisActions_15; }
	inline void set_twoAxisActions_15(List_1_t3197869864 * value)
	{
		___twoAxisActions_15 = value;
		Il2CppCodeGenWriteBarrier(&___twoAxisActions_15, value);
	}

	inline static int32_t get_offset_of_actionsByName_16() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___actionsByName_16)); }
	inline Dictionary_2_t3000656295 * get_actionsByName_16() const { return ___actionsByName_16; }
	inline Dictionary_2_t3000656295 ** get_address_of_actionsByName_16() { return &___actionsByName_16; }
	inline void set_actionsByName_16(Dictionary_2_t3000656295 * value)
	{
		___actionsByName_16 = value;
		Il2CppCodeGenWriteBarrier(&___actionsByName_16, value);
	}

	inline static int32_t get_offset_of_listenOptions_17() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___listenOptions_17)); }
	inline BindingListenOptions_t4282554178 * get_listenOptions_17() const { return ___listenOptions_17; }
	inline BindingListenOptions_t4282554178 ** get_address_of_listenOptions_17() { return &___listenOptions_17; }
	inline void set_listenOptions_17(BindingListenOptions_t4282554178 * value)
	{
		___listenOptions_17 = value;
		Il2CppCodeGenWriteBarrier(&___listenOptions_17, value);
	}

	inline static int32_t get_offset_of_listenWithAction_18() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___listenWithAction_18)); }
	inline PlayerAction_t1085877033 * get_listenWithAction_18() const { return ___listenWithAction_18; }
	inline PlayerAction_t1085877033 ** get_address_of_listenWithAction_18() { return &___listenWithAction_18; }
	inline void set_listenWithAction_18(PlayerAction_t1085877033 * value)
	{
		___listenWithAction_18 = value;
		Il2CppCodeGenWriteBarrier(&___listenWithAction_18, value);
	}

	inline static int32_t get_offset_of_activeDevice_19() { return static_cast<int32_t>(offsetof(PlayerActionSet_t2408599239, ___activeDevice_19)); }
	inline InputDevice_t3241776736 * get_activeDevice_19() const { return ___activeDevice_19; }
	inline InputDevice_t3241776736 ** get_address_of_activeDevice_19() { return &___activeDevice_19; }
	inline void set_activeDevice_19(InputDevice_t3241776736 * value)
	{
		___activeDevice_19 = value;
		Il2CppCodeGenWriteBarrier(&___activeDevice_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
