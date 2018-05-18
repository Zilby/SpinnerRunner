#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_InControl_VersionInfo3271958654.h"
#include "mscorlib_System_Nullable_1_gen1535024969.h"

// System.Action
struct Action_t3226471752;
// System.Action`2<System.UInt64,System.Single>
struct Action_2_t13167131;
// System.Action`1<InControl.InputDevice>
struct Action_1_t3043576118;
// System.Collections.Generic.List`1<InControl.InputDeviceManager>
struct List_1_t2622971209;
// System.Collections.Generic.Dictionary`2<System.Type,InControl.InputDeviceManager>
struct Dictionary_2_t896240678;
// InControl.InputDevice
struct InputDevice_t3241776736;
// System.Collections.Generic.List`1<InControl.InputDevice>
struct List_1_t2610897868;
// System.Collections.Generic.List`1<InControl.PlayerActionSet>
struct List_1_t1777720371;
// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputDevice>
struct ReadOnlyCollection_1_t3427562428;
// System.String
struct String_t;
// System.Comparison`1<InControl.InputDevice>
struct Comparison_1_t208548291;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.InputManager
struct  InputManager_t1261572321  : public Il2CppObject
{
public:

public:
};

struct InputManager_t1261572321_StaticFields
{
public:
	// InControl.VersionInfo InControl.InputManager::Version
	VersionInfo_t3271958654  ___Version_0;
	// System.Action InControl.InputManager::OnSetup
	Action_t3226471752 * ___OnSetup_1;
	// System.Action`2<System.UInt64,System.Single> InControl.InputManager::OnUpdate
	Action_2_t13167131 * ___OnUpdate_2;
	// System.Action InControl.InputManager::OnReset
	Action_t3226471752 * ___OnReset_3;
	// System.Action`1<InControl.InputDevice> InControl.InputManager::OnDeviceAttached
	Action_1_t3043576118 * ___OnDeviceAttached_4;
	// System.Action`1<InControl.InputDevice> InControl.InputManager::OnDeviceDetached
	Action_1_t3043576118 * ___OnDeviceDetached_5;
	// System.Action`1<InControl.InputDevice> InControl.InputManager::OnActiveDeviceChanged
	Action_1_t3043576118 * ___OnActiveDeviceChanged_6;
	// System.Action`2<System.UInt64,System.Single> InControl.InputManager::OnUpdateDevices
	Action_2_t13167131 * ___OnUpdateDevices_7;
	// System.Action`2<System.UInt64,System.Single> InControl.InputManager::OnCommitDevices
	Action_2_t13167131 * ___OnCommitDevices_8;
	// System.Collections.Generic.List`1<InControl.InputDeviceManager> InControl.InputManager::deviceManagers
	List_1_t2622971209 * ___deviceManagers_9;
	// System.Collections.Generic.Dictionary`2<System.Type,InControl.InputDeviceManager> InControl.InputManager::deviceManagerTable
	Dictionary_2_t896240678 * ___deviceManagerTable_10;
	// InControl.InputDevice InControl.InputManager::activeDevice
	InputDevice_t3241776736 * ___activeDevice_11;
	// System.Collections.Generic.List`1<InControl.InputDevice> InControl.InputManager::devices
	List_1_t2610897868 * ___devices_12;
	// System.Collections.Generic.List`1<InControl.PlayerActionSet> InControl.InputManager::playerActionSets
	List_1_t1777720371 * ___playerActionSets_13;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<InControl.InputDevice> InControl.InputManager::Devices
	ReadOnlyCollection_1_t3427562428 * ___Devices_14;
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
	Nullable_1_t1535024969  ___unityVersion_24;
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
	Comparison_1_t208548291 * ___U3CU3Ef__amU24cache0_35;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___Version_0)); }
	inline VersionInfo_t3271958654  get_Version_0() const { return ___Version_0; }
	inline VersionInfo_t3271958654 * get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(VersionInfo_t3271958654  value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_OnSetup_1() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___OnSetup_1)); }
	inline Action_t3226471752 * get_OnSetup_1() const { return ___OnSetup_1; }
	inline Action_t3226471752 ** get_address_of_OnSetup_1() { return &___OnSetup_1; }
	inline void set_OnSetup_1(Action_t3226471752 * value)
	{
		___OnSetup_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnSetup_1, value);
	}

	inline static int32_t get_offset_of_OnUpdate_2() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___OnUpdate_2)); }
	inline Action_2_t13167131 * get_OnUpdate_2() const { return ___OnUpdate_2; }
	inline Action_2_t13167131 ** get_address_of_OnUpdate_2() { return &___OnUpdate_2; }
	inline void set_OnUpdate_2(Action_2_t13167131 * value)
	{
		___OnUpdate_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnUpdate_2, value);
	}

	inline static int32_t get_offset_of_OnReset_3() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___OnReset_3)); }
	inline Action_t3226471752 * get_OnReset_3() const { return ___OnReset_3; }
	inline Action_t3226471752 ** get_address_of_OnReset_3() { return &___OnReset_3; }
	inline void set_OnReset_3(Action_t3226471752 * value)
	{
		___OnReset_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnReset_3, value);
	}

	inline static int32_t get_offset_of_OnDeviceAttached_4() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___OnDeviceAttached_4)); }
	inline Action_1_t3043576118 * get_OnDeviceAttached_4() const { return ___OnDeviceAttached_4; }
	inline Action_1_t3043576118 ** get_address_of_OnDeviceAttached_4() { return &___OnDeviceAttached_4; }
	inline void set_OnDeviceAttached_4(Action_1_t3043576118 * value)
	{
		___OnDeviceAttached_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceAttached_4, value);
	}

	inline static int32_t get_offset_of_OnDeviceDetached_5() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___OnDeviceDetached_5)); }
	inline Action_1_t3043576118 * get_OnDeviceDetached_5() const { return ___OnDeviceDetached_5; }
	inline Action_1_t3043576118 ** get_address_of_OnDeviceDetached_5() { return &___OnDeviceDetached_5; }
	inline void set_OnDeviceDetached_5(Action_1_t3043576118 * value)
	{
		___OnDeviceDetached_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceDetached_5, value);
	}

	inline static int32_t get_offset_of_OnActiveDeviceChanged_6() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___OnActiveDeviceChanged_6)); }
	inline Action_1_t3043576118 * get_OnActiveDeviceChanged_6() const { return ___OnActiveDeviceChanged_6; }
	inline Action_1_t3043576118 ** get_address_of_OnActiveDeviceChanged_6() { return &___OnActiveDeviceChanged_6; }
	inline void set_OnActiveDeviceChanged_6(Action_1_t3043576118 * value)
	{
		___OnActiveDeviceChanged_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnActiveDeviceChanged_6, value);
	}

	inline static int32_t get_offset_of_OnUpdateDevices_7() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___OnUpdateDevices_7)); }
	inline Action_2_t13167131 * get_OnUpdateDevices_7() const { return ___OnUpdateDevices_7; }
	inline Action_2_t13167131 ** get_address_of_OnUpdateDevices_7() { return &___OnUpdateDevices_7; }
	inline void set_OnUpdateDevices_7(Action_2_t13167131 * value)
	{
		___OnUpdateDevices_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnUpdateDevices_7, value);
	}

	inline static int32_t get_offset_of_OnCommitDevices_8() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___OnCommitDevices_8)); }
	inline Action_2_t13167131 * get_OnCommitDevices_8() const { return ___OnCommitDevices_8; }
	inline Action_2_t13167131 ** get_address_of_OnCommitDevices_8() { return &___OnCommitDevices_8; }
	inline void set_OnCommitDevices_8(Action_2_t13167131 * value)
	{
		___OnCommitDevices_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnCommitDevices_8, value);
	}

	inline static int32_t get_offset_of_deviceManagers_9() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___deviceManagers_9)); }
	inline List_1_t2622971209 * get_deviceManagers_9() const { return ___deviceManagers_9; }
	inline List_1_t2622971209 ** get_address_of_deviceManagers_9() { return &___deviceManagers_9; }
	inline void set_deviceManagers_9(List_1_t2622971209 * value)
	{
		___deviceManagers_9 = value;
		Il2CppCodeGenWriteBarrier(&___deviceManagers_9, value);
	}

	inline static int32_t get_offset_of_deviceManagerTable_10() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___deviceManagerTable_10)); }
	inline Dictionary_2_t896240678 * get_deviceManagerTable_10() const { return ___deviceManagerTable_10; }
	inline Dictionary_2_t896240678 ** get_address_of_deviceManagerTable_10() { return &___deviceManagerTable_10; }
	inline void set_deviceManagerTable_10(Dictionary_2_t896240678 * value)
	{
		___deviceManagerTable_10 = value;
		Il2CppCodeGenWriteBarrier(&___deviceManagerTable_10, value);
	}

	inline static int32_t get_offset_of_activeDevice_11() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___activeDevice_11)); }
	inline InputDevice_t3241776736 * get_activeDevice_11() const { return ___activeDevice_11; }
	inline InputDevice_t3241776736 ** get_address_of_activeDevice_11() { return &___activeDevice_11; }
	inline void set_activeDevice_11(InputDevice_t3241776736 * value)
	{
		___activeDevice_11 = value;
		Il2CppCodeGenWriteBarrier(&___activeDevice_11, value);
	}

	inline static int32_t get_offset_of_devices_12() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___devices_12)); }
	inline List_1_t2610897868 * get_devices_12() const { return ___devices_12; }
	inline List_1_t2610897868 ** get_address_of_devices_12() { return &___devices_12; }
	inline void set_devices_12(List_1_t2610897868 * value)
	{
		___devices_12 = value;
		Il2CppCodeGenWriteBarrier(&___devices_12, value);
	}

	inline static int32_t get_offset_of_playerActionSets_13() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___playerActionSets_13)); }
	inline List_1_t1777720371 * get_playerActionSets_13() const { return ___playerActionSets_13; }
	inline List_1_t1777720371 ** get_address_of_playerActionSets_13() { return &___playerActionSets_13; }
	inline void set_playerActionSets_13(List_1_t1777720371 * value)
	{
		___playerActionSets_13 = value;
		Il2CppCodeGenWriteBarrier(&___playerActionSets_13, value);
	}

	inline static int32_t get_offset_of_Devices_14() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___Devices_14)); }
	inline ReadOnlyCollection_1_t3427562428 * get_Devices_14() const { return ___Devices_14; }
	inline ReadOnlyCollection_1_t3427562428 ** get_address_of_Devices_14() { return &___Devices_14; }
	inline void set_Devices_14(ReadOnlyCollection_1_t3427562428 * value)
	{
		___Devices_14 = value;
		Il2CppCodeGenWriteBarrier(&___Devices_14, value);
	}

	inline static int32_t get_offset_of_U3CCommandWasPressedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CCommandWasPressedU3Ek__BackingField_15)); }
	inline bool get_U3CCommandWasPressedU3Ek__BackingField_15() const { return ___U3CCommandWasPressedU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CCommandWasPressedU3Ek__BackingField_15() { return &___U3CCommandWasPressedU3Ek__BackingField_15; }
	inline void set_U3CCommandWasPressedU3Ek__BackingField_15(bool value)
	{
		___U3CCommandWasPressedU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CInvertYAxisU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CInvertYAxisU3Ek__BackingField_16)); }
	inline bool get_U3CInvertYAxisU3Ek__BackingField_16() const { return ___U3CInvertYAxisU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CInvertYAxisU3Ek__BackingField_16() { return &___U3CInvertYAxisU3Ek__BackingField_16; }
	inline void set_U3CInvertYAxisU3Ek__BackingField_16(bool value)
	{
		___U3CInvertYAxisU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CIsSetupU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CIsSetupU3Ek__BackingField_17)); }
	inline bool get_U3CIsSetupU3Ek__BackingField_17() const { return ___U3CIsSetupU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CIsSetupU3Ek__BackingField_17() { return &___U3CIsSetupU3Ek__BackingField_17; }
	inline void set_U3CIsSetupU3Ek__BackingField_17(bool value)
	{
		___U3CIsSetupU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CPlatformU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CPlatformU3Ek__BackingField_18)); }
	inline String_t* get_U3CPlatformU3Ek__BackingField_18() const { return ___U3CPlatformU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CPlatformU3Ek__BackingField_18() { return &___U3CPlatformU3Ek__BackingField_18; }
	inline void set_U3CPlatformU3Ek__BackingField_18(String_t* value)
	{
		___U3CPlatformU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPlatformU3Ek__BackingField_18, value);
	}

	inline static int32_t get_offset_of_applicationIsFocused_19() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___applicationIsFocused_19)); }
	inline bool get_applicationIsFocused_19() const { return ___applicationIsFocused_19; }
	inline bool* get_address_of_applicationIsFocused_19() { return &___applicationIsFocused_19; }
	inline void set_applicationIsFocused_19(bool value)
	{
		___applicationIsFocused_19 = value;
	}

	inline static int32_t get_offset_of_initialTime_20() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___initialTime_20)); }
	inline float get_initialTime_20() const { return ___initialTime_20; }
	inline float* get_address_of_initialTime_20() { return &___initialTime_20; }
	inline void set_initialTime_20(float value)
	{
		___initialTime_20 = value;
	}

	inline static int32_t get_offset_of_currentTime_21() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___currentTime_21)); }
	inline float get_currentTime_21() const { return ___currentTime_21; }
	inline float* get_address_of_currentTime_21() { return &___currentTime_21; }
	inline void set_currentTime_21(float value)
	{
		___currentTime_21 = value;
	}

	inline static int32_t get_offset_of_lastUpdateTime_22() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___lastUpdateTime_22)); }
	inline float get_lastUpdateTime_22() const { return ___lastUpdateTime_22; }
	inline float* get_address_of_lastUpdateTime_22() { return &___lastUpdateTime_22; }
	inline void set_lastUpdateTime_22(float value)
	{
		___lastUpdateTime_22 = value;
	}

	inline static int32_t get_offset_of_currentTick_23() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___currentTick_23)); }
	inline uint64_t get_currentTick_23() const { return ___currentTick_23; }
	inline uint64_t* get_address_of_currentTick_23() { return &___currentTick_23; }
	inline void set_currentTick_23(uint64_t value)
	{
		___currentTick_23 = value;
	}

	inline static int32_t get_offset_of_unityVersion_24() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___unityVersion_24)); }
	inline Nullable_1_t1535024969  get_unityVersion_24() const { return ___unityVersion_24; }
	inline Nullable_1_t1535024969 * get_address_of_unityVersion_24() { return &___unityVersion_24; }
	inline void set_unityVersion_24(Nullable_1_t1535024969  value)
	{
		___unityVersion_24 = value;
	}

	inline static int32_t get_offset_of_enabled_25() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___enabled_25)); }
	inline bool get_enabled_25() const { return ___enabled_25; }
	inline bool* get_address_of_enabled_25() { return &___enabled_25; }
	inline void set_enabled_25(bool value)
	{
		___enabled_25 = value;
	}

	inline static int32_t get_offset_of_U3CSuspendInBackgroundU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CSuspendInBackgroundU3Ek__BackingField_26)); }
	inline bool get_U3CSuspendInBackgroundU3Ek__BackingField_26() const { return ___U3CSuspendInBackgroundU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CSuspendInBackgroundU3Ek__BackingField_26() { return &___U3CSuspendInBackgroundU3Ek__BackingField_26; }
	inline void set_U3CSuspendInBackgroundU3Ek__BackingField_26(bool value)
	{
		___U3CSuspendInBackgroundU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CEnableNativeInputU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CEnableNativeInputU3Ek__BackingField_27)); }
	inline bool get_U3CEnableNativeInputU3Ek__BackingField_27() const { return ___U3CEnableNativeInputU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CEnableNativeInputU3Ek__BackingField_27() { return &___U3CEnableNativeInputU3Ek__BackingField_27; }
	inline void set_U3CEnableNativeInputU3Ek__BackingField_27(bool value)
	{
		___U3CEnableNativeInputU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CEnableXInputU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CEnableXInputU3Ek__BackingField_28)); }
	inline bool get_U3CEnableXInputU3Ek__BackingField_28() const { return ___U3CEnableXInputU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CEnableXInputU3Ek__BackingField_28() { return &___U3CEnableXInputU3Ek__BackingField_28; }
	inline void set_U3CEnableXInputU3Ek__BackingField_28(bool value)
	{
		___U3CEnableXInputU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CXInputUpdateRateU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CXInputUpdateRateU3Ek__BackingField_29)); }
	inline uint32_t get_U3CXInputUpdateRateU3Ek__BackingField_29() const { return ___U3CXInputUpdateRateU3Ek__BackingField_29; }
	inline uint32_t* get_address_of_U3CXInputUpdateRateU3Ek__BackingField_29() { return &___U3CXInputUpdateRateU3Ek__BackingField_29; }
	inline void set_U3CXInputUpdateRateU3Ek__BackingField_29(uint32_t value)
	{
		___U3CXInputUpdateRateU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CXInputBufferSizeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CXInputBufferSizeU3Ek__BackingField_30)); }
	inline uint32_t get_U3CXInputBufferSizeU3Ek__BackingField_30() const { return ___U3CXInputBufferSizeU3Ek__BackingField_30; }
	inline uint32_t* get_address_of_U3CXInputBufferSizeU3Ek__BackingField_30() { return &___U3CXInputBufferSizeU3Ek__BackingField_30; }
	inline void set_U3CXInputBufferSizeU3Ek__BackingField_30(uint32_t value)
	{
		___U3CXInputBufferSizeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CNativeInputEnableXInputU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CNativeInputEnableXInputU3Ek__BackingField_31)); }
	inline bool get_U3CNativeInputEnableXInputU3Ek__BackingField_31() const { return ___U3CNativeInputEnableXInputU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CNativeInputEnableXInputU3Ek__BackingField_31() { return &___U3CNativeInputEnableXInputU3Ek__BackingField_31; }
	inline void set_U3CNativeInputEnableXInputU3Ek__BackingField_31(bool value)
	{
		___U3CNativeInputEnableXInputU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CNativeInputPreventSleepU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CNativeInputPreventSleepU3Ek__BackingField_32)); }
	inline bool get_U3CNativeInputPreventSleepU3Ek__BackingField_32() const { return ___U3CNativeInputPreventSleepU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CNativeInputPreventSleepU3Ek__BackingField_32() { return &___U3CNativeInputPreventSleepU3Ek__BackingField_32; }
	inline void set_U3CNativeInputPreventSleepU3Ek__BackingField_32(bool value)
	{
		___U3CNativeInputPreventSleepU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CNativeInputUpdateRateU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CNativeInputUpdateRateU3Ek__BackingField_33)); }
	inline uint32_t get_U3CNativeInputUpdateRateU3Ek__BackingField_33() const { return ___U3CNativeInputUpdateRateU3Ek__BackingField_33; }
	inline uint32_t* get_address_of_U3CNativeInputUpdateRateU3Ek__BackingField_33() { return &___U3CNativeInputUpdateRateU3Ek__BackingField_33; }
	inline void set_U3CNativeInputUpdateRateU3Ek__BackingField_33(uint32_t value)
	{
		___U3CNativeInputUpdateRateU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CEnableICadeU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CEnableICadeU3Ek__BackingField_34)); }
	inline bool get_U3CEnableICadeU3Ek__BackingField_34() const { return ___U3CEnableICadeU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CEnableICadeU3Ek__BackingField_34() { return &___U3CEnableICadeU3Ek__BackingField_34; }
	inline void set_U3CEnableICadeU3Ek__BackingField_34(bool value)
	{
		___U3CEnableICadeU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_35() { return static_cast<int32_t>(offsetof(InputManager_t1261572321_StaticFields, ___U3CU3Ef__amU24cache0_35)); }
	inline Comparison_1_t208548291 * get_U3CU3Ef__amU24cache0_35() const { return ___U3CU3Ef__amU24cache0_35; }
	inline Comparison_1_t208548291 ** get_address_of_U3CU3Ef__amU24cache0_35() { return &___U3CU3Ef__amU24cache0_35; }
	inline void set_U3CU3Ef__amU24cache0_35(Comparison_1_t208548291 * value)
	{
		___U3CU3Ef__amU24cache0_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_35, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
