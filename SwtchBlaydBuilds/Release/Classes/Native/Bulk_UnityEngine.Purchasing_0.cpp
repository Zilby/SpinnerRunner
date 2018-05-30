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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.Purchasing.Extension.ProductDescription
struct ProductDescription_t714013132;
// System.String
struct String_t;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t3417118930;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t437632294;
// UnityEngine.Purchasing.PayoutDefinition
struct PayoutDefinition_t3571684064;
// UnityEngine.Purchasing.Product
struct Product_t3244410059;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t339727138;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t2671956229;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct Dictionary_2_t3029666358;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>
struct IEnumerable_1_t2551536953;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct List_1_t748791510;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t2942947242;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Purchasing.Product,System.Collections.DictionaryEntry>
struct Transform_1_t1793358958;
// UnityEngine.Purchasing.PayoutDefinition[]
struct PayoutDefinitionU5BU5D_t274752929;
// System.Char[]
struct CharU5BU5D_t3528271667;

extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t PayoutDefinition__ctor_m480258218_MetadataUsageId;
extern RuntimeClass* Product_t3244410059_il2cpp_TypeInfo_var;
extern const uint32_t Product_Equals_m468564859_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3839205334_RuntimeMethod_var;
extern const uint32_t ProductCollection_WithID_m2597694943_MetadataUsageId;
extern const uint32_t ProductCollection_WithStoreSpecificID_m2495952872_MetadataUsageId;
extern RuntimeClass* List_1_t748791510_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2305681321_RuntimeMethod_var;
extern const uint32_t ProductDefinition__ctor_m3267495726_MetadataUsageId;
extern RuntimeClass* ProductDefinition_t339727138_il2cpp_TypeInfo_var;
extern const uint32_t ProductDefinition_Equals_m2651766784_MetadataUsageId;
extern const RuntimeMethod* List_1_Clear_m3858397092_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m2240270450_RuntimeMethod_var;
extern const uint32_t ProductDefinition_SetPayouts_m580635826_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745552_H
#define U3CMODULEU3E_T692745552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745552 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745552_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef PRODUCTCOLLECTION_T2671956229_H
#define PRODUCTCOLLECTION_T2671956229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductCollection
struct  ProductCollection_t2671956229  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_IdToProduct
	Dictionary_2_t3029666358 * ___m_IdToProduct_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_StoreSpecificIdToProduct
	Dictionary_2_t3029666358 * ___m_StoreSpecificIdToProduct_1;

public:
	inline static int32_t get_offset_of_m_IdToProduct_0() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229, ___m_IdToProduct_0)); }
	inline Dictionary_2_t3029666358 * get_m_IdToProduct_0() const { return ___m_IdToProduct_0; }
	inline Dictionary_2_t3029666358 ** get_address_of_m_IdToProduct_0() { return &___m_IdToProduct_0; }
	inline void set_m_IdToProduct_0(Dictionary_2_t3029666358 * value)
	{
		___m_IdToProduct_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_IdToProduct_0), value);
	}

	inline static int32_t get_offset_of_m_StoreSpecificIdToProduct_1() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229, ___m_StoreSpecificIdToProduct_1)); }
	inline Dictionary_2_t3029666358 * get_m_StoreSpecificIdToProduct_1() const { return ___m_StoreSpecificIdToProduct_1; }
	inline Dictionary_2_t3029666358 ** get_address_of_m_StoreSpecificIdToProduct_1() { return &___m_StoreSpecificIdToProduct_1; }
	inline void set_m_StoreSpecificIdToProduct_1(Dictionary_2_t3029666358 * value)
	{
		___m_StoreSpecificIdToProduct_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_StoreSpecificIdToProduct_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTCOLLECTION_T2671956229_H
#ifndef DICTIONARY_2_T3029666358_H
#define DICTIONARY_2_T3029666358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct  Dictionary_2_t3029666358  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ProductU5BU5D_t2942947242* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___valueSlots_7)); }
	inline ProductU5BU5D_t2942947242* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ProductU5BU5D_t2942947242** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ProductU5BU5D_t2942947242* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3029666358_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1793358958 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3029666358_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1793358958 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1793358958 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1793358958 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3029666358_H
#ifndef LIST_1_T748791510_H
#define LIST_1_T748791510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>
struct  List_1_t748791510  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PayoutDefinitionU5BU5D_t274752929* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t748791510, ____items_1)); }
	inline PayoutDefinitionU5BU5D_t274752929* get__items_1() const { return ____items_1; }
	inline PayoutDefinitionU5BU5D_t274752929** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PayoutDefinitionU5BU5D_t274752929* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t748791510, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t748791510, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t748791510_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PayoutDefinitionU5BU5D_t274752929* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t748791510_StaticFields, ___EmptyArray_4)); }
	inline PayoutDefinitionU5BU5D_t274752929* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PayoutDefinitionU5BU5D_t274752929** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PayoutDefinitionU5BU5D_t274752929* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T748791510_H
#ifndef PRODUCT_T3244410059_H
#define PRODUCT_T3244410059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Product
struct  Product_t3244410059  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_t339727138 * ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_t3417118930 * ___U3CmetadataU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CdefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CdefinitionU3Ek__BackingField_0)); }
	inline ProductDefinition_t339727138 * get_U3CdefinitionU3Ek__BackingField_0() const { return ___U3CdefinitionU3Ek__BackingField_0; }
	inline ProductDefinition_t339727138 ** get_address_of_U3CdefinitionU3Ek__BackingField_0() { return &___U3CdefinitionU3Ek__BackingField_0; }
	inline void set_U3CdefinitionU3Ek__BackingField_0(ProductDefinition_t339727138 * value)
	{
		___U3CdefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdefinitionU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CmetadataU3Ek__BackingField_1)); }
	inline ProductMetadata_t3417118930 * get_U3CmetadataU3Ek__BackingField_1() const { return ___U3CmetadataU3Ek__BackingField_1; }
	inline ProductMetadata_t3417118930 ** get_address_of_U3CmetadataU3Ek__BackingField_1() { return &___U3CmetadataU3Ek__BackingField_1; }
	inline void set_U3CmetadataU3Ek__BackingField_1(ProductMetadata_t3417118930 * value)
	{
		___U3CmetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmetadataU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCT_T3244410059_H
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
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef PRODUCTDESCRIPTION_T714013132_H
#define PRODUCTDESCRIPTION_T714013132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.ProductDescription
struct  ProductDescription_t714013132  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::<metadata>k__BackingField
	ProductMetadata_t3417118930 * ___U3CmetadataU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Extension.ProductDescription::<transactionId>k__BackingField
	String_t* ___U3CtransactionIdU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDescription_t714013132, ___U3CstoreSpecificIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_0() const { return ___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_0() { return &___U3CstoreSpecificIdU3Ek__BackingField_0; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstoreSpecificIdU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDescription_t714013132, ___U3CmetadataU3Ek__BackingField_1)); }
	inline ProductMetadata_t3417118930 * get_U3CmetadataU3Ek__BackingField_1() const { return ___U3CmetadataU3Ek__BackingField_1; }
	inline ProductMetadata_t3417118930 ** get_address_of_U3CmetadataU3Ek__BackingField_1() { return &___U3CmetadataU3Ek__BackingField_1; }
	inline void set_U3CmetadataU3Ek__BackingField_1(ProductMetadata_t3417118930 * value)
	{
		___U3CmetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmetadataU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDescription_t714013132, ___U3CreceiptU3Ek__BackingField_2)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_2() const { return ___U3CreceiptU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_2() { return &___U3CreceiptU3Ek__BackingField_2; }
	inline void set_U3CreceiptU3Ek__BackingField_2(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CreceiptU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CtransactionIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDescription_t714013132, ___U3CtransactionIdU3Ek__BackingField_3)); }
	inline String_t* get_U3CtransactionIdU3Ek__BackingField_3() const { return ___U3CtransactionIdU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtransactionIdU3Ek__BackingField_3() { return &___U3CtransactionIdU3Ek__BackingField_3; }
	inline void set_U3CtransactionIdU3Ek__BackingField_3(String_t* value)
	{
		___U3CtransactionIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtransactionIdU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTDESCRIPTION_T714013132_H
#ifndef ABSTRACTSTORE_T285429589_H
#define ABSTRACTSTORE_T285429589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.AbstractStore
struct  AbstractStore_t285429589  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTSTORE_T285429589_H
#ifndef ABSTRACTPURCHASINGMODULE_T2882497868_H
#define ABSTRACTPURCHASINGMODULE_T2882497868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct  AbstractPurchasingModule_t2882497868  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTPURCHASINGMODULE_T2882497868_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
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
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef PURCHASEFAILUREREASON_T4243987912_H
#define PURCHASEFAILUREREASON_T4243987912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchaseFailureReason
struct  PurchaseFailureReason_t4243987912 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t4243987912, ___value___1)); }
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
#endif // PURCHASEFAILUREREASON_T4243987912_H
#ifndef PAYOUTTYPE_T2016707446_H
#define PAYOUTTYPE_T2016707446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PayoutType
struct  PayoutType_t2016707446 
{
public:
	// System.Int32 UnityEngine.Purchasing.PayoutType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PayoutType_t2016707446, ___value___1)); }
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
#endif // PAYOUTTYPE_T2016707446_H
#ifndef INITIALIZATIONFAILUREREASON_T2740567704_H
#define INITIALIZATIONFAILUREREASON_T2740567704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.InitializationFailureReason
struct  InitializationFailureReason_t2740567704 
{
public:
	// System.Int32 UnityEngine.Purchasing.InitializationFailureReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitializationFailureReason_t2740567704, ___value___1)); }
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
#endif // INITIALIZATIONFAILUREREASON_T2740567704_H
#ifndef PRODUCTMETADATA_T3417118930_H
#define PRODUCTMETADATA_T3417118930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductMetadata
struct  ProductMetadata_t3417118930  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedPriceString>k__BackingField
	String_t* ___U3ClocalizedPriceStringU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedTitle>k__BackingField
	String_t* ___U3ClocalizedTitleU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedDescription>k__BackingField
	String_t* ___U3ClocalizedDescriptionU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.ProductMetadata::<isoCurrencyCode>k__BackingField
	String_t* ___U3CisoCurrencyCodeU3Ek__BackingField_3;
	// System.Decimal UnityEngine.Purchasing.ProductMetadata::<localizedPrice>k__BackingField
	Decimal_t2948259380  ___U3ClocalizedPriceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedPriceStringU3Ek__BackingField_0)); }
	inline String_t* get_U3ClocalizedPriceStringU3Ek__BackingField_0() const { return ___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return &___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline void set_U3ClocalizedPriceStringU3Ek__BackingField_0(String_t* value)
	{
		___U3ClocalizedPriceStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClocalizedPriceStringU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClocalizedTitleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedTitleU3Ek__BackingField_1)); }
	inline String_t* get_U3ClocalizedTitleU3Ek__BackingField_1() const { return ___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3ClocalizedTitleU3Ek__BackingField_1() { return &___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline void set_U3ClocalizedTitleU3Ek__BackingField_1(String_t* value)
	{
		___U3ClocalizedTitleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClocalizedTitleU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3ClocalizedDescriptionU3Ek__BackingField_2() const { return ___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return &___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline void set_U3ClocalizedDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3ClocalizedDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClocalizedDescriptionU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3CisoCurrencyCodeU3Ek__BackingField_3)); }
	inline String_t* get_U3CisoCurrencyCodeU3Ek__BackingField_3() const { return ___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return &___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline void set_U3CisoCurrencyCodeU3Ek__BackingField_3(String_t* value)
	{
		___U3CisoCurrencyCodeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CisoCurrencyCodeU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3ClocalizedPriceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedPriceU3Ek__BackingField_4)); }
	inline Decimal_t2948259380  get_U3ClocalizedPriceU3Ek__BackingField_4() const { return ___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline Decimal_t2948259380 * get_address_of_U3ClocalizedPriceU3Ek__BackingField_4() { return &___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline void set_U3ClocalizedPriceU3Ek__BackingField_4(Decimal_t2948259380  value)
	{
		___U3ClocalizedPriceU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTMETADATA_T3417118930_H
#ifndef PRODUCTTYPE_T1868976581_H
#define PRODUCTTYPE_T1868976581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductType
struct  ProductType_t1868976581 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProductType_t1868976581, ___value___1)); }
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
#endif // PRODUCTTYPE_T1868976581_H
#ifndef PURCHASEFAILUREDESCRIPTION_T437632294_H
#define PURCHASEFAILUREDESCRIPTION_T437632294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct  PurchaseFailureDescription_t437632294  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<productId>k__BackingField
	String_t* ___U3CproductIdU3Ek__BackingField_0;
	// UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<reason>k__BackingField
	int32_t ___U3CreasonU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CproductIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t437632294, ___U3CproductIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CproductIdU3Ek__BackingField_0() const { return ___U3CproductIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CproductIdU3Ek__BackingField_0() { return &___U3CproductIdU3Ek__BackingField_0; }
	inline void set_U3CproductIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CproductIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CproductIdU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CreasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t437632294, ___U3CreasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CreasonU3Ek__BackingField_1() const { return ___U3CreasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreasonU3Ek__BackingField_1() { return &___U3CreasonU3Ek__BackingField_1; }
	inline void set_U3CreasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CreasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PurchaseFailureDescription_t437632294, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmessageU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASEFAILUREDESCRIPTION_T437632294_H
#ifndef PRODUCTDEFINITION_T339727138_H
#define PRODUCTDEFINITION_T339727138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductDefinition
struct  ProductDefinition_t339727138  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductDefinition::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductDefinition::<storeSpecificId>k__BackingField
	String_t* ___U3CstoreSpecificIdU3Ek__BackingField_1;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Purchasing.ProductDefinition::<enabled>k__BackingField
	bool ___U3CenabledU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::m_Payouts
	List_1_t748791510 * ___m_Payouts_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductDefinition_t339727138, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductDefinition_t339727138, ___U3CstoreSpecificIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CstoreSpecificIdU3Ek__BackingField_1() const { return ___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CstoreSpecificIdU3Ek__BackingField_1() { return &___U3CstoreSpecificIdU3Ek__BackingField_1; }
	inline void set_U3CstoreSpecificIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CstoreSpecificIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstoreSpecificIdU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductDefinition_t339727138, ___U3CtypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CenabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductDefinition_t339727138, ___U3CenabledU3Ek__BackingField_3)); }
	inline bool get_U3CenabledU3Ek__BackingField_3() const { return ___U3CenabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CenabledU3Ek__BackingField_3() { return &___U3CenabledU3Ek__BackingField_3; }
	inline void set_U3CenabledU3Ek__BackingField_3(bool value)
	{
		___U3CenabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Payouts_4() { return static_cast<int32_t>(offsetof(ProductDefinition_t339727138, ___m_Payouts_4)); }
	inline List_1_t748791510 * get_m_Payouts_4() const { return ___m_Payouts_4; }
	inline List_1_t748791510 ** get_address_of_m_Payouts_4() { return &___m_Payouts_4; }
	inline void set_m_Payouts_4(List_1_t748791510 * value)
	{
		___m_Payouts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Payouts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTDEFINITION_T339727138_H
#ifndef PAYOUTDEFINITION_T3571684064_H
#define PAYOUTDEFINITION_T3571684064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PayoutDefinition
struct  PayoutDefinition_t3571684064  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.PayoutType UnityEngine.Purchasing.PayoutDefinition::m_Type
	int32_t ___m_Type_0;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Subtype
	String_t* ___m_Subtype_1;
	// System.String UnityEngine.Purchasing.PayoutDefinition::m_Data
	String_t* ___m_Data_2;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PayoutDefinition_t3571684064, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_Subtype_1() { return static_cast<int32_t>(offsetof(PayoutDefinition_t3571684064, ___m_Subtype_1)); }
	inline String_t* get_m_Subtype_1() const { return ___m_Subtype_1; }
	inline String_t** get_address_of_m_Subtype_1() { return &___m_Subtype_1; }
	inline void set_m_Subtype_1(String_t* value)
	{
		___m_Subtype_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Subtype_1), value);
	}

	inline static int32_t get_offset_of_m_Data_2() { return static_cast<int32_t>(offsetof(PayoutDefinition_t3571684064, ___m_Data_2)); }
	inline String_t* get_m_Data_2() const { return ___m_Data_2; }
	inline String_t** get_address_of_m_Data_2() { return &___m_Data_2; }
	inline void set_m_Data_2(String_t* value)
	{
		___m_Data_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAYOUTDEFINITION_T3571684064_H


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C"  void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_storeSpecificId(System.String)
extern "C"  void ProductDescription_set_storeSpecificId_m3599465816 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern "C"  void ProductDescription_set_metadata_m226775712 (ProductDescription_t714013132 * __this, ProductMetadata_t3417118930 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_receipt(System.String)
extern "C"  void ProductDescription_set_receipt_m3359025263 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_transactionId(System.String)
extern "C"  void ProductDescription_set_transactionId_m3435239027 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata,System.String,System.String)
extern "C"  void ProductDescription__ctor_m2003094149 (ProductDescription_t714013132 * __this, String_t* ___id0, ProductMetadata_t3417118930 * ___metadata1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_productId(System.String)
extern "C"  void PurchaseFailureDescription_set_productId_m1922537378 (PurchaseFailureDescription_t437632294 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_reason(UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void PurchaseFailureDescription_set_reason_m83116780 (PurchaseFailureDescription_t437632294 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_message(System.String)
extern "C"  void PurchaseFailureDescription_set_message_m3224327965 (PurchaseFailureDescription_t437632294 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
extern "C"  ProductDefinition_t339727138 * Product_get_definition_m3366103520 (Product_t3244410059 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m3839205334(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3029666358 *, String_t*, Product_t3244410059 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType,System.Boolean)
extern "C"  void ProductDefinition__ctor_m2244438016 (ProductDefinition_t339727138 * __this, String_t* ___id0, String_t* ___storeSpecificId1, int32_t ___type2, bool ___enabled3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType,System.Boolean,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern "C"  void ProductDefinition__ctor_m3267495726 (ProductDefinition_t339727138 * __this, String_t* ___id0, String_t* ___storeSpecificId1, int32_t ___type2, bool ___enabled3, RuntimeObject* ___payouts4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::.ctor()
#define List_1__ctor_m2305681321(__this, method) ((  void (*) (List_1_t748791510 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.Purchasing.ProductDefinition::set_id(System.String)
extern "C"  void ProductDefinition_set_id_m3726047248 (ProductDefinition_t339727138 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::set_storeSpecificId(System.String)
extern "C"  void ProductDefinition_set_storeSpecificId_m3168192593 (ProductDefinition_t339727138 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::set_type(UnityEngine.Purchasing.ProductType)
extern "C"  void ProductDefinition_set_type_m1878988275 (ProductDefinition_t339727138 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::set_enabled(System.Boolean)
extern "C"  void ProductDefinition_set_enabled_m80478909 (ProductDefinition_t339727138 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductDefinition::SetPayouts(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern "C"  void ProductDefinition_SetPayouts_m580635826 (ProductDefinition_t339727138 * __this, RuntimeObject* ___newPayouts0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
extern "C"  String_t* ProductDefinition_get_id_m1593385231 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::Clear()
#define List_1_Clear_m3858397092(__this, method) ((  void (*) (List_1_t748791510 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Purchasing.PayoutDefinition>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m2240270450(__this, p0, method) ((  void (*) (List_1_t748791510 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method)
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPriceString(System.String)
extern "C"  void ProductMetadata_set_localizedPriceString_m1610096054 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedTitle(System.String)
extern "C"  void ProductMetadata_set_localizedTitle_m2721164981 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedDescription(System.String)
extern "C"  void ProductMetadata_set_localizedDescription_m579183859 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_isoCurrencyCode(System.String)
extern "C"  void ProductMetadata_set_isoCurrencyCode_m3113608994 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPrice(System.Decimal)
extern "C"  void ProductMetadata_set_localizedPrice_m2468387343 (ProductMetadata_t3417118930 * __this, Decimal_t2948259380  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata,System.String,System.String)
extern "C"  void ProductDescription__ctor_m2003094149 (ProductDescription_t714013132 * __this, String_t* ___id0, ProductMetadata_t3417118930 * ___metadata1, String_t* ___receipt2, String_t* ___transactionId3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		ProductDescription_set_storeSpecificId_m3599465816(__this, L_0, /*hidden argument*/NULL);
		ProductMetadata_t3417118930 * L_1 = ___metadata1;
		ProductDescription_set_metadata_m226775712(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___receipt2;
		ProductDescription_set_receipt_m3359025263(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___transactionId3;
		ProductDescription_set_transactionId_m3435239027(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata)
extern "C"  void ProductDescription__ctor_m3916440598 (ProductDescription_t714013132 * __this, String_t* ___id0, ProductMetadata_t3417118930 * ___metadata1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		ProductMetadata_t3417118930 * L_1 = ___metadata1;
		ProductDescription__ctor_m2003094149(__this, L_0, L_1, (String_t*)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_storeSpecificId(System.String)
extern "C"  void ProductDescription_set_storeSpecificId_m3599465816 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CstoreSpecificIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern "C"  void ProductDescription_set_metadata_m226775712 (ProductDescription_t714013132 * __this, ProductMetadata_t3417118930 * ___value0, const RuntimeMethod* method)
{
	{
		ProductMetadata_t3417118930 * L_0 = ___value0;
		__this->set_U3CmetadataU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_receipt(System.String)
extern "C"  void ProductDescription_set_receipt_m3359025263 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CreceiptU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_transactionId(System.String)
extern "C"  void ProductDescription_set_transactionId_m3435239027 (ProductDescription_t714013132 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIdU3Ek__BackingField_3(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::.ctor(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
extern "C"  void PurchaseFailureDescription__ctor_m3435232560 (PurchaseFailureDescription_t437632294 * __this, String_t* ___productId0, int32_t ___reason1, String_t* ___message2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___productId0;
		PurchaseFailureDescription_set_productId_m1922537378(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___reason1;
		PurchaseFailureDescription_set_reason_m83116780(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___message2;
		PurchaseFailureDescription_set_message_m3224327965(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_productId()
extern "C"  String_t* PurchaseFailureDescription_get_productId_m1501924961 (PurchaseFailureDescription_t437632294 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CproductIdU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_productId(System.String)
extern "C"  void PurchaseFailureDescription_set_productId_m1922537378 (PurchaseFailureDescription_t437632294 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CproductIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_reason(UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void PurchaseFailureDescription_set_reason_m83116780 (PurchaseFailureDescription_t437632294 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CreasonU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_message(System.String)
extern "C"  void PurchaseFailureDescription_set_message_m3224327965 (PurchaseFailureDescription_t437632294 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CmessageU3Ek__BackingField_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor()
extern "C"  void PayoutDefinition__ctor_m480258218 (PayoutDefinition_t3571684064 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PayoutDefinition__ctor_m480258218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Type_0(0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_m_Subtype_1(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_m_Data_2(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
extern "C"  ProductDefinition_t339727138 * Product_get_definition_m3366103520 (Product_t3244410059 * __this, const RuntimeMethod* method)
{
	ProductDefinition_t339727138 * V_0 = NULL;
	{
		ProductDefinition_t339727138 * L_0 = __this->get_U3CdefinitionU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		ProductDefinition_t339727138 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
extern "C"  ProductMetadata_t3417118930 * Product_get_metadata_m3202120155 (Product_t3244410059 * __this, const RuntimeMethod* method)
{
	ProductMetadata_t3417118930 * V_0 = NULL;
	{
		ProductMetadata_t3417118930 * L_0 = __this->get_U3CmetadataU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		ProductMetadata_t3417118930 * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Purchasing.Product::Equals(System.Object)
extern "C"  bool Product_Equals_m468564859 (Product_t3244410059 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Product_Equals_m468564859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Product_t3244410059 * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0039;
	}

IL_000e:
	{
		RuntimeObject * L_1 = ___obj0;
		V_1 = ((Product_t3244410059 *)IsInstClass((RuntimeObject*)L_1, Product_t3244410059_il2cpp_TypeInfo_var));
		Product_t3244410059 * L_2 = V_1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0039;
	}

IL_0022:
	{
		ProductDefinition_t339727138 * L_3 = Product_get_definition_m3366103520(__this, /*hidden argument*/NULL);
		Product_t3244410059 * L_4 = V_1;
		NullCheck(L_4);
		ProductDefinition_t339727138 * L_5 = Product_get_definition_m3366103520(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_5);
		V_0 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Int32 UnityEngine.Purchasing.Product::GetHashCode()
extern "C"  int32_t Product_GetHashCode_m3767175756 (Product_t3244410059 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ProductDefinition_t339727138 * L_0 = Product_get_definition_m3366103520(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
extern "C"  Product_t3244410059 * ProductCollection_WithID_m2597694943 (ProductCollection_t2671956229 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductCollection_WithID_m2597694943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t3244410059 * V_0 = NULL;
	Product_t3244410059 * V_1 = NULL;
	{
		V_0 = (Product_t3244410059 *)NULL;
		Dictionary_2_t3029666358 * L_0 = __this->get_m_IdToProduct_0();
		String_t* L_1 = ___id0;
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m3839205334(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3839205334_RuntimeMethod_var);
		Product_t3244410059 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		Product_t3244410059 * L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithStoreSpecificID(System.String)
extern "C"  Product_t3244410059 * ProductCollection_WithStoreSpecificID_m2495952872 (ProductCollection_t2671956229 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductCollection_WithStoreSpecificID_m2495952872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t3244410059 * V_0 = NULL;
	Product_t3244410059 * V_1 = NULL;
	{
		V_0 = (Product_t3244410059 *)NULL;
		Dictionary_2_t3029666358 * L_0 = __this->get_m_StoreSpecificIdToProduct_1();
		String_t* L_1 = ___id0;
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m3839205334(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3839205334_RuntimeMethod_var);
		Product_t3244410059 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		Product_t3244410059 * L_3 = V_1;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType)
extern "C"  void ProductDefinition__ctor_m2889571019 (ProductDefinition_t339727138 * __this, String_t* ___id0, String_t* ___storeSpecificId1, int32_t ___type2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		String_t* L_1 = ___storeSpecificId1;
		int32_t L_2 = ___type2;
		ProductDefinition__ctor_m2244438016(__this, L_0, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType,System.Boolean)
extern "C"  void ProductDefinition__ctor_m2244438016 (ProductDefinition_t339727138 * __this, String_t* ___id0, String_t* ___storeSpecificId1, int32_t ___type2, bool ___enabled3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		String_t* L_1 = ___storeSpecificId1;
		int32_t L_2 = ___type2;
		bool L_3 = ___enabled3;
		ProductDefinition__ctor_m3267495726(__this, L_0, L_1, L_2, L_3, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType,System.Boolean,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern "C"  void ProductDefinition__ctor_m3267495726 (ProductDefinition_t339727138 * __this, String_t* ___id0, String_t* ___storeSpecificId1, int32_t ___type2, bool ___enabled3, RuntimeObject* ___payouts4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductDefinition__ctor_m3267495726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t748791510 * L_0 = (List_1_t748791510 *)il2cpp_codegen_object_new(List_1_t748791510_il2cpp_TypeInfo_var);
		List_1__ctor_m2305681321(L_0, /*hidden argument*/List_1__ctor_m2305681321_RuntimeMethod_var);
		__this->set_m_Payouts_4(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___id0;
		ProductDefinition_set_id_m3726047248(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___storeSpecificId1;
		ProductDefinition_set_storeSpecificId_m3168192593(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___type2;
		ProductDefinition_set_type_m1878988275(__this, L_3, /*hidden argument*/NULL);
		bool L_4 = ___enabled3;
		ProductDefinition_set_enabled_m80478909(__this, L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___payouts4;
		ProductDefinition_SetPayouts_m580635826(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Purchasing.ProductDefinition::get_id()
extern "C"  String_t* ProductDefinition_get_id_m1593385231 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::set_id(System.String)
extern "C"  void ProductDefinition_set_id_m3726047248 (ProductDefinition_t339727138 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.ProductDefinition::get_storeSpecificId()
extern "C"  String_t* ProductDefinition_get_storeSpecificId_m2520532185 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CstoreSpecificIdU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::set_storeSpecificId(System.String)
extern "C"  void ProductDefinition_set_storeSpecificId_m3168192593 (ProductDefinition_t339727138 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CstoreSpecificIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::get_type()
extern "C"  int32_t ProductDefinition_get_type_m1651363521 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CtypeU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::set_type(UnityEngine.Purchasing.ProductType)
extern "C"  void ProductDefinition_set_type_m1878988275 (ProductDefinition_t339727138 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CtypeU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::set_enabled(System.Boolean)
extern "C"  void ProductDefinition_set_enabled_m80478909 (ProductDefinition_t339727138 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CenabledU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.ProductDefinition::Equals(System.Object)
extern "C"  bool ProductDefinition_Equals_m2651766784 (ProductDefinition_t339727138 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductDefinition_Equals_m2651766784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ProductDefinition_t339727138 * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0039;
	}

IL_000e:
	{
		RuntimeObject * L_1 = ___obj0;
		V_1 = ((ProductDefinition_t339727138 *)IsInstClass((RuntimeObject*)L_1, ProductDefinition_t339727138_il2cpp_TypeInfo_var));
		ProductDefinition_t339727138 * L_2 = V_1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0039;
	}

IL_0022:
	{
		String_t* L_3 = ProductDefinition_get_id_m1593385231(__this, /*hidden argument*/NULL);
		ProductDefinition_t339727138 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = ProductDefinition_get_id_m1593385231(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Int32 UnityEngine.Purchasing.ProductDefinition::GetHashCode()
extern "C"  int32_t ProductDefinition_GetHashCode_m216453023 (ProductDefinition_t339727138 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ProductDefinition_get_id_m1593385231(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Purchasing.ProductDefinition::SetPayouts(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern "C"  void ProductDefinition_SetPayouts_m580635826 (ProductDefinition_t339727138 * __this, RuntimeObject* ___newPayouts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProductDefinition_SetPayouts_m580635826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___newPayouts0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0023;
	}

IL_000c:
	{
		List_1_t748791510 * L_1 = __this->get_m_Payouts_4();
		NullCheck(L_1);
		List_1_Clear_m3858397092(L_1, /*hidden argument*/List_1_Clear_m3858397092_RuntimeMethod_var);
		List_1_t748791510 * L_2 = __this->get_m_Payouts_4();
		RuntimeObject* L_3 = ___newPayouts0;
		NullCheck(L_2);
		List_1_AddRange_m2240270450(L_2, L_3, /*hidden argument*/List_1_AddRange_m2240270450_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Purchasing.ProductMetadata::.ctor(System.String,System.String,System.String,System.String,System.Decimal)
extern "C"  void ProductMetadata__ctor_m868675718 (ProductMetadata_t3417118930 * __this, String_t* ___priceString0, String_t* ___title1, String_t* ___description2, String_t* ___currencyCode3, Decimal_t2948259380  ___localizedPrice4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___priceString0;
		ProductMetadata_set_localizedPriceString_m1610096054(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___title1;
		ProductMetadata_set_localizedTitle_m2721164981(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___description2;
		ProductMetadata_set_localizedDescription_m579183859(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___currencyCode3;
		ProductMetadata_set_isoCurrencyCode_m3113608994(__this, L_3, /*hidden argument*/NULL);
		Decimal_t2948259380  L_4 = ___localizedPrice4;
		ProductMetadata_set_localizedPrice_m2468387343(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPriceString(System.String)
extern "C"  void ProductMetadata_set_localizedPriceString_m1610096054 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3ClocalizedPriceStringU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedTitle(System.String)
extern "C"  void ProductMetadata_set_localizedTitle_m2721164981 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3ClocalizedTitleU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedDescription(System.String)
extern "C"  void ProductMetadata_set_localizedDescription_m579183859 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3ClocalizedDescriptionU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.ProductMetadata::get_isoCurrencyCode()
extern "C"  String_t* ProductMetadata_get_isoCurrencyCode_m1144927692 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CisoCurrencyCodeU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductMetadata::set_isoCurrencyCode(System.String)
extern "C"  void ProductMetadata_set_isoCurrencyCode_m3113608994 (ProductMetadata_t3417118930 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CisoCurrencyCodeU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Decimal UnityEngine.Purchasing.ProductMetadata::get_localizedPrice()
extern "C"  Decimal_t2948259380  ProductMetadata_get_localizedPrice_m3688706107 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method)
{
	Decimal_t2948259380  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Decimal_t2948259380  L_0 = __this->get_U3ClocalizedPriceU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Decimal_t2948259380  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPrice(System.Decimal)
extern "C"  void ProductMetadata_set_localizedPrice_m2468387343 (ProductMetadata_t3417118930 * __this, Decimal_t2948259380  ___value0, const RuntimeMethod* method)
{
	{
		Decimal_t2948259380  L_0 = ___value0;
		__this->set_U3ClocalizedPriceU3Ek__BackingField_4(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
