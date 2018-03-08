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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t1302902347;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t4013908777;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t956758543;
// System.ArithmeticException
struct ArithmeticException_t4283546778;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Random
struct Random_t108471755;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t915317458;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t3586970409;
// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t955042874;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Security.Cryptography.Rijndael
struct Rijndael_t2986313634;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;

extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1828021971;
extern const uint32_t TrafficStats_ToString_m4056329990_MetadataUsageId;
extern RuntimeClass* SupportClass_t2974952451_il2cpp_TypeInfo_var;
extern const uint32_t TrafficStatsGameLevel_DispatchIncomingCommandsCalled_m524433314_MetadataUsageId;
extern const uint32_t TrafficStatsGameLevel_SendOutgoingCommandsCalled_m3439818030_MetadataUsageId;
extern String_t* _stringLiteral4110760290;
extern const uint32_t TrafficStatsGameLevel_ToString_m1358013804_MetadataUsageId;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral591816982;
extern const uint32_t TrafficStatsGameLevel_ToStringVitalStats_m2699597432_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* Version_t2916202802_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____6269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52_2_FieldInfo_var;
extern const uint32_t Version__cctor_m949376060_MetadataUsageId;
extern RuntimeClass* UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var;
extern const uint32_t BigInteger__ctor_m2516099295_MetadataUsageId;
extern RuntimeClass* ArithmeticException_t4283546778_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral385363368;
extern String_t* _stringLiteral3895168893;
extern const uint32_t BigInteger__ctor_m1240160733_MetadataUsageId;
extern const uint32_t BigInteger__ctor_m497354907_MetadataUsageId;
extern String_t* _stringLiteral762882209;
extern const uint32_t BigInteger__ctor_m3579054046_MetadataUsageId;
extern const uint32_t BigInteger__ctor_m3091364386_MetadataUsageId;
extern RuntimeClass* BigInteger_t956758543_il2cpp_TypeInfo_var;
extern const uint32_t BigInteger_op_Implicit_m1457317411_MetadataUsageId;
extern const uint32_t BigInteger_op_Implicit_m1456924192_MetadataUsageId;
extern const uint32_t BigInteger_op_Addition_m949304235_MetadataUsageId;
extern const uint32_t BigInteger_op_Subtraction_m1996860654_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral265795232;
extern const uint32_t BigInteger_op_Multiply_m664707877_MetadataUsageId;
extern const uint32_t BigInteger_op_LeftShift_m2731198774_MetadataUsageId;
extern String_t* _stringLiteral3910125420;
extern const uint32_t BigInteger_op_UnaryNegation_m3272019706_MetadataUsageId;
extern const uint32_t BigInteger_Equals_m3600662586_MetadataUsageId;
extern const uint32_t BigInteger_op_GreaterThanOrEqual_m1973220735_MetadataUsageId;
extern const uint32_t BigInteger_multiByteDivide_m635723330_MetadataUsageId;
extern const uint32_t BigInteger_singleByteDivide_m972382485_MetadataUsageId;
extern const uint32_t BigInteger_op_Division_m3347195961_MetadataUsageId;
extern const uint32_t BigInteger_op_Modulus_m2469490318_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral487777839;
extern String_t* _stringLiteral215727883;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3452614531;
extern const uint32_t BigInteger_ToString_m2781201991_MetadataUsageId;
extern String_t* _stringLiteral1790208040;
extern const uint32_t BigInteger_ModPow_m1818331774_MetadataUsageId;
extern const uint32_t BigInteger_BarrettReduction_m2302199077_MetadataUsageId;
extern RuntimeClass* Random_t108471755_il2cpp_TypeInfo_var;
extern const uint32_t BigInteger_GenerateRandom_m3242160242_MetadataUsageId;
extern String_t* _stringLiteral3686846028;
extern const uint32_t BigInteger_genRandomBits_m2936729685_MetadataUsageId;
extern const uint32_t BigInteger_GetBytes_m2793402501_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_5_FieldInfo_var;
extern const uint32_t BigInteger__cctor_m3142840545_MetadataUsageId;
extern RuntimeClass* OakleyGroups_t1704371988_il2cpp_TypeInfo_var;
extern const uint32_t DiffieHellmanCryptoProvider__ctor_m3020782632_MetadataUsageId;
extern RuntimeClass* RijndaelManaged_t3586970409_il2cpp_TypeInfo_var;
extern const uint32_t DiffieHellmanCryptoProvider__ctor_m450787995_MetadataUsageId;
extern RuntimeClass* SHA256Managed_t955042874_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t DiffieHellmanCryptoProvider_DeriveSharedKey_m523483241_MetadataUsageId;
extern RuntimeClass* ICryptoTransform_t2733259762_il2cpp_TypeInfo_var;
extern const uint32_t DiffieHellmanCryptoProvider_Encrypt_m3205762831_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider_Decrypt_m2209477771_MetadataUsageId;
extern RuntimeClass* DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var;
extern const uint32_t DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682_MetadataUsageId;
extern const uint32_t DiffieHellmanCryptoProvider__cctor_m2518077788_MetadataUsageId;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____4989E5469B40416DC5AFB739C747E32B40CC5C77_0_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____C033BD4351FBA3732545EA2E016D52B0FC3E69EC_6_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____49ECABA9727A1AF0636082C467485A1A9A04B669_1_FieldInfo_var;
extern const uint32_t OakleyGroups__cctor_m3563987568_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct ByteU5BU5D_t4116647657;
struct UInt32U5BU5D_t2770800703;
struct Int32U5BU5D_t385246372;


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
#ifndef BIGINTEGER_T956758543_H
#define BIGINTEGER_T956758543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Numeric.BigInteger
struct  BigInteger_t956758543  : public RuntimeObject
{
public:
	// System.UInt32[] Photon.SocketServer.Numeric.BigInteger::data
	UInt32U5BU5D_t2770800703* ___data_1;
	// System.Int32 Photon.SocketServer.Numeric.BigInteger::dataLength
	int32_t ___dataLength_2;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t956758543, ___data_1)); }
	inline UInt32U5BU5D_t2770800703* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t2770800703** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t2770800703* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}

	inline static int32_t get_offset_of_dataLength_2() { return static_cast<int32_t>(offsetof(BigInteger_t956758543, ___dataLength_2)); }
	inline int32_t get_dataLength_2() const { return ___dataLength_2; }
	inline int32_t* get_address_of_dataLength_2() { return &___dataLength_2; }
	inline void set_dataLength_2(int32_t value)
	{
		___dataLength_2 = value;
	}
};

struct BigInteger_t956758543_StaticFields
{
public:
	// System.Int32[] Photon.SocketServer.Numeric.BigInteger::primesBelow2000
	Int32U5BU5D_t385246372* ___primesBelow2000_0;

public:
	inline static int32_t get_offset_of_primesBelow2000_0() { return static_cast<int32_t>(offsetof(BigInteger_t956758543_StaticFields, ___primesBelow2000_0)); }
	inline Int32U5BU5D_t385246372* get_primesBelow2000_0() const { return ___primesBelow2000_0; }
	inline Int32U5BU5D_t385246372** get_address_of_primesBelow2000_0() { return &___primesBelow2000_0; }
	inline void set_primesBelow2000_0(Int32U5BU5D_t385246372* value)
	{
		___primesBelow2000_0 = value;
		Il2CppCodeGenWriteBarrier((&___primesBelow2000_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T956758543_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_5)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef DIFFIEHELLMANCRYPTOPROVIDER_T915317458_H
#define DIFFIEHELLMANCRYPTOPROVIDER_T915317458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct  DiffieHellmanCryptoProvider_t915317458  : public RuntimeObject
{
public:
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_t956758543 * ___prime_1;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_t956758543 * ___secret_2;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_t956758543 * ___publicKey_3;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t2986313634 * ___crypto_4;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_t4116647657* ___sharedKey_5;

public:
	inline static int32_t get_offset_of_prime_1() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___prime_1)); }
	inline BigInteger_t956758543 * get_prime_1() const { return ___prime_1; }
	inline BigInteger_t956758543 ** get_address_of_prime_1() { return &___prime_1; }
	inline void set_prime_1(BigInteger_t956758543 * value)
	{
		___prime_1 = value;
		Il2CppCodeGenWriteBarrier((&___prime_1), value);
	}

	inline static int32_t get_offset_of_secret_2() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___secret_2)); }
	inline BigInteger_t956758543 * get_secret_2() const { return ___secret_2; }
	inline BigInteger_t956758543 ** get_address_of_secret_2() { return &___secret_2; }
	inline void set_secret_2(BigInteger_t956758543 * value)
	{
		___secret_2 = value;
		Il2CppCodeGenWriteBarrier((&___secret_2), value);
	}

	inline static int32_t get_offset_of_publicKey_3() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___publicKey_3)); }
	inline BigInteger_t956758543 * get_publicKey_3() const { return ___publicKey_3; }
	inline BigInteger_t956758543 ** get_address_of_publicKey_3() { return &___publicKey_3; }
	inline void set_publicKey_3(BigInteger_t956758543 * value)
	{
		___publicKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_3), value);
	}

	inline static int32_t get_offset_of_crypto_4() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___crypto_4)); }
	inline Rijndael_t2986313634 * get_crypto_4() const { return ___crypto_4; }
	inline Rijndael_t2986313634 ** get_address_of_crypto_4() { return &___crypto_4; }
	inline void set_crypto_4(Rijndael_t2986313634 * value)
	{
		___crypto_4 = value;
		Il2CppCodeGenWriteBarrier((&___crypto_4), value);
	}

	inline static int32_t get_offset_of_sharedKey_5() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458, ___sharedKey_5)); }
	inline ByteU5BU5D_t4116647657* get_sharedKey_5() const { return ___sharedKey_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_sharedKey_5() { return &___sharedKey_5; }
	inline void set_sharedKey_5(ByteU5BU5D_t4116647657* value)
	{
		___sharedKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___sharedKey_5), value);
	}
};

struct DiffieHellmanCryptoProvider_t915317458_StaticFields
{
public:
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_t956758543 * ___primeRoot_0;

public:
	inline static int32_t get_offset_of_primeRoot_0() { return static_cast<int32_t>(offsetof(DiffieHellmanCryptoProvider_t915317458_StaticFields, ___primeRoot_0)); }
	inline BigInteger_t956758543 * get_primeRoot_0() const { return ___primeRoot_0; }
	inline BigInteger_t956758543 ** get_address_of_primeRoot_0() { return &___primeRoot_0; }
	inline void set_primeRoot_0(BigInteger_t956758543 * value)
	{
		___primeRoot_0 = value;
		Il2CppCodeGenWriteBarrier((&___primeRoot_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIFFIEHELLMANCRYPTOPROVIDER_T915317458_H
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
#ifndef OAKLEYGROUPS_T1704371988_H
#define OAKLEYGROUPS_T1704371988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.SocketServer.Security.OakleyGroups
struct  OakleyGroups_t1704371988  : public RuntimeObject
{
public:

public:
};

struct OakleyGroups_t1704371988_StaticFields
{
public:
	// System.Int32 Photon.SocketServer.Security.OakleyGroups::Generator
	int32_t ___Generator_0;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime768
	ByteU5BU5D_t4116647657* ___OakleyPrime768_1;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1024
	ByteU5BU5D_t4116647657* ___OakleyPrime1024_2;
	// System.Byte[] Photon.SocketServer.Security.OakleyGroups::OakleyPrime1536
	ByteU5BU5D_t4116647657* ___OakleyPrime1536_3;

public:
	inline static int32_t get_offset_of_Generator_0() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___Generator_0)); }
	inline int32_t get_Generator_0() const { return ___Generator_0; }
	inline int32_t* get_address_of_Generator_0() { return &___Generator_0; }
	inline void set_Generator_0(int32_t value)
	{
		___Generator_0 = value;
	}

	inline static int32_t get_offset_of_OakleyPrime768_1() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___OakleyPrime768_1)); }
	inline ByteU5BU5D_t4116647657* get_OakleyPrime768_1() const { return ___OakleyPrime768_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_OakleyPrime768_1() { return &___OakleyPrime768_1; }
	inline void set_OakleyPrime768_1(ByteU5BU5D_t4116647657* value)
	{
		___OakleyPrime768_1 = value;
		Il2CppCodeGenWriteBarrier((&___OakleyPrime768_1), value);
	}

	inline static int32_t get_offset_of_OakleyPrime1024_2() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___OakleyPrime1024_2)); }
	inline ByteU5BU5D_t4116647657* get_OakleyPrime1024_2() const { return ___OakleyPrime1024_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_OakleyPrime1024_2() { return &___OakleyPrime1024_2; }
	inline void set_OakleyPrime1024_2(ByteU5BU5D_t4116647657* value)
	{
		___OakleyPrime1024_2 = value;
		Il2CppCodeGenWriteBarrier((&___OakleyPrime1024_2), value);
	}

	inline static int32_t get_offset_of_OakleyPrime1536_3() { return static_cast<int32_t>(offsetof(OakleyGroups_t1704371988_StaticFields, ___OakleyPrime1536_3)); }
	inline ByteU5BU5D_t4116647657* get_OakleyPrime1536_3() const { return ___OakleyPrime1536_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_OakleyPrime1536_3() { return &___OakleyPrime1536_3; }
	inline void set_OakleyPrime1536_3(ByteU5BU5D_t4116647657* value)
	{
		___OakleyPrime1536_3 = value;
		Il2CppCodeGenWriteBarrier((&___OakleyPrime1536_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OAKLEYGROUPS_T1704371988_H
#ifndef HASHALGORITHM_T1432317219_H
#define HASHALGORITHM_T1432317219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t1432317219  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t4116647657* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashValue_0)); }
	inline ByteU5BU5D_t4116647657* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t4116647657* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T1432317219_H
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
#ifndef VERSION_T2916202802_H
#define VERSION_T2916202802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.Version
struct  Version_t2916202802  : public RuntimeObject
{
public:

public:
};

struct Version_t2916202802_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.Version::clientVersion
	ByteU5BU5D_t4116647657* ___clientVersion_0;

public:
	inline static int32_t get_offset_of_clientVersion_0() { return static_cast<int32_t>(offsetof(Version_t2916202802_StaticFields, ___clientVersion_0)); }
	inline ByteU5BU5D_t4116647657* get_clientVersion_0() const { return ___clientVersion_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_clientVersion_0() { return &___clientVersion_0; }
	inline void set_clientVersion_0(ByteU5BU5D_t4116647657* value)
	{
		___clientVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___clientVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T2916202802_H
#ifndef TRAFFICSTATSGAMELEVEL_T4013908777_H
#define TRAFFICSTATSGAMELEVEL_T4013908777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.TrafficStatsGameLevel
struct  TrafficStatsGameLevel_t4013908777  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastDispatchCall
	int32_t ___timeOfLastDispatchCall_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::timeOfLastSendCall
	int32_t ___timeOfLastSendCall_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationByteCount>k__BackingField
	int32_t ___U3COperationByteCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<OperationCount>k__BackingField
	int32_t ___U3COperationCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultByteCount>k__BackingField
	int32_t ___U3CResultByteCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<ResultCount>k__BackingField
	int32_t ___U3CResultCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventByteCount>k__BackingField
	int32_t ___U3CEventByteCountU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<EventCount>k__BackingField
	int32_t ___U3CEventCountU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallback>k__BackingField
	int32_t ___U3CLongestOpResponseCallbackU3Ek__BackingField_8;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestOpResponseCallbackOpCode>k__BackingField
	uint8_t ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallback>k__BackingField
	int32_t ___U3CLongestEventCallbackU3Ek__BackingField_10;
	// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestEventCallbackCode>k__BackingField
	uint8_t ___U3CLongestEventCallbackCodeU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenDispatching>k__BackingField
	int32_t ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_12;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<LongestDeltaBetweenSending>k__BackingField
	int32_t ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_13;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<DispatchIncomingCommandsCalls>k__BackingField
	int32_t ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_14;
	// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::<SendOutgoingCommandsCalls>k__BackingField
	int32_t ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_timeOfLastDispatchCall_0() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___timeOfLastDispatchCall_0)); }
	inline int32_t get_timeOfLastDispatchCall_0() const { return ___timeOfLastDispatchCall_0; }
	inline int32_t* get_address_of_timeOfLastDispatchCall_0() { return &___timeOfLastDispatchCall_0; }
	inline void set_timeOfLastDispatchCall_0(int32_t value)
	{
		___timeOfLastDispatchCall_0 = value;
	}

	inline static int32_t get_offset_of_timeOfLastSendCall_1() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___timeOfLastSendCall_1)); }
	inline int32_t get_timeOfLastSendCall_1() const { return ___timeOfLastSendCall_1; }
	inline int32_t* get_address_of_timeOfLastSendCall_1() { return &___timeOfLastSendCall_1; }
	inline void set_timeOfLastSendCall_1(int32_t value)
	{
		___timeOfLastSendCall_1 = value;
	}

	inline static int32_t get_offset_of_U3COperationByteCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3COperationByteCountU3Ek__BackingField_2)); }
	inline int32_t get_U3COperationByteCountU3Ek__BackingField_2() const { return ___U3COperationByteCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3COperationByteCountU3Ek__BackingField_2() { return &___U3COperationByteCountU3Ek__BackingField_2; }
	inline void set_U3COperationByteCountU3Ek__BackingField_2(int32_t value)
	{
		___U3COperationByteCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COperationCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3COperationCountU3Ek__BackingField_3)); }
	inline int32_t get_U3COperationCountU3Ek__BackingField_3() const { return ___U3COperationCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3COperationCountU3Ek__BackingField_3() { return &___U3COperationCountU3Ek__BackingField_3; }
	inline void set_U3COperationCountU3Ek__BackingField_3(int32_t value)
	{
		___U3COperationCountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CResultByteCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CResultByteCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CResultByteCountU3Ek__BackingField_4() const { return ___U3CResultByteCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CResultByteCountU3Ek__BackingField_4() { return &___U3CResultByteCountU3Ek__BackingField_4; }
	inline void set_U3CResultByteCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CResultByteCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CResultCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CResultCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CResultCountU3Ek__BackingField_5() const { return ___U3CResultCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CResultCountU3Ek__BackingField_5() { return &___U3CResultCountU3Ek__BackingField_5; }
	inline void set_U3CResultCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CResultCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEventByteCountU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CEventByteCountU3Ek__BackingField_6)); }
	inline int32_t get_U3CEventByteCountU3Ek__BackingField_6() const { return ___U3CEventByteCountU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CEventByteCountU3Ek__BackingField_6() { return &___U3CEventByteCountU3Ek__BackingField_6; }
	inline void set_U3CEventByteCountU3Ek__BackingField_6(int32_t value)
	{
		___U3CEventByteCountU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEventCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CEventCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CEventCountU3Ek__BackingField_7() const { return ___U3CEventCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CEventCountU3Ek__BackingField_7() { return &___U3CEventCountU3Ek__BackingField_7; }
	inline void set_U3CEventCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CEventCountU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CLongestOpResponseCallbackU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestOpResponseCallbackU3Ek__BackingField_8)); }
	inline int32_t get_U3CLongestOpResponseCallbackU3Ek__BackingField_8() const { return ___U3CLongestOpResponseCallbackU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CLongestOpResponseCallbackU3Ek__BackingField_8() { return &___U3CLongestOpResponseCallbackU3Ek__BackingField_8; }
	inline void set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(int32_t value)
	{
		___U3CLongestOpResponseCallbackU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9)); }
	inline uint8_t get_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() const { return ___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9; }
	inline uint8_t* get_address_of_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9() { return &___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9; }
	inline void set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(uint8_t value)
	{
		___U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CLongestEventCallbackU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestEventCallbackU3Ek__BackingField_10)); }
	inline int32_t get_U3CLongestEventCallbackU3Ek__BackingField_10() const { return ___U3CLongestEventCallbackU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CLongestEventCallbackU3Ek__BackingField_10() { return &___U3CLongestEventCallbackU3Ek__BackingField_10; }
	inline void set_U3CLongestEventCallbackU3Ek__BackingField_10(int32_t value)
	{
		___U3CLongestEventCallbackU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLongestEventCallbackCodeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestEventCallbackCodeU3Ek__BackingField_11)); }
	inline uint8_t get_U3CLongestEventCallbackCodeU3Ek__BackingField_11() const { return ___U3CLongestEventCallbackCodeU3Ek__BackingField_11; }
	inline uint8_t* get_address_of_U3CLongestEventCallbackCodeU3Ek__BackingField_11() { return &___U3CLongestEventCallbackCodeU3Ek__BackingField_11; }
	inline void set_U3CLongestEventCallbackCodeU3Ek__BackingField_11(uint8_t value)
	{
		___U3CLongestEventCallbackCodeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_12)); }
	inline int32_t get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_12() const { return ___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_12() { return &___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_12; }
	inline void set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_12(int32_t value)
	{
		___U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CLongestDeltaBetweenSendingU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_13)); }
	inline int32_t get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_13() const { return ___U3CLongestDeltaBetweenSendingU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CLongestDeltaBetweenSendingU3Ek__BackingField_13() { return &___U3CLongestDeltaBetweenSendingU3Ek__BackingField_13; }
	inline void set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_13(int32_t value)
	{
		___U3CLongestDeltaBetweenSendingU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_14)); }
	inline int32_t get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_14() const { return ___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_14() { return &___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_14; }
	inline void set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_14(int32_t value)
	{
		___U3CDispatchIncomingCommandsCallsU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CSendOutgoingCommandsCallsU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(TrafficStatsGameLevel_t4013908777, ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_15)); }
	inline int32_t get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_15() const { return ___U3CSendOutgoingCommandsCallsU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CSendOutgoingCommandsCallsU3Ek__BackingField_15() { return &___U3CSendOutgoingCommandsCallsU3Ek__BackingField_15; }
	inline void set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_15(int32_t value)
	{
		___U3CSendOutgoingCommandsCallsU3Ek__BackingField_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAFFICSTATSGAMELEVEL_T4013908777_H
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
#ifndef TRAFFICSTATS_T1302902347_H
#define TRAFFICSTATS_T1302902347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.TrafficStats
struct  TrafficStats_t1302902347  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<PackageHeaderSize>k__BackingField
	int32_t ___U3CPackageHeaderSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandCount>k__BackingField
	int32_t ___U3CReliableCommandCountU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandCount>k__BackingField
	int32_t ___U3CUnreliableCommandCountU3Ek__BackingField_2;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandCount>k__BackingField
	int32_t ___U3CFragmentCommandCountU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandCount>k__BackingField
	int32_t ___U3CControlCommandCountU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalPacketCount>k__BackingField
	int32_t ___U3CTotalPacketCountU3Ek__BackingField_5;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TotalCommandsInPackets>k__BackingField
	int32_t ___U3CTotalCommandsInPacketsU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ReliableCommandBytes>k__BackingField
	int32_t ___U3CReliableCommandBytesU3Ek__BackingField_7;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<UnreliableCommandBytes>k__BackingField
	int32_t ___U3CUnreliableCommandBytesU3Ek__BackingField_8;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<FragmentCommandBytes>k__BackingField
	int32_t ___U3CFragmentCommandBytesU3Ek__BackingField_9;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<ControlCommandBytes>k__BackingField
	int32_t ___U3CControlCommandBytesU3Ek__BackingField_10;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastAck>k__BackingField
	int32_t ___U3CTimestampOfLastAckU3Ek__BackingField_11;
	// System.Int32 ExitGames.Client.Photon.TrafficStats::<TimestampOfLastReliableCommand>k__BackingField
	int32_t ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CPackageHeaderSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CPackageHeaderSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CPackageHeaderSizeU3Ek__BackingField_0() const { return ___U3CPackageHeaderSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CPackageHeaderSizeU3Ek__BackingField_0() { return &___U3CPackageHeaderSizeU3Ek__BackingField_0; }
	inline void set_U3CPackageHeaderSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CPackageHeaderSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReliableCommandCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CReliableCommandCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CReliableCommandCountU3Ek__BackingField_1() const { return ___U3CReliableCommandCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CReliableCommandCountU3Ek__BackingField_1() { return &___U3CReliableCommandCountU3Ek__BackingField_1; }
	inline void set_U3CReliableCommandCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CReliableCommandCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUnreliableCommandCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CUnreliableCommandCountU3Ek__BackingField_2)); }
	inline int32_t get_U3CUnreliableCommandCountU3Ek__BackingField_2() const { return ___U3CUnreliableCommandCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CUnreliableCommandCountU3Ek__BackingField_2() { return &___U3CUnreliableCommandCountU3Ek__BackingField_2; }
	inline void set_U3CUnreliableCommandCountU3Ek__BackingField_2(int32_t value)
	{
		___U3CUnreliableCommandCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFragmentCommandCountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CFragmentCommandCountU3Ek__BackingField_3)); }
	inline int32_t get_U3CFragmentCommandCountU3Ek__BackingField_3() const { return ___U3CFragmentCommandCountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFragmentCommandCountU3Ek__BackingField_3() { return &___U3CFragmentCommandCountU3Ek__BackingField_3; }
	inline void set_U3CFragmentCommandCountU3Ek__BackingField_3(int32_t value)
	{
		___U3CFragmentCommandCountU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CControlCommandCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CControlCommandCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CControlCommandCountU3Ek__BackingField_4() const { return ___U3CControlCommandCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CControlCommandCountU3Ek__BackingField_4() { return &___U3CControlCommandCountU3Ek__BackingField_4; }
	inline void set_U3CControlCommandCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CControlCommandCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTotalPacketCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CTotalPacketCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CTotalPacketCountU3Ek__BackingField_5() const { return ___U3CTotalPacketCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CTotalPacketCountU3Ek__BackingField_5() { return &___U3CTotalPacketCountU3Ek__BackingField_5; }
	inline void set_U3CTotalPacketCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CTotalPacketCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTotalCommandsInPacketsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CTotalCommandsInPacketsU3Ek__BackingField_6)); }
	inline int32_t get_U3CTotalCommandsInPacketsU3Ek__BackingField_6() const { return ___U3CTotalCommandsInPacketsU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CTotalCommandsInPacketsU3Ek__BackingField_6() { return &___U3CTotalCommandsInPacketsU3Ek__BackingField_6; }
	inline void set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(int32_t value)
	{
		___U3CTotalCommandsInPacketsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CReliableCommandBytesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CReliableCommandBytesU3Ek__BackingField_7)); }
	inline int32_t get_U3CReliableCommandBytesU3Ek__BackingField_7() const { return ___U3CReliableCommandBytesU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReliableCommandBytesU3Ek__BackingField_7() { return &___U3CReliableCommandBytesU3Ek__BackingField_7; }
	inline void set_U3CReliableCommandBytesU3Ek__BackingField_7(int32_t value)
	{
		___U3CReliableCommandBytesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CUnreliableCommandBytesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CUnreliableCommandBytesU3Ek__BackingField_8)); }
	inline int32_t get_U3CUnreliableCommandBytesU3Ek__BackingField_8() const { return ___U3CUnreliableCommandBytesU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CUnreliableCommandBytesU3Ek__BackingField_8() { return &___U3CUnreliableCommandBytesU3Ek__BackingField_8; }
	inline void set_U3CUnreliableCommandBytesU3Ek__BackingField_8(int32_t value)
	{
		___U3CUnreliableCommandBytesU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CFragmentCommandBytesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CFragmentCommandBytesU3Ek__BackingField_9)); }
	inline int32_t get_U3CFragmentCommandBytesU3Ek__BackingField_9() const { return ___U3CFragmentCommandBytesU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFragmentCommandBytesU3Ek__BackingField_9() { return &___U3CFragmentCommandBytesU3Ek__BackingField_9; }
	inline void set_U3CFragmentCommandBytesU3Ek__BackingField_9(int32_t value)
	{
		___U3CFragmentCommandBytesU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CControlCommandBytesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CControlCommandBytesU3Ek__BackingField_10)); }
	inline int32_t get_U3CControlCommandBytesU3Ek__BackingField_10() const { return ___U3CControlCommandBytesU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CControlCommandBytesU3Ek__BackingField_10() { return &___U3CControlCommandBytesU3Ek__BackingField_10; }
	inline void set_U3CControlCommandBytesU3Ek__BackingField_10(int32_t value)
	{
		___U3CControlCommandBytesU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampOfLastAckU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CTimestampOfLastAckU3Ek__BackingField_11)); }
	inline int32_t get_U3CTimestampOfLastAckU3Ek__BackingField_11() const { return ___U3CTimestampOfLastAckU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CTimestampOfLastAckU3Ek__BackingField_11() { return &___U3CTimestampOfLastAckU3Ek__BackingField_11; }
	inline void set_U3CTimestampOfLastAckU3Ek__BackingField_11(int32_t value)
	{
		___U3CTimestampOfLastAckU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TrafficStats_t1302902347, ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12)); }
	inline int32_t get_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() const { return ___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12() { return &___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12; }
	inline void set_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12(int32_t value)
	{
		___U3CTimestampOfLastReliableCommandU3Ek__BackingField_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAFFICSTATS_T1302902347_H
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
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef SHA256_T3672283617_H
#define SHA256_T3672283617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t3672283617  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T3672283617_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D96_T385919777_H
#define __STATICARRAYINITTYPESIZEU3D96_T385919777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct  __StaticArrayInitTypeSizeU3D96_t385919777 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t385919777__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D96_T385919777_H
#ifndef __STATICARRAYINITTYPESIZEU3D13_T4277078258_H
#define __STATICARRAYINITTYPESIZEU3D13_T4277078258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13
struct  __StaticArrayInitTypeSizeU3D13_t4277078258 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D13_t4277078258__padding[13];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D13_T4277078258_H
#ifndef __STATICARRAYINITTYPESIZEU3D192_T3674326164_H
#define __STATICARRAYINITTYPESIZEU3D192_T3674326164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct  __StaticArrayInitTypeSizeU3D192_t3674326164 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_t3674326164__padding[192];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D192_T3674326164_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T3218278898_H
#define __STATICARRAYINITTYPESIZEU3D9_T3218278898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t3218278898 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t3218278898__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T3218278898_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#define __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t531529101 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t531529101__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D1212_T3800721096_H
#define __STATICARRAYINITTYPESIZEU3D1212_T3800721096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212
struct  __StaticArrayInitTypeSizeU3D1212_t3800721096 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1212_t3800721096__padding[1212];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1212_T3800721096_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef SHA256MANAGED_T955042874_H
#define SHA256MANAGED_T955042874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t955042874  : public SHA256_t3672283617
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t2770800703* ____H_6;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_7;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t4116647657* ____ProcessingBuffer_8;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_9;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t2770800703* ___buff_10;

public:
	inline static int32_t get_offset_of__H_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____H_6)); }
	inline UInt32U5BU5D_t2770800703* get__H_6() const { return ____H_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of__H_6() { return &____H_6; }
	inline void set__H_6(UInt32U5BU5D_t2770800703* value)
	{
		____H_6 = value;
		Il2CppCodeGenWriteBarrier((&____H_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ___count_7)); }
	inline uint64_t get_count_7() const { return ___count_7; }
	inline uint64_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(uint64_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____ProcessingBuffer_8)); }
	inline ByteU5BU5D_t4116647657* get__ProcessingBuffer_8() const { return ____ProcessingBuffer_8; }
	inline ByteU5BU5D_t4116647657** get_address_of__ProcessingBuffer_8() { return &____ProcessingBuffer_8; }
	inline void set__ProcessingBuffer_8(ByteU5BU5D_t4116647657* value)
	{
		____ProcessingBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_8), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_9() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ____ProcessingBufferCount_9)); }
	inline int32_t get__ProcessingBufferCount_9() const { return ____ProcessingBufferCount_9; }
	inline int32_t* get_address_of__ProcessingBufferCount_9() { return &____ProcessingBufferCount_9; }
	inline void set__ProcessingBufferCount_9(int32_t value)
	{
		____ProcessingBufferCount_9 = value;
	}

	inline static int32_t get_offset_of_buff_10() { return static_cast<int32_t>(offsetof(SHA256Managed_t955042874, ___buff_10)); }
	inline UInt32U5BU5D_t2770800703* get_buff_10() const { return ___buff_10; }
	inline UInt32U5BU5D_t2770800703** get_address_of_buff_10() { return &___buff_10; }
	inline void set_buff_10(UInt32U5BU5D_t2770800703* value)
	{
		___buff_10 = value;
		Il2CppCodeGenWriteBarrier((&___buff_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T955042874_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255365  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::4989E5469B40416DC5AFB739C747E32B40CC5C77
	__StaticArrayInitTypeSizeU3D96_t385919777  ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::49ECABA9727A1AF0636082C467485A1A9A04B669
	__StaticArrayInitTypeSizeU3D192_t3674326164  ___49ECABA9727A1AF0636082C467485A1A9A04B669_1;
	// System.Int32 <PrivateImplementationDetails>::6269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52
	int32_t ___6269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6668D4903321030E42A6CE59AB96ADD9D0214FAC
	__StaticArrayInitTypeSizeU3D9_t3218278898  ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13 <PrivateImplementationDetails>::70AE3F6F18539B6C47CFF9F0D9672AEEBDBCDB4C
	__StaticArrayInitTypeSizeU3D13_t4277078258  ___70AE3F6F18539B6C47CFF9F0D9672AEEBDBCDB4C_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212 <PrivateImplementationDetails>::AEAF34DCCF141E917F02F7768DAEA80AA2B13B95
	__StaticArrayInitTypeSizeU3D1212_t3800721096  ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::C033BD4351FBA3732545EA2E016D52B0FC3E69EC
	__StaticArrayInitTypeSizeU3D128_t531529101  ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_6;

public:
	inline static int32_t get_offset_of_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0)); }
	inline __StaticArrayInitTypeSizeU3D96_t385919777  get_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() const { return ___4989E5469B40416DC5AFB739C747E32B40CC5C77_0; }
	inline __StaticArrayInitTypeSizeU3D96_t385919777 * get_address_of_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0() { return &___4989E5469B40416DC5AFB739C747E32B40CC5C77_0; }
	inline void set_U34989E5469B40416DC5AFB739C747E32B40CC5C77_0(__StaticArrayInitTypeSizeU3D96_t385919777  value)
	{
		___4989E5469B40416DC5AFB739C747E32B40CC5C77_0 = value;
	}

	inline static int32_t get_offset_of_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___49ECABA9727A1AF0636082C467485A1A9A04B669_1)); }
	inline __StaticArrayInitTypeSizeU3D192_t3674326164  get_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() const { return ___49ECABA9727A1AF0636082C467485A1A9A04B669_1; }
	inline __StaticArrayInitTypeSizeU3D192_t3674326164 * get_address_of_U349ECABA9727A1AF0636082C467485A1A9A04B669_1() { return &___49ECABA9727A1AF0636082C467485A1A9A04B669_1; }
	inline void set_U349ECABA9727A1AF0636082C467485A1A9A04B669_1(__StaticArrayInitTypeSizeU3D192_t3674326164  value)
	{
		___49ECABA9727A1AF0636082C467485A1A9A04B669_1 = value;
	}

	inline static int32_t get_offset_of_U36269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___6269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52_2)); }
	inline int32_t get_U36269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52_2() const { return ___6269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52_2; }
	inline int32_t* get_address_of_U36269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52_2() { return &___6269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52_2; }
	inline void set_U36269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52_2(int32_t value)
	{
		___6269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52_2 = value;
	}

	inline static int32_t get_offset_of_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_3)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278898  get_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_3() const { return ___6668D4903321030E42A6CE59AB96ADD9D0214FAC_3; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278898 * get_address_of_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_3() { return &___6668D4903321030E42A6CE59AB96ADD9D0214FAC_3; }
	inline void set_U36668D4903321030E42A6CE59AB96ADD9D0214FAC_3(__StaticArrayInitTypeSizeU3D9_t3218278898  value)
	{
		___6668D4903321030E42A6CE59AB96ADD9D0214FAC_3 = value;
	}

	inline static int32_t get_offset_of_U370AE3F6F18539B6C47CFF9F0D9672AEEBDBCDB4C_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___70AE3F6F18539B6C47CFF9F0D9672AEEBDBCDB4C_4)); }
	inline __StaticArrayInitTypeSizeU3D13_t4277078258  get_U370AE3F6F18539B6C47CFF9F0D9672AEEBDBCDB4C_4() const { return ___70AE3F6F18539B6C47CFF9F0D9672AEEBDBCDB4C_4; }
	inline __StaticArrayInitTypeSizeU3D13_t4277078258 * get_address_of_U370AE3F6F18539B6C47CFF9F0D9672AEEBDBCDB4C_4() { return &___70AE3F6F18539B6C47CFF9F0D9672AEEBDBCDB4C_4; }
	inline void set_U370AE3F6F18539B6C47CFF9F0D9672AEEBDBCDB4C_4(__StaticArrayInitTypeSizeU3D13_t4277078258  value)
	{
		___70AE3F6F18539B6C47CFF9F0D9672AEEBDBCDB4C_4 = value;
	}

	inline static int32_t get_offset_of_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_5)); }
	inline __StaticArrayInitTypeSizeU3D1212_t3800721096  get_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_5() const { return ___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_5; }
	inline __StaticArrayInitTypeSizeU3D1212_t3800721096 * get_address_of_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_5() { return &___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_5; }
	inline void set_AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_5(__StaticArrayInitTypeSizeU3D1212_t3800721096  value)
	{
		___AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_5 = value;
	}

	inline static int32_t get_offset_of_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_6)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529101  get_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_6() const { return ___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_6; }
	inline __StaticArrayInitTypeSizeU3D128_t531529101 * get_address_of_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_6() { return &___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_6; }
	inline void set_C033BD4351FBA3732545EA2E016D52B0FC3E69EC_6(__StaticArrayInitTypeSizeU3D128_t531529101  value)
	{
		___C033BD4351FBA3732545EA2E016D52B0FC3E69EC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifndef CIPHERMODE_T84635067_H
#define CIPHERMODE_T84635067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t84635067 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t84635067, ___value___1)); }
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
#endif // CIPHERMODE_T84635067_H
#ifndef ARITHMETICEXCEPTION_T4283546778_H
#define ARITHMETICEXCEPTION_T4283546778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t4283546778  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T4283546778_H
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___1)); }
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
#endif // PADDINGMODE_T2546806710_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef SYMMETRICALGORITHM_T4254223087_H
#define SYMMETRICALGORITHM_T4254223087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4254223087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t4116647657* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t722666473* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___IVValue_1)); }
	inline ByteU5BU5D_t4116647657* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t4116647657* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeyValue_3)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t722666473* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t722666473* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4254223087_H
#ifndef RIJNDAEL_T2986313634_H
#define RIJNDAEL_T2986313634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t2986313634  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T2986313634_H
#ifndef RIJNDAELMANAGED_T3586970409_H
#define RIJNDAELMANAGED_T3586970409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t3586970409  : public Rijndael_t2986313634
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T3586970409_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
extern "C"  void TrafficStats_set_PackageHeaderSize_m331257984 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
extern "C"  int32_t TrafficStats_get_ReliableCommandBytes_m4086795527 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
extern "C"  int32_t TrafficStats_get_UnreliableCommandBytes_m1836998829 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
extern "C"  int32_t TrafficStats_get_FragmentCommandBytes_m1236928114 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
extern "C"  int32_t TrafficStats_get_ControlCommandBytes_m3421439682 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
extern "C"  int32_t TrafficStats_get_TotalCommandBytes_m936111460 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
extern "C"  int32_t TrafficStats_get_TotalPacketCount_m2954381143 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
extern "C"  int32_t TrafficStats_get_PackageHeaderSize_m658012815 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
extern "C"  void TrafficStats_set_ControlCommandBytes_m2804408088 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
extern "C"  int32_t TrafficStats_get_ControlCommandCount_m1849822883 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
extern "C"  void TrafficStats_set_ControlCommandCount_m3213444035 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
extern "C"  void TrafficStats_set_ReliableCommandBytes_m3595092292 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
extern "C"  int32_t TrafficStats_get_ReliableCommandCount_m482813742 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
extern "C"  void TrafficStats_set_ReliableCommandCount_m987114278 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
extern "C"  void TrafficStats_set_UnreliableCommandBytes_m2214626654 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
extern "C"  int32_t TrafficStats_get_UnreliableCommandCount_m1577946692 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
extern "C"  void TrafficStats_set_UnreliableCommandCount_m3053853297 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
extern "C"  void TrafficStats_set_FragmentCommandBytes_m616938761 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
extern "C"  int32_t TrafficStats_get_FragmentCommandCount_m1944708715 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
extern "C"  void TrafficStats_set_FragmentCommandCount_m1327790089 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
extern "C"  int32_t TrafficStats_get_TotalPacketBytes_m1617082294 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
extern "C"  int32_t TrafficStats_get_TotalCommandsInPackets_m3796906114 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
extern "C"  int32_t TrafficStatsGameLevel_get_OperationCount_m513992761 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
extern "C"  int32_t TrafficStatsGameLevel_get_ResultCount_m3450799483 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
extern "C"  int32_t TrafficStatsGameLevel_get_EventCount_m2850709180 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
extern "C"  int32_t TrafficStatsGameLevel_get_OperationByteCount_m1289681601 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_OperationByteCount_m2008944563 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_OperationCount_m2697293110 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
extern "C"  int32_t TrafficStatsGameLevel_get_ResultByteCount_m955008509 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_ResultByteCount_m1659749561 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_ResultCount_m1885535817 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
extern "C"  int32_t TrafficStatsGameLevel_get_EventByteCount_m1406817691 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_EventByteCount_m3221741268 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_EventCount_m3647081563 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
extern "C"  int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m103005414 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_LongestOpResponseCallback_m3663207651 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
extern "C"  void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m3362607995 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
extern "C"  int32_t TrafficStatsGameLevel_get_LongestEventCallback_m648070515 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_LongestEventCallback_m2349483848 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
extern "C"  void TrafficStatsGameLevel_set_LongestEventCallbackCode_m3901604312 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
extern "C"  int32_t SupportClass_GetTickCount_m1042627442 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
extern "C"  int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m1934683369 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m2976413445 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
extern "C"  int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m2374164164 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m2232252709 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
extern "C"  int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m3568762106 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m2113040343 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
extern "C"  int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m429271156 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m1164973423 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C"  String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
extern "C"  uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_m194029821 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
extern "C"  uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m1024426170 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArithmeticException::.ctor(System.String)
extern "C"  void ArithmeticException__ctor_m3551809662 (ArithmeticException_t4283546778 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
extern "C"  void BigInteger__ctor_m1240160733 (BigInteger_t956758543 * __this, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
extern "C"  void BigInteger__ctor_m2516099295 (BigInteger_t956758543 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArithmeticException::.ctor()
extern "C"  void ArithmeticException__ctor_m479063094 (ArithmeticException_t4283546778 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_UnaryNegation_m3272019706 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger__ctor_m497354907 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___bi0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
extern "C"  int32_t BigInteger_shiftLeft_m952412684 (RuntimeObject * __this /* static, unused */, UInt32U5BU5D_t2770800703* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_Equality_m4107706715 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m2988481195 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
extern "C"  BigInteger_t956758543 * BigInteger_op_LeftShift_m2731198774 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
extern "C"  void BigInteger__ctor_m3091364386 (BigInteger_t956758543 * __this, UInt32U5BU5D_t2770800703* ___inData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
extern "C"  BigInteger_t956758543 * BigInteger_op_Implicit_m1457317411 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_Multiply_m664707877 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_Subtraction_m1996860654 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
extern "C"  int32_t BigInteger_shiftRight_m1897315128 (RuntimeObject * __this /* static, unused */, UInt32U5BU5D_t2770800703* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m1529345678 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger_singleByteDivide_m972382485 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, BigInteger_t956758543 * ___outQuotient2, BigInteger_t956758543 * ___outRemainder3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger_multiByteDivide_m635723330 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, BigInteger_t956758543 * ___outQuotient2, BigInteger_t956758543 * ___outRemainder3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
extern "C"  String_t* BigInteger_ToString_m2781201991 (BigInteger_t956758543 * __this, int32_t ___radix0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString()
extern "C"  String_t* Char_ToString_m3588025615 (Il2CppChar* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t956758543 * BigInteger_op_Implicit_m1456924192 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_Modulus_m2469490318 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_Division_m3347195961 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
extern "C"  int32_t BigInteger_bitCount_m3576967399 (BigInteger_t956758543 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_BarrettReduction_m2302199077 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___x0, BigInteger_t956758543 * ___n1, BigInteger_t956758543 * ___constant2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_Addition_m949304235 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m1973220735 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor()
extern "C"  void Random__ctor_m4122933043 (Random_t108471755 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
extern "C"  void BigInteger_genRandomBits_m2936729685 (BigInteger_t956758543 * __this, int32_t ___bits0, Random_t108471755 * ___rand1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m3579054046 (BigInteger_t956758543 * __this, ByteU5BU5D_t4116647657* ___inData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C"  BigInteger_t956758543 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682 (DiffieHellmanCryptoProvider_t915317458 * __this, int32_t ___secretLength0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C"  BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C"  void RijndaelManaged__ctor_m1562735454 (RijndaelManaged_t3586970409 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* BigInteger_GetBytes_m2793402501 (BigInteger_t956758543 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculateSharedKey_m1876792259 (DiffieHellmanCryptoProvider_t915317458 * __this, BigInteger_t956758543 * ___otherPartyPublicKey0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
extern "C"  void SHA256Managed__ctor_m2170017447 (SHA256Managed_t955042874 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* HashAlgorithm_ComputeHash_m2825542963 (HashAlgorithm_t1432317219 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C"  void DiffieHellmanCryptoProvider_Dispose_m1853825749 (DiffieHellmanCryptoProvider_t915317458 * __this, bool ___disposing0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C"  void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_ModPow_m1818331774 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___exp0, BigInteger_t956758543 * ___n1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
extern "C"  BigInteger_t956758543 * BigInteger_GenerateRandom_m3242160242 (RuntimeObject * __this /* static, unused */, int32_t ___bits0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
extern "C"  int32_t TrafficStats_get_PackageHeaderSize_m658012815 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPackageHeaderSizeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
extern "C"  void TrafficStats_set_PackageHeaderSize_m331257984 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPackageHeaderSizeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
extern "C"  int32_t TrafficStats_get_ReliableCommandCount_m482813742 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandCountU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
extern "C"  void TrafficStats_set_ReliableCommandCount_m987114278 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandCountU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
extern "C"  int32_t TrafficStats_get_UnreliableCommandCount_m1577946692 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
extern "C"  void TrafficStats_set_UnreliableCommandCount_m3053853297 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
extern "C"  int32_t TrafficStats_get_FragmentCommandCount_m1944708715 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandCountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
extern "C"  void TrafficStats_set_FragmentCommandCount_m1327790089 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandCountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
extern "C"  int32_t TrafficStats_get_ControlCommandCount_m1849822883 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandCountU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
extern "C"  void TrafficStats_set_ControlCommandCount_m3213444035 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandCountU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
extern "C"  int32_t TrafficStats_get_TotalPacketCount_m2954381143 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalPacketCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
extern "C"  void TrafficStats_set_TotalPacketCount_m2373240368 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalPacketCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
extern "C"  int32_t TrafficStats_get_TotalCommandsInPackets_m3796906114 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTotalCommandsInPacketsU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
extern "C"  void TrafficStats_set_TotalCommandsInPackets_m350749640 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTotalCommandsInPacketsU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
extern "C"  int32_t TrafficStats_get_ReliableCommandBytes_m4086795527 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReliableCommandBytesU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
extern "C"  void TrafficStats_set_ReliableCommandBytes_m3595092292 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReliableCommandBytesU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
extern "C"  int32_t TrafficStats_get_UnreliableCommandBytes_m1836998829 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CUnreliableCommandBytesU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
extern "C"  void TrafficStats_set_UnreliableCommandBytes_m2214626654 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CUnreliableCommandBytesU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
extern "C"  int32_t TrafficStats_get_FragmentCommandBytes_m1236928114 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFragmentCommandBytesU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
extern "C"  void TrafficStats_set_FragmentCommandBytes_m616938761 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFragmentCommandBytesU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
extern "C"  int32_t TrafficStats_get_ControlCommandBytes_m3421439682 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CControlCommandBytesU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
extern "C"  void TrafficStats_set_ControlCommandBytes_m2804408088 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CControlCommandBytesU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::.ctor(System.Int32)
extern "C"  void TrafficStats__ctor_m4059783573 (TrafficStats_t1302902347 * __this, int32_t ___packageHeaderSize0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___packageHeaderSize0;
		TrafficStats_set_PackageHeaderSize_m331257984(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
extern "C"  int32_t TrafficStats_get_TotalCommandBytes_m936111460 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_ReliableCommandBytes_m4086795527(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStats_get_UnreliableCommandBytes_m1836998829(__this, /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_FragmentCommandBytes_m1236928114(__this, /*hidden argument*/NULL);
		int32_t L_3 = TrafficStats_get_ControlCommandBytes_m3421439682(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2)), (int32_t)L_3));
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
extern "C"  int32_t TrafficStats_get_TotalPacketBytes_m1617082294 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_TotalCommandBytes_m936111460(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStats_get_TotalPacketCount_m2954381143(__this, /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_PackageHeaderSize_m658012815(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2))));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastAck(System.Int32)
extern "C"  void TrafficStats_set_TimestampOfLastAck_m1467759478 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampOfLastAckU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastReliableCommand(System.Int32)
extern "C"  void TrafficStats_set_TimestampOfLastReliableCommand_m4212534736 (TrafficStats_t1302902347 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampOfLastReliableCommandU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
extern "C"  void TrafficStats_CountControlCommand_m3783491252 (TrafficStats_t1302902347 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_ControlCommandBytes_m3421439682(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ControlCommandBytes_m2804408088(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_ControlCommandCount_m1849822883(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ControlCommandCount_m3213444035(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
extern "C"  void TrafficStats_CountReliableOpCommand_m1486410076 (TrafficStats_t1302902347 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_ReliableCommandBytes_m4086795527(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_ReliableCommandBytes_m3595092292(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_ReliableCommandCount_m482813742(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_ReliableCommandCount_m987114278(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
extern "C"  void TrafficStats_CountUnreliableOpCommand_m1368676294 (TrafficStats_t1302902347 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_UnreliableCommandBytes_m1836998829(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_UnreliableCommandBytes_m2214626654(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_UnreliableCommandCount_m1577946692(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_UnreliableCommandCount_m3053853297(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStats::CountFragmentOpCommand(System.Int32)
extern "C"  void TrafficStats_CountFragmentOpCommand_m1828684655 (TrafficStats_t1302902347 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStats_get_FragmentCommandBytes_m1236928114(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___size0;
		TrafficStats_set_FragmentCommandBytes_m616938761(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStats_get_FragmentCommandCount_m1944708715(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStats_set_FragmentCommandCount_m1327790089(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStats::ToString()
extern "C"  String_t* TrafficStats_ToString_m4056329990 (TrafficStats_t1302902347 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStats_ToString_m4056329990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		int32_t L_1 = TrafficStats_get_TotalPacketBytes_m1617082294(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		int32_t L_5 = TrafficStats_get_TotalCommandBytes_m936111460(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		int32_t L_9 = TrafficStats_get_TotalPacketCount_m2954381143(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		int32_t L_13 = TrafficStats_get_TotalCommandsInPackets_m3796906114(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral1828021971, L_12, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_17 = V_0;
		return L_17;
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
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationByteCount()
extern "C"  int32_t TrafficStatsGameLevel_get_OperationByteCount_m1289681601 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationByteCountU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationByteCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_OperationByteCount_m2008944563 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationByteCountU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_OperationCount()
extern "C"  int32_t TrafficStatsGameLevel_get_OperationCount_m513992761 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3COperationCountU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_OperationCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_OperationCount_m2697293110 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3COperationCountU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultByteCount()
extern "C"  int32_t TrafficStatsGameLevel_get_ResultByteCount_m955008509 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultByteCountU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultByteCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_ResultByteCount_m1659749561 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultByteCountU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_ResultCount()
extern "C"  int32_t TrafficStatsGameLevel_get_ResultCount_m3450799483 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_ResultCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_ResultCount_m1885535817 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventByteCount()
extern "C"  int32_t TrafficStatsGameLevel_get_EventByteCount_m1406817691 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventByteCountU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventByteCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_EventByteCount_m3221741268 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventByteCountU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_EventCount()
extern "C"  int32_t TrafficStatsGameLevel_get_EventCount_m2850709180 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CEventCountU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_EventCount(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_EventCount_m3647081563 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CEventCountU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallback()
extern "C"  int32_t TrafficStatsGameLevel_get_LongestOpResponseCallback_m103005414 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestOpResponseCallbackU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallback(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_LongestOpResponseCallback_m3663207651 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestOpResponseCallbackOpCode()
extern "C"  uint8_t TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m1024426170 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestOpResponseCallbackOpCode(System.Byte)
extern "C"  void TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m3362607995 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestOpResponseCallbackOpCodeU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallback()
extern "C"  int32_t TrafficStatsGameLevel_get_LongestEventCallback_m648070515 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestEventCallbackU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallback(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_LongestEventCallback_m2349483848 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Byte ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestEventCallbackCode()
extern "C"  uint8_t TrafficStatsGameLevel_get_LongestEventCallbackCode_m194029821 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CLongestEventCallbackCodeU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestEventCallbackCode(System.Byte)
extern "C"  void TrafficStatsGameLevel_set_LongestEventCallbackCode_m3901604312 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CLongestEventCallbackCodeU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenDispatching()
extern "C"  int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m1934683369 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenDispatching(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m2976413445 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenDispatchingU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_LongestDeltaBetweenSending()
extern "C"  int32_t TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m3568762106 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLongestDeltaBetweenSendingU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_LongestDeltaBetweenSending(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m2113040343 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLongestDeltaBetweenSendingU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_DispatchIncomingCommandsCalls()
extern "C"  int32_t TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m2374164164 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_DispatchIncomingCommandsCalls(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m2232252709 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDispatchIncomingCommandsCallsU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_SendOutgoingCommandsCalls()
extern "C"  int32_t TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m429271156 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSendOutgoingCommandsCallsU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::set_SendOutgoingCommandsCalls(System.Int32)
extern "C"  void TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m1164973423 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSendOutgoingCommandsCallsU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalMessageCount()
extern "C"  int32_t TrafficStatsGameLevel_get_TotalMessageCount_m60277200 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationCount_m513992761(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStatsGameLevel_get_ResultCount_m3450799483(__this, /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_EventCount_m2850709180(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2));
		goto IL_0018;
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalIncomingMessageCount()
extern "C"  int32_t TrafficStatsGameLevel_get_TotalIncomingMessageCount_m913378961 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_ResultCount_m3450799483(__this, /*hidden argument*/NULL);
		int32_t L_1 = TrafficStatsGameLevel_get_EventCount_m2850709180(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 ExitGames.Client.Photon.TrafficStatsGameLevel::get_TotalOutgoingMessageCount()
extern "C"  int32_t TrafficStatsGameLevel_get_TotalOutgoingMessageCount_m1901280818 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationCount_m513992761(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountOperation(System.Int32)
extern "C"  void TrafficStatsGameLevel_CountOperation_m1756829521 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___operationBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationByteCount_m1289681601(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___operationBytes0;
		TrafficStatsGameLevel_set_OperationByteCount_m2008944563(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_OperationCount_m513992761(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_OperationCount_m2697293110(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountResult(System.Int32)
extern "C"  void TrafficStatsGameLevel_CountResult_m308777854 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___resultBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_ResultByteCount_m955008509(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___resultBytes0;
		TrafficStatsGameLevel_set_ResultByteCount_m1659749561(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_ResultCount_m3450799483(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_ResultCount_m1885535817(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::CountEvent(System.Int32)
extern "C"  void TrafficStatsGameLevel_CountEvent_m1317155091 (TrafficStatsGameLevel_t4013908777 * __this, int32_t ___eventBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_EventByteCount_m1406817691(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___eventBytes0;
		TrafficStatsGameLevel_set_EventByteCount_m3221741268(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = TrafficStatsGameLevel_get_EventCount_m2850709180(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		TrafficStatsGameLevel_set_EventCount_m3647081563(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForResponseCallback(System.Byte,System.Int32)
extern "C"  void TrafficStatsGameLevel_TimeForResponseCallback_m3826204994 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m103005414(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestOpResponseCallback_m3663207651(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestOpResponseCallbackOpCode_m3362607995(__this, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::TimeForEventCallback(System.Byte,System.Int32)
extern "C"  void TrafficStatsGameLevel_TimeForEventCallback_m2944957167 (TrafficStatsGameLevel_t4013908777 * __this, uint8_t ___code0, int32_t ___time1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___time1;
		int32_t L_1 = TrafficStatsGameLevel_get_LongestEventCallback_m648070515(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___time1;
		TrafficStatsGameLevel_set_LongestEventCallback_m2349483848(__this, L_3, /*hidden argument*/NULL);
		uint8_t L_4 = ___code0;
		TrafficStatsGameLevel_set_LongestEventCallbackCode_m3901604312(__this, L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::DispatchIncomingCommandsCalled()
extern "C"  void TrafficStatsGameLevel_DispatchIncomingCommandsCalled_m524433314 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_DispatchIncomingCommandsCalled_m524433314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_timeOfLastDispatchCall_0();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_2 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_timeOfLastDispatchCall_0();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_1;
		int32_t L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m1934683369(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenDispatching_m2976413445(__this, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m2374164164(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_DispatchIncomingCommandsCalls_m2232252709(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_10 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeOfLastDispatchCall_0(L_10);
		return;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::SendOutgoingCommandsCalled()
extern "C"  void TrafficStatsGameLevel_SendOutgoingCommandsCalled_m3439818030 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_SendOutgoingCommandsCalled_m3439818030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_timeOfLastSendCall_1();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_2 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_timeOfLastSendCall_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_1;
		int32_t L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m3568762106(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		TrafficStatsGameLevel_set_LongestDeltaBetweenSending_m2113040343(__this, L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
	}

IL_0034:
	{
		int32_t L_8 = TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m429271156(__this, /*hidden argument*/NULL);
		V_3 = L_8;
		int32_t L_9 = V_3;
		TrafficStatsGameLevel_set_SendOutgoingCommandsCalls_m1164973423(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		int32_t L_10 = SupportClass_GetTickCount_m1042627442(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timeOfLastSendCall_1(L_10);
		return;
	}
}
// System.String ExitGames.Client.Photon.TrafficStatsGameLevel::ToString()
extern "C"  String_t* TrafficStatsGameLevel_ToString_m1358013804 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_ToString_m1358013804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = TrafficStatsGameLevel_get_OperationByteCount_m1289681601(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = TrafficStatsGameLevel_get_ResultByteCount_m955008509(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = TrafficStatsGameLevel_get_EventByteCount_m1406817691(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral4110760290, L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_002f;
	}

IL_002f:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.String ExitGames.Client.Photon.TrafficStatsGameLevel::ToStringVitalStats()
extern "C"  String_t* TrafficStatsGameLevel_ToStringVitalStats_m2699597432 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrafficStatsGameLevel_ToStringVitalStats_m2699597432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)8));
		int32_t L_1 = TrafficStatsGameLevel_get_LongestDeltaBetweenSending_m3568762106(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		int32_t L_5 = TrafficStatsGameLevel_get_LongestDeltaBetweenDispatching_m1934683369(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		int32_t L_9 = TrafficStatsGameLevel_get_LongestEventCallback_m648070515(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		uint8_t L_13 = TrafficStatsGameLevel_get_LongestEventCallbackCode_m194029821(__this, /*hidden argument*/NULL);
		uint8_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		int32_t L_17 = TrafficStatsGameLevel_get_LongestOpResponseCallback_m103005414(__this, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_19);
		ObjectU5BU5D_t2843939325* L_20 = L_16;
		uint8_t L_21 = TrafficStatsGameLevel_get_LongestOpResponseCallbackOpCode_m1024426170(__this, /*hidden argument*/NULL);
		uint8_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = L_20;
		int32_t L_25 = TrafficStatsGameLevel_get_SendOutgoingCommandsCalls_m429271156(__this, /*hidden argument*/NULL);
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_27);
		ObjectU5BU5D_t2843939325* L_28 = L_24;
		int32_t L_29 = TrafficStatsGameLevel_get_DispatchIncomingCommandsCalls_m2374164164(__this, /*hidden argument*/NULL);
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_31);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral591816982, L_28, /*hidden argument*/NULL);
		V_0 = L_32;
		goto IL_0084;
	}

IL_0084:
	{
		String_t* L_33 = V_0;
		return L_33;
	}
}
// System.Void ExitGames.Client.Photon.TrafficStatsGameLevel::.ctor()
extern "C"  void TrafficStatsGameLevel__ctor_m2185191356 (TrafficStatsGameLevel_t4013908777 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void ExitGames.Client.Photon.Version::.cctor()
extern "C"  void Version__cctor_m949376060 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__cctor_m949376060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)4));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____6269BD06FD81DB45E60B4AAA2FD4B34F82AB0E52_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((Version_t2916202802_StaticFields*)il2cpp_codegen_static_fields_for(Version_t2916202802_il2cpp_TypeInfo_var))->set_clientVersion_0(L_0);
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
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
extern "C"  void BigInteger__ctor_m2516099295 (BigInteger_t956758543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__ctor_m2516099295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_data_1((UInt32U5BU5D_t2770800703*)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_data_1(((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70))));
		__this->set_dataLength_2(1);
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
extern "C"  void BigInteger__ctor_m1240160733 (BigInteger_t956758543 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__ctor_m1240160733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	{
		__this->set_data_1((UInt32U5BU5D_t2770800703*)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_data_1(((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70))));
		int64_t L_0 = ___value0;
		V_0 = L_0;
		__this->set_dataLength_2(0);
		goto IL_004f;
	}

IL_0027:
	{
		UInt32U5BU5D_t2770800703* L_1 = __this->get_data_1();
		int32_t L_2 = __this->get_dataLength_2();
		int64_t L_3 = ___value0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_3&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		int64_t L_4 = ___value0;
		___value0 = ((int64_t)((int64_t)L_4>>(int32_t)((int32_t)32)));
		int32_t L_5 = __this->get_dataLength_2();
		__this->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
	}

IL_004f:
	{
		int64_t L_6 = ___value0;
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_7 = __this->get_dataLength_2();
		G_B5_0 = ((((int32_t)L_7) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B5_0 = 0;
	}

IL_005f:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0027;
		}
	}
	{
		int64_t L_9 = V_0;
		V_2 = (bool)((((int64_t)L_9) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0097;
		}
	}
	{
		int64_t L_11 = ___value0;
		if (L_11)
		{
			goto IL_0084;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_12 = __this->get_data_1();
		NullCheck(L_12);
		int32_t L_13 = ((int32_t)69);
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		G_B10_0 = ((!(((uint32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B10_0 = 1;
	}

IL_0085:
	{
		V_3 = (bool)G_B10_0;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0094;
		}
	}
	{
		ArithmeticException_t4283546778 * L_16 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_16, _stringLiteral385363368, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16);
	}

IL_0094:
	{
		goto IL_00d5;
	}

IL_0097:
	{
		int64_t L_17 = V_0;
		V_4 = (bool)((((int64_t)L_17) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00d5;
		}
	}
	{
		int64_t L_19 = ___value0;
		if ((!(((uint64_t)L_19) == ((uint64_t)(((int64_t)((int64_t)(-1))))))))
		{
			goto IL_00c2;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_20 = __this->get_data_1();
		int32_t L_21 = __this->get_dataLength_2();
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		G_B17_0 = ((((int32_t)((int32_t)((int32_t)L_23&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B17_0 = 1;
	}

IL_00c3:
	{
		V_5 = (bool)G_B17_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00d4;
		}
	}
	{
		ArithmeticException_t4283546778 * L_25 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_25, _stringLiteral3895168893, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25);
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		int32_t L_26 = __this->get_dataLength_2();
		V_6 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00eb;
		}
	}
	{
		__this->set_dataLength_2(1);
	}

IL_00eb:
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger__ctor_m497354907 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___bi0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__ctor_m497354907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		__this->set_data_1((UInt32U5BU5D_t2770800703*)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_data_1(((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70))));
		BigInteger_t956758543 * L_0 = ___bi0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_dataLength_2();
		__this->set_dataLength_2(L_1);
		V_0 = 0;
		goto IL_0040;
	}

IL_002c:
	{
		UInt32U5BU5D_t2770800703* L_2 = __this->get_data_1();
		int32_t L_3 = V_0;
		BigInteger_t956758543 * L_4 = ___bi0;
		NullCheck(L_4);
		UInt32U5BU5D_t2770800703* L_5 = L_4->get_data_1();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->get_dataLength_2();
		V_1 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_002c;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m3579054046 (BigInteger_t956758543 * __this, ByteU5BU5D_t4116647657* ___inData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__ctor_m3579054046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B18_0 = 0;
	{
		__this->set_data_1((UInt32U5BU5D_t2770800703*)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___inData0;
		NullCheck(L_0);
		__this->set_dataLength_2(((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))>>(int32_t)2)));
		ByteU5BU5D_t4116647657* L_1 = ___inData0;
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))&(int32_t)3));
		int32_t L_2 = V_0;
		V_1 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = __this->get_dataLength_2();
		__this->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_0036:
	{
		int32_t L_5 = __this->get_dataLength_2();
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ArithmeticException_t4283546778 * L_7 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_7, _stringLiteral762882209, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_004f:
	{
		__this->set_data_1(((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70))));
		ByteU5BU5D_t4116647657* L_8 = ___inData0;
		NullCheck(L_8);
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))), (int32_t)1));
		V_4 = 0;
		goto IL_0099;
	}

IL_0067:
	{
		UInt32U5BU5D_t2770800703* L_9 = __this->get_data_1();
		int32_t L_10 = V_4;
		ByteU5BU5D_t4116647657* L_11 = ___inData0;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)3));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_t4116647657* L_15 = ___inData0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)2));
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_t4116647657* L_19 = ___inData0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		ByteU5BU5D_t4116647657* L_23 = ___inData0;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_14<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_18<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_22<<(int32_t)8)))), (int32_t)L_26)));
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)4));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0099:
	{
		int32_t L_29 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_29) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_31 = V_0;
		V_6 = (bool)((((int32_t)L_31) == ((int32_t)1))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00c4;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_33 = __this->get_data_1();
		int32_t L_34 = __this->get_dataLength_2();
		ByteU5BU5D_t4116647657* L_35 = ___inData0;
		NullCheck(L_35);
		int32_t L_36 = 0;
		uint8_t L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1))), (uint32_t)L_37);
		goto IL_0111;
	}

IL_00c4:
	{
		int32_t L_38 = V_0;
		V_7 = (bool)((((int32_t)L_38) == ((int32_t)2))? 1 : 0);
		bool L_39 = V_7;
		if (!L_39)
		{
			goto IL_00e8;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_40 = __this->get_data_1();
		int32_t L_41 = __this->get_dataLength_2();
		ByteU5BU5D_t4116647657* L_42 = ___inData0;
		NullCheck(L_42);
		int32_t L_43 = 0;
		uint8_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ByteU5BU5D_t4116647657* L_45 = ___inData0;
		NullCheck(L_45);
		int32_t L_46 = 1;
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1))), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_44<<(int32_t)8)), (int32_t)L_47)));
		goto IL_0111;
	}

IL_00e8:
	{
		int32_t L_48 = V_0;
		V_8 = (bool)((((int32_t)L_48) == ((int32_t)3))? 1 : 0);
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_0111;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_50 = __this->get_data_1();
		int32_t L_51 = __this->get_dataLength_2();
		ByteU5BU5D_t4116647657* L_52 = ___inData0;
		NullCheck(L_52);
		int32_t L_53 = 0;
		uint8_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		ByteU5BU5D_t4116647657* L_55 = ___inData0;
		NullCheck(L_55);
		int32_t L_56 = 1;
		uint8_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ByteU5BU5D_t4116647657* L_58 = ___inData0;
		NullCheck(L_58);
		int32_t L_59 = 2;
		uint8_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1))), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_54<<(int32_t)((int32_t)16))), (int32_t)((int32_t)((int32_t)L_57<<(int32_t)8)))), (int32_t)L_60)));
	}

IL_0111:
	{
		goto IL_0121;
	}

IL_0113:
	{
		int32_t L_61 = __this->get_dataLength_2();
		__this->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)1)));
	}

IL_0121:
	{
		int32_t L_62 = __this->get_dataLength_2();
		if ((((int32_t)L_62) <= ((int32_t)1)))
		{
			goto IL_013e;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_63 = __this->get_data_1();
		int32_t L_64 = __this->get_dataLength_2();
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)1));
		uint32_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		G_B18_0 = ((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B18_0 = 0;
	}

IL_013f:
	{
		V_9 = (bool)G_B18_0;
		bool L_67 = V_9;
		if (L_67)
		{
			goto IL_0113;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
extern "C"  void BigInteger__ctor_m3091364386 (BigInteger_t956758543 * __this, UInt32U5BU5D_t2770800703* ___inData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__ctor_m3091364386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B10_0 = 0;
	{
		__this->set_data_1((UInt32U5BU5D_t2770800703*)NULL);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		UInt32U5BU5D_t2770800703* L_0 = ___inData0;
		NullCheck(L_0);
		__this->set_dataLength_2((((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		int32_t L_1 = __this->get_dataLength_2();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		ArithmeticException_t4283546778 * L_3 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_3, _stringLiteral762882209, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0031:
	{
		__this->set_data_1(((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70))));
		int32_t L_4 = __this->get_dataLength_2();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		V_2 = 0;
		goto IL_005e;
	}

IL_004b:
	{
		UInt32U5BU5D_t2770800703* L_5 = __this->get_data_1();
		int32_t L_6 = V_2;
		UInt32U5BU5D_t2770800703* L_7 = ___inData0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_13 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0079;
	}

IL_006b:
	{
		int32_t L_15 = __this->get_dataLength_2();
		__this->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)));
	}

IL_0079:
	{
		int32_t L_16 = __this->get_dataLength_2();
		if ((((int32_t)L_16) <= ((int32_t)1)))
		{
			goto IL_0096;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_17 = __this->get_data_1();
		int32_t L_18 = __this->get_dataLength_2();
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B10_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_0097;
	}

IL_0096:
	{
		G_B10_0 = 0;
	}

IL_0097:
	{
		V_4 = (bool)G_B10_0;
		bool L_21 = V_4;
		if (L_21)
		{
			goto IL_006b;
		}
	}
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
extern "C"  BigInteger_t956758543 * BigInteger_op_Implicit_m1457317411 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Implicit_m1457317411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	{
		int64_t L_0 = ___value0;
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m1240160733(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BigInteger_t956758543 * L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t956758543 * BigInteger_op_Implicit_m1456924192 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Implicit_m1456924192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	{
		int32_t L_0 = ___value0;
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m1240160733(L_1, (((int64_t)((int64_t)L_0))), /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		BigInteger_t956758543 * L_2 = V_0;
		return L_2;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_Addition_m949304235 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Addition_m949304235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	BigInteger_t956758543 * V_9 = NULL;
	BigInteger_t956758543 * G_B2_0 = NULL;
	BigInteger_t956758543 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BigInteger_t956758543 * G_B3_1 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B20_0 = 0;
	{
		BigInteger_t956758543 * L_0 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t956758543 * L_1 = V_0;
		BigInteger_t956758543 * L_2 = ___bi10;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_dataLength_2();
		BigInteger_t956758543 * L_4 = ___bi21;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_dataLength_2();
		G_B1_0 = L_1;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		BigInteger_t956758543 * L_6 = ___bi21;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_dataLength_2();
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001e:
	{
		BigInteger_t956758543 * L_8 = ___bi10;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_dataLength_2();
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_dataLength_2(G_B3_0);
		V_1 = (((int64_t)((int64_t)0)));
		V_3 = 0;
		goto IL_0061;
	}

IL_0030:
	{
		BigInteger_t956758543 * L_10 = ___bi10;
		NullCheck(L_10);
		UInt32U5BU5D_t2770800703* L_11 = L_10->get_data_1();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		BigInteger_t956758543 * L_15 = ___bi21;
		NullCheck(L_15);
		UInt32U5BU5D_t2770800703* L_16 = L_15->get_data_1();
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int64_t L_20 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((uint64_t)L_14))), (int64_t)(((int64_t)((uint64_t)L_19))))), (int64_t)L_20));
		int64_t L_21 = V_4;
		V_1 = ((int64_t)((int64_t)L_21>>(int32_t)((int32_t)32)));
		BigInteger_t956758543 * L_22 = V_0;
		NullCheck(L_22);
		UInt32U5BU5D_t2770800703* L_23 = L_22->get_data_1();
		int32_t L_24 = V_3;
		int64_t L_25 = V_4;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_25&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_27 = V_3;
		BigInteger_t956758543 * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_dataLength_2();
		V_5 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0030;
		}
	}
	{
		int64_t L_31 = V_1;
		if (!L_31)
		{
			goto IL_007f;
		}
	}
	{
		BigInteger_t956758543 * L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_dataLength_2();
		G_B9_0 = ((((int32_t)L_33) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_0080;
	}

IL_007f:
	{
		G_B9_0 = 0;
	}

IL_0080:
	{
		V_6 = (bool)G_B9_0;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00a5;
		}
	}
	{
		BigInteger_t956758543 * L_35 = V_0;
		NullCheck(L_35);
		UInt32U5BU5D_t2770800703* L_36 = L_35->get_data_1();
		BigInteger_t956758543 * L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = L_37->get_dataLength_2();
		int64_t L_39 = V_1;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint32_t)(((int32_t)((uint32_t)L_39))));
		BigInteger_t956758543 * L_40 = V_0;
		BigInteger_t956758543 * L_41 = L_40;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_dataLength_2();
		NullCheck(L_41);
		L_41->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
	}

IL_00a5:
	{
		goto IL_00b5;
	}

IL_00a7:
	{
		BigInteger_t956758543 * L_43 = V_0;
		BigInteger_t956758543 * L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_dataLength_2();
		NullCheck(L_44);
		L_44->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1)));
	}

IL_00b5:
	{
		BigInteger_t956758543 * L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_dataLength_2();
		if ((((int32_t)L_47) <= ((int32_t)1)))
		{
			goto IL_00d2;
		}
	}
	{
		BigInteger_t956758543 * L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t2770800703* L_49 = L_48->get_data_1();
		BigInteger_t956758543 * L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_dataLength_2();
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
		uint32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B16_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B16_0 = 0;
	}

IL_00d3:
	{
		V_7 = (bool)G_B16_0;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_00a7;
		}
	}
	{
		V_2 = ((int32_t)69);
		BigInteger_t956758543 * L_55 = ___bi10;
		NullCheck(L_55);
		UInt32U5BU5D_t2770800703* L_56 = L_55->get_data_1();
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		BigInteger_t956758543 * L_60 = ___bi21;
		NullCheck(L_60);
		UInt32U5BU5D_t2770800703* L_61 = L_60->get_data_1();
		int32_t L_62 = V_2;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((!(((uint32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)-2147483648LL)))) == ((uint32_t)((int32_t)((int32_t)L_64&(int32_t)((int32_t)-2147483648LL)))))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_t956758543 * L_65 = V_0;
		NullCheck(L_65);
		UInt32U5BU5D_t2770800703* L_66 = L_65->get_data_1();
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		BigInteger_t956758543 * L_70 = ___bi10;
		NullCheck(L_70);
		UInt32U5BU5D_t2770800703* L_71 = L_70->get_data_1();
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B20_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_69&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_74&(int32_t)((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B20_0 = 0;
	}

IL_011e:
	{
		V_8 = (bool)G_B20_0;
		bool L_75 = V_8;
		if (!L_75)
		{
			goto IL_012b;
		}
	}
	{
		ArithmeticException_t4283546778 * L_76 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m479063094(L_76, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76);
	}

IL_012b:
	{
		BigInteger_t956758543 * L_77 = V_0;
		V_9 = L_77;
		goto IL_0130;
	}

IL_0130:
	{
		BigInteger_t956758543 * L_78 = V_9;
		return L_78;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_Subtraction_m1996860654 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Subtraction_m1996860654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	BigInteger_t956758543 * V_12 = NULL;
	BigInteger_t956758543 * G_B2_0 = NULL;
	BigInteger_t956758543 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	BigInteger_t956758543 * G_B3_1 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B23_0 = 0;
	{
		BigInteger_t956758543 * L_0 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t956758543 * L_1 = V_0;
		BigInteger_t956758543 * L_2 = ___bi10;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_dataLength_2();
		BigInteger_t956758543 * L_4 = ___bi21;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_dataLength_2();
		G_B1_0 = L_1;
		if ((((int32_t)L_3) > ((int32_t)L_5)))
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		BigInteger_t956758543 * L_6 = ___bi21;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_dataLength_2();
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001e:
	{
		BigInteger_t956758543 * L_8 = ___bi10;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_dataLength_2();
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_dataLength_2(G_B3_0);
		V_1 = (((int64_t)((int64_t)0)));
		V_3 = 0;
		goto IL_006f;
	}

IL_0030:
	{
		BigInteger_t956758543 * L_10 = ___bi10;
		NullCheck(L_10);
		UInt32U5BU5D_t2770800703* L_11 = L_10->get_data_1();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		BigInteger_t956758543 * L_15 = ___bi21;
		NullCheck(L_15);
		UInt32U5BU5D_t2770800703* L_16 = L_15->get_data_1();
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int64_t L_20 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((uint64_t)L_14))), (int64_t)(((int64_t)((uint64_t)L_19))))), (int64_t)L_20));
		BigInteger_t956758543 * L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t2770800703* L_22 = L_21->get_data_1();
		int32_t L_23 = V_3;
		int64_t L_24 = V_4;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_24&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		int64_t L_25 = V_4;
		V_5 = (bool)((((int64_t)L_25) < ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_0067;
		}
	}
	{
		V_1 = (((int64_t)((int64_t)1)));
		goto IL_006a;
	}

IL_0067:
	{
		V_1 = (((int64_t)((int64_t)0)));
	}

IL_006a:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_28 = V_3;
		BigInteger_t956758543 * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_dataLength_2();
		V_6 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_0030;
		}
	}
	{
		int64_t L_32 = V_1;
		V_7 = (bool)((!(((uint64_t)L_32) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		BigInteger_t956758543 * L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_dataLength_2();
		V_8 = L_35;
		goto IL_00a4;
	}

IL_0094:
	{
		BigInteger_t956758543 * L_36 = V_0;
		NullCheck(L_36);
		UInt32U5BU5D_t2770800703* L_37 = L_36->get_data_1();
		int32_t L_38 = V_8;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint32_t)(-1));
		int32_t L_39 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00a4:
	{
		int32_t L_40 = V_8;
		V_9 = (bool)((((int32_t)L_40) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_41 = V_9;
		if (L_41)
		{
			goto IL_0094;
		}
	}
	{
		BigInteger_t956758543 * L_42 = V_0;
		NullCheck(L_42);
		L_42->set_dataLength_2(((int32_t)70));
	}

IL_00b9:
	{
		goto IL_00c9;
	}

IL_00bb:
	{
		BigInteger_t956758543 * L_43 = V_0;
		BigInteger_t956758543 * L_44 = L_43;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_dataLength_2();
		NullCheck(L_44);
		L_44->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1)));
	}

IL_00c9:
	{
		BigInteger_t956758543 * L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_dataLength_2();
		if ((((int32_t)L_47) <= ((int32_t)1)))
		{
			goto IL_00e6;
		}
	}
	{
		BigInteger_t956758543 * L_48 = V_0;
		NullCheck(L_48);
		UInt32U5BU5D_t2770800703* L_49 = L_48->get_data_1();
		BigInteger_t956758543 * L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_dataLength_2();
		NullCheck(L_49);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
		uint32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B19_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B19_0 = 0;
	}

IL_00e7:
	{
		V_10 = (bool)G_B19_0;
		bool L_54 = V_10;
		if (L_54)
		{
			goto IL_00bb;
		}
	}
	{
		V_2 = ((int32_t)69);
		BigInteger_t956758543 * L_55 = ___bi10;
		NullCheck(L_55);
		UInt32U5BU5D_t2770800703* L_56 = L_55->get_data_1();
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		BigInteger_t956758543 * L_60 = ___bi21;
		NullCheck(L_60);
		UInt32U5BU5D_t2770800703* L_61 = L_60->get_data_1();
		int32_t L_62 = V_2;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		if ((((int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_64&(int32_t)((int32_t)-2147483648LL))))))
		{
			goto IL_0131;
		}
	}
	{
		BigInteger_t956758543 * L_65 = V_0;
		NullCheck(L_65);
		UInt32U5BU5D_t2770800703* L_66 = L_65->get_data_1();
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		BigInteger_t956758543 * L_70 = ___bi10;
		NullCheck(L_70);
		UInt32U5BU5D_t2770800703* L_71 = L_70->get_data_1();
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B23_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_69&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_74&(int32_t)((int32_t)-2147483648LL)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0132;
	}

IL_0131:
	{
		G_B23_0 = 0;
	}

IL_0132:
	{
		V_11 = (bool)G_B23_0;
		bool L_75 = V_11;
		if (!L_75)
		{
			goto IL_013f;
		}
	}
	{
		ArithmeticException_t4283546778 * L_76 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m479063094(L_76, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76);
	}

IL_013f:
	{
		BigInteger_t956758543 * L_77 = V_0;
		V_12 = L_77;
		goto IL_0144;
	}

IL_0144:
	{
		BigInteger_t956758543 * L_78 = V_12;
		return L_78;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_Multiply_m664707877 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Multiply_m664707877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	BigInteger_t956758543 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint64_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	BigInteger_t956758543 * V_20 = NULL;
	bool V_21 = false;
	int32_t V_22 = 0;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B28_0 = 0;
	int32_t G_B33_0 = 0;
	{
		V_0 = ((int32_t)69);
		V_1 = (bool)0;
		V_2 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			BigInteger_t956758543 * L_0 = ___bi10;
			NullCheck(L_0);
			UInt32U5BU5D_t2770800703* L_1 = L_0->get_data_1();
			int32_t L_2 = V_0;
			NullCheck(L_1);
			int32_t L_3 = L_2;
			uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
			V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
			bool L_5 = V_4;
			if (!L_5)
			{
				goto IL_002c;
			}
		}

IL_0020:
		{
			V_1 = (bool)1;
			BigInteger_t956758543 * L_6 = ___bi10;
			IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
			BigInteger_t956758543 * L_7 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			___bi10 = L_7;
		}

IL_002c:
		{
			BigInteger_t956758543 * L_8 = ___bi21;
			NullCheck(L_8);
			UInt32U5BU5D_t2770800703* L_9 = L_8->get_data_1();
			int32_t L_10 = V_0;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
			bool L_13 = V_5;
			if (!L_13)
			{
				goto IL_004f;
			}
		}

IL_0043:
		{
			V_2 = (bool)1;
			BigInteger_t956758543 * L_14 = ___bi21;
			IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
			BigInteger_t956758543 * L_15 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			___bi21 = L_15;
		}

IL_004f:
		{
			goto IL_0057;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Exception)
		goto IL_0057;
	} // end catch (depth: 1)

IL_0057:
	{
		BigInteger_t956758543 * L_16 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_16, /*hidden argument*/NULL);
		V_3 = L_16;
	}

IL_005d:
	try
	{ // begin try (depth: 1)
		{
			V_6 = 0;
			goto IL_010a;
		}

IL_0066:
		{
			BigInteger_t956758543 * L_17 = ___bi10;
			NullCheck(L_17);
			UInt32U5BU5D_t2770800703* L_18 = L_17->get_data_1();
			int32_t L_19 = V_6;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			V_8 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
			bool L_22 = V_8;
			if (!L_22)
			{
				goto IL_007e;
			}
		}

IL_0079:
		{
			goto IL_0104;
		}

IL_007e:
		{
			V_7 = (((int64_t)((int64_t)0)));
			V_9 = 0;
			int32_t L_23 = V_6;
			V_10 = L_23;
			goto IL_00d4;
		}

IL_008b:
		{
			BigInteger_t956758543 * L_24 = ___bi10;
			NullCheck(L_24);
			UInt32U5BU5D_t2770800703* L_25 = L_24->get_data_1();
			int32_t L_26 = V_6;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			uint32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			BigInteger_t956758543 * L_29 = ___bi21;
			NullCheck(L_29);
			UInt32U5BU5D_t2770800703* L_30 = L_29->get_data_1();
			int32_t L_31 = V_9;
			NullCheck(L_30);
			int32_t L_32 = L_31;
			uint32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
			BigInteger_t956758543 * L_34 = V_3;
			NullCheck(L_34);
			UInt32U5BU5D_t2770800703* L_35 = L_34->get_data_1();
			int32_t L_36 = V_10;
			NullCheck(L_35);
			int32_t L_37 = L_36;
			uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
			uint64_t L_39 = V_7;
			V_11 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((uint64_t)L_28))), (int64_t)(((int64_t)((uint64_t)L_33))))), (int64_t)(((int64_t)((uint64_t)L_38))))), (int64_t)L_39));
			BigInteger_t956758543 * L_40 = V_3;
			NullCheck(L_40);
			UInt32U5BU5D_t2770800703* L_41 = L_40->get_data_1();
			int32_t L_42 = V_10;
			uint64_t L_43 = V_11;
			NullCheck(L_41);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_43&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
			uint64_t L_44 = V_11;
			V_7 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
			int32_t L_45 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
			int32_t L_46 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		}

IL_00d4:
		{
			int32_t L_47 = V_9;
			BigInteger_t956758543 * L_48 = ___bi21;
			NullCheck(L_48);
			int32_t L_49 = L_48->get_dataLength_2();
			V_12 = (bool)((((int32_t)L_47) < ((int32_t)L_49))? 1 : 0);
			bool L_50 = V_12;
			if (L_50)
			{
				goto IL_008b;
			}
		}

IL_00e4:
		{
			uint64_t L_51 = V_7;
			V_13 = (bool)((!(((uint64_t)L_51) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0);
			bool L_52 = V_13;
			if (!L_52)
			{
				goto IL_0103;
			}
		}

IL_00f0:
		{
			BigInteger_t956758543 * L_53 = V_3;
			NullCheck(L_53);
			UInt32U5BU5D_t2770800703* L_54 = L_53->get_data_1();
			int32_t L_55 = V_6;
			BigInteger_t956758543 * L_56 = ___bi21;
			NullCheck(L_56);
			int32_t L_57 = L_56->get_dataLength_2();
			uint64_t L_58 = V_7;
			NullCheck(L_54);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_57))), (uint32_t)(((int32_t)((uint32_t)L_58))));
		}

IL_0103:
		{
		}

IL_0104:
		{
			int32_t L_59 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		}

IL_010a:
		{
			int32_t L_60 = V_6;
			BigInteger_t956758543 * L_61 = ___bi10;
			NullCheck(L_61);
			int32_t L_62 = L_61->get_dataLength_2();
			V_14 = (bool)((((int32_t)L_60) < ((int32_t)L_62))? 1 : 0);
			bool L_63 = V_14;
			if (L_63)
			{
				goto IL_0066;
			}
		}

IL_011d:
		{
			goto IL_012d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0120;
		throw e;
	}

CATCH_0120:
	{ // begin catch(System.Exception)
		ArithmeticException_t4283546778 * L_64 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_64, _stringLiteral265795232, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64);
	} // end catch (depth: 1)

IL_012d:
	{
		BigInteger_t956758543 * L_65 = V_3;
		BigInteger_t956758543 * L_66 = ___bi10;
		NullCheck(L_66);
		int32_t L_67 = L_66->get_dataLength_2();
		BigInteger_t956758543 * L_68 = ___bi21;
		NullCheck(L_68);
		int32_t L_69 = L_68->get_dataLength_2();
		NullCheck(L_65);
		L_65->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)L_69)));
		BigInteger_t956758543 * L_70 = V_3;
		NullCheck(L_70);
		int32_t L_71 = L_70->get_dataLength_2();
		V_15 = (bool)((((int32_t)L_71) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_72 = V_15;
		if (!L_72)
		{
			goto IL_0158;
		}
	}
	{
		BigInteger_t956758543 * L_73 = V_3;
		NullCheck(L_73);
		L_73->set_dataLength_2(((int32_t)70));
	}

IL_0158:
	{
		goto IL_0168;
	}

IL_015a:
	{
		BigInteger_t956758543 * L_74 = V_3;
		BigInteger_t956758543 * L_75 = L_74;
		NullCheck(L_75);
		int32_t L_76 = L_75->get_dataLength_2();
		NullCheck(L_75);
		L_75->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)1)));
	}

IL_0168:
	{
		BigInteger_t956758543 * L_77 = V_3;
		NullCheck(L_77);
		int32_t L_78 = L_77->get_dataLength_2();
		if ((((int32_t)L_78) <= ((int32_t)1)))
		{
			goto IL_0185;
		}
	}
	{
		BigInteger_t956758543 * L_79 = V_3;
		NullCheck(L_79);
		UInt32U5BU5D_t2770800703* L_80 = L_79->get_data_1();
		BigInteger_t956758543 * L_81 = V_3;
		NullCheck(L_81);
		int32_t L_82 = L_81->get_dataLength_2();
		NullCheck(L_80);
		int32_t L_83 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1));
		uint32_t L_84 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		G_B28_0 = ((((int32_t)L_84) == ((int32_t)0))? 1 : 0);
		goto IL_0186;
	}

IL_0185:
	{
		G_B28_0 = 0;
	}

IL_0186:
	{
		V_16 = (bool)G_B28_0;
		bool L_85 = V_16;
		if (L_85)
		{
			goto IL_015a;
		}
	}
	{
		BigInteger_t956758543 * L_86 = V_3;
		NullCheck(L_86);
		UInt32U5BU5D_t2770800703* L_87 = L_86->get_data_1();
		int32_t L_88 = V_0;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_17 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_90&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_91 = V_17;
		if (!L_91)
		{
			goto IL_022d;
		}
	}
	{
		bool L_92 = V_1;
		bool L_93 = V_2;
		if ((((int32_t)L_92) == ((int32_t)L_93)))
		{
			goto IL_01bc;
		}
	}
	{
		BigInteger_t956758543 * L_94 = V_3;
		NullCheck(L_94);
		UInt32U5BU5D_t2770800703* L_95 = L_94->get_data_1();
		int32_t L_96 = V_0;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		G_B33_0 = ((((int32_t)L_98) == ((int32_t)((int32_t)-2147483648LL)))? 1 : 0);
		goto IL_01bd;
	}

IL_01bc:
	{
		G_B33_0 = 0;
	}

IL_01bd:
	{
		V_18 = (bool)G_B33_0;
		bool L_99 = V_18;
		if (!L_99)
		{
			goto IL_0222;
		}
	}
	{
		BigInteger_t956758543 * L_100 = V_3;
		NullCheck(L_100);
		int32_t L_101 = L_100->get_dataLength_2();
		V_19 = (bool)((((int32_t)L_101) == ((int32_t)1))? 1 : 0);
		bool L_102 = V_19;
		if (!L_102)
		{
			goto IL_01d8;
		}
	}
	{
		BigInteger_t956758543 * L_103 = V_3;
		V_20 = L_103;
		goto IL_0249;
	}

IL_01d8:
	{
		V_21 = (bool)1;
		V_22 = 0;
		goto IL_01fe;
	}

IL_01e1:
	{
		BigInteger_t956758543 * L_104 = V_3;
		NullCheck(L_104);
		UInt32U5BU5D_t2770800703* L_105 = L_104->get_data_1();
		int32_t L_106 = V_22;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		uint32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_23 = (bool)((!(((uint32_t)L_108) <= ((uint32_t)0)))? 1 : 0);
		bool L_109 = V_23;
		if (!L_109)
		{
			goto IL_01f7;
		}
	}
	{
		V_21 = (bool)0;
	}

IL_01f7:
	{
		int32_t L_110 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
	}

IL_01fe:
	{
		int32_t L_111 = V_22;
		BigInteger_t956758543 * L_112 = V_3;
		NullCheck(L_112);
		int32_t L_113 = L_112->get_dataLength_2();
		bool L_114 = V_21;
		V_24 = (bool)((int32_t)((int32_t)((((int32_t)L_111) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)1))))? 1 : 0)&(int32_t)L_114));
		bool L_115 = V_24;
		if (L_115)
		{
			goto IL_01e1;
		}
	}
	{
		bool L_116 = V_21;
		V_25 = L_116;
		bool L_117 = V_25;
		if (!L_117)
		{
			goto IL_0220;
		}
	}
	{
		BigInteger_t956758543 * L_118 = V_3;
		V_20 = L_118;
		goto IL_0249;
	}

IL_0220:
	{
	}

IL_0222:
	{
		ArithmeticException_t4283546778 * L_119 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_119, _stringLiteral265795232, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_119);
	}

IL_022d:
	{
		bool L_120 = V_1;
		bool L_121 = V_2;
		V_26 = (bool)((((int32_t)((((int32_t)L_120) == ((int32_t)L_121))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_122 = V_26;
		if (!L_122)
		{
			goto IL_0244;
		}
	}
	{
		BigInteger_t956758543 * L_123 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_124 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_123, /*hidden argument*/NULL);
		V_20 = L_124;
		goto IL_0249;
	}

IL_0244:
	{
		BigInteger_t956758543 * L_125 = V_3;
		V_20 = L_125;
		goto IL_0249;
	}

IL_0249:
	{
		BigInteger_t956758543 * L_126 = V_20;
		return L_126;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
extern "C"  BigInteger_t956758543 * BigInteger_op_LeftShift_m2731198774 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, int32_t ___shiftVal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_LeftShift_m2731198774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	{
		BigInteger_t956758543 * L_0 = ___bi10;
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m497354907(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BigInteger_t956758543 * L_2 = V_0;
		BigInteger_t956758543 * L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_t2770800703* L_4 = L_3->get_data_1();
		int32_t L_5 = ___shiftVal1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		int32_t L_6 = BigInteger_shiftLeft_m952412684(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_dataLength_2(L_6);
		BigInteger_t956758543 * L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		BigInteger_t956758543 * L_8 = V_1;
		return L_8;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
extern "C"  int32_t BigInteger_shiftLeft_m952412684 (RuntimeObject * __this /* static, unused */, UInt32U5BU5D_t2770800703* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = ((int32_t)32);
		UInt32U5BU5D_t2770800703* L_0 = ___buffer0;
		NullCheck(L_0);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		goto IL_000e;
	}

IL_000a:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
	}

IL_000e:
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_3 = ___buffer0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B5_0 = 0;
	}

IL_001d:
	{
		V_2 = (bool)G_B5_0;
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_8 = ___shiftVal1;
		V_3 = L_8;
		goto IL_00a2;
	}

IL_0025:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = V_0;
		V_5 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_12 = V_3;
		V_0 = L_12;
	}

IL_0032:
	{
		V_4 = (((int64_t)((int64_t)0)));
		V_6 = 0;
		goto IL_0067;
	}

IL_003b:
	{
		UInt32U5BU5D_t2770800703* L_13 = ___buffer0;
		int32_t L_14 = V_6;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_0;
		V_7 = ((int64_t)((int64_t)(((int64_t)((uint64_t)L_16)))<<(int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)63)))));
		uint64_t L_18 = V_7;
		uint64_t L_19 = V_4;
		V_7 = ((int64_t)((int64_t)L_18|(int64_t)L_19));
		UInt32U5BU5D_t2770800703* L_20 = ___buffer0;
		int32_t L_21 = V_6;
		uint64_t L_22 = V_7;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_22&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		uint64_t L_23 = V_7;
		V_4 = ((int64_t)((uint64_t)L_23>>((int32_t)32)));
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0067:
	{
		int32_t L_25 = V_6;
		int32_t L_26 = V_1;
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_003b;
		}
	}
	{
		uint64_t L_28 = V_4;
		V_9 = (bool)((!(((uint64_t)L_28) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_30 = V_1;
		UInt32U5BU5D_t2770800703* L_31 = ___buffer0;
		NullCheck(L_31);
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1))) > ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_009c;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_33 = ___buffer0;
		int32_t L_34 = V_1;
		uint64_t L_35 = V_4;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint32_t)(((int32_t)((uint32_t)L_35))));
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_009c:
	{
	}

IL_009d:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38));
	}

IL_00a2:
	{
		int32_t L_39 = V_3;
		V_11 = (bool)((((int32_t)L_39) > ((int32_t)0))? 1 : 0);
		bool L_40 = V_11;
		if (L_40)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_41 = V_1;
		V_12 = L_41;
		goto IL_00b4;
	}

IL_00b4:
	{
		int32_t L_42 = V_12;
		return L_42;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
extern "C"  int32_t BigInteger_shiftRight_m1897315128 (RuntimeObject * __this /* static, unused */, UInt32U5BU5D_t2770800703* ___buffer0, int32_t ___shiftVal1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B19_0 = 0;
	{
		V_0 = ((int32_t)32);
		V_1 = 0;
		UInt32U5BU5D_t2770800703* L_0 = ___buffer0;
		NullCheck(L_0);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		goto IL_0010;
	}

IL_000c:
	{
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
	}

IL_0010:
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_3 = ___buffer0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B5_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 0;
	}

IL_001f:
	{
		V_3 = (bool)G_B5_0;
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_8 = ___shiftVal1;
		V_4 = L_8;
		goto IL_008c;
	}

IL_0028:
	{
		int32_t L_9 = V_4;
		int32_t L_10 = V_0;
		V_6 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = V_4;
		V_0 = L_12;
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_13));
	}

IL_003e:
	{
		V_5 = (((int64_t)((int64_t)0)));
		int32_t L_14 = V_2;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
		goto IL_0077;
	}

IL_0049:
	{
		UInt32U5BU5D_t2770800703* L_15 = ___buffer0;
		int32_t L_16 = V_7;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = V_0;
		V_8 = ((int64_t)((uint64_t)(((int64_t)((uint64_t)L_18)))>>((int32_t)((int32_t)L_19&(int32_t)((int32_t)63)))));
		uint64_t L_20 = V_8;
		uint64_t L_21 = V_5;
		V_8 = ((int64_t)((int64_t)L_20|(int64_t)L_21));
		UInt32U5BU5D_t2770800703* L_22 = ___buffer0;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = V_1;
		V_5 = ((int64_t)((int64_t)(((int64_t)((uint64_t)L_25)))<<(int32_t)((int32_t)((int32_t)L_26&(int32_t)((int32_t)63)))));
		UInt32U5BU5D_t2770800703* L_27 = ___buffer0;
		int32_t L_28 = V_7;
		uint64_t L_29 = V_8;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)(((int32_t)((uint32_t)L_29))));
		int32_t L_30 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
	}

IL_0077:
	{
		int32_t L_31 = V_7;
		V_9 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_9;
		if (L_32)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_34));
	}

IL_008c:
	{
		int32_t L_35 = V_4;
		V_10 = (bool)((((int32_t)L_35) > ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (L_36)
		{
			goto IL_0028;
		}
	}
	{
		goto IL_009d;
	}

IL_0099:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
	}

IL_009d:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) <= ((int32_t)1)))
		{
			goto IL_00ab;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_39 = ___buffer0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1));
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B19_0 = ((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B19_0 = 0;
	}

IL_00ac:
	{
		V_11 = (bool)G_B19_0;
		bool L_43 = V_11;
		if (L_43)
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_44 = V_2;
		V_12 = L_44;
		goto IL_00b7;
	}

IL_00b7:
	{
		int32_t L_45 = V_12;
		return L_45;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_UnaryNegation_m3272019706 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_UnaryNegation_m3272019706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	BigInteger_t956758543 * V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
	{
		BigInteger_t956758543 * L_0 = ___bi10;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_dataLength_2();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		BigInteger_t956758543 * L_2 = ___bi10;
		NullCheck(L_2);
		UInt32U5BU5D_t2770800703* L_3 = L_2->get_data_1();
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_4 = (bool)G_B3_0;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		BigInteger_t956758543 * L_7 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_7, /*hidden argument*/NULL);
		V_5 = L_7;
		goto IL_010c;
	}

IL_002a:
	{
		BigInteger_t956758543 * L_8 = ___bi10;
		BigInteger_t956758543 * L_9 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m497354907(L_9, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		V_6 = 0;
		goto IL_004f;
	}

IL_0036:
	{
		BigInteger_t956758543 * L_10 = V_0;
		NullCheck(L_10);
		UInt32U5BU5D_t2770800703* L_11 = L_10->get_data_1();
		int32_t L_12 = V_6;
		BigInteger_t956758543 * L_13 = ___bi10;
		NullCheck(L_13);
		UInt32U5BU5D_t2770800703* L_14 = L_13->get_data_1();
		int32_t L_15 = V_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)((~L_17)));
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_19 = V_6;
		V_7 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_20 = V_7;
		if (L_20)
		{
			goto IL_0036;
		}
	}
	{
		V_2 = (((int64_t)((int64_t)1)));
		V_3 = 0;
		goto IL_0089;
	}

IL_0062:
	{
		BigInteger_t956758543 * L_21 = V_0;
		NullCheck(L_21);
		UInt32U5BU5D_t2770800703* L_22 = L_21->get_data_1();
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_1 = (((int64_t)((uint64_t)L_25)));
		int64_t L_26 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, (int64_t)(((int64_t)((int64_t)1)))));
		BigInteger_t956758543 * L_27 = V_0;
		NullCheck(L_27);
		UInt32U5BU5D_t2770800703* L_28 = L_27->get_data_1();
		int32_t L_29 = V_3;
		int64_t L_30 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_30&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		int64_t L_31 = V_1;
		V_2 = ((int64_t)((int64_t)L_31>>(int32_t)((int32_t)32)));
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0089:
	{
		int64_t L_33 = V_2;
		if (!L_33)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_34 = V_3;
		G_B13_0 = ((((int32_t)L_34) < ((int32_t)((int32_t)70)))? 1 : 0);
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 0;
	}

IL_0094:
	{
		V_8 = (bool)G_B13_0;
		bool L_35 = V_8;
		if (L_35)
		{
			goto IL_0062;
		}
	}
	{
		BigInteger_t956758543 * L_36 = ___bi10;
		NullCheck(L_36);
		UInt32U5BU5D_t2770800703* L_37 = L_36->get_data_1();
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)69);
		uint32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		BigInteger_t956758543 * L_40 = V_0;
		NullCheck(L_40);
		UInt32U5BU5D_t2770800703* L_41 = L_40->get_data_1();
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)69);
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_9 = (bool)((((int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)-2147483648LL)))))? 1 : 0);
		bool L_44 = V_9;
		if (!L_44)
		{
			goto IL_00cb;
		}
	}
	{
		ArithmeticException_t4283546778 * L_45 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_45, _stringLiteral3910125420, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45);
	}

IL_00cb:
	{
		BigInteger_t956758543 * L_46 = V_0;
		NullCheck(L_46);
		L_46->set_dataLength_2(((int32_t)70));
		goto IL_00e3;
	}

IL_00d5:
	{
		BigInteger_t956758543 * L_47 = V_0;
		BigInteger_t956758543 * L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_dataLength_2();
		NullCheck(L_48);
		L_48->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1)));
	}

IL_00e3:
	{
		BigInteger_t956758543 * L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_dataLength_2();
		if ((((int32_t)L_51) <= ((int32_t)1)))
		{
			goto IL_0100;
		}
	}
	{
		BigInteger_t956758543 * L_52 = V_0;
		NullCheck(L_52);
		UInt32U5BU5D_t2770800703* L_53 = L_52->get_data_1();
		BigInteger_t956758543 * L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_dataLength_2();
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1));
		uint32_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		G_B21_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B21_0 = 0;
	}

IL_0101:
	{
		V_10 = (bool)G_B21_0;
		bool L_58 = V_10;
		if (L_58)
		{
			goto IL_00d5;
		}
	}
	{
		BigInteger_t956758543 * L_59 = V_0;
		V_5 = L_59;
		goto IL_010c;
	}

IL_010c:
	{
		BigInteger_t956758543 * L_60 = V_5;
		return L_60;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_Equality_m4107706715 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		BigInteger_t956758543 * L_0 = ___bi10;
		BigInteger_t956758543 * L_1 = ___bi21;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m3600662586 (BigInteger_t956758543 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_Equals_m3600662586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		RuntimeObject * L_0 = ___o0;
		V_0 = ((BigInteger_t956758543 *)CastclassClass((RuntimeObject*)L_0, BigInteger_t956758543_il2cpp_TypeInfo_var));
		int32_t L_1 = __this->get_dataLength_2();
		BigInteger_t956758543 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_dataLength_2();
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_005d;
	}

IL_0021:
	{
		V_3 = 0;
		goto IL_004a;
	}

IL_0025:
	{
		UInt32U5BU5D_t2770800703* L_5 = __this->get_data_1();
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		BigInteger_t956758543 * L_9 = V_0;
		NullCheck(L_9);
		UInt32U5BU5D_t2770800703* L_10 = L_9->get_data_1();
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0045;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_005d;
	}

IL_0045:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = __this->get_dataLength_2();
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0025;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_005d;
	}

IL_005d:
	{
		bool L_19 = V_2;
		return L_19;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m1015205030 (BigInteger_t956758543 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m2988481195 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		V_0 = ((int32_t)69);
		BigInteger_t956758543 * L_0 = ___bi10;
		NullCheck(L_0);
		UInt32U5BU5D_t2770800703* L_1 = L_0->get_data_1();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_t956758543 * L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t2770800703* L_6 = L_5->get_data_1();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0033:
	{
		BigInteger_t956758543 * L_11 = ___bi10;
		NullCheck(L_11);
		UInt32U5BU5D_t2770800703* L_12 = L_11->get_data_1();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (((int32_t)((int32_t)L_15&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0056;
		}
	}
	{
		BigInteger_t956758543 * L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t2770800703* L_17 = L_16->get_data_1();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B8_0 = ((!(((uint32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_4 = (bool)G_B8_0;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0061;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_0061:
	{
		BigInteger_t956758543 * L_22 = ___bi10;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_dataLength_2();
		BigInteger_t956758543 * L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_dataLength_2();
		if ((((int32_t)L_23) > ((int32_t)L_25)))
		{
			goto IL_0077;
		}
	}
	{
		BigInteger_t956758543 * L_26 = ___bi21;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_dataLength_2();
		G_B13_0 = L_27;
		goto IL_007d;
	}

IL_0077:
	{
		BigInteger_t956758543 * L_28 = ___bi10;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_dataLength_2();
		G_B13_0 = L_29;
	}

IL_007d:
	{
		V_1 = G_B13_0;
		int32_t L_30 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
		goto IL_0089;
	}

IL_0084:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		BigInteger_t956758543 * L_33 = ___bi10;
		NullCheck(L_33);
		UInt32U5BU5D_t2770800703* L_34 = L_33->get_data_1();
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		BigInteger_t956758543 * L_38 = ___bi21;
		NullCheck(L_38);
		UInt32U5BU5D_t2770800703* L_39 = L_38->get_data_1();
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B18_0 = ((((int32_t)L_37) == ((int32_t)L_42))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B18_0 = 0;
	}

IL_00a2:
	{
		V_5 = (bool)G_B18_0;
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_44 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		BigInteger_t956758543 * L_46 = ___bi10;
		NullCheck(L_46);
		UInt32U5BU5D_t2770800703* L_47 = L_46->get_data_1();
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		BigInteger_t956758543 * L_51 = ___bi21;
		NullCheck(L_51);
		UInt32U5BU5D_t2770800703* L_52 = L_51->get_data_1();
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_7 = (bool)((!(((uint32_t)L_50) <= ((uint32_t)L_55)))? 1 : 0);
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_00d2;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_00d2:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00d6:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_57 = V_3;
		return L_57;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m1529345678 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		V_0 = ((int32_t)69);
		BigInteger_t956758543 * L_0 = ___bi10;
		NullCheck(L_0);
		UInt32U5BU5D_t2770800703* L_1 = L_0->get_data_1();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0027;
		}
	}
	{
		BigInteger_t956758543 * L_5 = ___bi21;
		NullCheck(L_5);
		UInt32U5BU5D_t2770800703* L_6 = L_5->get_data_1();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_2 = (bool)G_B3_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_0033:
	{
		BigInteger_t956758543 * L_11 = ___bi10;
		NullCheck(L_11);
		UInt32U5BU5D_t2770800703* L_12 = L_11->get_data_1();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if (((int32_t)((int32_t)L_15&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_0056;
		}
	}
	{
		BigInteger_t956758543 * L_16 = ___bi21;
		NullCheck(L_16);
		UInt32U5BU5D_t2770800703* L_17 = L_16->get_data_1();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B8_0 = ((!(((uint32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 0;
	}

IL_0057:
	{
		V_4 = (bool)G_B8_0;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0061;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0061:
	{
		BigInteger_t956758543 * L_22 = ___bi10;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_dataLength_2();
		BigInteger_t956758543 * L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_dataLength_2();
		if ((((int32_t)L_23) > ((int32_t)L_25)))
		{
			goto IL_0077;
		}
	}
	{
		BigInteger_t956758543 * L_26 = ___bi21;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_dataLength_2();
		G_B13_0 = L_27;
		goto IL_007d;
	}

IL_0077:
	{
		BigInteger_t956758543 * L_28 = ___bi10;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_dataLength_2();
		G_B13_0 = L_29;
	}

IL_007d:
	{
		V_1 = G_B13_0;
		int32_t L_30 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
		goto IL_0089;
	}

IL_0084:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		BigInteger_t956758543 * L_33 = ___bi10;
		NullCheck(L_33);
		UInt32U5BU5D_t2770800703* L_34 = L_33->get_data_1();
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint32_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		BigInteger_t956758543 * L_38 = ___bi21;
		NullCheck(L_38);
		UInt32U5BU5D_t2770800703* L_39 = L_38->get_data_1();
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B18_0 = ((((int32_t)L_37) == ((int32_t)L_42))? 1 : 0);
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B18_0 = 0;
	}

IL_00a2:
	{
		V_5 = (bool)G_B18_0;
		bool L_43 = V_5;
		if (L_43)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_44 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_44) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_00d6;
		}
	}
	{
		BigInteger_t956758543 * L_46 = ___bi10;
		NullCheck(L_46);
		UInt32U5BU5D_t2770800703* L_47 = L_46->get_data_1();
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		BigInteger_t956758543 * L_51 = ___bi21;
		NullCheck(L_51);
		UInt32U5BU5D_t2770800703* L_52 = L_51->get_data_1();
		int32_t L_53 = V_0;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_7 = (bool)((!(((uint32_t)L_50) >= ((uint32_t)L_55)))? 1 : 0);
		bool L_56 = V_7;
		if (!L_56)
		{
			goto IL_00d2;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_00da;
	}

IL_00d2:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00d6:
	{
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_57 = V_3;
		return L_57;
	}
}
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m1973220735 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_GreaterThanOrEqual_m1973220735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		BigInteger_t956758543 * L_0 = ___bi10;
		BigInteger_t956758543 * L_1 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_2 = BigInteger_op_Equality_m4107706715(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		BigInteger_t956758543 * L_3 = ___bi10;
		BigInteger_t956758543 * L_4 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_5 = BigInteger_op_GreaterThan_m2988481195(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger_multiByteDivide_m635723330 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, BigInteger_t956758543 * ___outQuotient2, BigInteger_t956758543 * ___outRemainder3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_multiByteDivide_m635723330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t2770800703* V_0 = NULL;
	int32_t V_1 = 0;
	UInt32U5BU5D_t2770800703* V_2 = NULL;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	int32_t V_11 = 0;
	UInt32U5BU5D_t2770800703* V_12 = NULL;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	bool V_20 = false;
	BigInteger_t956758543 * V_21 = NULL;
	BigInteger_t956758543 * V_22 = NULL;
	BigInteger_t956758543 * V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	bool V_28 = false;
	bool V_29 = false;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	int32_t V_33 = 0;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B42_0 = 0;
	{
		V_0 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70)));
		BigInteger_t956758543 * L_0 = ___bi10;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_dataLength_2();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		int32_t L_2 = V_1;
		V_2 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)L_2));
		V_3 = ((int32_t)-2147483648LL);
		BigInteger_t956758543 * L_3 = ___bi21;
		NullCheck(L_3);
		UInt32U5BU5D_t2770800703* L_4 = L_3->get_data_1();
		BigInteger_t956758543 * L_5 = ___bi21;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_dataLength_2();
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		uint32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		V_5 = 0;
		V_6 = 0;
		goto IL_0044;
	}

IL_0038:
	{
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		uint32_t L_10 = V_3;
		V_3 = ((int32_t)((uint32_t)L_10>>1));
	}

IL_0044:
	{
		uint32_t L_11 = V_3;
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_12 = V_4;
		uint32_t L_13 = V_3;
		G_B5_0 = ((((int32_t)((int32_t)((int32_t)L_12&(int32_t)L_13))) == ((int32_t)0))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 0;
	}

IL_0051:
	{
		V_14 = (bool)G_B5_0;
		bool L_14 = V_14;
		if (L_14)
		{
			goto IL_0038;
		}
	}
	{
		V_15 = 0;
		goto IL_006f;
	}

IL_005c:
	{
		UInt32U5BU5D_t2770800703* L_15 = V_2;
		int32_t L_16 = V_15;
		BigInteger_t956758543 * L_17 = ___bi10;
		NullCheck(L_17);
		UInt32U5BU5D_t2770800703* L_18 = L_17->get_data_1();
		int32_t L_19 = V_15;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)L_21);
		int32_t L_22 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_23 = V_15;
		BigInteger_t956758543 * L_24 = ___bi10;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_dataLength_2();
		V_16 = (bool)((((int32_t)L_23) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_16;
		if (L_26)
		{
			goto IL_005c;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_27 = V_2;
		int32_t L_28 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_shiftLeft_m952412684(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_29 = ___bi21;
		int32_t L_30 = V_5;
		BigInteger_t956758543 * L_31 = BigInteger_op_LeftShift_m2731198774(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		___bi21 = L_31;
		int32_t L_32 = V_1;
		BigInteger_t956758543 * L_33 = ___bi21;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_dataLength_2();
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_34));
		int32_t L_35 = V_1;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1));
		BigInteger_t956758543 * L_36 = ___bi21;
		NullCheck(L_36);
		UInt32U5BU5D_t2770800703* L_37 = L_36->get_data_1();
		BigInteger_t956758543 * L_38 = ___bi21;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_dataLength_2();
		NullCheck(L_37);
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
		uint32_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_9 = (((int64_t)((uint64_t)L_41)));
		BigInteger_t956758543 * L_42 = ___bi21;
		NullCheck(L_42);
		UInt32U5BU5D_t2770800703* L_43 = L_42->get_data_1();
		BigInteger_t956758543 * L_44 = ___bi21;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_dataLength_2();
		NullCheck(L_43);
		int32_t L_46 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)2));
		uint32_t L_47 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_10 = (((int64_t)((uint64_t)L_47)));
		BigInteger_t956758543 * L_48 = ___bi21;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_dataLength_2();
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		int32_t L_50 = V_11;
		V_12 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)L_50));
		goto IL_0215;
	}

IL_00dd:
	{
		UInt32U5BU5D_t2770800703* L_51 = V_2;
		int32_t L_52 = V_8;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		uint32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		UInt32U5BU5D_t2770800703* L_55 = V_2;
		int32_t L_56 = V_8;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)1));
		uint32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_54)))<<(int32_t)((int32_t)32))), (int64_t)(((int64_t)((uint64_t)L_58)))));
		uint64_t L_59 = V_17;
		uint64_t L_60 = V_9;
		V_18 = ((int64_t)((uint64_t)(int64_t)L_59/(uint64_t)(int64_t)L_60));
		uint64_t L_61 = V_17;
		uint64_t L_62 = V_9;
		V_19 = ((int64_t)((uint64_t)(int64_t)L_61%(uint64_t)(int64_t)L_62));
		V_20 = (bool)0;
		goto IL_0158;
	}

IL_0103:
	{
		V_20 = (bool)1;
		uint64_t L_63 = V_18;
		if ((((int64_t)L_63) == ((int64_t)((int64_t)4294967296LL))))
		{
			goto IL_012a;
		}
	}
	{
		uint64_t L_64 = V_18;
		uint64_t L_65 = V_10;
		uint64_t L_66 = V_19;
		UInt32U5BU5D_t2770800703* L_67 = V_2;
		int32_t L_68 = V_8;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)2));
		uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		G_B14_0 = ((!(((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65))) <= ((uint64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_66<<(int32_t)((int32_t)32))), (int64_t)(((int64_t)((uint64_t)L_70))))))))? 1 : 0);
		goto IL_012b;
	}

IL_012a:
	{
		G_B14_0 = 1;
	}

IL_012b:
	{
		V_24 = (bool)G_B14_0;
		bool L_71 = V_24;
		if (!L_71)
		{
			goto IL_0157;
		}
	}
	{
		uint64_t L_72 = V_18;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_72, (int64_t)(((int64_t)((int64_t)1)))));
		uint64_t L_73 = V_19;
		uint64_t L_74 = V_9;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_73, (int64_t)L_74));
		uint64_t L_75 = V_19;
		V_25 = (bool)((!(((uint64_t)L_75) >= ((uint64_t)((int64_t)4294967296LL))))? 1 : 0);
		bool L_76 = V_25;
		if (!L_76)
		{
			goto IL_0156;
		}
	}
	{
		V_20 = (bool)0;
	}

IL_0156:
	{
	}

IL_0157:
	{
	}

IL_0158:
	{
		bool L_77 = V_20;
		V_26 = (bool)((((int32_t)L_77) == ((int32_t)0))? 1 : 0);
		bool L_78 = V_26;
		if (L_78)
		{
			goto IL_0103;
		}
	}
	{
		V_27 = 0;
		goto IL_017a;
	}

IL_0168:
	{
		UInt32U5BU5D_t2770800703* L_79 = V_12;
		int32_t L_80 = V_27;
		UInt32U5BU5D_t2770800703* L_81 = V_2;
		int32_t L_82 = V_8;
		int32_t L_83 = V_27;
		NullCheck(L_81);
		int32_t L_84 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)L_83));
		uint32_t L_85 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (uint32_t)L_85);
		int32_t L_86 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_017a:
	{
		int32_t L_87 = V_27;
		int32_t L_88 = V_11;
		V_28 = (bool)((((int32_t)L_87) < ((int32_t)L_88))? 1 : 0);
		bool L_89 = V_28;
		if (L_89)
		{
			goto IL_0168;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_90 = V_12;
		BigInteger_t956758543 * L_91 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m3091364386(L_91, L_90, /*hidden argument*/NULL);
		V_21 = L_91;
		BigInteger_t956758543 * L_92 = ___bi21;
		uint64_t L_93 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_94 = BigInteger_op_Implicit_m1457317411(NULL /*static, unused*/, L_93, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_95 = BigInteger_op_Multiply_m664707877(NULL /*static, unused*/, L_92, L_94, /*hidden argument*/NULL);
		V_22 = L_95;
		goto IL_01b3;
	}

IL_01a0:
	{
		uint64_t L_96 = V_18;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_96, (int64_t)(((int64_t)((int64_t)1)))));
		BigInteger_t956758543 * L_97 = V_22;
		BigInteger_t956758543 * L_98 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_99 = BigInteger_op_Subtraction_m1996860654(NULL /*static, unused*/, L_97, L_98, /*hidden argument*/NULL);
		V_22 = L_99;
	}

IL_01b3:
	{
		BigInteger_t956758543 * L_100 = V_22;
		BigInteger_t956758543 * L_101 = V_21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_102 = BigInteger_op_GreaterThan_m2988481195(NULL /*static, unused*/, L_100, L_101, /*hidden argument*/NULL);
		V_29 = L_102;
		bool L_103 = V_29;
		if (L_103)
		{
			goto IL_01a0;
		}
	}
	{
		BigInteger_t956758543 * L_104 = V_21;
		BigInteger_t956758543 * L_105 = V_22;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_106 = BigInteger_op_Subtraction_m1996860654(NULL /*static, unused*/, L_104, L_105, /*hidden argument*/NULL);
		V_23 = L_106;
		V_30 = 0;
		goto IL_01f0;
	}

IL_01d2:
	{
		UInt32U5BU5D_t2770800703* L_107 = V_2;
		int32_t L_108 = V_8;
		int32_t L_109 = V_30;
		BigInteger_t956758543 * L_110 = V_23;
		NullCheck(L_110);
		UInt32U5BU5D_t2770800703* L_111 = L_110->get_data_1();
		BigInteger_t956758543 * L_112 = ___bi21;
		NullCheck(L_112);
		int32_t L_113 = L_112->get_dataLength_2();
		int32_t L_114 = V_30;
		NullCheck(L_111);
		int32_t L_115 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)L_114));
		uint32_t L_116 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_108, (int32_t)L_109))), (uint32_t)L_116);
		int32_t L_117 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
	}

IL_01f0:
	{
		int32_t L_118 = V_30;
		int32_t L_119 = V_11;
		V_31 = (bool)((((int32_t)L_118) < ((int32_t)L_119))? 1 : 0);
		bool L_120 = V_31;
		if (L_120)
		{
			goto IL_01d2;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_121 = V_0;
		int32_t L_122 = V_6;
		int32_t L_123 = L_122;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
		uint64_t L_124 = V_18;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (uint32_t)(((int32_t)((uint32_t)L_124))));
		int32_t L_125 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_125, (int32_t)1));
		int32_t L_126 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_126, (int32_t)1));
	}

IL_0215:
	{
		int32_t L_127 = V_7;
		V_32 = (bool)((((int32_t)L_127) > ((int32_t)0))? 1 : 0);
		bool L_128 = V_32;
		if (L_128)
		{
			goto IL_00dd;
		}
	}
	{
		BigInteger_t956758543 * L_129 = ___outQuotient2;
		int32_t L_130 = V_6;
		NullCheck(L_129);
		L_129->set_dataLength_2(L_130);
		V_13 = 0;
		BigInteger_t956758543 * L_131 = ___outQuotient2;
		NullCheck(L_131);
		int32_t L_132 = L_131->get_dataLength_2();
		V_33 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_132, (int32_t)1));
		goto IL_0253;
	}

IL_023a:
	{
		BigInteger_t956758543 * L_133 = ___outQuotient2;
		NullCheck(L_133);
		UInt32U5BU5D_t2770800703* L_134 = L_133->get_data_1();
		int32_t L_135 = V_13;
		UInt32U5BU5D_t2770800703* L_136 = V_0;
		int32_t L_137 = V_33;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		uint32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(L_135), (uint32_t)L_139);
		int32_t L_140 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_140, (int32_t)1));
		int32_t L_141 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)1));
	}

IL_0253:
	{
		int32_t L_142 = V_33;
		V_34 = (bool)((((int32_t)((((int32_t)L_142) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_143 = V_34;
		if (L_143)
		{
			goto IL_023a;
		}
	}
	{
		goto IL_0273;
	}

IL_0263:
	{
		BigInteger_t956758543 * L_144 = ___outQuotient2;
		NullCheck(L_144);
		UInt32U5BU5D_t2770800703* L_145 = L_144->get_data_1();
		int32_t L_146 = V_13;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(L_146), (uint32_t)0);
		int32_t L_147 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)1));
	}

IL_0273:
	{
		int32_t L_148 = V_13;
		V_35 = (bool)((((int32_t)L_148) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_149 = V_35;
		if (L_149)
		{
			goto IL_0263;
		}
	}
	{
		goto IL_028f;
	}

IL_0281:
	{
		BigInteger_t956758543 * L_150 = ___outQuotient2;
		BigInteger_t956758543 * L_151 = L_150;
		NullCheck(L_151);
		int32_t L_152 = L_151->get_dataLength_2();
		NullCheck(L_151);
		L_151->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_152, (int32_t)1)));
	}

IL_028f:
	{
		BigInteger_t956758543 * L_153 = ___outQuotient2;
		NullCheck(L_153);
		int32_t L_154 = L_153->get_dataLength_2();
		if ((((int32_t)L_154) <= ((int32_t)1)))
		{
			goto IL_02ac;
		}
	}
	{
		BigInteger_t956758543 * L_155 = ___outQuotient2;
		NullCheck(L_155);
		UInt32U5BU5D_t2770800703* L_156 = L_155->get_data_1();
		BigInteger_t956758543 * L_157 = ___outQuotient2;
		NullCheck(L_157);
		int32_t L_158 = L_157->get_dataLength_2();
		NullCheck(L_156);
		int32_t L_159 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_158, (int32_t)1));
		uint32_t L_160 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		G_B42_0 = ((((int32_t)L_160) == ((int32_t)0))? 1 : 0);
		goto IL_02ad;
	}

IL_02ac:
	{
		G_B42_0 = 0;
	}

IL_02ad:
	{
		V_36 = (bool)G_B42_0;
		bool L_161 = V_36;
		if (L_161)
		{
			goto IL_0281;
		}
	}
	{
		BigInteger_t956758543 * L_162 = ___outQuotient2;
		NullCheck(L_162);
		int32_t L_163 = L_162->get_dataLength_2();
		V_37 = (bool)((((int32_t)L_163) == ((int32_t)0))? 1 : 0);
		bool L_164 = V_37;
		if (!L_164)
		{
			goto IL_02c9;
		}
	}
	{
		BigInteger_t956758543 * L_165 = ___outQuotient2;
		NullCheck(L_165);
		L_165->set_dataLength_2(1);
	}

IL_02c9:
	{
		BigInteger_t956758543 * L_166 = ___outRemainder3;
		UInt32U5BU5D_t2770800703* L_167 = V_2;
		int32_t L_168 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		int32_t L_169 = BigInteger_shiftRight_m1897315128(NULL /*static, unused*/, L_167, L_168, /*hidden argument*/NULL);
		NullCheck(L_166);
		L_166->set_dataLength_2(L_169);
		V_13 = 0;
		goto IL_02ef;
	}

IL_02dc:
	{
		BigInteger_t956758543 * L_170 = ___outRemainder3;
		NullCheck(L_170);
		UInt32U5BU5D_t2770800703* L_171 = L_170->get_data_1();
		int32_t L_172 = V_13;
		UInt32U5BU5D_t2770800703* L_173 = V_2;
		int32_t L_174 = V_13;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		uint32_t L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(L_172), (uint32_t)L_176);
		int32_t L_177 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_177, (int32_t)1));
	}

IL_02ef:
	{
		int32_t L_178 = V_13;
		BigInteger_t956758543 * L_179 = ___outRemainder3;
		NullCheck(L_179);
		int32_t L_180 = L_179->get_dataLength_2();
		V_38 = (bool)((((int32_t)L_178) < ((int32_t)L_180))? 1 : 0);
		bool L_181 = V_38;
		if (L_181)
		{
			goto IL_02dc;
		}
	}
	{
		goto IL_0311;
	}

IL_0301:
	{
		BigInteger_t956758543 * L_182 = ___outRemainder3;
		NullCheck(L_182);
		UInt32U5BU5D_t2770800703* L_183 = L_182->get_data_1();
		int32_t L_184 = V_13;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(L_184), (uint32_t)0);
		int32_t L_185 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_185, (int32_t)1));
	}

IL_0311:
	{
		int32_t L_186 = V_13;
		V_39 = (bool)((((int32_t)L_186) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_187 = V_39;
		if (L_187)
		{
			goto IL_0301;
		}
	}
	{
		return;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger_singleByteDivide_m972382485 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, BigInteger_t956758543 * ___outQuotient2, BigInteger_t956758543 * ___outRemainder3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_singleByteDivide_m972382485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t2770800703* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
	{
		V_0 = ((UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)70)));
		V_1 = 0;
		V_6 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		BigInteger_t956758543 * L_0 = ___outRemainder3;
		NullCheck(L_0);
		UInt32U5BU5D_t2770800703* L_1 = L_0->get_data_1();
		int32_t L_2 = V_6;
		BigInteger_t956758543 * L_3 = ___bi10;
		NullCheck(L_3);
		UInt32U5BU5D_t2770800703* L_4 = L_3->get_data_1();
		int32_t L_5 = V_6;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)L_7);
		int32_t L_8 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_6;
		V_7 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_10 = V_7;
		if (L_10)
		{
			goto IL_0010;
		}
	}
	{
		BigInteger_t956758543 * L_11 = ___outRemainder3;
		BigInteger_t956758543 * L_12 = ___bi10;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_dataLength_2();
		NullCheck(L_11);
		L_11->set_dataLength_2(L_13);
		goto IL_0050;
	}

IL_0042:
	{
		BigInteger_t956758543 * L_14 = ___outRemainder3;
		BigInteger_t956758543 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_dataLength_2();
		NullCheck(L_15);
		L_15->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)));
	}

IL_0050:
	{
		BigInteger_t956758543 * L_17 = ___outRemainder3;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_dataLength_2();
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_006d;
		}
	}
	{
		BigInteger_t956758543 * L_19 = ___outRemainder3;
		NullCheck(L_19);
		UInt32U5BU5D_t2770800703* L_20 = L_19->get_data_1();
		BigInteger_t956758543 * L_21 = ___outRemainder3;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_dataLength_2();
		NullCheck(L_20);
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
		uint32_t L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B8_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B8_0 = 0;
	}

IL_006e:
	{
		V_8 = (bool)G_B8_0;
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_0042;
		}
	}
	{
		BigInteger_t956758543 * L_26 = ___bi21;
		NullCheck(L_26);
		UInt32U5BU5D_t2770800703* L_27 = L_26->get_data_1();
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_2 = (((int64_t)((uint64_t)L_29)));
		BigInteger_t956758543 * L_30 = ___outRemainder3;
		NullCheck(L_30);
		int32_t L_31 = L_30->get_dataLength_2();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
		BigInteger_t956758543 * L_32 = ___outRemainder3;
		NullCheck(L_32);
		UInt32U5BU5D_t2770800703* L_33 = L_32->get_data_1();
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_4 = (((int64_t)((uint64_t)L_36)));
		uint64_t L_37 = V_4;
		uint64_t L_38 = V_2;
		V_9 = (bool)((((int32_t)((!(((uint64_t)L_37) >= ((uint64_t)L_38)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_9;
		if (!L_39)
		{
			goto IL_00bf;
		}
	}
	{
		uint64_t L_40 = V_4;
		uint64_t L_41 = V_2;
		V_10 = ((int64_t)((uint64_t)(int64_t)L_40/(uint64_t)(int64_t)L_41));
		UInt32U5BU5D_t2770800703* L_42 = V_0;
		int32_t L_43 = V_1;
		int32_t L_44 = L_43;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		uint64_t L_45 = V_10;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint32_t)(((int32_t)((uint32_t)L_45))));
		BigInteger_t956758543 * L_46 = ___outRemainder3;
		NullCheck(L_46);
		UInt32U5BU5D_t2770800703* L_47 = L_46->get_data_1();
		int32_t L_48 = V_3;
		uint64_t L_49 = V_4;
		uint64_t L_50 = V_2;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (uint32_t)(((int32_t)((uint32_t)((int64_t)((uint64_t)(int64_t)L_49%(uint64_t)(int64_t)L_50))))));
	}

IL_00bf:
	{
		int32_t L_51 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1));
		goto IL_010d;
	}

IL_00c5:
	{
		BigInteger_t956758543 * L_52 = ___outRemainder3;
		NullCheck(L_52);
		UInt32U5BU5D_t2770800703* L_53 = L_52->get_data_1();
		int32_t L_54 = V_3;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		BigInteger_t956758543 * L_57 = ___outRemainder3;
		NullCheck(L_57);
		UInt32U5BU5D_t2770800703* L_58 = L_57->get_data_1();
		int32_t L_59 = V_3;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_56)))<<(int32_t)((int32_t)32))), (int64_t)(((int64_t)((uint64_t)L_61)))));
		uint64_t L_62 = V_4;
		uint64_t L_63 = V_2;
		V_11 = ((int64_t)((uint64_t)(int64_t)L_62/(uint64_t)(int64_t)L_63));
		UInt32U5BU5D_t2770800703* L_64 = V_0;
		int32_t L_65 = V_1;
		int32_t L_66 = L_65;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		uint64_t L_67 = V_11;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint32_t)(((int32_t)((uint32_t)L_67))));
		BigInteger_t956758543 * L_68 = ___outRemainder3;
		NullCheck(L_68);
		UInt32U5BU5D_t2770800703* L_69 = L_68->get_data_1();
		int32_t L_70 = V_3;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1))), (uint32_t)0);
		BigInteger_t956758543 * L_71 = ___outRemainder3;
		NullCheck(L_71);
		UInt32U5BU5D_t2770800703* L_72 = L_71->get_data_1();
		int32_t L_73 = V_3;
		int32_t L_74 = L_73;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)1));
		uint64_t L_75 = V_4;
		uint64_t L_76 = V_2;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (uint32_t)(((int32_t)((uint32_t)((int64_t)((uint64_t)(int64_t)L_75%(uint64_t)(int64_t)L_76))))));
	}

IL_010d:
	{
		int32_t L_77 = V_3;
		V_12 = (bool)((((int32_t)((((int32_t)L_77) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_78 = V_12;
		if (L_78)
		{
			goto IL_00c5;
		}
	}
	{
		BigInteger_t956758543 * L_79 = ___outQuotient2;
		int32_t L_80 = V_1;
		NullCheck(L_79);
		L_79->set_dataLength_2(L_80);
		V_5 = 0;
		BigInteger_t956758543 * L_81 = ___outQuotient2;
		NullCheck(L_81);
		int32_t L_82 = L_81->get_dataLength_2();
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1));
		goto IL_0149;
	}

IL_0130:
	{
		BigInteger_t956758543 * L_83 = ___outQuotient2;
		NullCheck(L_83);
		UInt32U5BU5D_t2770800703* L_84 = L_83->get_data_1();
		int32_t L_85 = V_5;
		UInt32U5BU5D_t2770800703* L_86 = V_0;
		int32_t L_87 = V_13;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		uint32_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint32_t)L_89);
		int32_t L_90 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)1));
		int32_t L_91 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
	}

IL_0149:
	{
		int32_t L_92 = V_13;
		V_14 = (bool)((((int32_t)((((int32_t)L_92) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_93 = V_14;
		if (L_93)
		{
			goto IL_0130;
		}
	}
	{
		goto IL_0169;
	}

IL_0159:
	{
		BigInteger_t956758543 * L_94 = ___outQuotient2;
		NullCheck(L_94);
		UInt32U5BU5D_t2770800703* L_95 = L_94->get_data_1();
		int32_t L_96 = V_5;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (uint32_t)0);
		int32_t L_97 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_0169:
	{
		int32_t L_98 = V_5;
		V_15 = (bool)((((int32_t)L_98) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_99 = V_15;
		if (L_99)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_0185;
	}

IL_0177:
	{
		BigInteger_t956758543 * L_100 = ___outQuotient2;
		BigInteger_t956758543 * L_101 = L_100;
		NullCheck(L_101);
		int32_t L_102 = L_101->get_dataLength_2();
		NullCheck(L_101);
		L_101->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_102, (int32_t)1)));
	}

IL_0185:
	{
		BigInteger_t956758543 * L_103 = ___outQuotient2;
		NullCheck(L_103);
		int32_t L_104 = L_103->get_dataLength_2();
		if ((((int32_t)L_104) <= ((int32_t)1)))
		{
			goto IL_01a2;
		}
	}
	{
		BigInteger_t956758543 * L_105 = ___outQuotient2;
		NullCheck(L_105);
		UInt32U5BU5D_t2770800703* L_106 = L_105->get_data_1();
		BigInteger_t956758543 * L_107 = ___outQuotient2;
		NullCheck(L_107);
		int32_t L_108 = L_107->get_dataLength_2();
		NullCheck(L_106);
		int32_t L_109 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_108, (int32_t)1));
		uint32_t L_110 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		G_B25_0 = ((((int32_t)L_110) == ((int32_t)0))? 1 : 0);
		goto IL_01a3;
	}

IL_01a2:
	{
		G_B25_0 = 0;
	}

IL_01a3:
	{
		V_16 = (bool)G_B25_0;
		bool L_111 = V_16;
		if (L_111)
		{
			goto IL_0177;
		}
	}
	{
		BigInteger_t956758543 * L_112 = ___outQuotient2;
		NullCheck(L_112);
		int32_t L_113 = L_112->get_dataLength_2();
		V_17 = (bool)((((int32_t)L_113) == ((int32_t)0))? 1 : 0);
		bool L_114 = V_17;
		if (!L_114)
		{
			goto IL_01bf;
		}
	}
	{
		BigInteger_t956758543 * L_115 = ___outQuotient2;
		NullCheck(L_115);
		L_115->set_dataLength_2(1);
	}

IL_01bf:
	{
		goto IL_01cf;
	}

IL_01c1:
	{
		BigInteger_t956758543 * L_116 = ___outRemainder3;
		BigInteger_t956758543 * L_117 = L_116;
		NullCheck(L_117);
		int32_t L_118 = L_117->get_dataLength_2();
		NullCheck(L_117);
		L_117->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)1)));
	}

IL_01cf:
	{
		BigInteger_t956758543 * L_119 = ___outRemainder3;
		NullCheck(L_119);
		int32_t L_120 = L_119->get_dataLength_2();
		if ((((int32_t)L_120) <= ((int32_t)1)))
		{
			goto IL_01ec;
		}
	}
	{
		BigInteger_t956758543 * L_121 = ___outRemainder3;
		NullCheck(L_121);
		UInt32U5BU5D_t2770800703* L_122 = L_121->get_data_1();
		BigInteger_t956758543 * L_123 = ___outRemainder3;
		NullCheck(L_123);
		int32_t L_124 = L_123->get_dataLength_2();
		NullCheck(L_122);
		int32_t L_125 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_124, (int32_t)1));
		uint32_t L_126 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		G_B33_0 = ((((int32_t)L_126) == ((int32_t)0))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B33_0 = 0;
	}

IL_01ed:
	{
		V_18 = (bool)G_B33_0;
		bool L_127 = V_18;
		if (L_127)
		{
			goto IL_01c1;
		}
	}
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_Division_m3347195961 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Division_m3347195961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	BigInteger_t956758543 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	{
		BigInteger_t956758543 * L_0 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = ((int32_t)69);
		V_3 = (bool)0;
		V_4 = (bool)0;
		BigInteger_t956758543 * L_2 = ___bi10;
		NullCheck(L_2);
		UInt32U5BU5D_t2770800703* L_3 = L_2->get_data_1();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		BigInteger_t956758543 * L_8 = ___bi10;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_9 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		___bi10 = L_9;
		V_4 = (bool)1;
	}

IL_0039:
	{
		BigInteger_t956758543 * L_10 = ___bi21;
		NullCheck(L_10);
		UInt32U5BU5D_t2770800703* L_11 = L_10->get_data_1();
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_6 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_14&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_005c;
		}
	}
	{
		BigInteger_t956758543 * L_16 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_17 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		___bi21 = L_17;
		V_3 = (bool)1;
	}

IL_005c:
	{
		BigInteger_t956758543 * L_18 = ___bi10;
		BigInteger_t956758543 * L_19 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_20 = BigInteger_op_LessThan_m1529345678(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_006f;
		}
	}
	{
		BigInteger_t956758543 * L_22 = V_0;
		V_8 = L_22;
		goto IL_00b2;
	}

IL_006f:
	{
		BigInteger_t956758543 * L_23 = ___bi21;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_dataLength_2();
		V_9 = (bool)((((int32_t)L_24) == ((int32_t)1))? 1 : 0);
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_t956758543 * L_26 = ___bi10;
		BigInteger_t956758543 * L_27 = ___bi21;
		BigInteger_t956758543 * L_28 = V_0;
		BigInteger_t956758543 * L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m972382485(NULL /*static, unused*/, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_008b:
	{
		BigInteger_t956758543 * L_30 = ___bi10;
		BigInteger_t956758543 * L_31 = ___bi21;
		BigInteger_t956758543 * L_32 = V_0;
		BigInteger_t956758543 * L_33 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_multiByteDivide_m635723330(NULL /*static, unused*/, L_30, L_31, L_32, L_33, /*hidden argument*/NULL);
	}

IL_0095:
	{
		bool L_34 = V_4;
		bool L_35 = V_3;
		V_10 = (bool)((((int32_t)((((int32_t)L_34) == ((int32_t)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00ad;
		}
	}
	{
		BigInteger_t956758543 * L_37 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_38 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		V_8 = L_38;
		goto IL_00b2;
	}

IL_00ad:
	{
		BigInteger_t956758543 * L_39 = V_0;
		V_8 = L_39;
		goto IL_00b2;
	}

IL_00b2:
	{
		BigInteger_t956758543 * L_40 = V_8;
		return L_40;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_op_Modulus_m2469490318 (RuntimeObject * __this /* static, unused */, BigInteger_t956758543 * ___bi10, BigInteger_t956758543 * ___bi21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_op_Modulus_m2469490318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	BigInteger_t956758543 * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	{
		BigInteger_t956758543 * L_0 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t956758543 * L_1 = ___bi10;
		BigInteger_t956758543 * L_2 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m497354907(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = ((int32_t)69);
		V_3 = (bool)0;
		BigInteger_t956758543 * L_3 = ___bi10;
		NullCheck(L_3);
		UInt32U5BU5D_t2770800703* L_4 = L_3->get_data_1();
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		BigInteger_t956758543 * L_9 = ___bi10;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_10 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		___bi10 = L_10;
		V_3 = (bool)1;
	}

IL_0036:
	{
		BigInteger_t956758543 * L_11 = ___bi21;
		NullCheck(L_11);
		UInt32U5BU5D_t2770800703* L_12 = L_11->get_data_1();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0055;
		}
	}
	{
		BigInteger_t956758543 * L_17 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_18 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		___bi21 = L_18;
	}

IL_0055:
	{
		BigInteger_t956758543 * L_19 = ___bi10;
		BigInteger_t956758543 * L_20 = ___bi21;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_21 = BigInteger_op_LessThan_m1529345678(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_6 = L_21;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		BigInteger_t956758543 * L_23 = V_1;
		V_7 = L_23;
		goto IL_00a4;
	}

IL_0068:
	{
		BigInteger_t956758543 * L_24 = ___bi21;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_dataLength_2();
		V_8 = (bool)((((int32_t)L_25) == ((int32_t)1))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_0084;
		}
	}
	{
		BigInteger_t956758543 * L_27 = ___bi10;
		BigInteger_t956758543 * L_28 = ___bi21;
		BigInteger_t956758543 * L_29 = V_0;
		BigInteger_t956758543 * L_30 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m972382485(NULL /*static, unused*/, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_0084:
	{
		BigInteger_t956758543 * L_31 = ___bi10;
		BigInteger_t956758543 * L_32 = ___bi21;
		BigInteger_t956758543 * L_33 = V_0;
		BigInteger_t956758543 * L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_multiByteDivide_m635723330(NULL /*static, unused*/, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
	}

IL_008e:
	{
		bool L_35 = V_3;
		V_9 = L_35;
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_009f;
		}
	}
	{
		BigInteger_t956758543 * L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_38 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		V_7 = L_38;
		goto IL_00a4;
	}

IL_009f:
	{
		BigInteger_t956758543 * L_39 = V_1;
		V_7 = L_39;
		goto IL_00a4;
	}

IL_00a4:
	{
		BigInteger_t956758543 * L_40 = V_7;
		return L_40;
	}
}
// System.String Photon.SocketServer.Numeric.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m4163898541 (BigInteger_t956758543 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = BigInteger_ToString_m2781201991(__this, ((int32_t)10), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
extern "C"  String_t* BigInteger_ToString_m2781201991 (BigInteger_t956758543 * __this, int32_t ___radix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_ToString_m2781201991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	BigInteger_t956758543 * V_2 = NULL;
	bool V_3 = false;
	BigInteger_t956758543 * V_4 = NULL;
	BigInteger_t956758543 * V_5 = NULL;
	BigInteger_t956758543 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Il2CppChar V_11 = 0x0;
	bool V_12 = false;
	bool V_13 = false;
	String_t* V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	{
		int32_t L_0 = ___radix0;
		if ((((int32_t)L_0) < ((int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___radix0;
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)((int32_t)36)))? 1 : 0);
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
	}

IL_000d:
	{
		V_7 = (bool)G_B3_0;
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, _stringLiteral487777839, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001e:
	{
		V_0 = _stringLiteral215727883;
		V_1 = _stringLiteral757602046;
		V_2 = __this;
		V_3 = (bool)0;
		BigInteger_t956758543 * L_4 = V_2;
		NullCheck(L_4);
		UInt32U5BU5D_t2770800703* L_5 = L_4->get_data_1();
		NullCheck(L_5);
		int32_t L_6 = ((int32_t)69);
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_8;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		V_3 = (bool)1;
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		BigInteger_t956758543 * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_10 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_0059;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0054;
		throw e;
	}

CATCH_0054:
	{ // begin catch(System.Exception)
		goto IL_0059;
	} // end catch (depth: 1)

IL_0059:
	{
	}

IL_005a:
	{
		BigInteger_t956758543 * L_11 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_11, /*hidden argument*/NULL);
		V_4 = L_11;
		BigInteger_t956758543 * L_12 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_12, /*hidden argument*/NULL);
		V_5 = L_12;
		int32_t L_13 = ___radix0;
		BigInteger_t956758543 * L_14 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m1240160733(L_14, (((int64_t)((int64_t)L_13))), /*hidden argument*/NULL);
		V_6 = L_14;
		BigInteger_t956758543 * L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_dataLength_2();
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0087;
		}
	}
	{
		BigInteger_t956758543 * L_17 = V_2;
		NullCheck(L_17);
		UInt32U5BU5D_t2770800703* L_18 = L_17->get_data_1();
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B13_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_0088;
	}

IL_0087:
	{
		G_B13_0 = 0;
	}

IL_0088:
	{
		V_9 = (bool)G_B13_0;
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_0099;
		}
	}
	{
		V_1 = _stringLiteral3452614544;
		goto IL_013a;
	}

IL_0099:
	{
		goto IL_00fa;
	}

IL_009c:
	{
		BigInteger_t956758543 * L_22 = V_2;
		BigInteger_t956758543 * L_23 = V_6;
		BigInteger_t956758543 * L_24 = V_4;
		BigInteger_t956758543 * L_25 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_singleByteDivide_m972382485(NULL /*static, unused*/, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_26 = V_5;
		NullCheck(L_26);
		UInt32U5BU5D_t2770800703* L_27 = L_26->get_data_1();
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_10 = (bool)((!(((uint32_t)L_29) >= ((uint32_t)((int32_t)10))))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00d4;
		}
	}
	{
		BigInteger_t956758543 * L_31 = V_5;
		NullCheck(L_31);
		UInt32U5BU5D_t2770800703* L_32 = L_31->get_data_1();
		NullCheck(L_32);
		int32_t L_33 = 0;
		uint32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		uint32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Concat_m904156431(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		V_1 = L_38;
		goto IL_00f6;
	}

IL_00d4:
	{
		String_t* L_39 = V_0;
		BigInteger_t956758543 * L_40 = V_5;
		NullCheck(L_40);
		UInt32U5BU5D_t2770800703* L_41 = L_40->get_data_1();
		NullCheck(L_41);
		int32_t L_42 = 0;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_39);
		Il2CppChar L_44 = String_get_Chars_m2986988803(L_39, ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		V_11 = L_44;
		String_t* L_45 = Char_ToString_m3588025615((&V_11), /*hidden argument*/NULL);
		String_t* L_46 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_47 = String_Concat_m3937257545(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		V_1 = L_47;
	}

IL_00f6:
	{
		BigInteger_t956758543 * L_48 = V_4;
		V_2 = L_48;
	}

IL_00fa:
	{
		BigInteger_t956758543 * L_49 = V_2;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_dataLength_2();
		if ((((int32_t)L_50) > ((int32_t)1)))
		{
			goto IL_011c;
		}
	}
	{
		BigInteger_t956758543 * L_51 = V_2;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_dataLength_2();
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_0119;
		}
	}
	{
		BigInteger_t956758543 * L_53 = V_2;
		NullCheck(L_53);
		UInt32U5BU5D_t2770800703* L_54 = L_53->get_data_1();
		NullCheck(L_54);
		int32_t L_55 = 0;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		G_B24_0 = ((!(((uint32_t)L_56) <= ((uint32_t)0)))? 1 : 0);
		goto IL_011a;
	}

IL_0119:
	{
		G_B24_0 = 0;
	}

IL_011a:
	{
		G_B26_0 = G_B24_0;
		goto IL_011d;
	}

IL_011c:
	{
		G_B26_0 = 1;
	}

IL_011d:
	{
		V_12 = (bool)G_B26_0;
		bool L_57 = V_12;
		if (L_57)
		{
			goto IL_009c;
		}
	}
	{
		bool L_58 = V_3;
		V_13 = L_58;
		bool L_59 = V_13;
		if (!L_59)
		{
			goto IL_0139;
		}
	}
	{
		String_t* L_60 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614531, L_60, /*hidden argument*/NULL);
		V_1 = L_61;
	}

IL_0139:
	{
	}

IL_013a:
	{
		String_t* L_62 = V_1;
		V_14 = L_62;
		goto IL_013f;
	}

IL_013f:
	{
		String_t* L_63 = V_14;
		return L_63;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_ModPow_m1818331774 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___exp0, BigInteger_t956758543 * ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_ModPow_m1818331774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	bool V_2 = false;
	BigInteger_t956758543 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	BigInteger_t956758543 * V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B30_0 = 0;
	{
		BigInteger_t956758543 * L_0 = ___exp0;
		NullCheck(L_0);
		UInt32U5BU5D_t2770800703* L_1 = L_0->get_data_1();
		NullCheck(L_1);
		int32_t L_2 = ((int32_t)69);
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_7 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		ArithmeticException_t4283546778 * L_5 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_5, _stringLiteral1790208040, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_6 = BigInteger_op_Implicit_m1456924192(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_0 = L_6;
		V_2 = (bool)0;
		UInt32U5BU5D_t2770800703* L_7 = __this->get_data_1();
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)69);
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_8 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_10 = V_8;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_11 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_12 = ___n1;
		BigInteger_t956758543 * L_13 = BigInteger_op_Modulus_m2469490318(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_0058:
	{
		BigInteger_t956758543 * L_14 = ___n1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_15 = BigInteger_op_Modulus_m2469490318(NULL /*static, unused*/, __this, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
	}

IL_0060:
	{
		BigInteger_t956758543 * L_16 = ___n1;
		NullCheck(L_16);
		UInt32U5BU5D_t2770800703* L_17 = L_16->get_data_1();
		NullCheck(L_17);
		int32_t L_18 = ((int32_t)69);
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_9 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_20 = V_9;
		if (!L_20)
		{
			goto IL_0080;
		}
	}
	{
		BigInteger_t956758543 * L_21 = ___n1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_22 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		___n1 = L_22;
	}

IL_0080:
	{
		BigInteger_t956758543 * L_23 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_23, /*hidden argument*/NULL);
		V_3 = L_23;
		BigInteger_t956758543 * L_24 = ___n1;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_dataLength_2();
		V_4 = ((int32_t)((int32_t)L_25<<(int32_t)1));
		BigInteger_t956758543 * L_26 = V_3;
		NullCheck(L_26);
		UInt32U5BU5D_t2770800703* L_27 = L_26->get_data_1();
		int32_t L_28 = V_4;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint32_t)1);
		BigInteger_t956758543 * L_29 = V_3;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		L_29->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		BigInteger_t956758543 * L_31 = V_3;
		BigInteger_t956758543 * L_32 = ___n1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_33 = BigInteger_op_Division_m3347195961(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		BigInteger_t956758543 * L_34 = ___exp0;
		NullCheck(L_34);
		int32_t L_35 = BigInteger_bitCount_m3576967399(L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		V_6 = 0;
		V_10 = 0;
		goto IL_017e;
	}

IL_00bf:
	{
		V_11 = 1;
		V_12 = 0;
		goto IL_0168;
	}

IL_00cb:
	{
		BigInteger_t956758543 * L_36 = ___exp0;
		NullCheck(L_36);
		UInt32U5BU5D_t2770800703* L_37 = L_36->get_data_1();
		int32_t L_38 = V_10;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		uint32_t L_41 = V_11;
		V_13 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_40&(int32_t)L_41))) <= ((uint32_t)0)))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_00f1;
		}
	}
	{
		BigInteger_t956758543 * L_43 = V_0;
		BigInteger_t956758543 * L_44 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_45 = BigInteger_op_Multiply_m664707877(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_46 = ___n1;
		BigInteger_t956758543 * L_47 = V_3;
		BigInteger_t956758543 * L_48 = BigInteger_BarrettReduction_m2302199077(__this, L_45, L_46, L_47, /*hidden argument*/NULL);
		V_0 = L_48;
	}

IL_00f1:
	{
		uint32_t L_49 = V_11;
		V_11 = ((int32_t)((int32_t)L_49<<(int32_t)1));
		BigInteger_t956758543 * L_50 = V_1;
		BigInteger_t956758543 * L_51 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_52 = BigInteger_op_Multiply_m664707877(NULL /*static, unused*/, L_50, L_51, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_53 = ___n1;
		BigInteger_t956758543 * L_54 = V_3;
		BigInteger_t956758543 * L_55 = BigInteger_BarrettReduction_m2302199077(__this, L_52, L_53, L_54, /*hidden argument*/NULL);
		V_1 = L_55;
		BigInteger_t956758543 * L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_dataLength_2();
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_011d;
		}
	}
	{
		BigInteger_t956758543 * L_58 = V_1;
		NullCheck(L_58);
		UInt32U5BU5D_t2770800703* L_59 = L_58->get_data_1();
		NullCheck(L_59);
		int32_t L_60 = 0;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		G_B14_0 = ((((int32_t)L_61) == ((int32_t)1))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B14_0 = 0;
	}

IL_011e:
	{
		V_14 = (bool)G_B14_0;
		bool L_62 = V_14;
		if (!L_62)
		{
			goto IL_014d;
		}
	}
	{
		bool L_63 = V_2;
		if (!L_63)
		{
			goto IL_0137;
		}
	}
	{
		BigInteger_t956758543 * L_64 = ___exp0;
		NullCheck(L_64);
		UInt32U5BU5D_t2770800703* L_65 = L_64->get_data_1();
		NullCheck(L_65);
		int32_t L_66 = 0;
		uint32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		G_B18_0 = ((!(((uint32_t)((int32_t)((int32_t)L_67&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0138;
	}

IL_0137:
	{
		G_B18_0 = 0;
	}

IL_0138:
	{
		V_15 = (bool)G_B18_0;
		bool L_68 = V_15;
		if (!L_68)
		{
			goto IL_0148;
		}
	}
	{
		BigInteger_t956758543 * L_69 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_70 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		V_16 = L_70;
		goto IL_01b9;
	}

IL_0148:
	{
		BigInteger_t956758543 * L_71 = V_0;
		V_16 = L_71;
		goto IL_01b9;
	}

IL_014d:
	{
		int32_t L_72 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		int32_t L_73 = V_6;
		int32_t L_74 = V_5;
		V_17 = (bool)((((int32_t)L_73) == ((int32_t)L_74))? 1 : 0);
		bool L_75 = V_17;
		if (!L_75)
		{
			goto IL_0161;
		}
	}
	{
		goto IL_0177;
	}

IL_0161:
	{
		int32_t L_76 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0168:
	{
		int32_t L_77 = V_12;
		V_18 = (bool)((((int32_t)L_77) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_78 = V_18;
		if (L_78)
		{
			goto IL_00cb;
		}
	}

IL_0177:
	{
		int32_t L_79 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
	}

IL_017e:
	{
		int32_t L_80 = V_10;
		BigInteger_t956758543 * L_81 = ___exp0;
		NullCheck(L_81);
		int32_t L_82 = L_81->get_dataLength_2();
		V_19 = (bool)((((int32_t)L_80) < ((int32_t)L_82))? 1 : 0);
		bool L_83 = V_19;
		if (L_83)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_84 = V_2;
		if (!L_84)
		{
			goto IL_01a3;
		}
	}
	{
		BigInteger_t956758543 * L_85 = ___exp0;
		NullCheck(L_85);
		UInt32U5BU5D_t2770800703* L_86 = L_85->get_data_1();
		NullCheck(L_86);
		int32_t L_87 = 0;
		uint32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		G_B30_0 = ((!(((uint32_t)((int32_t)((int32_t)L_88&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_01a4;
	}

IL_01a3:
	{
		G_B30_0 = 0;
	}

IL_01a4:
	{
		V_20 = (bool)G_B30_0;
		bool L_89 = V_20;
		if (!L_89)
		{
			goto IL_01b4;
		}
	}
	{
		BigInteger_t956758543 * L_90 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_91 = BigInteger_op_UnaryNegation_m3272019706(NULL /*static, unused*/, L_90, /*hidden argument*/NULL);
		V_16 = L_91;
		goto IL_01b9;
	}

IL_01b4:
	{
		BigInteger_t956758543 * L_92 = V_0;
		V_16 = L_92;
		goto IL_01b9;
	}

IL_01b9:
	{
		BigInteger_t956758543 * L_93 = V_16;
		return L_93;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * BigInteger_BarrettReduction_m2302199077 (BigInteger_t956758543 * __this, BigInteger_t956758543 * ___x0, BigInteger_t956758543 * ___n1, BigInteger_t956758543 * ___constant2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_BarrettReduction_m2302199077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BigInteger_t956758543 * V_3 = NULL;
	BigInteger_t956758543 * V_4 = NULL;
	BigInteger_t956758543 * V_5 = NULL;
	BigInteger_t956758543 * V_6 = NULL;
	int32_t V_7 = 0;
	BigInteger_t956758543 * V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	int32_t V_19 = 0;
	uint64_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	int32_t V_23 = 0;
	uint64_t V_24 = 0;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	BigInteger_t956758543 * V_30 = NULL;
	bool V_31 = false;
	BigInteger_t956758543 * V_32 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B35_0 = 0;
	{
		BigInteger_t956758543 * L_0 = ___n1;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_dataLength_2();
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		int32_t L_3 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		BigInteger_t956758543 * L_4 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_4, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = V_2;
		V_9 = L_5;
		V_10 = 0;
		goto IL_003c;
	}

IL_001e:
	{
		BigInteger_t956758543 * L_6 = V_3;
		NullCheck(L_6);
		UInt32U5BU5D_t2770800703* L_7 = L_6->get_data_1();
		int32_t L_8 = V_10;
		BigInteger_t956758543 * L_9 = ___x0;
		NullCheck(L_9);
		UInt32U5BU5D_t2770800703* L_10 = L_9->get_data_1();
		int32_t L_11 = V_9;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_13);
		int32_t L_14 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_16 = V_9;
		BigInteger_t956758543 * L_17 = ___x0;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_dataLength_2();
		V_11 = (bool)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_11;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		BigInteger_t956758543 * L_20 = V_3;
		BigInteger_t956758543 * L_21 = ___x0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_dataLength_2();
		int32_t L_23 = V_2;
		NullCheck(L_20);
		L_20->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)));
		BigInteger_t956758543 * L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_dataLength_2();
		V_12 = (bool)((((int32_t)((((int32_t)L_25) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_0073;
		}
	}
	{
		BigInteger_t956758543 * L_27 = V_3;
		NullCheck(L_27);
		L_27->set_dataLength_2(1);
	}

IL_0073:
	{
		BigInteger_t956758543 * L_28 = V_3;
		BigInteger_t956758543 * L_29 = ___constant2;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_30 = BigInteger_op_Multiply_m664707877(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		BigInteger_t956758543 * L_31 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_31, /*hidden argument*/NULL);
		V_5 = L_31;
		int32_t L_32 = V_1;
		V_13 = L_32;
		V_14 = 0;
		goto IL_00ab;
	}

IL_008b:
	{
		BigInteger_t956758543 * L_33 = V_5;
		NullCheck(L_33);
		UInt32U5BU5D_t2770800703* L_34 = L_33->get_data_1();
		int32_t L_35 = V_14;
		BigInteger_t956758543 * L_36 = V_4;
		NullCheck(L_36);
		UInt32U5BU5D_t2770800703* L_37 = L_36->get_data_1();
		int32_t L_38 = V_13;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint32_t)L_40);
		int32_t L_41 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		int32_t L_42 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00ab:
	{
		int32_t L_43 = V_13;
		BigInteger_t956758543 * L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = L_44->get_dataLength_2();
		V_15 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_15;
		if (L_46)
		{
			goto IL_008b;
		}
	}
	{
		BigInteger_t956758543 * L_47 = V_5;
		BigInteger_t956758543 * L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_dataLength_2();
		int32_t L_50 = V_1;
		NullCheck(L_47);
		L_47->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_50)));
		BigInteger_t956758543 * L_51 = V_5;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_dataLength_2();
		V_16 = (bool)((((int32_t)((((int32_t)L_52) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_16;
		if (!L_53)
		{
			goto IL_00e7;
		}
	}
	{
		BigInteger_t956758543 * L_54 = V_5;
		NullCheck(L_54);
		L_54->set_dataLength_2(1);
	}

IL_00e7:
	{
		BigInteger_t956758543 * L_55 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_55, /*hidden argument*/NULL);
		V_6 = L_55;
		BigInteger_t956758543 * L_56 = ___x0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_dataLength_2();
		int32_t L_58 = V_1;
		if ((((int32_t)L_57) > ((int32_t)L_58)))
		{
			goto IL_00ff;
		}
	}
	{
		BigInteger_t956758543 * L_59 = ___x0;
		NullCheck(L_59);
		int32_t L_60 = L_59->get_dataLength_2();
		G_B13_0 = L_60;
		goto IL_0100;
	}

IL_00ff:
	{
		int32_t L_61 = V_1;
		G_B13_0 = L_61;
	}

IL_0100:
	{
		V_7 = G_B13_0;
		V_17 = 0;
		goto IL_0120;
	}

IL_0107:
	{
		BigInteger_t956758543 * L_62 = V_6;
		NullCheck(L_62);
		UInt32U5BU5D_t2770800703* L_63 = L_62->get_data_1();
		int32_t L_64 = V_17;
		BigInteger_t956758543 * L_65 = ___x0;
		NullCheck(L_65);
		UInt32U5BU5D_t2770800703* L_66 = L_65->get_data_1();
		int32_t L_67 = V_17;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint32_t)L_69);
		int32_t L_70 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0120:
	{
		int32_t L_71 = V_17;
		int32_t L_72 = V_7;
		V_18 = (bool)((((int32_t)L_71) < ((int32_t)L_72))? 1 : 0);
		bool L_73 = V_18;
		if (L_73)
		{
			goto IL_0107;
		}
	}
	{
		BigInteger_t956758543 * L_74 = V_6;
		int32_t L_75 = V_7;
		NullCheck(L_74);
		L_74->set_dataLength_2(L_75);
		BigInteger_t956758543 * L_76 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_76, /*hidden argument*/NULL);
		V_8 = L_76;
		V_19 = 0;
		goto IL_01ed;
	}

IL_0144:
	{
		BigInteger_t956758543 * L_77 = V_5;
		NullCheck(L_77);
		UInt32U5BU5D_t2770800703* L_78 = L_77->get_data_1();
		int32_t L_79 = V_19;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_22 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		bool L_82 = V_22;
		if (!L_82)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_01e7;
	}

IL_015d:
	{
		V_20 = (((int64_t)((int64_t)0)));
		int32_t L_83 = V_19;
		V_21 = L_83;
		V_23 = 0;
		goto IL_01b6;
	}

IL_016a:
	{
		BigInteger_t956758543 * L_84 = V_5;
		NullCheck(L_84);
		UInt32U5BU5D_t2770800703* L_85 = L_84->get_data_1();
		int32_t L_86 = V_19;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		BigInteger_t956758543 * L_89 = ___n1;
		NullCheck(L_89);
		UInt32U5BU5D_t2770800703* L_90 = L_89->get_data_1();
		int32_t L_91 = V_23;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		BigInteger_t956758543 * L_94 = V_8;
		NullCheck(L_94);
		UInt32U5BU5D_t2770800703* L_95 = L_94->get_data_1();
		int32_t L_96 = V_21;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		uint64_t L_99 = V_20;
		V_24 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((uint64_t)L_88))), (int64_t)(((int64_t)((uint64_t)L_93))))), (int64_t)(((int64_t)((uint64_t)L_98))))), (int64_t)L_99));
		BigInteger_t956758543 * L_100 = V_8;
		NullCheck(L_100);
		UInt32U5BU5D_t2770800703* L_101 = L_100->get_data_1();
		int32_t L_102 = V_21;
		uint64_t L_103 = V_24;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (uint32_t)(((int32_t)((uint32_t)((int64_t)((int64_t)L_103&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))));
		uint64_t L_104 = V_24;
		V_20 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		int32_t L_105 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
		int32_t L_106 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1));
	}

IL_01b6:
	{
		int32_t L_107 = V_23;
		BigInteger_t956758543 * L_108 = ___n1;
		NullCheck(L_108);
		int32_t L_109 = L_108->get_dataLength_2();
		if ((((int32_t)L_107) >= ((int32_t)L_109)))
		{
			goto IL_01c7;
		}
	}
	{
		int32_t L_110 = V_21;
		int32_t L_111 = V_1;
		G_B24_0 = ((((int32_t)L_110) < ((int32_t)L_111))? 1 : 0);
		goto IL_01c8;
	}

IL_01c7:
	{
		G_B24_0 = 0;
	}

IL_01c8:
	{
		V_25 = (bool)G_B24_0;
		bool L_112 = V_25;
		if (L_112)
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_113 = V_21;
		int32_t L_114 = V_1;
		V_26 = (bool)((((int32_t)L_113) < ((int32_t)L_114))? 1 : 0);
		bool L_115 = V_26;
		if (!L_115)
		{
			goto IL_01e6;
		}
	}
	{
		BigInteger_t956758543 * L_116 = V_8;
		NullCheck(L_116);
		UInt32U5BU5D_t2770800703* L_117 = L_116->get_data_1();
		int32_t L_118 = V_21;
		uint64_t L_119 = V_20;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(L_118), (uint32_t)(((int32_t)((uint32_t)L_119))));
	}

IL_01e6:
	{
	}

IL_01e7:
	{
		int32_t L_120 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
	}

IL_01ed:
	{
		int32_t L_121 = V_19;
		BigInteger_t956758543 * L_122 = V_5;
		NullCheck(L_122);
		int32_t L_123 = L_122->get_dataLength_2();
		V_27 = (bool)((((int32_t)L_121) < ((int32_t)L_123))? 1 : 0);
		bool L_124 = V_27;
		if (L_124)
		{
			goto IL_0144;
		}
	}
	{
		BigInteger_t956758543 * L_125 = V_8;
		int32_t L_126 = V_1;
		NullCheck(L_125);
		L_125->set_dataLength_2(L_126);
		goto IL_021a;
	}

IL_020b:
	{
		BigInteger_t956758543 * L_127 = V_8;
		BigInteger_t956758543 * L_128 = L_127;
		NullCheck(L_128);
		int32_t L_129 = L_128->get_dataLength_2();
		NullCheck(L_128);
		L_128->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_129, (int32_t)1)));
	}

IL_021a:
	{
		BigInteger_t956758543 * L_130 = V_8;
		NullCheck(L_130);
		int32_t L_131 = L_130->get_dataLength_2();
		if ((((int32_t)L_131) <= ((int32_t)1)))
		{
			goto IL_023a;
		}
	}
	{
		BigInteger_t956758543 * L_132 = V_8;
		NullCheck(L_132);
		UInt32U5BU5D_t2770800703* L_133 = L_132->get_data_1();
		BigInteger_t956758543 * L_134 = V_8;
		NullCheck(L_134);
		int32_t L_135 = L_134->get_dataLength_2();
		NullCheck(L_133);
		int32_t L_136 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)1));
		uint32_t L_137 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		G_B35_0 = ((((int32_t)L_137) == ((int32_t)0))? 1 : 0);
		goto IL_023b;
	}

IL_023a:
	{
		G_B35_0 = 0;
	}

IL_023b:
	{
		V_28 = (bool)G_B35_0;
		bool L_138 = V_28;
		if (L_138)
		{
			goto IL_020b;
		}
	}
	{
		BigInteger_t956758543 * L_139 = V_6;
		BigInteger_t956758543 * L_140 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_141 = BigInteger_op_Subtraction_m1996860654(NULL /*static, unused*/, L_139, L_140, /*hidden argument*/NULL);
		V_6 = L_141;
		BigInteger_t956758543 * L_142 = V_6;
		NullCheck(L_142);
		UInt32U5BU5D_t2770800703* L_143 = L_142->get_data_1();
		NullCheck(L_143);
		int32_t L_144 = ((int32_t)69);
		uint32_t L_145 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		V_29 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_145&(int32_t)((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_29;
		if (!L_146)
		{
			goto IL_028d;
		}
	}
	{
		BigInteger_t956758543 * L_147 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_147, /*hidden argument*/NULL);
		V_30 = L_147;
		BigInteger_t956758543 * L_148 = V_30;
		NullCheck(L_148);
		UInt32U5BU5D_t2770800703* L_149 = L_148->get_data_1();
		int32_t L_150 = V_1;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (uint32_t)1);
		BigInteger_t956758543 * L_151 = V_30;
		int32_t L_152 = V_1;
		NullCheck(L_151);
		L_151->set_dataLength_2(((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1)));
		BigInteger_t956758543 * L_153 = V_6;
		BigInteger_t956758543 * L_154 = V_30;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_155 = BigInteger_op_Addition_m949304235(NULL /*static, unused*/, L_153, L_154, /*hidden argument*/NULL);
		V_6 = L_155;
	}

IL_028d:
	{
		goto IL_0299;
	}

IL_028f:
	{
		BigInteger_t956758543 * L_156 = V_6;
		BigInteger_t956758543 * L_157 = ___n1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_158 = BigInteger_op_Subtraction_m1996860654(NULL /*static, unused*/, L_156, L_157, /*hidden argument*/NULL);
		V_6 = L_158;
	}

IL_0299:
	{
		BigInteger_t956758543 * L_159 = V_6;
		BigInteger_t956758543 * L_160 = ___n1;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		bool L_161 = BigInteger_op_GreaterThanOrEqual_m1973220735(NULL /*static, unused*/, L_159, L_160, /*hidden argument*/NULL);
		V_31 = L_161;
		bool L_162 = V_31;
		if (L_162)
		{
			goto IL_028f;
		}
	}
	{
		BigInteger_t956758543 * L_163 = V_6;
		V_32 = L_163;
		goto IL_02ad;
	}

IL_02ad:
	{
		BigInteger_t956758543 * L_164 = V_32;
		return L_164;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
extern "C"  BigInteger_t956758543 * BigInteger_GenerateRandom_m3242160242 (RuntimeObject * __this /* static, unused */, int32_t ___bits0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_GenerateRandom_m3242160242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	{
		BigInteger_t956758543 * L_0 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m2516099295(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		BigInteger_t956758543 * L_1 = V_0;
		int32_t L_2 = ___bits0;
		Random_t108471755 * L_3 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		BigInteger_genRandomBits_m2936729685(L_1, L_2, L_3, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_4 = V_0;
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		BigInteger_t956758543 * L_5 = V_1;
		return L_5;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
extern "C"  void BigInteger_genRandomBits_m2936729685 (BigInteger_t956758543 * __this, int32_t ___bits0, Random_t108471755 * ___rand1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_genRandomBits_m2936729685_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	uint32_t V_9 = 0;
	bool V_10 = false;
	{
		int32_t L_0 = ___bits0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)5));
		int32_t L_1 = ___bits0;
		V_1 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)));
		int32_t L_2 = V_1;
		V_2 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		V_3 = (bool)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		ArithmeticException_t4283546778 * L_7 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3551809662(L_7, _stringLiteral3686846028, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_002a:
	{
		V_4 = 0;
		goto IL_004f;
	}

IL_002f:
	{
		UInt32U5BU5D_t2770800703* L_8 = __this->get_data_1();
		int32_t L_9 = V_4;
		Random_t108471755 * L_10 = ___rand1;
		NullCheck(L_10);
		double L_11 = VirtFuncInvoker0< double >::Invoke(7 /* System.Double System.Random::NextDouble() */, L_10);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)(((int32_t)((uint32_t)((double)il2cpp_codegen_multiply((double)L_11, (double)(4294967296.0)))))));
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = V_4;
		int32_t L_14 = V_0;
		V_5 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_6 = L_16;
		goto IL_006f;
	}

IL_005f:
	{
		UInt32U5BU5D_t2770800703* L_17 = __this->get_data_1();
		int32_t L_18 = V_6;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint32_t)0);
		int32_t L_19 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_20 = V_6;
		V_7 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)70)))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_22 = V_1;
		V_8 = (bool)((!(((uint32_t)L_22) <= ((uint32_t)0)))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_24 = V_1;
		V_9 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1))&(int32_t)((int32_t)31)))));
		UInt32U5BU5D_t2770800703* L_25 = __this->get_data_1();
		int32_t L_26 = V_0;
		NullCheck(L_25);
		uint32_t* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)))));
		uint32_t L_28 = V_9;
		*((int32_t*)(L_27)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_27))|(int32_t)L_28));
		int32_t L_29 = V_1;
		V_9 = ((int32_t)((uint32_t)(-1)>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_29))&(int32_t)((int32_t)31)))));
		UInt32U5BU5D_t2770800703* L_30 = __this->get_data_1();
		int32_t L_31 = V_0;
		NullCheck(L_30);
		uint32_t* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1)))));
		uint32_t L_33 = V_9;
		*((int32_t*)(L_32)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_32))&(int32_t)L_33));
		goto IL_00dd;
	}

IL_00c6:
	{
		UInt32U5BU5D_t2770800703* L_34 = __this->get_data_1();
		int32_t L_35 = V_0;
		NullCheck(L_34);
		uint32_t* L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1)))));
		*((int32_t*)(L_36)) = (int32_t)((int32_t)((int32_t)(*((uint32_t*)L_36))|(int32_t)((int32_t)-2147483648LL)));
	}

IL_00dd:
	{
		int32_t L_37 = V_0;
		__this->set_dataLength_2(L_37);
		int32_t L_38 = __this->get_dataLength_2();
		V_10 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_00fa;
		}
	}
	{
		__this->set_dataLength_2(1);
	}

IL_00fa:
	{
		return;
	}
}
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
extern "C"  int32_t BigInteger_bitCount_m3576967399 (BigInteger_t956758543 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		goto IL_0011;
	}

IL_0003:
	{
		int32_t L_0 = __this->get_dataLength_2();
		__this->set_dataLength_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
	}

IL_0011:
	{
		int32_t L_1 = __this->get_dataLength_2();
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_2 = __this->get_data_1();
		int32_t L_3 = __this->get_dataLength_2();
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		V_3 = (bool)G_B5_0;
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_0003;
		}
	}
	{
		UInt32U5BU5D_t2770800703* L_7 = __this->get_data_1();
		int32_t L_8 = __this->get_dataLength_2();
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		V_1 = ((int32_t)-2147483648LL);
		V_2 = ((int32_t)32);
		goto IL_0058;
	}

IL_004e:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		uint32_t L_12 = V_1;
		V_1 = ((int32_t)((uint32_t)L_12>>1));
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_1;
		G_B11_0 = ((((int32_t)((int32_t)((int32_t)L_14&(int32_t)L_15))) == ((int32_t)0))? 1 : 0);
		goto IL_0065;
	}

IL_0064:
	{
		G_B11_0 = 0;
	}

IL_0065:
	{
		V_4 = (bool)G_B11_0;
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_17 = V_2;
		int32_t L_18 = __this->get_dataLength_2();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1))<<(int32_t)5))));
		int32_t L_19 = V_2;
		V_5 = L_19;
		goto IL_007d;
	}

IL_007d:
	{
		int32_t L_20 = V_5;
		return L_20;
	}
}
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* BigInteger_GetBytes_m2793402501 (BigInteger_t956758543 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger_GetBytes_m2793402501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	ByteU5BU5D_t4116647657* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_0 = BigInteger_op_Implicit_m1456924192(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_1 = BigInteger_op_Equality_m4107706715(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		V_5 = L_1;
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		V_6 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1));
		goto IL_00c7;
	}

IL_0021:
	{
		int32_t L_3 = BigInteger_bitCount_m3576967399(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)((int32_t)L_4>>(int32_t)3));
		int32_t L_5 = V_0;
		V_7 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_5&(int32_t)7))) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_7;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_8 = V_1;
		V_2 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_8));
		int32_t L_9 = V_1;
		V_3 = ((int32_t)((int32_t)L_9&(int32_t)3));
		int32_t L_10 = V_3;
		V_8 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		V_3 = 4;
	}

IL_0057:
	{
		V_4 = 0;
		int32_t L_12 = __this->get_dataLength_2();
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		goto IL_00b4;
	}

IL_0066:
	{
		UInt32U5BU5D_t2770800703* L_13 = __this->get_data_1();
		int32_t L_14 = V_9;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_10 = L_16;
		int32_t L_17 = V_3;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		goto IL_0097;
	}

IL_0079:
	{
		ByteU5BU5D_t4116647657* L_18 = V_2;
		int32_t L_19 = V_4;
		int32_t L_20 = V_11;
		uint32_t L_21 = V_10;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)255)))))));
		uint32_t L_22 = V_10;
		V_10 = ((int32_t)((uint32_t)L_22>>8));
		int32_t L_23 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1));
	}

IL_0097:
	{
		int32_t L_24 = V_11;
		V_12 = (bool)((((int32_t)((((int32_t)L_24) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_12;
		if (L_25)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_26 = V_4;
		int32_t L_27 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27));
		V_3 = 4;
		int32_t L_28 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1));
	}

IL_00b4:
	{
		int32_t L_29 = V_9;
		V_13 = (bool)((((int32_t)((((int32_t)L_29) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_13;
		if (L_30)
		{
			goto IL_0066;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_31 = V_2;
		V_6 = L_31;
		goto IL_00c7;
	}

IL_00c7:
	{
		ByteU5BU5D_t4116647657* L_32 = V_6;
		return L_32;
	}
}
// System.Void Photon.SocketServer.Numeric.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m3142840545 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BigInteger__cctor_m3142840545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t385246372* L_0 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)303)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____AEAF34DCCF141E917F02F7768DAEA80AA2B13B95_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((BigInteger_t956758543_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t956758543_il2cpp_TypeInfo_var))->set_primesBelow2000_0(L_0);
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
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
extern "C"  void DiffieHellmanCryptoProvider__ctor_m3020782632 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider__ctor_m3020782632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(OakleyGroups_t1704371988_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_0 = ((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->get_OakleyPrime768_1();
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m3579054046(L_1, L_0, /*hidden argument*/NULL);
		__this->set_prime_1(L_1);
		BigInteger_t956758543 * L_2 = DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682(__this, ((int32_t)160), /*hidden argument*/NULL);
		__this->set_secret_2(L_2);
		BigInteger_t956758543 * L_3 = DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876(__this, /*hidden argument*/NULL);
		__this->set_publicKey_3(L_3);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor(System.Byte[])
extern "C"  void DiffieHellmanCryptoProvider__ctor_m450787995 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___sharedSecretHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider__ctor_m450787995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RijndaelManaged_t3586970409 * L_0 = (RijndaelManaged_t3586970409 *)il2cpp_codegen_object_new(RijndaelManaged_t3586970409_il2cpp_TypeInfo_var);
		RijndaelManaged__ctor_m1562735454(L_0, /*hidden argument*/NULL);
		__this->set_crypto_4(L_0);
		Rijndael_t2986313634 * L_1 = __this->get_crypto_4();
		ByteU5BU5D_t4116647657* L_2 = ___sharedSecretHash0;
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_1, L_2);
		Rijndael_t2986313634 * L_3 = __this->get_crypto_4();
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_3, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16))));
		Rijndael_t2986313634 * L_4 = __this->get_crypto_4();
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_4, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
extern "C"  ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_get_PublicKey_m1675649082 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		BigInteger_t956758543 * L_0 = __this->get_publicKey_3();
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = BigInteger_GetBytes_m2793402501(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ByteU5BU5D_t4116647657* L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
extern "C"  void DiffieHellmanCryptoProvider_DeriveSharedKey_m523483241 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___otherPartyPublicKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_DeriveSharedKey_m523483241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	BigInteger_t956758543 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	SHA256_t3672283617 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t4116647657* L_0 = ___otherPartyPublicKey0;
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m3579054046(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BigInteger_t956758543 * L_2 = V_0;
		BigInteger_t956758543 * L_3 = DiffieHellmanCryptoProvider_CalculateSharedKey_m1876792259(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		BigInteger_t956758543 * L_4 = V_1;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = BigInteger_GetBytes_m2793402501(L_4, /*hidden argument*/NULL);
		__this->set_sharedKey_5(L_5);
		SHA256Managed_t955042874 * L_6 = (SHA256Managed_t955042874 *)il2cpp_codegen_object_new(SHA256Managed_t955042874_il2cpp_TypeInfo_var);
		SHA256Managed__ctor_m2170017447(L_6, /*hidden argument*/NULL);
		V_3 = L_6;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		SHA256_t3672283617 * L_7 = V_3;
		ByteU5BU5D_t4116647657* L_8 = __this->get_sharedKey_5();
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_9 = HashAlgorithm_ComputeHash_m2825542963(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		IL2CPP_LEAVE(0x3E, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		{
			SHA256_t3672283617 * L_10 = V_3;
			if (!L_10)
			{
				goto IL_003d;
			}
		}

IL_0036:
		{
			SHA256_t3672283617 * L_11 = V_3;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(51)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
		RijndaelManaged_t3586970409 * L_12 = (RijndaelManaged_t3586970409 *)il2cpp_codegen_object_new(RijndaelManaged_t3586970409_il2cpp_TypeInfo_var);
		RijndaelManaged__ctor_m1562735454(L_12, /*hidden argument*/NULL);
		__this->set_crypto_4(L_12);
		Rijndael_t2986313634 * L_13 = __this->get_crypto_4();
		ByteU5BU5D_t4116647657* L_14 = V_2;
		NullCheck(L_13);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_13, L_14);
		Rijndael_t2986313634 * L_15 = __this->get_crypto_4();
		NullCheck(L_15);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_15, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16))));
		Rijndael_t2986313634 * L_16 = __this->get_crypto_4();
		NullCheck(L_16);
		VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_16, 2);
		return;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_Encrypt_m3205762831 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_Encrypt_m3205762831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Rijndael_t2986313634 * L_0 = __this->get_crypto_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_0);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_2 = V_0;
		ByteU5BU5D_t4116647657* L_3 = ___data0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_6 = InterfaceFuncInvoker3< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t2733259762_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x25, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_8);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		ByteU5BU5D_t4116647657* L_9 = V_1;
		return L_9;
	}
}
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4116647657* DiffieHellmanCryptoProvider_Decrypt_m2209477771 (DiffieHellmanCryptoProvider_t915317458 * __this, ByteU5BU5D_t4116647657* ___data0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_Decrypt_m2209477771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Rijndael_t2986313634 * L_0 = __this->get_crypto_4();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_0);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_2 = V_0;
		ByteU5BU5D_t4116647657* L_3 = ___data0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_6 = InterfaceFuncInvoker3< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(5 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t2733259762_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x25, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0024;
			}
		}

IL_001d:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_8);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		ByteU5BU5D_t4116647657* L_9 = V_1;
		return L_9;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
extern "C"  void DiffieHellmanCryptoProvider_Dispose_m1904765254 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	{
		DiffieHellmanCryptoProvider_Dispose_m1853825749(__this, (bool)1, /*hidden argument*/NULL);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C"  void DiffieHellmanCryptoProvider_Dispose_m1853825749 (DiffieHellmanCryptoProvider_t915317458 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = ___disposing0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		return;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C"  BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876 (DiffieHellmanCryptoProvider_t915317458 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_CalculatePublicKey_m277395876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_0 = ((DiffieHellmanCryptoProvider_t915317458_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var))->get_primeRoot_0();
		BigInteger_t956758543 * L_1 = __this->get_secret_2();
		BigInteger_t956758543 * L_2 = __this->get_prime_1();
		NullCheck(L_0);
		BigInteger_t956758543 * L_3 = BigInteger_ModPow_m1818331774(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		BigInteger_t956758543 * L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t956758543 * DiffieHellmanCryptoProvider_CalculateSharedKey_m1876792259 (DiffieHellmanCryptoProvider_t915317458 * __this, BigInteger_t956758543 * ___otherPartyPublicKey0, const RuntimeMethod* method)
{
	BigInteger_t956758543 * V_0 = NULL;
	{
		BigInteger_t956758543 * L_0 = ___otherPartyPublicKey0;
		BigInteger_t956758543 * L_1 = __this->get_secret_2();
		BigInteger_t956758543 * L_2 = __this->get_prime_1();
		NullCheck(L_0);
		BigInteger_t956758543 * L_3 = BigInteger_ModPow_m1818331774(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		BigInteger_t956758543 * L_4 = V_0;
		return L_4;
	}
}
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C"  BigInteger_t956758543 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682 (DiffieHellmanCryptoProvider_t915317458 * __this, int32_t ___secretLength0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider_GenerateRandomSecret_m727301682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t956758543 * V_0 = NULL;
	bool V_1 = false;
	BigInteger_t956758543 * V_2 = NULL;
	int32_t G_B4_0 = 0;
	{
	}

IL_0001:
	{
		int32_t L_0 = ___secretLength0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_1 = BigInteger_GenerateRandom_m3242160242(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BigInteger_t956758543 * L_2 = V_0;
		BigInteger_t956758543 * L_3 = __this->get_prime_1();
		BigInteger_t956758543 * L_4 = BigInteger_op_Implicit_m1456924192(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		BigInteger_t956758543 * L_5 = BigInteger_op_Subtraction_m1996860654(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		bool L_6 = BigInteger_op_GreaterThanOrEqual_m1973220735(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		BigInteger_t956758543 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger_t956758543 * L_8 = BigInteger_op_Implicit_m1456924192(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_9 = BigInteger_op_Equality_m4107706715(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_9));
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 1;
	}

IL_0032:
	{
		V_1 = (bool)G_B4_0;
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0001;
		}
	}
	{
		BigInteger_t956758543 * L_11 = V_0;
		V_2 = L_11;
		goto IL_003a;
	}

IL_003a:
	{
		BigInteger_t956758543 * L_12 = V_2;
		return L_12;
	}
}
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
extern "C"  void DiffieHellmanCryptoProvider__cctor_m2518077788 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DiffieHellmanCryptoProvider__cctor_m2518077788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OakleyGroups_t1704371988_il2cpp_TypeInfo_var);
		int32_t L_0 = ((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->get_Generator_0();
		BigInteger_t956758543 * L_1 = (BigInteger_t956758543 *)il2cpp_codegen_object_new(BigInteger_t956758543_il2cpp_TypeInfo_var);
		BigInteger__ctor_m1240160733(L_1, (((int64_t)((int64_t)L_0))), /*hidden argument*/NULL);
		((DiffieHellmanCryptoProvider_t915317458_StaticFields*)il2cpp_codegen_static_fields_for(DiffieHellmanCryptoProvider_t915317458_il2cpp_TypeInfo_var))->set_primeRoot_0(L_1);
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
// System.Void Photon.SocketServer.Security.OakleyGroups::.cctor()
extern "C"  void OakleyGroups__cctor_m3563987568 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OakleyGroups__cctor_m3563987568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_Generator_0(((int32_t)22));
		ByteU5BU5D_t4116647657* L_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96)));
		RuntimeFieldHandle_t1871169219  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____4989E5469B40416DC5AFB739C747E32B40CC5C77_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_OakleyPrime768_1(L_0);
		ByteU5BU5D_t4116647657* L_2 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128)));
		RuntimeFieldHandle_t1871169219  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____C033BD4351FBA3732545EA2E016D52B0FC3E69EC_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_OakleyPrime1024_2(L_2);
		ByteU5BU5D_t4116647657* L_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192)));
		RuntimeFieldHandle_t1871169219  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____49ECABA9727A1AF0636082C467485A1A9A04B669_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((OakleyGroups_t1704371988_StaticFields*)il2cpp_codegen_static_fields_for(OakleyGroups_t1704371988_il2cpp_TypeInfo_var))->set_OakleyPrime1536_3(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
