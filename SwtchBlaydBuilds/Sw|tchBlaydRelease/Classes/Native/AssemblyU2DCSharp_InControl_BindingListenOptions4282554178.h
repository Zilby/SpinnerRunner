#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// InControl.BindingSource
struct BindingSource_t1765318902;
// System.Func`3<InControl.PlayerAction,InControl.BindingSource,System.Boolean>
struct Func_3_t2742902957;
// System.Action`2<InControl.PlayerAction,InControl.BindingSource>
struct Action_2_t3095934642;
// System.Action`3<InControl.PlayerAction,InControl.BindingSource,InControl.BindingSourceRejectionType>
struct Action_3_t4079751394;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.BindingListenOptions
struct  BindingListenOptions_t4282554178  : public Il2CppObject
{
public:
	// System.Boolean InControl.BindingListenOptions::IncludeControllers
	bool ___IncludeControllers_0;
	// System.Boolean InControl.BindingListenOptions::IncludeUnknownControllers
	bool ___IncludeUnknownControllers_1;
	// System.Boolean InControl.BindingListenOptions::IncludeNonStandardControls
	bool ___IncludeNonStandardControls_2;
	// System.Boolean InControl.BindingListenOptions::IncludeMouseButtons
	bool ___IncludeMouseButtons_3;
	// System.Boolean InControl.BindingListenOptions::IncludeMouseScrollWheel
	bool ___IncludeMouseScrollWheel_4;
	// System.Boolean InControl.BindingListenOptions::IncludeKeys
	bool ___IncludeKeys_5;
	// System.Boolean InControl.BindingListenOptions::IncludeModifiersAsFirstClassKeys
	bool ___IncludeModifiersAsFirstClassKeys_6;
	// System.UInt32 InControl.BindingListenOptions::MaxAllowedBindings
	uint32_t ___MaxAllowedBindings_7;
	// System.UInt32 InControl.BindingListenOptions::MaxAllowedBindingsPerType
	uint32_t ___MaxAllowedBindingsPerType_8;
	// System.Boolean InControl.BindingListenOptions::AllowDuplicateBindingsPerSet
	bool ___AllowDuplicateBindingsPerSet_9;
	// System.Boolean InControl.BindingListenOptions::UnsetDuplicateBindingsOnSet
	bool ___UnsetDuplicateBindingsOnSet_10;
	// System.Boolean InControl.BindingListenOptions::RejectRedundantBindings
	bool ___RejectRedundantBindings_11;
	// InControl.BindingSource InControl.BindingListenOptions::ReplaceBinding
	BindingSource_t1765318902 * ___ReplaceBinding_12;
	// System.Func`3<InControl.PlayerAction,InControl.BindingSource,System.Boolean> InControl.BindingListenOptions::OnBindingFound
	Func_3_t2742902957 * ___OnBindingFound_13;
	// System.Action`2<InControl.PlayerAction,InControl.BindingSource> InControl.BindingListenOptions::OnBindingAdded
	Action_2_t3095934642 * ___OnBindingAdded_14;
	// System.Action`3<InControl.PlayerAction,InControl.BindingSource,InControl.BindingSourceRejectionType> InControl.BindingListenOptions::OnBindingRejected
	Action_3_t4079751394 * ___OnBindingRejected_15;

public:
	inline static int32_t get_offset_of_IncludeControllers_0() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___IncludeControllers_0)); }
	inline bool get_IncludeControllers_0() const { return ___IncludeControllers_0; }
	inline bool* get_address_of_IncludeControllers_0() { return &___IncludeControllers_0; }
	inline void set_IncludeControllers_0(bool value)
	{
		___IncludeControllers_0 = value;
	}

	inline static int32_t get_offset_of_IncludeUnknownControllers_1() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___IncludeUnknownControllers_1)); }
	inline bool get_IncludeUnknownControllers_1() const { return ___IncludeUnknownControllers_1; }
	inline bool* get_address_of_IncludeUnknownControllers_1() { return &___IncludeUnknownControllers_1; }
	inline void set_IncludeUnknownControllers_1(bool value)
	{
		___IncludeUnknownControllers_1 = value;
	}

	inline static int32_t get_offset_of_IncludeNonStandardControls_2() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___IncludeNonStandardControls_2)); }
	inline bool get_IncludeNonStandardControls_2() const { return ___IncludeNonStandardControls_2; }
	inline bool* get_address_of_IncludeNonStandardControls_2() { return &___IncludeNonStandardControls_2; }
	inline void set_IncludeNonStandardControls_2(bool value)
	{
		___IncludeNonStandardControls_2 = value;
	}

	inline static int32_t get_offset_of_IncludeMouseButtons_3() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___IncludeMouseButtons_3)); }
	inline bool get_IncludeMouseButtons_3() const { return ___IncludeMouseButtons_3; }
	inline bool* get_address_of_IncludeMouseButtons_3() { return &___IncludeMouseButtons_3; }
	inline void set_IncludeMouseButtons_3(bool value)
	{
		___IncludeMouseButtons_3 = value;
	}

	inline static int32_t get_offset_of_IncludeMouseScrollWheel_4() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___IncludeMouseScrollWheel_4)); }
	inline bool get_IncludeMouseScrollWheel_4() const { return ___IncludeMouseScrollWheel_4; }
	inline bool* get_address_of_IncludeMouseScrollWheel_4() { return &___IncludeMouseScrollWheel_4; }
	inline void set_IncludeMouseScrollWheel_4(bool value)
	{
		___IncludeMouseScrollWheel_4 = value;
	}

	inline static int32_t get_offset_of_IncludeKeys_5() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___IncludeKeys_5)); }
	inline bool get_IncludeKeys_5() const { return ___IncludeKeys_5; }
	inline bool* get_address_of_IncludeKeys_5() { return &___IncludeKeys_5; }
	inline void set_IncludeKeys_5(bool value)
	{
		___IncludeKeys_5 = value;
	}

	inline static int32_t get_offset_of_IncludeModifiersAsFirstClassKeys_6() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___IncludeModifiersAsFirstClassKeys_6)); }
	inline bool get_IncludeModifiersAsFirstClassKeys_6() const { return ___IncludeModifiersAsFirstClassKeys_6; }
	inline bool* get_address_of_IncludeModifiersAsFirstClassKeys_6() { return &___IncludeModifiersAsFirstClassKeys_6; }
	inline void set_IncludeModifiersAsFirstClassKeys_6(bool value)
	{
		___IncludeModifiersAsFirstClassKeys_6 = value;
	}

	inline static int32_t get_offset_of_MaxAllowedBindings_7() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___MaxAllowedBindings_7)); }
	inline uint32_t get_MaxAllowedBindings_7() const { return ___MaxAllowedBindings_7; }
	inline uint32_t* get_address_of_MaxAllowedBindings_7() { return &___MaxAllowedBindings_7; }
	inline void set_MaxAllowedBindings_7(uint32_t value)
	{
		___MaxAllowedBindings_7 = value;
	}

	inline static int32_t get_offset_of_MaxAllowedBindingsPerType_8() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___MaxAllowedBindingsPerType_8)); }
	inline uint32_t get_MaxAllowedBindingsPerType_8() const { return ___MaxAllowedBindingsPerType_8; }
	inline uint32_t* get_address_of_MaxAllowedBindingsPerType_8() { return &___MaxAllowedBindingsPerType_8; }
	inline void set_MaxAllowedBindingsPerType_8(uint32_t value)
	{
		___MaxAllowedBindingsPerType_8 = value;
	}

	inline static int32_t get_offset_of_AllowDuplicateBindingsPerSet_9() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___AllowDuplicateBindingsPerSet_9)); }
	inline bool get_AllowDuplicateBindingsPerSet_9() const { return ___AllowDuplicateBindingsPerSet_9; }
	inline bool* get_address_of_AllowDuplicateBindingsPerSet_9() { return &___AllowDuplicateBindingsPerSet_9; }
	inline void set_AllowDuplicateBindingsPerSet_9(bool value)
	{
		___AllowDuplicateBindingsPerSet_9 = value;
	}

	inline static int32_t get_offset_of_UnsetDuplicateBindingsOnSet_10() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___UnsetDuplicateBindingsOnSet_10)); }
	inline bool get_UnsetDuplicateBindingsOnSet_10() const { return ___UnsetDuplicateBindingsOnSet_10; }
	inline bool* get_address_of_UnsetDuplicateBindingsOnSet_10() { return &___UnsetDuplicateBindingsOnSet_10; }
	inline void set_UnsetDuplicateBindingsOnSet_10(bool value)
	{
		___UnsetDuplicateBindingsOnSet_10 = value;
	}

	inline static int32_t get_offset_of_RejectRedundantBindings_11() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___RejectRedundantBindings_11)); }
	inline bool get_RejectRedundantBindings_11() const { return ___RejectRedundantBindings_11; }
	inline bool* get_address_of_RejectRedundantBindings_11() { return &___RejectRedundantBindings_11; }
	inline void set_RejectRedundantBindings_11(bool value)
	{
		___RejectRedundantBindings_11 = value;
	}

	inline static int32_t get_offset_of_ReplaceBinding_12() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___ReplaceBinding_12)); }
	inline BindingSource_t1765318902 * get_ReplaceBinding_12() const { return ___ReplaceBinding_12; }
	inline BindingSource_t1765318902 ** get_address_of_ReplaceBinding_12() { return &___ReplaceBinding_12; }
	inline void set_ReplaceBinding_12(BindingSource_t1765318902 * value)
	{
		___ReplaceBinding_12 = value;
		Il2CppCodeGenWriteBarrier(&___ReplaceBinding_12, value);
	}

	inline static int32_t get_offset_of_OnBindingFound_13() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___OnBindingFound_13)); }
	inline Func_3_t2742902957 * get_OnBindingFound_13() const { return ___OnBindingFound_13; }
	inline Func_3_t2742902957 ** get_address_of_OnBindingFound_13() { return &___OnBindingFound_13; }
	inline void set_OnBindingFound_13(Func_3_t2742902957 * value)
	{
		___OnBindingFound_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnBindingFound_13, value);
	}

	inline static int32_t get_offset_of_OnBindingAdded_14() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___OnBindingAdded_14)); }
	inline Action_2_t3095934642 * get_OnBindingAdded_14() const { return ___OnBindingAdded_14; }
	inline Action_2_t3095934642 ** get_address_of_OnBindingAdded_14() { return &___OnBindingAdded_14; }
	inline void set_OnBindingAdded_14(Action_2_t3095934642 * value)
	{
		___OnBindingAdded_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnBindingAdded_14, value);
	}

	inline static int32_t get_offset_of_OnBindingRejected_15() { return static_cast<int32_t>(offsetof(BindingListenOptions_t4282554178, ___OnBindingRejected_15)); }
	inline Action_3_t4079751394 * get_OnBindingRejected_15() const { return ___OnBindingRejected_15; }
	inline Action_3_t4079751394 ** get_address_of_OnBindingRejected_15() { return &___OnBindingRejected_15; }
	inline void set_OnBindingRejected_15(Action_3_t4079751394 * value)
	{
		___OnBindingRejected_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnBindingRejected_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
