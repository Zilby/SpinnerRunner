#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_InControl_OneAxisInputControl3296036506.h"
#include "AssemblyU2DCSharp_InControl_BindingSourceType3503453366.h"
#include "AssemblyU2DCSharp_InControl_InputDeviceClass1119888148.h"
#include "AssemblyU2DCSharp_InControl_InputDeviceStyle3149538565.h"

// System.String
struct String_t;
// InControl.PlayerActionSet
struct PlayerActionSet_t2408599239;
// InControl.BindingListenOptions
struct BindingListenOptions_t4282554178;
// System.Action`1<InControl.BindingSourceType>
struct Action_1_t3305252748;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<InControl.BindingSource>
struct List_1_t1134440034;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.BindingSource>
struct ReadOnlyCollection_1_t1951104594;
// InControl.BindingSourceListener[]
struct BindingSourceListenerU5BU5D_t3796511663;
// InControl.InputDevice
struct InputDevice_t3241776736;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.PlayerAction
struct  PlayerAction_t1085877033  : public OneAxisInputControl_t3296036506
{
public:
	// System.String InControl.PlayerAction::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_18;
	// InControl.PlayerActionSet InControl.PlayerAction::<Owner>k__BackingField
	PlayerActionSet_t2408599239 * ___U3COwnerU3Ek__BackingField_19;
	// InControl.BindingListenOptions InControl.PlayerAction::ListenOptions
	BindingListenOptions_t4282554178 * ___ListenOptions_20;
	// InControl.BindingSourceType InControl.PlayerAction::LastInputType
	int32_t ___LastInputType_21;
	// System.Action`1<InControl.BindingSourceType> InControl.PlayerAction::OnLastInputTypeChanged
	Action_1_t3305252748 * ___OnLastInputTypeChanged_22;
	// System.UInt64 InControl.PlayerAction::LastInputTypeChangedTick
	uint64_t ___LastInputTypeChangedTick_23;
	// InControl.InputDeviceClass InControl.PlayerAction::LastDeviceClass
	int32_t ___LastDeviceClass_24;
	// InControl.InputDeviceStyle InControl.PlayerAction::LastDeviceStyle
	int32_t ___LastDeviceStyle_25;
	// System.Object InControl.PlayerAction::<UserData>k__BackingField
	Il2CppObject * ___U3CUserDataU3Ek__BackingField_26;
	// System.Collections.Generic.List`1<InControl.BindingSource> InControl.PlayerAction::defaultBindings
	List_1_t1134440034 * ___defaultBindings_27;
	// System.Collections.Generic.List`1<InControl.BindingSource> InControl.PlayerAction::regularBindings
	List_1_t1134440034 * ___regularBindings_28;
	// System.Collections.Generic.List`1<InControl.BindingSource> InControl.PlayerAction::visibleBindings
	List_1_t1134440034 * ___visibleBindings_29;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.BindingSource> InControl.PlayerAction::bindings
	ReadOnlyCollection_1_t1951104594 * ___bindings_30;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.BindingSource> InControl.PlayerAction::unfilteredBindings
	ReadOnlyCollection_1_t1951104594 * ___unfilteredBindings_31;
	// InControl.InputDevice InControl.PlayerAction::device
	InputDevice_t3241776736 * ___device_33;
	// InControl.InputDevice InControl.PlayerAction::activeDevice
	InputDevice_t3241776736 * ___activeDevice_34;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___U3CNameU3Ek__BackingField_18)); }
	inline String_t* get_U3CNameU3Ek__BackingField_18() const { return ___U3CNameU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_18() { return &___U3CNameU3Ek__BackingField_18; }
	inline void set_U3CNameU3Ek__BackingField_18(String_t* value)
	{
		___U3CNameU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___U3COwnerU3Ek__BackingField_19)); }
	inline PlayerActionSet_t2408599239 * get_U3COwnerU3Ek__BackingField_19() const { return ___U3COwnerU3Ek__BackingField_19; }
	inline PlayerActionSet_t2408599239 ** get_address_of_U3COwnerU3Ek__BackingField_19() { return &___U3COwnerU3Ek__BackingField_19; }
	inline void set_U3COwnerU3Ek__BackingField_19(PlayerActionSet_t2408599239 * value)
	{
		___U3COwnerU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3COwnerU3Ek__BackingField_19, value);
	}

	inline static int32_t get_offset_of_ListenOptions_20() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___ListenOptions_20)); }
	inline BindingListenOptions_t4282554178 * get_ListenOptions_20() const { return ___ListenOptions_20; }
	inline BindingListenOptions_t4282554178 ** get_address_of_ListenOptions_20() { return &___ListenOptions_20; }
	inline void set_ListenOptions_20(BindingListenOptions_t4282554178 * value)
	{
		___ListenOptions_20 = value;
		Il2CppCodeGenWriteBarrier(&___ListenOptions_20, value);
	}

	inline static int32_t get_offset_of_LastInputType_21() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___LastInputType_21)); }
	inline int32_t get_LastInputType_21() const { return ___LastInputType_21; }
	inline int32_t* get_address_of_LastInputType_21() { return &___LastInputType_21; }
	inline void set_LastInputType_21(int32_t value)
	{
		___LastInputType_21 = value;
	}

	inline static int32_t get_offset_of_OnLastInputTypeChanged_22() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___OnLastInputTypeChanged_22)); }
	inline Action_1_t3305252748 * get_OnLastInputTypeChanged_22() const { return ___OnLastInputTypeChanged_22; }
	inline Action_1_t3305252748 ** get_address_of_OnLastInputTypeChanged_22() { return &___OnLastInputTypeChanged_22; }
	inline void set_OnLastInputTypeChanged_22(Action_1_t3305252748 * value)
	{
		___OnLastInputTypeChanged_22 = value;
		Il2CppCodeGenWriteBarrier(&___OnLastInputTypeChanged_22, value);
	}

	inline static int32_t get_offset_of_LastInputTypeChangedTick_23() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___LastInputTypeChangedTick_23)); }
	inline uint64_t get_LastInputTypeChangedTick_23() const { return ___LastInputTypeChangedTick_23; }
	inline uint64_t* get_address_of_LastInputTypeChangedTick_23() { return &___LastInputTypeChangedTick_23; }
	inline void set_LastInputTypeChangedTick_23(uint64_t value)
	{
		___LastInputTypeChangedTick_23 = value;
	}

	inline static int32_t get_offset_of_LastDeviceClass_24() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___LastDeviceClass_24)); }
	inline int32_t get_LastDeviceClass_24() const { return ___LastDeviceClass_24; }
	inline int32_t* get_address_of_LastDeviceClass_24() { return &___LastDeviceClass_24; }
	inline void set_LastDeviceClass_24(int32_t value)
	{
		___LastDeviceClass_24 = value;
	}

	inline static int32_t get_offset_of_LastDeviceStyle_25() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___LastDeviceStyle_25)); }
	inline int32_t get_LastDeviceStyle_25() const { return ___LastDeviceStyle_25; }
	inline int32_t* get_address_of_LastDeviceStyle_25() { return &___LastDeviceStyle_25; }
	inline void set_LastDeviceStyle_25(int32_t value)
	{
		___LastDeviceStyle_25 = value;
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___U3CUserDataU3Ek__BackingField_26)); }
	inline Il2CppObject * get_U3CUserDataU3Ek__BackingField_26() const { return ___U3CUserDataU3Ek__BackingField_26; }
	inline Il2CppObject ** get_address_of_U3CUserDataU3Ek__BackingField_26() { return &___U3CUserDataU3Ek__BackingField_26; }
	inline void set_U3CUserDataU3Ek__BackingField_26(Il2CppObject * value)
	{
		___U3CUserDataU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserDataU3Ek__BackingField_26, value);
	}

	inline static int32_t get_offset_of_defaultBindings_27() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___defaultBindings_27)); }
	inline List_1_t1134440034 * get_defaultBindings_27() const { return ___defaultBindings_27; }
	inline List_1_t1134440034 ** get_address_of_defaultBindings_27() { return &___defaultBindings_27; }
	inline void set_defaultBindings_27(List_1_t1134440034 * value)
	{
		___defaultBindings_27 = value;
		Il2CppCodeGenWriteBarrier(&___defaultBindings_27, value);
	}

	inline static int32_t get_offset_of_regularBindings_28() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___regularBindings_28)); }
	inline List_1_t1134440034 * get_regularBindings_28() const { return ___regularBindings_28; }
	inline List_1_t1134440034 ** get_address_of_regularBindings_28() { return &___regularBindings_28; }
	inline void set_regularBindings_28(List_1_t1134440034 * value)
	{
		___regularBindings_28 = value;
		Il2CppCodeGenWriteBarrier(&___regularBindings_28, value);
	}

	inline static int32_t get_offset_of_visibleBindings_29() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___visibleBindings_29)); }
	inline List_1_t1134440034 * get_visibleBindings_29() const { return ___visibleBindings_29; }
	inline List_1_t1134440034 ** get_address_of_visibleBindings_29() { return &___visibleBindings_29; }
	inline void set_visibleBindings_29(List_1_t1134440034 * value)
	{
		___visibleBindings_29 = value;
		Il2CppCodeGenWriteBarrier(&___visibleBindings_29, value);
	}

	inline static int32_t get_offset_of_bindings_30() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___bindings_30)); }
	inline ReadOnlyCollection_1_t1951104594 * get_bindings_30() const { return ___bindings_30; }
	inline ReadOnlyCollection_1_t1951104594 ** get_address_of_bindings_30() { return &___bindings_30; }
	inline void set_bindings_30(ReadOnlyCollection_1_t1951104594 * value)
	{
		___bindings_30 = value;
		Il2CppCodeGenWriteBarrier(&___bindings_30, value);
	}

	inline static int32_t get_offset_of_unfilteredBindings_31() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___unfilteredBindings_31)); }
	inline ReadOnlyCollection_1_t1951104594 * get_unfilteredBindings_31() const { return ___unfilteredBindings_31; }
	inline ReadOnlyCollection_1_t1951104594 ** get_address_of_unfilteredBindings_31() { return &___unfilteredBindings_31; }
	inline void set_unfilteredBindings_31(ReadOnlyCollection_1_t1951104594 * value)
	{
		___unfilteredBindings_31 = value;
		Il2CppCodeGenWriteBarrier(&___unfilteredBindings_31, value);
	}

	inline static int32_t get_offset_of_device_33() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___device_33)); }
	inline InputDevice_t3241776736 * get_device_33() const { return ___device_33; }
	inline InputDevice_t3241776736 ** get_address_of_device_33() { return &___device_33; }
	inline void set_device_33(InputDevice_t3241776736 * value)
	{
		___device_33 = value;
		Il2CppCodeGenWriteBarrier(&___device_33, value);
	}

	inline static int32_t get_offset_of_activeDevice_34() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033, ___activeDevice_34)); }
	inline InputDevice_t3241776736 * get_activeDevice_34() const { return ___activeDevice_34; }
	inline InputDevice_t3241776736 ** get_address_of_activeDevice_34() { return &___activeDevice_34; }
	inline void set_activeDevice_34(InputDevice_t3241776736 * value)
	{
		___activeDevice_34 = value;
		Il2CppCodeGenWriteBarrier(&___activeDevice_34, value);
	}
};

struct PlayerAction_t1085877033_StaticFields
{
public:
	// InControl.BindingSourceListener[] InControl.PlayerAction::bindingSourceListeners
	BindingSourceListenerU5BU5D_t3796511663* ___bindingSourceListeners_32;

public:
	inline static int32_t get_offset_of_bindingSourceListeners_32() { return static_cast<int32_t>(offsetof(PlayerAction_t1085877033_StaticFields, ___bindingSourceListeners_32)); }
	inline BindingSourceListenerU5BU5D_t3796511663* get_bindingSourceListeners_32() const { return ___bindingSourceListeners_32; }
	inline BindingSourceListenerU5BU5D_t3796511663** get_address_of_bindingSourceListeners_32() { return &___bindingSourceListeners_32; }
	inline void set_bindingSourceListeners_32(BindingSourceListenerU5BU5D_t3796511663* value)
	{
		___bindingSourceListeners_32 = value;
		Il2CppCodeGenWriteBarrier(&___bindingSourceListeners_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
