#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_t1675079469;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InControl.Internal.CodeWriter
struct  CodeWriter_t671780584  : public Il2CppObject
{
public:
	// System.Int32 InControl.Internal.CodeWriter::indent
	int32_t ___indent_1;
	// System.Text.StringBuilder InControl.Internal.CodeWriter::stringBuilder
	StringBuilder_t1221177846 * ___stringBuilder_2;

public:
	inline static int32_t get_offset_of_indent_1() { return static_cast<int32_t>(offsetof(CodeWriter_t671780584, ___indent_1)); }
	inline int32_t get_indent_1() const { return ___indent_1; }
	inline int32_t* get_address_of_indent_1() { return &___indent_1; }
	inline void set_indent_1(int32_t value)
	{
		___indent_1 = value;
	}

	inline static int32_t get_offset_of_stringBuilder_2() { return static_cast<int32_t>(offsetof(CodeWriter_t671780584, ___stringBuilder_2)); }
	inline StringBuilder_t1221177846 * get_stringBuilder_2() const { return ___stringBuilder_2; }
	inline StringBuilder_t1221177846 ** get_address_of_stringBuilder_2() { return &___stringBuilder_2; }
	inline void set_stringBuilder_2(StringBuilder_t1221177846 * value)
	{
		___stringBuilder_2 = value;
		Il2CppCodeGenWriteBarrier(&___stringBuilder_2, value);
	}
};

struct CodeWriter_t671780584_StaticFields
{
public:
	// System.Func`2<System.Char,System.Boolean> InControl.Internal.CodeWriter::<>f__mg$cache0
	Func_2_t1675079469 * ___U3CU3Ef__mgU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(CodeWriter_t671780584_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline Func_2_t1675079469 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline Func_2_t1675079469 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(Func_2_t1675079469 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
