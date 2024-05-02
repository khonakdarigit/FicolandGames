#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`1<Realms.PlatformHelpers.IDeviceInfo>
struct Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`2<System.Reflection.Assembly,System.Boolean>
struct Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9;
// System.Func`2<System.Reflection.CustomAttributeData,System.Boolean>
struct Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3;
// System.Func`2<System.Reflection.CustomAttributeNamedArgument,System.Boolean>
struct Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>
struct IEnumerable_1_t11F08D46A18E820E6CD80DE57F40444AD29E6689;
// System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData>
struct IEnumerable_1_tB2453AD789F2371A7242E3E53F4FE04FC34FE407;
// System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeNamedArgument>
struct IEnumerable_1_t9EDC85D751A0752DAA2A2918D06C6E30E63DEEEA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t09217E1EDF7CCAED72B667F406AAC92AB64B8790;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t1E95A05AFA88C09BA96A40B431F7D5867BD0D622;
// System.Lazy`1<Realms.PlatformHelpers.IDeviceInfo>
struct Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0;
// System.Lazy`1<System.Object>
struct Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Reflection.CustomAttributeData
struct CustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Realms.PlatformHelpers.DeviceInfo
struct DeviceInfo_t7F2B881E7091902CAC40FFBF8C660ECA412237E7;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t8E2C592FEDF682E4BFC1DFE877D6A9F6C3CF2278;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// Realms.PlatformHelpers.IDeviceInfo
struct IDeviceInfo_t1D3D2D9A71363778AD250E262F34DB0DD3A2C15D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.LazyHelper
struct LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t86C37C2029A180163F8D50462C814AA399898E7D;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_tA2D7C73196CE131DA92EC7AB3997EC99C315A0E1;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t4F8036F83C070762609DB213B69F7FAA2D34ACA3;
// Realms.PlatformHelpers.Platform/<>c
struct U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceInfo_t7F2B881E7091902CAC40FFBF8C660ECA412237E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5377890ABAAC874E709DC632FAD01DE70AB6B05E;
IL2CPP_EXTERN_C String_t* _stringLiteral8413C297C7269FEA4BA37C1F926FB286F73AD6AA;
IL2CPP_EXTERN_C String_t* _stringLiteralADE422ACDA987C37F3C591E9EF33175D75594377;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisCustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95_mF292C676001DA974667CBAC7580E20E808573BA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisAssembly_t_mA1E22593CA054ED7DD071346EA87186822FC18D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_m0D5CD16D204DACEC586222B4394918527F6115EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mF85CA83F05F308C09FF150A65C34A0DCB6AC3685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_IsValueCreated_m78C5F0B321ED391205AB08B70D9F7E346DFC72B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_m1A8029FAAC9CF4DD15EEBD9FBC6D4FBA4699FB6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_set_DeviceInfo_m34E46D165E28EFD3502520E6CDDB6E8F32775918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__11_0_mB7140A6A8B0688AA733BFA242AA3508A50FC3108_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_BundleIdU3Eb__8_0_m6F8052E80CA973DC5875C0EF11A373749571C5D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_BundleIdU3Eb__8_1_m4481DE180C3F2A68B947243E01955A5962EC0E3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_BundleIdU3Eb__8_2_m32A6D5900FB6F7A432D51FD65CB2194D4B1B0E7C_RuntimeMethod_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF3C4E86F64649AFEC903A7F0764F7B03AD621CDA 
{
};

// System.Lazy`1<Realms.PlatformHelpers.IDeviceInfo>
struct Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0  : public RuntimeObject
{
	// System.LazyHelper modreq(System.Runtime.CompilerServices.IsVolatile) System.Lazy`1::_state
	LazyHelper_t1784351780B2D1AC002869BB3C7A35AA64762602* ____state_0;
	// System.Func`1<T> System.Lazy`1::_factory
	Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B* ____factory_1;
	// T System.Lazy`1::_value
	RuntimeObject* ____value_2;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2  : public RuntimeObject
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;
};
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.CustomAttributeData
struct CustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95  : public RuntimeObject
{
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData/LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t4F8036F83C070762609DB213B69F7FAA2D34ACA3* ___lazyData_3;
};

// Realms.PlatformHelpers.DeviceInfo
struct DeviceInfo_t7F2B881E7091902CAC40FFBF8C660ECA412237E7  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Realms.PlatformHelpers.Platform
struct Platform_t705D4D1B86941177286724C66FD7553282282A05  : public RuntimeObject
{
};

struct Platform_t705D4D1B86941177286724C66FD7553282282A05_StaticFields
{
	// Realms.PlatformHelpers.IDeviceInfo Realms.PlatformHelpers.Platform::_deviceInfo
	RuntimeObject* ____deviceInfo_1;
	// System.Lazy`1<Realms.PlatformHelpers.IDeviceInfo> Realms.PlatformHelpers.Platform::_deviceInfoLazy
	Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0* ____deviceInfoLazy_2;
	// System.String Realms.PlatformHelpers.Platform::_bundleId
	String_t* ____bundleId_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Realms.PlatformHelpers.Platform/<>c
struct U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC  : public RuntimeObject
{
};

struct U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields
{
	// Realms.PlatformHelpers.Platform/<>c Realms.PlatformHelpers.Platform/<>c::<>9
	U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.CustomAttributeNamedArgument,System.Boolean> Realms.PlatformHelpers.Platform/<>c::<>9__8_2
	Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF* ___U3CU3E9__8_2_1;
	// System.Func`2<System.Reflection.CustomAttributeData,System.Boolean> Realms.PlatformHelpers.Platform/<>c::<>9__8_1
	Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3* ___U3CU3E9__8_1_2;
	// System.Func`2<System.Reflection.Assembly,System.Boolean> Realms.PlatformHelpers.Platform/<>c::<>9__8_0
	Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* ___U3CU3E9__8_0_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F 
{
	// System.Type System.Reflection.CustomAttributeTypedArgument::<ArgumentType>k__BackingField
	Type_t* ___U3CArgumentTypeU3Ek__BackingField_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField_0;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField_0;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField_1;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t8E2C592FEDF682E4BFC1DFE877D6A9F6C3CF2278  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t86C37C2029A180163F8D50462C814AA399898E7D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_tA2D7C73196CE131DA92EC7AB3997EC99C315A0E1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 
{
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::<TypedValue>k__BackingField
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___U3CTypedValueU3Ek__BackingField_0;
	// System.Boolean System.Reflection.CustomAttributeNamedArgument::<IsField>k__BackingField
	bool ___U3CIsFieldU3Ek__BackingField_1;
	// System.String System.Reflection.CustomAttributeNamedArgument::<MemberName>k__BackingField
	String_t* ___U3CMemberNameU3Ek__BackingField_2;
	// System.Type System.Reflection.CustomAttributeNamedArgument::_attributeType
	Type_t* ____attributeType_3;
	// System.Reflection.MemberInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Reflection.CustomAttributeNamedArgument::_lazyMemberInfo
	MemberInfo_t* ____lazyMemberInfo_4;
};
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke ___U3CTypedValueU3Ek__BackingField_0;
	int32_t ___U3CIsFieldU3Ek__BackingField_1;
	char* ___U3CMemberNameU3Ek__BackingField_2;
	Type_t* ____attributeType_3;
	MemberInfo_t* ____lazyMemberInfo_4;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_com
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com ___U3CTypedValueU3Ek__BackingField_0;
	int32_t ___U3CIsFieldU3Ek__BackingField_1;
	Il2CppChar* ___U3CMemberNameU3Ek__BackingField_2;
	Type_t* ____attributeType_3;
	MemberInfo_t* ____lazyMemberInfo_4;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`1<Realms.PlatformHelpers.IDeviceInfo>
struct Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.Assembly,System.Boolean>
struct Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.CustomAttributeData,System.Boolean>
struct Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.CustomAttributeNamedArgument,System.Boolean>
struct Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T System.Lazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Lazy`1<System.Object>::get_IsValueCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lazy_1_get_IsValueCreated_m39248E19CF823CC31D8FFA6F16D811425D04DEBE_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Lazy`1<System.Object>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_m4CD0C5ACC0541018DB9BDB090B1EFE67D5A9CEF1_gshared (Lazy_1_tAD66CD7CC97BB996411F4FE0F49A1817031B906E* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___valueFactory0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.CustomAttributeNamedArgument,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m43397E09CF54A8E20F1E484A2C7043EACBE1CD73_gshared (Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Reflection.CustomAttributeNamedArgument>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 Enumerable_FirstOrDefault_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_m0D5CD16D204DACEC586222B4394918527F6115EF_gshared (RuntimeObject* ___source0, Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF* ___predicate1, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// T System.Lazy`1<Realms.PlatformHelpers.IDeviceInfo>::get_Value()
inline RuntimeObject* Lazy_1_get_Value_m1A8029FAAC9CF4DD15EEBD9FBC6D4FBA4699FB6B (Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0*, const RuntimeMethod*))Lazy_1_get_Value_mC3D475ED3C0FAB4E8BCC96FBF5EF49ED671B86A4_gshared)(__this, method);
}
// System.Boolean System.Lazy`1<Realms.PlatformHelpers.IDeviceInfo>::get_IsValueCreated()
inline bool Lazy_1_get_IsValueCreated_m78C5F0B321ED391205AB08B70D9F7E346DFC72B7 (Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0*, const RuntimeMethod*))Lazy_1_get_IsValueCreated_m39248E19CF823CC31D8FFA6F16D811425D04DEBE_gshared)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::GetEntryAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_GetEntryAssembly_mEDB11F94D82CA946A6533EEB4B20D80C37FC1B98 (const RuntimeMethod* method) ;
// System.String System.Reflection.AssemblyName::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.Assembly,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0289D3B3C9D7A664C27794590540D4EA6C813CDF (Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Reflection.Assembly>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline Assembly_t* Enumerable_FirstOrDefault_TisAssembly_t_mA1E22593CA054ED7DD071346EA87186822FC18D7 (RuntimeObject* ___source0, Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* ___predicate1, const RuntimeMethod* method)
{
	return ((  Assembly_t* (*) (RuntimeObject*, Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.String Realms.PlatformHelpers.Platform::Sha256(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_Sha256_m6269CDB084B99BA2FA031464F876554BA3EFF6DE (String_t* ___value0, const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC (const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inArray0, const RuntimeMethod* method) ;
// System.Void System.Func`1<Realms.PlatformHelpers.IDeviceInfo>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mA85BEBEE07E37C5843846DE8EB0CCB9BC4ABDB8C (Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<Realms.PlatformHelpers.IDeviceInfo>::.ctor(System.Func`1<T>)
inline void Lazy_1__ctor_mF85CA83F05F308C09FF150A65C34A0DCB6AC3685 (Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0* __this, Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B* ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0*, Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B*, const RuntimeMethod*))Lazy_1__ctor_m4CD0C5ACC0541018DB9BDB090B1EFE67D5A9CEF1_gshared)(__this, ___valueFactory0, method);
}
// System.Void Realms.PlatformHelpers.Platform/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m587E509E4193F2DF71A5CEB736E402CB94E7A3D9 (U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.CustomAttributeData,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m06260E90C0ACD8D73FBEE8CD7C98A702019A4132 (Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.CustomAttributeData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisCustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95_mF292C676001DA974667CBAC7580E20E808573BA7 (RuntimeObject* ___source0, Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared)(___source0, ___predicate1, method);
}
// System.Type System.Reflection.CustomAttributeData::get_AttributeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* CustomAttributeData_get_AttributeType_mF60B478695109F172991BFF76CF8462FA571AF64 (CustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.CustomAttributeNamedArgument,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m43397E09CF54A8E20F1E484A2C7043EACBE1CD73 (Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m43397E09CF54A8E20F1E484A2C7043EACBE1CD73_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Reflection.CustomAttributeNamedArgument>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 Enumerable_FirstOrDefault_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_m0D5CD16D204DACEC586222B4394918527F6115EF (RuntimeObject* ___source0, Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF* ___predicate1, const RuntimeMethod* method)
{
	return ((  CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 (*) (RuntimeObject*, Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_m0D5CD16D204DACEC586222B4394918527F6115EF_gshared)(___source0, ___predicate1, method);
}
// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::get_TypedValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F CustomAttributeNamedArgument_get_TypedValue_m4C7C82C920D8C3DE55C1D133302F3847510B9D35_inline (CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.CustomAttributeTypedArgument::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline (CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* __this, const RuntimeMethod* method) ;
// System.String System.Reflection.CustomAttributeNamedArgument::get_MemberName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CustomAttributeNamedArgument_get_MemberName_mB4F035EA58C067B396300CFE73F096FF8D5E5376_inline (CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* __this, const RuntimeMethod* method) ;
// System.Void Realms.PlatformHelpers.DeviceInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceInfo__ctor_mEFB3E81CCA2857F5F5A649000A4D12BDDBEF1AD1 (DeviceInfo_t7F2B881E7091902CAC40FFBF8C660ECA412237E7* __this, const RuntimeMethod* method) ;
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m0776285B5496CE7D080062ED54F1D66B0F3EF3A7 (EmbeddedAttribute_t8E2C592FEDF682E4BFC1DFE877D6A9F6C3CF2278* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mB0AB8239DCA131D8E2D3201FBA3EBCAE07EE2BA6 (NullableAttribute_t86C37C2029A180163F8D50462C814AA399898E7D* __this, uint8_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = p0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mBD4CCCA6EA53A17FC9D6A76FFFEF2606BAE679F0 (NullableAttribute_t86C37C2029A180163F8D50462C814AA399898E7D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = p0;
		__this->___NullableFlags_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_0);
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
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m960E647AB5729C9144F9071327FB2DA36DC7144E (NullableContextAttribute_tA2D7C73196CE131DA92EC7AB3997EC99C315A0E1* __this, uint8_t p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = p0;
		__this->___Flag_0 = L_0;
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
// Realms.PlatformHelpers.IDeviceInfo Realms.PlatformHelpers.Platform::get_DeviceInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_DeviceInfo_mF178E674A7266ED68F0D25746A96082A4CFD6B2F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_Value_m1A8029FAAC9CF4DD15EEBD9FBC6D4FBA4699FB6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0* L_0 = ((Platform_t705D4D1B86941177286724C66FD7553282282A05_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var))->____deviceInfoLazy_2;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Lazy_1_get_Value_m1A8029FAAC9CF4DD15EEBD9FBC6D4FBA4699FB6B(L_0, Lazy_1_get_Value_m1A8029FAAC9CF4DD15EEBD9FBC6D4FBA4699FB6B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Realms.PlatformHelpers.Platform::set_DeviceInfo(Realms.PlatformHelpers.IDeviceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_set_DeviceInfo_m34E46D165E28EFD3502520E6CDDB6E8F32775918 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_get_IsValueCreated_m78C5F0B321ED391205AB08B70D9F7E346DFC72B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0* L_0 = ((Platform_t705D4D1B86941177286724C66FD7553282282A05_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var))->____deviceInfoLazy_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = Lazy_1_get_IsValueCreated_m78C5F0B321ED391205AB08B70D9F7E346DFC72B7(L_0, Lazy_1_get_IsValueCreated_m78C5F0B321ED391205AB08B70D9F7E346DFC72B7_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5377890ABAAC874E709DC632FAD01DE70AB6B05E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_set_DeviceInfo_m34E46D165E28EFD3502520E6CDDB6E8F32775918_RuntimeMethod_var)));
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		((Platform_t705D4D1B86941177286724C66FD7553282282A05_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var))->____deviceInfo_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Platform_t705D4D1B86941177286724C66FD7553282282A05_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var))->____deviceInfo_1), (void*)L_3);
		return;
	}
}
// System.String Realms.PlatformHelpers.Platform::get_BundleId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_BundleId_m25BB373F23CEDDD4150039CC2806697CB370D7D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisAssembly_t_mA1E22593CA054ED7DD071346EA87186822FC18D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_BundleIdU3Eb__8_0_m6F8052E80CA973DC5875C0EF11A373749571C5D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B1_0 = NULL;
	Assembly_t* G_B3_0 = NULL;
	Assembly_t* G_B2_0 = NULL;
	Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* G_B7_0 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* G_B7_1 = NULL;
	Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* G_B6_0 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* G_B6_1 = NULL;
	Assembly_t* G_B9_0 = NULL;
	Assembly_t* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Platform_t705D4D1B86941177286724C66FD7553282282A05_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var))->____bundleId_3;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B4_0 = L_1;
			goto IL_001f;
		}
	}
	{
		Assembly_t* L_2;
		L_2 = Assembly_GetEntryAssembly_mEDB11F94D82CA946A6533EEB4B20D80C37FC1B98(NULL);
		Assembly_t* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0015;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_001f;
	}

IL_0015:
	{
		NullCheck(G_B3_0);
		AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_4;
		L_4 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(19 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, G_B3_0);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline(L_4, NULL);
		G_B4_0 = L_5;
	}

IL_001f:
	{
		V_0 = G_B4_0;
		String_t* L_6 = V_0;
		if (L_6)
		{
			goto IL_0063;
		}
	}
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_7;
		L_7 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_7);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_8;
		L_8 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* L_9 = ((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_3;
		Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* L_10 = L_9;
		G_B6_0 = L_10;
		G_B6_1 = L_8;
		if (L_10)
		{
			G_B7_0 = L_10;
			G_B7_1 = L_8;
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* L_11 = ((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* L_12 = (Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9*)il2cpp_codegen_object_new(Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_m0289D3B3C9D7A664C27794590540D4EA6C813CDF(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3Cget_BundleIdU3Eb__8_0_m6F8052E80CA973DC5875C0EF11A373749571C5D7_RuntimeMethod_var), NULL);
		Func_2_t3FF9FC9038AAF42274EC51B73C22E875D6CEE5E9* L_13 = L_12;
		((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_3), (void*)L_13);
		G_B7_0 = L_13;
		G_B7_1 = G_B6_1;
	}

IL_004c:
	{
		Assembly_t* L_14;
		L_14 = Enumerable_FirstOrDefault_TisAssembly_t_mA1E22593CA054ED7DD071346EA87186822FC18D7((RuntimeObject*)G_B7_1, G_B7_0, Enumerable_FirstOrDefault_TisAssembly_t_mA1E22593CA054ED7DD071346EA87186822FC18D7_RuntimeMethod_var);
		Assembly_t* L_15 = L_14;
		G_B8_0 = L_15;
		if (L_15)
		{
			G_B9_0 = L_15;
			goto IL_0058;
		}
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		goto IL_0062;
	}

IL_0058:
	{
		NullCheck(G_B9_0);
		AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_16;
		L_16 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(19 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, G_B9_0);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline(L_16, NULL);
		G_B10_0 = L_17;
	}

IL_0062:
	{
		V_0 = G_B10_0;
	}

IL_0063:
	{
		String_t* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = Platform_Sha256_m6269CDB084B99BA2FA031464F876554BA3EFF6DE(L_18, NULL);
		return L_19;
	}
}
// System.Void Realms.PlatformHelpers.Platform::set_BundleId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_set_BundleId_m8A9E6531BBC6007FAB5ACB28BFDF42DDC6D78B72 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		((Platform_t705D4D1B86941177286724C66FD7553282282A05_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var))->____bundleId_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Platform_t705D4D1B86941177286724C66FD7553282282A05_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var))->____bundleId_3), (void*)L_0);
		return;
	}
}
// System.String Realms.PlatformHelpers.Platform::Sha256(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_Sha256_m6269CDB084B99BA2FA031464F876554BA3EFF6DE (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0009:
	{
		SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_1;
		L_1 = SHA256_Create_m41FBBA07C26677E1028E44E3530AC1BA17D26BBC(NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				{
					SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0031;
					}
				}
				{
					SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0031:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* L_4 = V_0;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___value0;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			NullCheck(L_4);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_4, L_7, NULL);
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			String_t* L_9;
			L_9 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_8, NULL);
			V_1 = L_9;
			goto IL_0032;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		String_t* L_10 = V_1;
		return L_10;
	}
}
// System.Void Realms.PlatformHelpers.Platform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__cctor_m6503BBEA29986AFAE46B43674AFF1E3E7F6053B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1__ctor_mF85CA83F05F308C09FF150A65C34A0DCB6AC3685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__11_0_mB7140A6A8B0688AA733BFA242AA3508A50FC3108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* L_0 = ((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B* L_1 = (Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B*)il2cpp_codegen_object_new(Func_1_t40E9BD8F1242B9E129B60DBB47CC69AAE1A1144B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mA85BEBEE07E37C5843846DE8EB0CCB9BC4ABDB8C(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__11_0_mB7140A6A8B0688AA733BFA242AA3508A50FC3108_RuntimeMethod_var), NULL);
		Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0* L_2 = (Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0*)il2cpp_codegen_object_new(Lazy_1_t1647FFA26FAE2599D495B2ABFF48647EAA6BCBE0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Lazy_1__ctor_mF85CA83F05F308C09FF150A65C34A0DCB6AC3685(L_2, L_1, Lazy_1__ctor_mF85CA83F05F308C09FF150A65C34A0DCB6AC3685_RuntimeMethod_var);
		((Platform_t705D4D1B86941177286724C66FD7553282282A05_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var))->____deviceInfoLazy_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Platform_t705D4D1B86941177286724C66FD7553282282A05_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var))->____deviceInfoLazy_2), (void*)L_2);
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
// System.Void Realms.PlatformHelpers.Platform/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC5E069094197BC22ABBD896B88EEF3BEEB1391EB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* L_0 = (U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC*)il2cpp_codegen_object_new(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m587E509E4193F2DF71A5CEB736E402CB94E7A3D9(L_0, NULL);
		((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Realms.PlatformHelpers.Platform/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m587E509E4193F2DF71A5CEB736E402CB94E7A3D9 (U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Realms.PlatformHelpers.Platform/<>c::<get_BundleId>b__8_0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_BundleIdU3Eb__8_0_m6F8052E80CA973DC5875C0EF11A373749571C5D7 (U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* __this, Assembly_t* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisCustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95_mF292C676001DA974667CBAC7580E20E808573BA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_BundleIdU3Eb__8_1_m4481DE180C3F2A68B947243E01955A5962EC0E3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		Assembly_t* L_0 = ___a0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(28 /* System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData> System.Reflection.Assembly::get_CustomAttributes() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3* L_2 = ((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_2;
		Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* L_4 = ((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3* L_5 = (Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3*)il2cpp_codegen_object_new(Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m06260E90C0ACD8D73FBEE8CD7C98A702019A4132(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3Cget_BundleIdU3Eb__8_1_m4481DE180C3F2A68B947243E01955A5962EC0E3C_RuntimeMethod_var), NULL);
		Func_2_t0312F38B29BA8FC118BA16A2224F7712FB93BAB3* L_6 = L_5;
		((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9__8_1_2), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		bool L_7;
		L_7 = Enumerable_Any_TisCustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95_mF292C676001DA974667CBAC7580E20E808573BA7(G_B2_1, G_B2_0, Enumerable_Any_TisCustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95_mF292C676001DA974667CBAC7580E20E808573BA7_RuntimeMethod_var);
		return L_7;
	}
}
// System.Boolean Realms.PlatformHelpers.Platform/<>c::<get_BundleId>b__8_1(System.Reflection.CustomAttributeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_BundleIdU3Eb__8_1_m4481DE180C3F2A68B947243E01955A5962EC0E3C (U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* __this, CustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95* ___att0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_m0D5CD16D204DACEC586222B4394918527F6115EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_BundleIdU3Eb__8_2_m32A6D5900FB6F7A432D51FD65CB2194D4B1B0E7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADE422ACDA987C37F3C591E9EF33175D75594377);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 V_1;
	memset((&V_1), 0, sizeof(V_1));
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	{
		CustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95* L_0 = ___att0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = CustomAttributeData_get_AttributeType_mF60B478695109F172991BFF76CF8462FA571AF64(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_FullName() */, L_1);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralADE422ACDA987C37F3C591E9EF33175D75594377, NULL);
		if (!L_3)
		{
			goto IL_006a;
		}
	}
	{
		CustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95* L_4 = ___att0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::get_NamedArguments() */, L_4);
		RuntimeObject* L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_0024;
		}
	}
	{
		G_B6_0 = NULL;
		goto IL_0058;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF* L_7 = ((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9__8_2_1;
		Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF* L_8 = L_7;
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
		if (L_8)
		{
			G_B5_0 = L_8;
			G_B5_1 = G_B3_0;
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var);
		U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* L_9 = ((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF* L_10 = (Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF*)il2cpp_codegen_object_new(Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m43397E09CF54A8E20F1E484A2C7043EACBE1CD73(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3Cget_BundleIdU3Eb__8_2_m32A6D5900FB6F7A432D51FD65CB2194D4B1B0E7C_RuntimeMethod_var), NULL);
		Func_2_tB6437CFC52C0334B88DE39752EA63C6FA8594BFF* L_11 = L_10;
		((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9__8_2_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC_il2cpp_TypeInfo_var))->___U3CU3E9__8_2_1), (void*)L_11);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
	}

IL_0043:
	{
		CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 L_12;
		L_12 = Enumerable_FirstOrDefault_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_m0D5CD16D204DACEC586222B4394918527F6115EF(G_B5_1, G_B5_0, Enumerable_FirstOrDefault_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_m0D5CD16D204DACEC586222B4394918527F6115EF_RuntimeMethod_var);
		V_1 = L_12;
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_13;
		L_13 = CustomAttributeNamedArgument_get_TypedValue_m4C7C82C920D8C3DE55C1D133302F3847510B9D35_inline((&V_1), NULL);
		V_2 = L_13;
		RuntimeObject* L_14;
		L_14 = CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline((&V_2), NULL);
		G_B6_0 = L_14;
	}

IL_0058:
	{
		V_0 = G_B6_0;
		RuntimeObject* L_15 = V_0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_15, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_16 = V_0;
		return ((*(bool*)((bool*)(bool*)UnBox(L_16, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
	}

IL_0068:
	{
		return (bool)0;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Boolean Realms.PlatformHelpers.Platform/<>c::<get_BundleId>b__8_2(System.Reflection.CustomAttributeNamedArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_BundleIdU3Eb__8_2_m32A6D5900FB6F7A432D51FD65CB2194D4B1B0E7C (U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* __this, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 ___arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8413C297C7269FEA4BA37C1F926FB286F73AD6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = CustomAttributeNamedArgument_get_MemberName_mB4F035EA58C067B396300CFE73F096FF8D5E5376_inline((&___arg0), NULL);
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteral8413C297C7269FEA4BA37C1F926FB286F73AD6AA, NULL);
		return L_1;
	}
}
// Realms.PlatformHelpers.IDeviceInfo Realms.PlatformHelpers.Platform/<>c::<.cctor>b__11_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__11_0_mB7140A6A8B0688AA733BFA242AA3508A50FC3108 (U3CU3Ec_t1463E36B3EA318DB917E9DAE24F515DF34ACE5DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceInfo_t7F2B881E7091902CAC40FFBF8C660ECA412237E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t705D4D1B86941177286724C66FD7553282282A05_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t705D4D1B86941177286724C66FD7553282282A05_il2cpp_TypeInfo_var))->____deviceInfo_1;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		DeviceInfo_t7F2B881E7091902CAC40FFBF8C660ECA412237E7* L_2 = (DeviceInfo_t7F2B881E7091902CAC40FFBF8C660ECA412237E7*)il2cpp_codegen_object_new(DeviceInfo_t7F2B881E7091902CAC40FFBF8C660ECA412237E7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DeviceInfo__ctor_mEFB3E81CCA2857F5F5A649000A4D12BDDBEF1AD1(L_2, NULL);
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_000e:
	{
		return G_B2_0;
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
// System.String Realms.PlatformHelpers.DeviceInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceInfo_get_Name_mE93A80A6C8D0BA3DE0334DD5CA35BAF86221FFFF (DeviceInfo_t7F2B881E7091902CAC40FFBF8C660ECA412237E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.String Realms.PlatformHelpers.DeviceInfo::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceInfo_get_Version_m46774E78AE287A390CC9C3BD4DE88F13D1747FB2 (DeviceInfo_t7F2B881E7091902CAC40FFBF8C660ECA412237E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void Realms.PlatformHelpers.DeviceInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceInfo__ctor_mEFB3E81CCA2857F5F5A649000A4D12BDDBEF1AD1 (DeviceInfo_t7F2B881E7091902CAC40FFBF8C660ECA412237E7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F CustomAttributeNamedArgument_get_TypedValue_m4C7C82C920D8C3DE55C1D133302F3847510B9D35_inline (CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* __this, const RuntimeMethod* method) 
{
	{
		CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F L_0 = __this->___U3CTypedValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeTypedArgument_get_Value_mBD50EB83EDE4C82335200A58F8735576D0A43E62_inline (CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CustomAttributeNamedArgument_get_MemberName_mB4F035EA58C067B396300CFE73F096FF8D5E5376_inline (CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMemberNameU3Ek__BackingField_2;
		return L_0;
	}
}
