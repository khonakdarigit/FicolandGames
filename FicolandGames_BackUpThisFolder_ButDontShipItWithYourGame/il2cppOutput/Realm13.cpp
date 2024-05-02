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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.Channels.AsyncOperation`1<System.Boolean>
struct AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>
struct TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.VoidResult>
struct Task_1_tADEA7BDA441070E5AE4FD24C22A8D70A24FD199A;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Microsoft.CodeAnalysis.<06e9bf70-f5ca-44ed-8ef1-f544203364d5>EmbeddedAttribute
struct U3C06e9bf70U2Df5caU2D44edU2D8ef1U2Df544203364d5U3EEmbeddedAttribute_t24A530D59D25E310C5248F668EB67587A0A86120;
// System.Runtime.CompilerServices.<919d9a8d-d7ff-4808-8e3c-672c1fe27e9a>IsReadOnlyAttribute
struct U3C919d9a8dU2Dd7ffU2D4808U2D8e3cU2D672c1fe27e9aU3EIsReadOnlyAttribute_t5F2A57A1AF4B203E61787164ECF6BA08F9793D8E;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Diagnostics.CodeAnalysis.AllowNullAttribute
struct AllowNullAttribute_t68F3E977C711D8BCE1AA19C2D7CE031BB2781957;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Assembly
struct Assembly_t;
// System.Runtime.CompilerServices.AsyncMethodBuilderAttribute
struct AsyncMethodBuilderAttribute_t758B6CCF08F66F30344158C6D9262034F0C8179A;
// System.Threading.Channels.AsyncOperation
struct AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.Channels.BoundedChannelOptions
struct BoundedChannelOptions_tDE303FEAC97009A3DA962B86551F460522FD72F8;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.Channels.ChannelClosedException
struct ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434;
// System.Threading.Channels.ChannelOptions
struct ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Diagnostics.CodeAnalysis.DisallowNullAttribute
struct DisallowNullAttribute_tD46EF28E9C6436EE7EF001F767781F65622ACD2E;
// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_t04001AD79987F0B0044B2D1D679B4197D5BFEF34;
// System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute
struct DoesNotReturnIfAttribute_tD9D5B1C452292A83CE9E36AA3C30A0182A1A03C7;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tC2F6AECA6544C1D8E144AB5A4250CFDB094E096F;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
// System.Threading.Tasks.Sources.IValueTaskSource
struct IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tF50F7B62487F876FFAC182E7AE896D4165FC3C3E;
// System.Diagnostics.CodeAnalysis.MaybeNullAttribute
struct MaybeNullAttribute_tD580B0C2FAE1E1296E662839B26CE395D77D3F79;
// System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute
struct MaybeNullWhenAttribute_t25EAABBA8D44AEB26C1B869E93BFC990C1638FE5;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Diagnostics.CodeAnalysis.MemberNotNullAttribute
struct MemberNotNullAttribute_t61B3324283A23DB98DF14DFA12E93367848DB556;
// System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute
struct MemberNotNullWhenAttribute_t1203E9CE25CA392D2D1F8E2856879E6D5E4CC1B9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Versioning.NonVersionableAttribute
struct NonVersionableAttribute_tCD81A4C378265DB4067F02D7DDEF32E5BE8A79DB;
// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_t4154F07615CB610B75C9ECEF46FC5448A8CAF491;
// System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute
struct NotNullIfNotNullAttribute_tAA5476DC55D7812CCDB143507D05D199609AC9BD;
// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t7509128E69D8DD2F7FE8FFB4A35586C10E438833;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t84973F43ED822B00B520B092D49118BC0D6979CF;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t036DE6BA6E12A49EE092B583A127F0E4762CB411;
// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t603C5DB94114B8321CEAF471D115C828F7975C61;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.Diagnostics.StackTraceHiddenAttribute
struct StackTraceHiddenAttribute_tFD8B80D8B9045EA1F0473C38809C30F5E165F15F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Channels.TaskCompletionSource
struct TaskCompletionSource_t0BC7EEBC47E32D3D6E9C8D1C1306DCA962350277;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Threading.Channels.UnboundedChannelOptions
struct UnboundedChannelOptions_t83622F787367EA0381FF20CD2D1B1A3A6AEF916A;
// System.Numerics.Vector3
struct Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Runtime.CompilerServices.__BlockReflectionAttribute
struct __BlockReflectionAttribute_tC942C054C78ADBE13736EB3D11725B23C4A20DD6;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask
struct ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701;
// System.Runtime.CompilerServices.ValueTaskAwaiter/<>c
struct U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A;
// System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c
struct U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_t791CA867470F464E1C2FA437597F284141F7BFF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4DC02E9DBA2BBA6B0B90CAE0980D70CE6132DCD1;
IL2CPP_EXTERN_C String_t* _stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604;
IL2CPP_EXTERN_C String_t* _stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B;
IL2CPP_EXTERN_C String_t* _stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466;
IL2CPP_EXTERN_C String_t* _stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904;
IL2CPP_EXTERN_C String_t* _stringLiteral93E5D45A92D8F20675FCB3ACED480FA2EAAD684B;
IL2CPP_EXTERN_C String_t* _stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_TrySetException_mAA11CC5F8C767B8823F0AC4695784455BBEB7369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_TrySetResult_m2F4182C4CFAF1F0A6CAD06404B0C3FDDC258A4AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_AvailableSentinel_m51D273C0AF17B3100AFDDB904354D1C94ECB8031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_CompletedSentinel_mB06679187FE6852F4446F4F1B60F502A47622E41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowIncompleteOperationException_mB11EF4CBF3AB0190B12B0DAB1879C02B321A0A43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowIncorrectCurrentIdException_m31F71609AAC117BF9DC50FC2AFCE0D60E0402110_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowMultipleContinuations_m9ABDEED2AD276A61A30402BA6E45E0C4227F18CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundedChannelOptions__ctor_m84404F2F8389B10329449FFBE40942EC79A2ABD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundedChannelOptions_set_Capacity_m1EF5DE2B6C4F2D5DC788D0B03ED25486AAA32954_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundedChannelOptions_set_FullMode_mA25A72A2F704B420818AAAB94D4C7659A58F7715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetCanceled_m3C598C83B2A05FCBC8ABA338B33160A555C07497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetCanceled_m5C6EB9D3086FE734F238D6893CA8656F922D690E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m8359BDA4D65B0B6DECF30C9A343E8C5134CD6A83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_mC39B9A6ABFA1873A03DDC5A0C17E261A06E2A22B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m2F2EF067B552582B5F78CD2629EF726D897BEF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentNullException_mABD10E4C699B1990196916EF48CC994DFB64DA54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_m07EA3FFDA5223D12F5F6395C8B86E40B1E26595A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__4_0_m0D25E8498C88D3E9AE6AAED1AC691BDA8FC2A299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__9_0_m9DE45F558B89D2D950F290C7731E379FC49EA265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_CopyTo_mDDD08F43F5C977D4D7265FA3699ACB7B9E55DEC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_tD15204EF4560B3B8208F6449DB119B748D5D3092_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>
struct TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tADEA7BDA441070E5AE4FD24C22A8D70A24FD199A* ____task_0;
};
struct Il2CppArrayBounds;

// System.Threading.Channels.AsyncOperation
struct AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A  : public RuntimeObject
{
};

struct AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A_StaticFields
{
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation::s_availableSentinel
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_availableSentinel_0;
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation::s_completedSentinel
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_completedSentinel_1;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Threading.Channels.Channel
struct Channel_tBE68FA7735B1EC8863200AC40A819EF9E7488091  : public RuntimeObject
{
};

// System.Threading.Channels.ChannelOptions
struct ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE  : public RuntimeObject
{
	// System.Boolean System.Threading.Channels.ChannelOptions::<SingleWriter>k__BackingField
	bool ___U3CSingleWriterU3Ek__BackingField_0;
	// System.Boolean System.Threading.Channels.ChannelOptions::<SingleReader>k__BackingField
	bool ___U3CSingleReaderU3Ek__BackingField_1;
	// System.Boolean System.Threading.Channels.ChannelOptions::<AllowSynchronousContinuations>k__BackingField
	bool ___U3CAllowSynchronousContinuationsU3Ek__BackingField_2;
};

// System.Threading.Channels.ChannelUtilities
struct ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94  : public RuntimeObject
{
};

struct ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_StaticFields
{
	// System.Exception System.Threading.Channels.ChannelUtilities::s_doneWritingSentinel
	Exception_t* ___s_doneWritingSentinel_0;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.Channels.ChannelUtilities::s_trueTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_trueTask_1;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.Channels.ChannelUtilities::s_falseTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_falseTask_2;
	// System.Threading.Tasks.Task System.Threading.Channels.ChannelUtilities::s_neverCompletingTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_neverCompletingTask_3;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Numerics.Hashing.HashHelpers
struct HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53  : public RuntimeObject
{
};

struct HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53_StaticFields
{
	// System.Int32 System.Numerics.Hashing.HashHelpers::RandomSeed
	int32_t ___RandomSeed_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// Internal.PaddingHelpers
struct PaddingHelpers_t2B01A9BBF2E21664EF8B02B5FEF4F8C7385477B0  : public RuntimeObject
{
};

// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t* ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t* ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t* ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t* ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;
};

struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t* ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;
};

// FxResources.System.Threading.Channels.SR
struct SR_tD15204EF4560B3B8208F6449DB119B748D5D3092  : public RuntimeObject
{
};

// System.SR
struct SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB  : public RuntimeObject
{
};

struct SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_StaticFields
{
	// System.Boolean System.SR::s_usingResourceKeys
	bool ___s_usingResourceKeys_0;
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager_1;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ThrowHelper
struct ThrowHelper_t678442F2A7B056071DA1AA22CEF01B8227635142  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.Unsafe
struct Unsafe_t725A82E3A65A4D0391DE04C692EA24F5AF8F387B  : public RuntimeObject
{
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

// System.Runtime.CompilerServices.ValueTaskAwaiter/<>c
struct U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A  : public RuntimeObject
{
};

struct U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_StaticFields
{
	// System.Runtime.CompilerServices.ValueTaskAwaiter/<>c System.Runtime.CompilerServices.ValueTaskAwaiter/<>c::<>9
	U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A* ___U3CU3E9_0;
};

// System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c
struct U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C  : public RuntimeObject
{
};

struct U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_StaticFields
{
	// System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c::<>9
	U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C* ___U3CU3E9_0;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_23;
};

// Microsoft.CodeAnalysis.<06e9bf70-f5ca-44ed-8ef1-f544203364d5>EmbeddedAttribute
struct U3C06e9bf70U2Df5caU2D44edU2D8ef1U2Df544203364d5U3EEmbeddedAttribute_t24A530D59D25E310C5248F668EB67587A0A86120  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.CompilerServices.<919d9a8d-d7ff-4808-8e3c-672c1fe27e9a>IsReadOnlyAttribute
struct U3C919d9a8dU2Dd7ffU2D4808U2D8e3cU2D672c1fe27e9aU3EIsReadOnlyAttribute_t5F2A57A1AF4B203E61787164ECF6BA08F9793D8E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.AllowNullAttribute
struct AllowNullAttribute_t68F3E977C711D8BCE1AA19C2D7CE031BB2781957  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderAttribute
struct AsyncMethodBuilderAttribute_t758B6CCF08F66F30344158C6D9262034F0C8179A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type System.Runtime.CompilerServices.AsyncMethodBuilderAttribute::<BuilderType>k__BackingField
	Type_t* ___U3CBuilderTypeU3Ek__BackingField_0;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Threading.Channels.BoundedChannelOptions
struct BoundedChannelOptions_tDE303FEAC97009A3DA962B86551F460522FD72F8  : public ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE
{
	// System.Int32 System.Threading.Channels.BoundedChannelOptions::_capacity
	int32_t ____capacity_3;
	// System.Threading.Channels.BoundedChannelFullMode System.Threading.Channels.BoundedChannelOptions::_mode
	int32_t ____mode_4;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Diagnostics.CodeAnalysis.DisallowNullAttribute
struct DisallowNullAttribute_tD46EF28E9C6436EE7EF001F767781F65622ACD2E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_t04001AD79987F0B0044B2D1D679B4197D5BFEF34  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute
struct DoesNotReturnIfAttribute_tD9D5B1C452292A83CE9E36AA3C30A0182A1A03C7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::<ParameterValue>k__BackingField
	bool ___U3CParameterValueU3Ek__BackingField_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tC2F6AECA6544C1D8E144AB5A4250CFDB094E096F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tF50F7B62487F876FFAC182E7AE896D4165FC3C3E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Numerics.Matrix3x2
struct Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 
{
	// System.Single System.Numerics.Matrix3x2::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix3x2::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix3x2::M21
	float ___M21_2;
	// System.Single System.Numerics.Matrix3x2::M22
	float ___M22_3;
	// System.Single System.Numerics.Matrix3x2::M31
	float ___M31_4;
	// System.Single System.Numerics.Matrix3x2::M32
	float ___M32_5;
};

struct Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0_StaticFields
{
	// System.Numerics.Matrix3x2 System.Numerics.Matrix3x2::_identity
	Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 ____identity_6;
};

// System.Numerics.Matrix4x4
struct Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 
{
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;
};

struct Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081_StaticFields
{
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 ____identity_16;
};

// System.Diagnostics.CodeAnalysis.MaybeNullAttribute
struct MaybeNullAttribute_tD580B0C2FAE1E1296E662839B26CE395D77D3F79  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute
struct MaybeNullWhenAttribute_t25EAABBA8D44AEB26C1B869E93BFC990C1638FE5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
};

// System.Diagnostics.CodeAnalysis.MemberNotNullAttribute
struct MemberNotNullAttribute_t61B3324283A23DB98DF14DFA12E93367848DB556  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::<Members>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CMembersU3Ek__BackingField_0;
};

// System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute
struct MemberNotNullWhenAttribute_t1203E9CE25CA392D2D1F8E2856879E6D5E4CC1B9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
	// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::<Members>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CMembersU3Ek__BackingField_1;
};

// System.Runtime.Versioning.NonVersionableAttribute
struct NonVersionableAttribute_tCD81A4C378265DB4067F02D7DDEF32E5BE8A79DB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_t4154F07615CB610B75C9ECEF46FC5448A8CAF491  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute
struct NotNullIfNotNullAttribute_tAA5476DC55D7812CCDB143507D05D199609AC9BD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute::<ParameterName>k__BackingField
	String_t* ___U3CParameterNameU3Ek__BackingField_0;
};

// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t7509128E69D8DD2F7FE8FFB4A35586C10E438833  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t84973F43ED822B00B520B092D49118BC0D6979CF  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t036DE6BA6E12A49EE092B583A127F0E4762CB411  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t603C5DB94114B8321CEAF471D115C828F7975C61  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Runtime.CompilerServices.NullablePublicOnlyAttribute::IncludesInternals
	bool ___IncludesInternals_0;
};

// Internal.PaddingFor32
struct PaddingFor32_t2CAADEC5480A42709673235606B2A42A7F0B0DB1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t PaddingFor32_t2CAADEC5480A42709673235606B2A42A7F0B0DB1__padding[124];
	};
};

// System.Numerics.Quaternion
struct Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 
{
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Diagnostics.StackTraceHiddenAttribute
struct StackTraceHiddenAttribute_tFD8B80D8B9045EA1F0473C38809C30F5E165F15F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.Threading.Channels.TaskCompletionSource
struct TaskCompletionSource_t0BC7EEBC47E32D3D6E9C8D1C1306DCA962350277  : public TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Threading.Channels.UnboundedChannelOptions
struct UnboundedChannelOptions_t83622F787367EA0381FF20CD2D1B1A3A6AEF916A  : public ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE
{
};

// System.Threading.Tasks.ValueTask
struct ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 
{
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject* ____obj_2;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;
};

struct ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_StaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_canceledTask_0;
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_1;
};

// System.Numerics.Vector2
struct Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA 
{
	// System.Single System.Numerics.Vector2::X
	float ___X_0;
	// System.Single System.Numerics.Vector2::Y
	float ___Y_1;
};

// System.Numerics.Vector3
struct Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 
{
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;
};

// System.Numerics.Vector4
struct Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 
{
	// System.Single System.Numerics.Vector4::X
	float ___X_0;
	// System.Single System.Numerics.Vector4::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector4::Z
	float ___Z_2;
	// System.Single System.Numerics.Vector4::W
	float ___W_3;
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

// System.VoidResult
struct VoidResult_t4FAE53FA1382A104B6F3ED74D21274FFED4AF50E 
{
	union
	{
		struct
		{
		};
		uint8_t VoidResult_t4FAE53FA1382A104B6F3ED74D21274FFED4AF50E__padding[1];
	};
};

// System.Runtime.CompilerServices.__BlockReflectionAttribute
struct __BlockReflectionAttribute_tC942C054C78ADBE13736EB3D11725B23C4A20DD6  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Numerics.Matrix4x4/VectorBasis
struct VectorBasis_t75D7AE13FCA941E1926EBEDF03E331BD04F6B829 
{
	// System.Numerics.Vector3* System.Numerics.Matrix4x4/VectorBasis::Element0
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* ___Element0_0;
	// System.Numerics.Vector3* System.Numerics.Matrix4x4/VectorBasis::Element1
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* ___Element1_1;
	// System.Numerics.Vector3* System.Numerics.Matrix4x4/VectorBasis::Element2
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* ___Element2_2;
};

// System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask
struct ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701  : public TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14
{
	// System.Threading.Tasks.Sources.IValueTaskSource System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask::_source
	RuntimeObject* ____source_2;
	// System.Int16 System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask::_token
	int16_t ____token_3;
};

struct ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_StaticFields
{
	// System.Action`1<System.Object> System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask::s_completionAction
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_completionAction_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable
struct ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F 
{
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::_value
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ____value_0;
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

// System.Numerics.Plane
struct Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A 
{
	// System.Numerics.Vector3 System.Numerics.Plane::Normal
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___Normal_0;
	// System.Single System.Numerics.Plane::D
	float ___D_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.CompilerServices.ValueTaskAwaiter
struct ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9 
{
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ValueTaskAwaiter::_value
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ____value_1;
};

struct ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_StaticFields
{
	// System.Action`1<System.Object> System.Runtime.CompilerServices.ValueTaskAwaiter::s_invokeActionDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_invokeActionDelegate_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ValueTaskAwaiter
struct ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshaled_pinvoke
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ____value_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ValueTaskAwaiter
struct ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshaled_com
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ____value_1;
};

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter
struct ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9 
{
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::_value
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ____value_0;
};

// System.Numerics.Matrix4x4/CanonicalBasis
struct CanonicalBasis_tA23BCD08B81E005CA98FC4704F7D37DBD3E38C3C 
{
	// System.Numerics.Vector3 System.Numerics.Matrix4x4/CanonicalBasis::Row0
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___Row0_0;
	// System.Numerics.Vector3 System.Numerics.Matrix4x4/CanonicalBasis::Row1
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___Row1_1;
	// System.Numerics.Vector3 System.Numerics.Matrix4x4/CanonicalBasis::Row2
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___Row2_2;
};

// System.Threading.Channels.AsyncOperation`1<System.Boolean>
struct AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824  : public AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A
{
	// System.Threading.CancellationTokenRegistration System.Threading.Channels.AsyncOperation`1::_registration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ____registration_2;
	// System.Boolean System.Threading.Channels.AsyncOperation`1::_pooled
	bool ____pooled_3;
	// System.Boolean System.Threading.Channels.AsyncOperation`1::_runContinuationsAsynchronously
	bool ____runContinuationsAsynchronously_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Channels.AsyncOperation`1::_completionReserved
	int32_t ____completionReserved_5;
	// TResult System.Threading.Channels.AsyncOperation`1::_result
	bool ____result_6;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Threading.Channels.AsyncOperation`1::_error
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error_7;
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation`1::_continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation_8;
	// System.Object System.Threading.Channels.AsyncOperation`1::_continuationState
	RuntimeObject* ____continuationState_9;
	// System.Object System.Threading.Channels.AsyncOperation`1::_schedulingContext
	RuntimeObject* ____schedulingContext_10;
	// System.Threading.ExecutionContext System.Threading.Channels.AsyncOperation`1::_executionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext_11;
	// System.Int16 System.Threading.Channels.AsyncOperation`1::_currentId
	int16_t ____currentId_12;
	// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1::<Next>k__BackingField
	AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* ___U3CNextU3Ek__BackingField_13;
	// System.Threading.CancellationToken System.Threading.Channels.AsyncOperation`1::<CancellationToken>k__BackingField
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CCancellationTokenU3Ek__BackingField_14;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder
struct AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::_methodBuilder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ____methodBuilder_0;
	// System.Boolean System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::_haveResult
	bool ____haveResult_1;
	// System.Boolean System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::_useBuilder
	bool ____useBuilder_2;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.Threading.Channels.ChannelClosedException
struct ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetCanceled_m3C598C83B2A05FCBC8ABA338B33160A555C07497_gshared (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m8359BDA4D65B0B6DECF30C9A343E8C5134CD6A83_gshared (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Threading.Channels.AsyncOperation`1<System.Boolean>::set_Next(System.Threading.Channels.AsyncOperation`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_gshared_inline (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* __this, AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* ___value0, const RuntimeMethod* method) ;
// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_Next()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_gshared_inline (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_1_TrySetResult_m2F4182C4CFAF1F0A6CAD06404B0C3FDDC258A4AB_gshared (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* __this, bool ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_1_TrySetException_mAA11CC5F8C767B8823F0AC4695784455BBEB7369_gshared (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Boolean>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_gshared (bool ___result0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::.ctor(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m2F2EF067B552582B5F78CD2629EF726D897BEF63_gshared (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF* __this, int32_t ___creationOptions0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_mC39B9A6ABFA1873A03DDC5A0C17E261A06E2A22B_gshared (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF* __this, VoidResult_t4FAE53FA1382A104B6F3ED74D21274FFED4AF50E ___result0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetCanceled_m5C6EB9D3086FE734F238D6893CA8656F922D690E_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;

// System.Void System.Numerics.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Numerics.Plane::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m398D99D7B954AB166BD800996F65943C8049F13C (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, float ___x0, float ___y1, float ___z2, float ___d3, const RuntimeMethod* method) ;
// System.Void System.Numerics.Plane::.ctor(System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m3A142EAA169C1F772C62B1B0BF0D0C6E56590C39 (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___normal0, float ___d1, const RuntimeMethod* method) ;
// System.Void System.Numerics.Plane::.ctor(System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m8FEC1A4ED23F264D1AF03EE80C4EA9B4DFD249AF (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector::get_IsHardwareAccelerated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC (const RuntimeMethod* method) ;
// System.Numerics.Vector3 System.Numerics.Vector3::op_Subtraction(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Subtraction_m5D2D4FFD4BE9EA857665C94C207D745C164BD717_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector3 System.Numerics.Vector3::Cross(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Cross_m4FED62DEE3F5D56489ECFC310E5007B25D730805_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector21, const RuntimeMethod* method) ;
// System.Numerics.Vector3 System.Numerics.Vector3::Normalize(System.Numerics.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Normalize_m4C57D163C6A541513FD2BE0C4C2B77FB079283C8_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, const RuntimeMethod* method) ;
// System.Single System.Numerics.Vector3::Dot(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector21, const RuntimeMethod* method) ;
// System.Single System.Numerics.Vector3::LengthSquared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_LengthSquared_m4FABBDA4075F50315AA06D7E9048603D695C80C3_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, const RuntimeMethod* method) ;
// System.Numerics.Vector3 System.Numerics.Vector3::op_Division(System.Numerics.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Division_m51E43B54188B9A27492E7ECBEE87DEF65580C1B5_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value10, float ___value21, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Matrix4x4::Invert(System.Numerics.Matrix4x4,System.Numerics.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_Invert_m95D09564CE6CEE618F0031C74582BDD2A98D878E (Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 ___matrix0, Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector3::Equals(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_mFDFB6E4AC826DFE3EDADB911D23B16DBEF175ABA (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Plane::Equals(System.Numerics.Plane)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Plane_Equals_m3658C1030EDADC65021DB291F7FA2A1077F00999_inline (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Plane::Equals(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Plane_Equals_mE8BB777B43A258B73C1E44B688594F8DB2EC5ED0_inline (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.Numerics.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mF5317E7625940836F28EEE7224FCB8C2B7C17986 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, RuntimeObject* ___arg13, const RuntimeMethod* method) ;
// System.String System.Numerics.Plane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Plane_ToString_m17875E54E750814247C9AA31E15A6CA564262F0E (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mED9B117E4B557BE71CA8171168AAFCCE39D5C9C0 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Plane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plane_GetHashCode_m51961FA68AB1895B1DCEFF55D53D53385A32DA0A (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, const RuntimeMethod* method) ;
// System.Void System.Numerics.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_mFB1B2EB5EF73CBF6BE84F06EC47AF925349CBF3F (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Quaternion::get_IsIdentity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_get_IsIdentity_mD0889953CB4216F2C9A92DBACB6DC366344B5D23 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, const RuntimeMethod* method) ;
// System.Void System.Numerics.Quaternion::.ctor(System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m706D728B1C6D9169FD72E1E5A7DF443F8E9A7FDC (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vectorPart0, float ___scalarPart1, const RuntimeMethod* method) ;
// System.Single System.Numerics.Quaternion::Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Length_m8B97B9AD4BEABEC65AA782EFF70C3CFDD1BF42C2 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, const RuntimeMethod* method) ;
// System.Single System.Numerics.Quaternion::LengthSquared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_LengthSquared_m598A830D0B2FD78FFD3719CFE3523BD8BFE92861 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Quaternion::Equals(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_Equals_mEB44E3B9F18C38CC1903C2778FF55CBC0DE92B01 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Quaternion::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_Equals_mF1AFC6A45FEB9E73A45CAE54B988BD6D8F792ACE (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// System.String System.Numerics.Quaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_mD769F8EA10BD837646A15B40E7CD7AC56F79C034 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Quaternion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Quaternion_GetHashCode_m3BC3F98699BCD0C97528CF800BF48E1CAB9440CD (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mF5306747D4F42347088DDDB2CB95525BBB70ED26 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m0BAA92FF1238B70C6395AEAA8802EC3771793DF7 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector2::Equals(System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_mDFAEFA30B7F95DF9827D61E161AE1C7002A72AED (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector2::Equals(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m6B95AB4627B3C9279A472F03977012B491EA026D_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.Numerics.Vector2::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m03A567B6EB47F06C009C05EE1F693EB6EF305EE7 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) ;
// System.String System.Numerics.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mFE47DD39DF4017CD5AC8173912431AFA867860D5 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, const RuntimeMethod* method) ;
// System.String System.Numerics.Vector2::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m5B752B72C571319D0F68AF0E54286C4F7E2F9359 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___formatProvider0, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Single System.Numerics.Vector2::Dot(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_m2195C189D5A14EC605E4B85FB30E4AECF1099749_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value21, const RuntimeMethod* method) ;
// System.Single System.Numerics.Vector2::Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Length_m127C8E769CD34302E90D4DAE1BDC86A3E4A33790_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, const RuntimeMethod* method) ;
// System.Single System.Numerics.Vector2::LengthSquared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_LengthSquared_m4DA8A01DBE5EC9A4F3276C40DD1ECE1FCCE05FB9_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, const RuntimeMethod* method) ;
// System.Numerics.Vector2 System.Numerics.Vector2::op_Subtraction(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Subtraction_m5B12B8922F40EC927313AFF9187BF46700E4788E_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector2 System.Numerics.Vector2::op_Division(System.Numerics.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Division_mD704B243C99FCD6838646E6A0F801EB767E30A12_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, float ___value21, const RuntimeMethod* method) ;
// System.Numerics.Vector2 System.Numerics.Vector2::op_Multiply(System.Single,System.Numerics.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Multiply_m5DA88787CCA831F7D97F46AC3D52AC424B0231A1_inline (float ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector2 System.Numerics.Vector2::op_Addition(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Addition_m5AEDFEFD6A9506D1124AEB037F0BF38FD5D878E3_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector2 System.Numerics.Vector2::op_Multiply(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Multiply_m64EA130D0C8A825DA1E3CC713ED72DD7988B83F3_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector2 System.Numerics.Vector2::op_Multiply(System.Numerics.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Multiply_m8EB1029BB7FD782F48E2FAAF9ACCBC29F901D633_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, float ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector2 System.Numerics.Vector2::op_Division(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Division_m74BF4999E76FF0C5DB36D2A4D615F65DE775C307_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector2 System.Numerics.Vector2::op_UnaryNegation(System.Numerics.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_UnaryNegation_mC489C1E2186814FDA7BF6E010950045EF6F6CC7F_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector2::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_m7A219410626849229A109AC00F0B58037059CA6B (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector2::CopyTo(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_CopyTo_mDDD08F43F5C977D4D7265FA3699ACB7B9E55DEC8 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector2::CopyTo(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_CopyTo_m8D7D147DE06F2083BFF9A01B3C62630DA75B7B61_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) ;
// System.String System.<2b014251-439b-459a-885c-061d3c8490ab>SR::get_Arg_NullArgumentNullRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_NullArgumentNullRef_mA3072D049995FC076C81366072003B82FFD7AC5B (const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.<2b014251-439b-459a-885c-061d3c8490ab>SR::get_Arg_ArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ArgumentOutOfRangeException_m0CC0F173F70B02AA1F5D2DD69D2DC9924D91803A (const RuntimeMethod* method) ;
// System.String System.<2b014251-439b-459a-885c-061d3c8490ab>SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_Format_m9BBA345A344FA6EA2067151B289DD08CF8392188 (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.String System.<2b014251-439b-459a-885c-061d3c8490ab>SR::get_Arg_ElementsInSourceIsGreaterThanDestination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ElementsInSourceIsGreaterThanDestination_m6532FB7E4299FBA5C367D126B292F3706DE582F9 (const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Numerics.Vector2 System.Numerics.Vector2::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_get_Zero_m36FB324642EE833496744D9A050C9ED26B4BF1D0 (const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector2::op_Equality(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m22EE79D4B551EDF12F65D56F0C8FF68968CFABC0_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector3::Equals(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_m4C4625EE9E480A0B192A87A537FD9EC82A6745A1_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.Numerics.Vector3::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mEF5B36C42F47C3D3EB8D56711BFCB825A892FDC5 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) ;
// System.String System.Numerics.Vector3::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m07A4A464F6DF0E5B08C69C564E10B782D12AFA6B (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Single System.Numerics.Vector3::Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Length_mDF23146EF181AD73566BCF37688ED3221C84AB22_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, const RuntimeMethod* method) ;
// System.Numerics.Vector3 System.Numerics.Vector3::op_Multiply(System.Numerics.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Multiply_m85DCD131468B1E2CDECCC420A87367ADA67A0ED9_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, float ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector3 System.Numerics.Vector3::op_Addition(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Addition_m489A8D4D4534E48BFFC2610DEAB9E356F78E9A20_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector3 System.Numerics.Vector3::op_Multiply(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Multiply_m8EEE05F1692F7E5F16F40ACBCED3C975AD8E559F_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector3 System.Numerics.Vector3::op_Multiply(System.Single,System.Numerics.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Multiply_m13AA8243EC77FF9DCC3E9B07ECAE09E0BB3AD8FE_inline (float ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector3 System.Numerics.Vector3::op_Division(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Division_mAED4236D3C3497699344F7795D6B7F93F5CC278D_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector3 System.Numerics.Vector3::op_UnaryNegation(System.Numerics.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_UnaryNegation_m6D4876FBF052E59B725FDAB146ED2DA5650F97F7_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector3::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m9475463CCA9CA06A42AA0B41F7BCFD106639581B (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector3::.ctor(System.Numerics.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_mF2B17A87ED35989966F690BD7F5764E576DF6EE8 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, float ___z1, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector3::CopyTo(System.Single[],System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector3::CopyTo(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_CopyTo_mA16E6E2DE0BDA44E513DE61574DA11FF283AC419_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) ;
// System.Numerics.Vector3 System.Numerics.Vector3::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_get_Zero_mC55B2179B6D1A9251EB3B41384A2EA418EFD6B0A (const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m09893D1770024B47DFEC5C08F373D0993CBB6A09 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector4::Equals(System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m48D255BD8A67CA811BA969873186A001D7BC02CE (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector4::Equals(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mF7D2E422209A01B1F1EE782EE1CEBAE7B3B72E51_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.Numerics.Vector4::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m765B7CB17939FF5EB09676BD02B58DC2F1B32BA0 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) ;
// System.String System.Numerics.Vector4::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m0B52BE21D477CB2A1119F83C0B9DBC02C5922E12 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, const RuntimeMethod* method) ;
// System.String System.Numerics.Vector4::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_mC2008038D358868BA6DB62B9646C44FB010D40AC (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Single System.Numerics.Vector4::Dot(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m2802186971C959363FC1D5F3CD4220D9D64550A9_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___vector10, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___vector21, const RuntimeMethod* method) ;
// System.Single System.Numerics.Vector4::Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Length_m93E4C625DD055A8665C1D1037F727C2452C885FE_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, const RuntimeMethod* method) ;
// System.Single System.Numerics.Vector4::LengthSquared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_LengthSquared_m32E38BAF00F1390A52904324F1C13A12271B87C4_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, const RuntimeMethod* method) ;
// System.Numerics.Vector4 System.Numerics.Vector4::op_Subtraction(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Subtraction_m15527DD71F5BA01CE0B948FF0BD7A00B0B935743_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector4 System.Numerics.Vector4::op_Division(System.Numerics.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Division_mBE4D08CB3C79F762575F6105966F730081331E69_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value10, float ___value21, const RuntimeMethod* method) ;
// System.Numerics.Vector4 System.Numerics.Vector4::op_Addition(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Addition_m019D527FA9C977C7ACC41935AFEDF69588795141_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector4 System.Numerics.Vector4::op_Multiply(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Multiply_mCEB726CB782C1B434FBEE7279C8D8668C5C5DD66_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector4 System.Numerics.Vector4::op_Division(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Division_mAC8CA5113511E8F1723211A71F5D21D53C05096B_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) ;
// System.Numerics.Vector4 System.Numerics.Vector4::op_UnaryNegation(System.Numerics.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_UnaryNegation_m76A09B6C9FFC0C21B6E1E46C11E8A5360A772AFC_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value0, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector4::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m99E6D1DF327F7715011171265CCEA0AAD67FB5D7 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector4::.ctor(System.Numerics.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m646FFC6D99F72917CBAF561B89DB49339577FEC1 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, float ___z1, float ___w2, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector4::.ctor(System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m8C296B9F43734A8788C28C2B20FCBCC5797BB40E (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, float ___w1, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector4::CopyTo(System.Single[],System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Numerics.Vector4::CopyTo(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_CopyTo_mF75273503DCD2931F68BD498F7052B1492C09A72_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) ;
// System.Numerics.Vector4 System.Numerics.Vector4::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_get_Zero_mB81FF2CB69C92EF6A4F4CE80EA1080BD933088D0 (const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Vector4::op_Equality(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m5F588677B8F528732DF26A87A7F5513316D19F1B_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857_inline (const RuntimeMethod* method) ;
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mA9FC2DECC3AD84304C14DF6967673D4D2DF8A851 (const RuntimeMethod* method) ;
// System.String System.SR::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m8D272754540A6D7BC8757D8D20123ED638D11963 (String_t* ___resourceKey0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7 (String_t* ___separator0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, RuntimeObject* ___arg13, RuntimeObject* ___arg24, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, Type_t* ___resourceSource0, const RuntimeMethod* method) ;
// System.Boolean System.AppContext::TryGetSwitch(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78 (String_t* ___switchName0, bool* ___isEnabled1, const RuntimeMethod* method) ;
// System.String System.SR::get_InvalidOperation_IncompleteAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncompleteAsyncOperation_m47631F961B19125443B01D0666475A1525391990 (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.SR::get_InvalidOperation_MultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_MultipleContinuations_m2993F2879060A338576B4CC6B1AF1E932E19885B (const RuntimeMethod* method) ;
// System.String System.SR::get_InvalidOperation_IncorrectToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncorrectToken_m28659A75E9B6C25B86989801F7CAB5AD2000D33E (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.String System.SR::get_ChannelClosedException_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ChannelClosedException_DefaultMessage_mBB2B2258FB2D4A538C94DC541BD8989803BD27B7 (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Threading.Channels.ChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions__ctor_m5CD934C9F82FB892AA1B3F66FED1EE4732B26F78 (ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Threading.Channels.BoundedChannelOptions::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedChannelOptions_set_Capacity_m1EF5DE2B6C4F2D5DC788D0B03ED25486AAA32954 (BoundedChannelOptions_tDE303FEAC97009A3DA962B86551F460522FD72F8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.OperationCanceledException::get_CancellationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetCanceled(System.Threading.CancellationToken)
inline bool TaskCompletionSource_1_TrySetCanceled_m3C598C83B2A05FCBC8ABA338B33160A555C07497 (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))TaskCompletionSource_1_TrySetCanceled_m3C598C83B2A05FCBC8ABA338B33160A555C07497_gshared)(__this, ___cancellationToken0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m8359BDA4D65B0B6DECF30C9A343E8C5134CD6A83 (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m8359BDA4D65B0B6DECF30C9A343E8C5134CD6A83_gshared)(__this, ___exception0, method);
}
// System.Boolean System.Threading.Channels.TaskCompletionSource::TrySetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_TrySetResult_m7E36689FBE56E69EECAEB3F0B2F406CF48DC6B8E (TaskCompletionSource_t0BC7EEBC47E32D3D6E9C8D1C1306DCA962350277* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Channels.AsyncOperation`1<System.Boolean>::set_Next(System.Threading.Channels.AsyncOperation`1<TResult>)
inline void AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_inline (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* __this, AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* ___value0, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824*, AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824*, const RuntimeMethod*))AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_gshared_inline)(__this, ___value0, method);
}
// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_Next()
inline AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_inline (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* (*) (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824*, const RuntimeMethod*))AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_gshared_inline)(__this, method);
}
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetResult(TResult)
inline bool AsyncOperation_1_TrySetResult_m2F4182C4CFAF1F0A6CAD06404B0C3FDDC258A4AB (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* __this, bool ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824*, bool, const RuntimeMethod*))AsyncOperation_1_TrySetResult_m2F4182C4CFAF1F0A6CAD06404B0C3FDDC258A4AB_gshared)(__this, ___item0, method);
}
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetException(System.Exception)
inline bool AsyncOperation_1_TrySetException_mAA11CC5F8C767B8823F0AC4695784455BBEB7369 (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824*, Exception_t*, const RuntimeMethod*))AsyncOperation_1_TrySetException_mAA11CC5F8C767B8823F0AC4695784455BBEB7369_gshared)(__this, ___exception0, method);
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m86BCA70DF85EC9451D30250CD0F8F19601B33319 (ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_mC856EE26FD11DBC619F47C29492FD1A7F1B6B95A (ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434* __this, Exception_t* ___innerException0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Boolean>(TResult)
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B (bool ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (bool, const RuntimeMethod*))Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_gshared)(___result0, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::.ctor(System.Threading.Tasks.TaskCreationOptions)
inline void TaskCompletionSource_1__ctor_m2F2EF067B552582B5F78CD2629EF726D897BEF63 (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF* __this, int32_t ___creationOptions0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF*, int32_t, const RuntimeMethod*))TaskCompletionSource_1__ctor_m2F2EF067B552582B5F78CD2629EF726D897BEF63_gshared)(__this, ___creationOptions0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetResult(TResult)
inline bool TaskCompletionSource_1_TrySetResult_mC39B9A6ABFA1873A03DDC5A0C17E261A06E2A22B (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF* __this, VoidResult_t4FAE53FA1382A104B6F3ED74D21274FFED4AF50E ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t0AEF83582952C3C5C09F3B83413A676AA2688FAF*, VoidResult_t4FAE53FA1382A104B6F3ED74D21274FFED4AF50E, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_mC39B9A6ABFA1873A03DDC5A0C17E261A06E2A22B_gshared)(__this, ___result0, method);
}
// System.ArgumentNullException System.ThrowHelper::GetArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* ThrowHelper_GetArgumentNullException_m3611480D7C6C3B23DF7D7FE540B14A82DD30F1AD (int32_t ___argument0, const RuntimeMethod* method) ;
// System.ArgumentOutOfRangeException System.ThrowHelper::GetArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* ThrowHelper_GetArgumentOutOfRangeException_m0ECACB4E4578D81140762DE392575065B9407419 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.String System.ThrowHelper::GetArgumentName(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_mBA01F9DD8B1A98894C613C571D2773C0ECFD1DCE (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_mABD10E4C699B1990196916EF48CC994DFB64DA54 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Threading.Tasks.Task)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_mEA004E6ACD98F6FEB5231CD966A8069F26FADAF9_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Threading.Tasks.Sources.IValueTaskSource,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m9485C649296A783DE67F7190938E67FFF18D2DDA_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, RuntimeObject* ___source0, int16_t ___token1, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Object,System.Int16,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m7772A59A3DCD6AB9E26DE6287AB6FEE4B3A92B73_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, RuntimeObject* ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Tasks.ValueTask::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTask_GetHashCode_m85289D5F9313610FD912757BFBE04F82F9FFB473 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.ValueTask::Equals(System.Threading.Tasks.ValueTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_Equals_m0A5B7AA1BECF60B296E0EBADFB1C9120DA8822D1 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.ValueTask::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_Equals_m674C3493BA861982E373FFCFDAC6347269CBF4D1 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::GetTaskForValueTaskSource(System.Threading.Tasks.Sources.IValueTaskSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ValueTask_GetTaskForValueTaskSource_m5BE942C13A73B028AD02F0C3A272E9DFBB2A1D6D (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, RuntimeObject* ___t0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ValueTask_get_CompletedTask_m1013A05BD0B8D5973F70D8A6D5B07D0D9DEB0936_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::AsTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ValueTask_AsTask_m45DF0F1AB28BAE7C36DA777069159708846AC5EC (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask System.Threading.Tasks.ValueTask::Preserve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ValueTask_Preserve_m3186C9038B63C01E324BF11B3EA27DA3F5F8D35F (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE_gshared)(__this, ___exception0, method);
}
// System.Void System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask::.ctor(System.Threading.Tasks.Sources.IValueTaskSource,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskSourceAsTask__ctor_m03024BFA0B8C66CBBD73AB820AD9D3B920BFF7AE (ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* __this, RuntimeObject* ___source0, int16_t ___token1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.ValueTask::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mC2814057CD742D7EEA51F4601EFE4F96C2DC4F02_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskStatus System.Threading.Tasks.Task::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Status_m9707FD4B44416BA03FA2FDBEB3D0F0F281D90AD8 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.ValueTask::get_IsCompletedSuccessfully()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompletedSuccessfully_m311CF899A0D1A2153E532A0369674D88D964F852_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.ValueTask::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_get_IsFaulted_m93237240E4B965CF3350BCB6D3D8421F6A6736A3 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.ValueTask::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_get_IsCanceled_m043D9DEEB38D0B5A52EB91B7F9FAF06F5069F9FA (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask::ThrowIfCompletedUnsuccessfully()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_mD23792FC760A1070B1843A612FAEB6B3200F961B_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter__ctor_mB8DBFF246A57E35665AE43DD3F81C9573757FE08_inline (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ValueTaskAwaiter System.Threading.Tasks.ValueTask::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9 ValueTask_GetAwaiter_mE4D1C1B7ED83C204E029F5E08A88AD89CDC029FC (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_m8E64A2DA18BB19D517B378B8E1076837D67A094E_inline (ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable System.Threading.Tasks.ValueTask::ConfigureAwait(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F ValueTask_ConfigureAwait_m01F33AD4A76B1D7E090F1D9FF1FFEB06F3A7498E_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationToken::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken__ctor_m5DAD339D4A9DEF9962B7EF1E30564BADC78E9BD6 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, bool ___canceled0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_mE80CABEC364832FBA3042CA2460AA3913B74C10B (int32_t ___millisecondsDelay0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48 (int32_t ___millisecondsDelay0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m59170D28D84FC37690A2AB22C18E8E631C9BF429 (U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m07EA3FFDA5223D12F5F6395C8B86E40B1E26595A (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetResult(TResult)
inline bool TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, bool, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1_gshared)(__this, ___result0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::TrySetCanceled()
inline bool TaskCompletionSource_1_TrySetCanceled_m5C6EB9D3086FE734F238D6893CA8656F922D690E (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1_TrySetCanceled_m5C6EB9D3086FE734F238D6893CA8656F922D690E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetStateMachine_m6D23C101B95833CD356F8FFC08F7402B58CEF26D (AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetResult_m59EACB647C9731E78331B2E1F7801C1D33ECFAA0 (AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetException_m2234204ADA15D8DA271BC4CF783ABF580D936FA6 (AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 AsyncValueTaskMethodBuilder_get_Task_mE70843FBEEDCD8478581FF4325D2F496C4631DF4 (AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_mA704C6D2A3EF7EB8089C83A47023E748A80E6B61_inline (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9 ConfiguredValueTaskAwaitable_GetAwaiter_mE4B30CBF74721AD40BE2C76E9EE045987F1B159F_inline (ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_mC43C229029BE82CF10AAF0C011E1E6764264B34A_inline (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_mBF53F306B3E95C29641AA9F35404A65994427B79_inline (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_OnCompleted_mB6A56C98F368A70EC9FC750C492A08F62DD7EEA5 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_OnCompleted_m1C5C82A0158CF5781868A544FBE0B13216BD4657 (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_UnsafeOnCompleted_m4D9FAB57031DB65424E4AACFB07EFF773CAC4618 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_UnsafeOnCompleted_m63E6DBC6B03D67A90E0826E4F8A91A5F39480A50 (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ValueTaskAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_get_IsCompleted_m4A1CAC64CF6954D77DBB0B21EB23FA1DD053A244_inline (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter_GetResult_m1967A73F16A0035CE2F67CDDD43504F20D60B528_inline (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_OnCompleted_mF7EA19A71D3695AF9B41A32133E9047C97AA4159 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_OnCompleted_m8CF036D714B6762A225FDB39B424D9C084D1D734 (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.TaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_UnsafeOnCompleted_mF1081A8F37EBEA02847BAE72365A1F65DAA932D7 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_UnsafeOnCompleted_m638DB5D62AE988061ADB1B4F48034C2ADA6B390A (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m74C7A3C417BC239F2D4F977F946500551932F6E4 (U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
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
// System.Void System.Numerics.Plane::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m398D99D7B954AB166BD800996F65943C8049F13C (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, float ___x0, float ___y1, float ___z2, float ___d3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___Normal_0 = L_3;
		float L_4 = ___d3;
		__this->___D_1 = L_4;
		return;
	}
}
IL2CPP_EXTERN_C  void Plane__ctor_m398D99D7B954AB166BD800996F65943C8049F13C_AdjustorThunk (RuntimeObject* __this, float ___x0, float ___y1, float ___z2, float ___d3, const RuntimeMethod* method)
{
	Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*>(__this + _offset);
	Plane__ctor_m398D99D7B954AB166BD800996F65943C8049F13C(_thisAdjusted, ___x0, ___y1, ___z2, ___d3, method);
}
// System.Void System.Numerics.Plane::.ctor(System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m3A142EAA169C1F772C62B1B0BF0D0C6E56590C39 (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___normal0, float ___d1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___normal0;
		__this->___Normal_0 = L_0;
		float L_1 = ___d1;
		__this->___D_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Plane__ctor_m3A142EAA169C1F772C62B1B0BF0D0C6E56590C39_AdjustorThunk (RuntimeObject* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___normal0, float ___d1, const RuntimeMethod* method)
{
	Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*>(__this + _offset);
	Plane__ctor_m3A142EAA169C1F772C62B1B0BF0D0C6E56590C39(_thisAdjusted, ___normal0, ___d1, method);
}
// System.Void System.Numerics.Plane::.ctor(System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m8FEC1A4ED23F264D1AF03EE80C4EA9B4DFD249AF (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value0, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___value0;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___value0;
		float L_3 = L_2.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___value0;
		float L_5 = L_4.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		__this->___Normal_0 = L_6;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_7 = ___value0;
		float L_8 = L_7.___W_3;
		__this->___D_1 = L_8;
		return;
	}
}
IL2CPP_EXTERN_C  void Plane__ctor_m8FEC1A4ED23F264D1AF03EE80C4EA9B4DFD249AF_AdjustorThunk (RuntimeObject* __this, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value0, const RuntimeMethod* method)
{
	Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*>(__this + _offset);
	Plane__ctor_m8FEC1A4ED23F264D1AF03EE80C4EA9B4DFD249AF(_thisAdjusted, ___value0, method);
}
// System.Numerics.Plane System.Numerics.Plane::CreateFromVertices(System.Numerics.Vector3,System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A Plane_CreateFromVertices_m52139B1ABA2E6799E228D62B933A09C3A836A714 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___point10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___point21, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___point32, const RuntimeMethod* method) 
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 V_16;
	memset((&V_16), 0, sizeof(V_16));
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___point21;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___point10;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3;
		L_3 = Vector3_op_Subtraction_m5D2D4FFD4BE9EA857665C94C207D745C164BD717_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___point32;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_5 = ___point10;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6;
		L_6 = Vector3_op_Subtraction_m5D2D4FFD4BE9EA857665C94C207D745C164BD717_inline(L_4, L_5, NULL);
		V_1 = L_6;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_7 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = V_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9;
		L_9 = Vector3_Cross_m4FED62DEE3F5D56489ECFC310E5007B25D730805_inline(L_7, L_8, NULL);
		V_2 = L_9;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = V_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11;
		L_11 = Vector3_Normalize_m4C57D163C6A541513FD2BE0C4C2B77FB079283C8_inline(L_10, NULL);
		V_3 = L_11;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12 = V_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_13 = ___point10;
		float L_14;
		L_14 = Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline(L_12, L_13, NULL);
		V_4 = ((-L_14));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_15 = V_3;
		float L_16 = V_4;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_17;
		memset((&L_17), 0, sizeof(L_17));
		Plane__ctor_m3A142EAA169C1F772C62B1B0BF0D0C6E56590C39((&L_17), L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_0039:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_18 = ___point21;
		float L_19 = L_18.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_20 = ___point10;
		float L_21 = L_20.___X_0;
		V_5 = ((float)il2cpp_codegen_subtract(L_19, L_21));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_22 = ___point21;
		float L_23 = L_22.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_24 = ___point10;
		float L_25 = L_24.___Y_1;
		V_6 = ((float)il2cpp_codegen_subtract(L_23, L_25));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_26 = ___point21;
		float L_27 = L_26.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_28 = ___point10;
		float L_29 = L_28.___Z_2;
		V_7 = ((float)il2cpp_codegen_subtract(L_27, L_29));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_30 = ___point32;
		float L_31 = L_30.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_32 = ___point10;
		float L_33 = L_32.___X_0;
		V_8 = ((float)il2cpp_codegen_subtract(L_31, L_33));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_34 = ___point32;
		float L_35 = L_34.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_36 = ___point10;
		float L_37 = L_36.___Y_1;
		V_9 = ((float)il2cpp_codegen_subtract(L_35, L_37));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_38 = ___point32;
		float L_39 = L_38.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_40 = ___point10;
		float L_41 = L_40.___Z_2;
		V_10 = ((float)il2cpp_codegen_subtract(L_39, L_41));
		float L_42 = V_6;
		float L_43 = V_10;
		float L_44 = V_7;
		float L_45 = V_9;
		V_11 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_42, L_43)), ((float)il2cpp_codegen_multiply(L_44, L_45))));
		float L_46 = V_7;
		float L_47 = V_8;
		float L_48 = V_5;
		float L_49 = V_10;
		V_12 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_46, L_47)), ((float)il2cpp_codegen_multiply(L_48, L_49))));
		float L_50 = V_5;
		float L_51 = V_9;
		float L_52 = V_6;
		float L_53 = V_8;
		V_13 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_50, L_51)), ((float)il2cpp_codegen_multiply(L_52, L_53))));
		float L_54 = V_11;
		float L_55 = V_11;
		float L_56 = V_12;
		float L_57 = V_12;
		float L_58 = V_13;
		float L_59 = V_13;
		V_14 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_54, L_55)), ((float)il2cpp_codegen_multiply(L_56, L_57)))), ((float)il2cpp_codegen_multiply(L_58, L_59))));
		float L_60 = V_14;
		float L_61;
		L_61 = sqrtf(L_60);
		V_15 = ((float)((1.0f)/L_61));
		float L_62 = V_11;
		float L_63 = V_15;
		float L_64 = V_12;
		float L_65 = V_15;
		float L_66 = V_13;
		float L_67 = V_15;
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&V_16), ((float)il2cpp_codegen_multiply(L_62, L_63)), ((float)il2cpp_codegen_multiply(L_64, L_65)), ((float)il2cpp_codegen_multiply(L_66, L_67)), NULL);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_68 = V_16;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_69 = V_16;
		float L_70 = L_69.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_71 = ___point10;
		float L_72 = L_71.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_73 = V_16;
		float L_74 = L_73.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_75 = ___point10;
		float L_76 = L_75.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_77 = V_16;
		float L_78 = L_77.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_79 = ___point10;
		float L_80 = L_79.___Z_2;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_81;
		memset((&L_81), 0, sizeof(L_81));
		Plane__ctor_m3A142EAA169C1F772C62B1B0BF0D0C6E56590C39((&L_81), L_68, ((-((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_70, L_72)), ((float)il2cpp_codegen_multiply(L_74, L_76)))), ((float)il2cpp_codegen_multiply(L_78, L_80)))))), /*hidden argument*/NULL);
		return L_81;
	}
}
// System.Numerics.Plane System.Numerics.Plane::Normalize(System.Numerics.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A Plane_Normalize_m4C626E13FF1718BE6EF27C4C2665AF49CC1DA95A (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* L_1 = (&(&___value0)->___Normal_0);
		float L_2;
		L_2 = Vector3_LengthSquared_m4FABBDA4075F50315AA06D7E9048603D695C80C3_inline(L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_3, (1.0f))));
		if ((!(((float)L_4) < ((float)(1.1920929E-07f)))))
		{
			goto IL_0029;
		}
	}
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_5 = ___value0;
		return L_5;
	}

IL_0029:
	{
		float L_6 = V_0;
		float L_7;
		L_7 = sqrtf(L_6);
		V_1 = L_7;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_8 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9 = L_8.___Normal_0;
		float L_10 = V_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11;
		L_11 = Vector3_op_Division_m51E43B54188B9A27492E7ECBEE87DEF65580C1B5_inline(L_9, L_10, NULL);
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_12 = ___value0;
		float L_13 = L_12.___D_1;
		float L_14 = V_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_15;
		memset((&L_15), 0, sizeof(L_15));
		Plane__ctor_m3A142EAA169C1F772C62B1B0BF0D0C6E56590C39((&L_15), L_11, ((float)(L_13/L_14)), /*hidden argument*/NULL);
		return L_15;
	}

IL_004a:
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_16 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_17 = L_16.___Normal_0;
		float L_18 = L_17.___X_0;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_19 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_20 = L_19.___Normal_0;
		float L_21 = L_20.___X_0;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_22 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_23 = L_22.___Normal_0;
		float L_24 = L_23.___Y_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_25 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_26 = L_25.___Normal_0;
		float L_27 = L_26.___Y_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_28 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_29 = L_28.___Normal_0;
		float L_30 = L_29.___Z_2;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_31 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_32 = L_31.___Normal_0;
		float L_33 = L_32.___Z_2;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_18, L_21)), ((float)il2cpp_codegen_multiply(L_24, L_27)))), ((float)il2cpp_codegen_multiply(L_30, L_33))));
		float L_34 = V_2;
		float L_35;
		L_35 = fabsf(((float)il2cpp_codegen_subtract(L_34, (1.0f))));
		if ((!(((float)L_35) < ((float)(1.1920929E-07f)))))
		{
			goto IL_00a7;
		}
	}
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_36 = ___value0;
		return L_36;
	}

IL_00a7:
	{
		float L_37 = V_2;
		float L_38;
		L_38 = sqrtf(L_37);
		V_3 = ((float)((1.0f)/L_38));
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_39 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_40 = L_39.___Normal_0;
		float L_41 = L_40.___X_0;
		float L_42 = V_3;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_43 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_44 = L_43.___Normal_0;
		float L_45 = L_44.___Y_1;
		float L_46 = V_3;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_47 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_48 = L_47.___Normal_0;
		float L_49 = L_48.___Z_2;
		float L_50 = V_3;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_51 = ___value0;
		float L_52 = L_51.___D_1;
		float L_53 = V_3;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_54;
		memset((&L_54), 0, sizeof(L_54));
		Plane__ctor_m398D99D7B954AB166BD800996F65943C8049F13C((&L_54), ((float)il2cpp_codegen_multiply(L_41, L_42)), ((float)il2cpp_codegen_multiply(L_45, L_46)), ((float)il2cpp_codegen_multiply(L_49, L_50)), ((float)il2cpp_codegen_multiply(L_52, L_53)), /*hidden argument*/NULL);
		return L_54;
	}
}
// System.Numerics.Plane System.Numerics.Plane::Transform(System.Numerics.Plane,System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A Plane_Transform_m807065D8D3D709874806333C98400AA8D0A35CCC (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___plane0, Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 ___matrix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_0 = ___matrix1;
		il2cpp_codegen_runtime_class_init_inline(Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Matrix4x4_Invert_m95D09564CE6CEE618F0031C74582BDD2A98D878E(L_0, (&V_0), NULL);
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_2 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3 = L_2.___Normal_0;
		float L_4 = L_3.___X_0;
		V_1 = L_4;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_5 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = L_5.___Normal_0;
		float L_7 = L_6.___Y_1;
		V_2 = L_7;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_8 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9 = L_8.___Normal_0;
		float L_10 = L_9.___Z_2;
		V_3 = L_10;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_11 = ___plane0;
		float L_12 = L_11.___D_1;
		V_4 = L_12;
		float L_13 = V_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_14 = V_0;
		float L_15 = L_14.___M11_0;
		float L_16 = V_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_17 = V_0;
		float L_18 = L_17.___M12_1;
		float L_19 = V_3;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_20 = V_0;
		float L_21 = L_20.___M13_2;
		float L_22 = V_4;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_23 = V_0;
		float L_24 = L_23.___M14_3;
		float L_25 = V_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_26 = V_0;
		float L_27 = L_26.___M21_4;
		float L_28 = V_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_29 = V_0;
		float L_30 = L_29.___M22_5;
		float L_31 = V_3;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_32 = V_0;
		float L_33 = L_32.___M23_6;
		float L_34 = V_4;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_35 = V_0;
		float L_36 = L_35.___M24_7;
		float L_37 = V_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_38 = V_0;
		float L_39 = L_38.___M31_8;
		float L_40 = V_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_41 = V_0;
		float L_42 = L_41.___M32_9;
		float L_43 = V_3;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_44 = V_0;
		float L_45 = L_44.___M33_10;
		float L_46 = V_4;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_47 = V_0;
		float L_48 = L_47.___M34_11;
		float L_49 = V_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_50 = V_0;
		float L_51 = L_50.___M41_12;
		float L_52 = V_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_53 = V_0;
		float L_54 = L_53.___M42_13;
		float L_55 = V_3;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_56 = V_0;
		float L_57 = L_56.___M43_14;
		float L_58 = V_4;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_59 = V_0;
		float L_60 = L_59.___M44_15;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_61;
		memset((&L_61), 0, sizeof(L_61));
		Plane__ctor_m398D99D7B954AB166BD800996F65943C8049F13C((&L_61), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_15)), ((float)il2cpp_codegen_multiply(L_16, L_18)))), ((float)il2cpp_codegen_multiply(L_19, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_24)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_25, L_27)), ((float)il2cpp_codegen_multiply(L_28, L_30)))), ((float)il2cpp_codegen_multiply(L_31, L_33)))), ((float)il2cpp_codegen_multiply(L_34, L_36)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_37, L_39)), ((float)il2cpp_codegen_multiply(L_40, L_42)))), ((float)il2cpp_codegen_multiply(L_43, L_45)))), ((float)il2cpp_codegen_multiply(L_46, L_48)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_52, L_54)))), ((float)il2cpp_codegen_multiply(L_55, L_57)))), ((float)il2cpp_codegen_multiply(L_58, L_60)))), /*hidden argument*/NULL);
		return L_61;
	}
}
// System.Numerics.Plane System.Numerics.Plane::Transform(System.Numerics.Plane,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A Plane_Transform_m683AAFB7A06F6181901F5C597CA56623556A4E0F (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___plane0, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___rotation1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	float V_23 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___rotation1;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___rotation1;
		float L_3 = L_2.___X_0;
		V_0 = ((float)il2cpp_codegen_add(L_1, L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___rotation1;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___rotation1;
		float L_7 = L_6.___Y_1;
		V_1 = ((float)il2cpp_codegen_add(L_5, L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___rotation1;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___rotation1;
		float L_11 = L_10.___Z_2;
		V_2 = ((float)il2cpp_codegen_add(L_9, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___rotation1;
		float L_13 = L_12.___W_3;
		float L_14 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_15 = ___rotation1;
		float L_16 = L_15.___W_3;
		float L_17 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_18 = ___rotation1;
		float L_19 = L_18.___W_3;
		float L_20 = V_2;
		V_5 = ((float)il2cpp_codegen_multiply(L_19, L_20));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_21 = ___rotation1;
		float L_22 = L_21.___X_0;
		float L_23 = V_0;
		V_6 = ((float)il2cpp_codegen_multiply(L_22, L_23));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_24 = ___rotation1;
		float L_25 = L_24.___X_0;
		float L_26 = V_1;
		V_7 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_27 = ___rotation1;
		float L_28 = L_27.___X_0;
		float L_29 = V_2;
		V_8 = ((float)il2cpp_codegen_multiply(L_28, L_29));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_30 = ___rotation1;
		float L_31 = L_30.___Y_1;
		float L_32 = V_1;
		V_9 = ((float)il2cpp_codegen_multiply(L_31, L_32));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_33 = ___rotation1;
		float L_34 = L_33.___Y_1;
		float L_35 = V_2;
		V_10 = ((float)il2cpp_codegen_multiply(L_34, L_35));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_36 = ___rotation1;
		float L_37 = L_36.___Z_2;
		float L_38 = V_2;
		V_11 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		float L_39 = V_9;
		float L_40 = V_11;
		V_12 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_39)), L_40));
		float L_41 = V_7;
		float L_42 = V_5;
		V_13 = ((float)il2cpp_codegen_subtract(L_41, L_42));
		float L_43 = V_8;
		float L_44 = V_4;
		V_14 = ((float)il2cpp_codegen_add(L_43, L_44));
		float L_45 = V_7;
		float L_46 = V_5;
		V_15 = ((float)il2cpp_codegen_add(L_45, L_46));
		float L_47 = V_6;
		float L_48 = V_11;
		V_16 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_47)), L_48));
		float L_49 = V_10;
		float L_50 = V_3;
		V_17 = ((float)il2cpp_codegen_subtract(L_49, L_50));
		float L_51 = V_8;
		float L_52 = V_4;
		V_18 = ((float)il2cpp_codegen_subtract(L_51, L_52));
		float L_53 = V_10;
		float L_54 = V_3;
		V_19 = ((float)il2cpp_codegen_add(L_53, L_54));
		float L_55 = V_6;
		float L_56 = V_9;
		V_20 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_55)), L_56));
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_57 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_58 = L_57.___Normal_0;
		float L_59 = L_58.___X_0;
		V_21 = L_59;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_60 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_61 = L_60.___Normal_0;
		float L_62 = L_61.___Y_1;
		V_22 = L_62;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_63 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_64 = L_63.___Normal_0;
		float L_65 = L_64.___Z_2;
		V_23 = L_65;
		float L_66 = V_21;
		float L_67 = V_12;
		float L_68 = V_22;
		float L_69 = V_13;
		float L_70 = V_23;
		float L_71 = V_14;
		float L_72 = V_21;
		float L_73 = V_15;
		float L_74 = V_22;
		float L_75 = V_16;
		float L_76 = V_23;
		float L_77 = V_17;
		float L_78 = V_21;
		float L_79 = V_18;
		float L_80 = V_22;
		float L_81 = V_19;
		float L_82 = V_23;
		float L_83 = V_20;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_84 = ___plane0;
		float L_85 = L_84.___D_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_86;
		memset((&L_86), 0, sizeof(L_86));
		Plane__ctor_m398D99D7B954AB166BD800996F65943C8049F13C((&L_86), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_66, L_67)), ((float)il2cpp_codegen_multiply(L_68, L_69)))), ((float)il2cpp_codegen_multiply(L_70, L_71)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_72, L_73)), ((float)il2cpp_codegen_multiply(L_74, L_75)))), ((float)il2cpp_codegen_multiply(L_76, L_77)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_78, L_79)), ((float)il2cpp_codegen_multiply(L_80, L_81)))), ((float)il2cpp_codegen_multiply(L_82, L_83)))), L_85, /*hidden argument*/NULL);
		return L_86;
	}
}
// System.Single System.Numerics.Plane::Dot(System.Numerics.Plane,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plane_Dot_mAFDFA9C5263F275A696562CC4E4818C0634B1799 (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___plane0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value1, const RuntimeMethod* method) 
{
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_0 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = L_0.___Normal_0;
		float L_2 = L_1.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_3 = ___value1;
		float L_4 = L_3.___X_0;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_5 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = L_5.___Normal_0;
		float L_7 = L_6.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___value1;
		float L_9 = L_8.___Y_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_10 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11 = L_10.___Normal_0;
		float L_12 = L_11.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_13 = ___value1;
		float L_14 = L_13.___Z_2;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_15 = ___plane0;
		float L_16 = L_15.___D_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_17 = ___value1;
		float L_18 = L_17.___W_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_4)), ((float)il2cpp_codegen_multiply(L_7, L_9)))), ((float)il2cpp_codegen_multiply(L_12, L_14)))), ((float)il2cpp_codegen_multiply(L_16, L_18))));
	}
}
// System.Single System.Numerics.Plane::DotCoordinate(System.Numerics.Plane,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plane_DotCoordinate_mEBC284DB39CCC9A5E955D77B34A3E8189AE09D02 (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___plane0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value1, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_1 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = L_1.___Normal_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3 = ___value1;
		float L_4;
		L_4 = Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline(L_2, L_3, NULL);
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_5 = ___plane0;
		float L_6 = L_5.___D_1;
		return ((float)il2cpp_codegen_add(L_4, L_6));
	}

IL_001b:
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_7 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = L_7.___Normal_0;
		float L_9 = L_8.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___value1;
		float L_11 = L_10.___X_0;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_12 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_13 = L_12.___Normal_0;
		float L_14 = L_13.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_15 = ___value1;
		float L_16 = L_15.___Y_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_17 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_18 = L_17.___Normal_0;
		float L_19 = L_18.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_20 = ___value1;
		float L_21 = L_20.___Z_2;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_22 = ___plane0;
		float L_23 = L_22.___D_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_14, L_16)))), ((float)il2cpp_codegen_multiply(L_19, L_21)))), L_23));
	}
}
// System.Single System.Numerics.Plane::DotNormal(System.Numerics.Plane,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Plane_DotNormal_m9622AEC704AAD8C9BBD1F3E48776EF5DE1F44719 (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___plane0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value1, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_1 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = L_1.___Normal_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3 = ___value1;
		float L_4;
		L_4 = Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline(L_2, L_3, NULL);
		return L_4;
	}

IL_0014:
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_5 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = L_5.___Normal_0;
		float L_7 = L_6.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___value1;
		float L_9 = L_8.___X_0;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_10 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11 = L_10.___Normal_0;
		float L_12 = L_11.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_13 = ___value1;
		float L_14 = L_13.___Y_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_15 = ___plane0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_16 = L_15.___Normal_0;
		float L_17 = L_16.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_18 = ___value1;
		float L_19 = L_18.___Z_2;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_9)), ((float)il2cpp_codegen_multiply(L_12, L_14)))), ((float)il2cpp_codegen_multiply(L_17, L_19))));
	}
}
// System.Boolean System.Numerics.Plane::op_Equality(System.Numerics.Plane,System.Numerics.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_op_Equality_mABE7F577BDC16CB7D091051E103B3F8965ED13A5 (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___value10, Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___value21, const RuntimeMethod* method) 
{
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_0 = ___value10;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = L_0.___Normal_0;
		float L_2 = L_1.___X_0;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_3 = ___value21;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = L_3.___Normal_0;
		float L_5 = L_4.___X_0;
		if ((!(((float)L_2) == ((float)L_5))))
		{
			goto IL_0057;
		}
	}
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_6 = ___value10;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_7 = L_6.___Normal_0;
		float L_8 = L_7.___Y_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_9 = ___value21;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = L_9.___Normal_0;
		float L_11 = L_10.___Y_1;
		if ((!(((float)L_8) == ((float)L_11))))
		{
			goto IL_0057;
		}
	}
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_12 = ___value10;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_13 = L_12.___Normal_0;
		float L_14 = L_13.___Z_2;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_15 = ___value21;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_16 = L_15.___Normal_0;
		float L_17 = L_16.___Z_2;
		if ((!(((float)L_14) == ((float)L_17))))
		{
			goto IL_0057;
		}
	}
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_18 = ___value10;
		float L_19 = L_18.___D_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_20 = ___value21;
		float L_21 = L_20.___D_1;
		return (bool)((((float)L_19) == ((float)L_21))? 1 : 0);
	}

IL_0057:
	{
		return (bool)0;
	}
}
// System.Boolean System.Numerics.Plane::op_Inequality(System.Numerics.Plane,System.Numerics.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_op_Inequality_m68D021592B098A5BEFB5DA3B6F476723EE6E338A (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___value10, Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___value21, const RuntimeMethod* method) 
{
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_0 = ___value10;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = L_0.___Normal_0;
		float L_2 = L_1.___X_0;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_3 = ___value21;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = L_3.___Normal_0;
		float L_5 = L_4.___X_0;
		if ((!(((float)L_2) == ((float)L_5))))
		{
			goto IL_005a;
		}
	}
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_6 = ___value10;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_7 = L_6.___Normal_0;
		float L_8 = L_7.___Y_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_9 = ___value21;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = L_9.___Normal_0;
		float L_11 = L_10.___Y_1;
		if ((!(((float)L_8) == ((float)L_11))))
		{
			goto IL_005a;
		}
	}
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_12 = ___value10;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_13 = L_12.___Normal_0;
		float L_14 = L_13.___Z_2;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_15 = ___value21;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_16 = L_15.___Normal_0;
		float L_17 = L_16.___Z_2;
		if ((!(((float)L_14) == ((float)L_17))))
		{
			goto IL_005a;
		}
	}
	{
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_18 = ___value10;
		float L_19 = L_18.___D_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_20 = ___value21;
		float L_21 = L_20.___D_1;
		return (bool)((((int32_t)((((float)L_19) == ((float)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005a:
	{
		return (bool)1;
	}
}
// System.Boolean System.Numerics.Plane::Equals(System.Numerics.Plane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Equals_m3658C1030EDADC65021DB291F7FA2A1077F00999 (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___other0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* L_1 = (&__this->___Normal_0);
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_2 = ___other0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3 = L_2.___Normal_0;
		bool L_4;
		L_4 = Vector3_Equals_mFDFB6E4AC826DFE3EDADB911D23B16DBEF175ABA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		float L_5 = __this->___D_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_6 = ___other0;
		float L_7 = L_6.___D_1;
		return (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* L_8 = (&__this->___Normal_0);
		float L_9 = L_8->___X_0;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_10 = ___other0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11 = L_10.___Normal_0;
		float L_12 = L_11.___X_0;
		if ((!(((float)L_9) == ((float)L_12))))
		{
			goto IL_0082;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* L_13 = (&__this->___Normal_0);
		float L_14 = L_13->___Y_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_15 = ___other0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_16 = L_15.___Normal_0;
		float L_17 = L_16.___Y_1;
		if ((!(((float)L_14) == ((float)L_17))))
		{
			goto IL_0082;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* L_18 = (&__this->___Normal_0);
		float L_19 = L_18->___Z_2;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_20 = ___other0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_21 = L_20.___Normal_0;
		float L_22 = L_21.___Z_2;
		if ((!(((float)L_19) == ((float)L_22))))
		{
			goto IL_0082;
		}
	}
	{
		float L_23 = __this->___D_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_24 = ___other0;
		float L_25 = L_24.___D_1;
		return (bool)((((float)L_23) == ((float)L_25))? 1 : 0);
	}

IL_0082:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Plane_Equals_m3658C1030EDADC65021DB291F7FA2A1077F00999_AdjustorThunk (RuntimeObject* __this, Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___other0, const RuntimeMethod* method)
{
	Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*>(__this + _offset);
	bool _returnValue;
	_returnValue = Plane_Equals_m3658C1030EDADC65021DB291F7FA2A1077F00999_inline(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.Numerics.Plane::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Equals_mE8BB777B43A258B73C1E44B688594F8DB2EC5ED0 (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Plane_Equals_m3658C1030EDADC65021DB291F7FA2A1077F00999_inline(__this, ((*(Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*)((Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*)(Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*)UnBox(L_1, Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Plane_Equals_mE8BB777B43A258B73C1E44B688594F8DB2EC5ED0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*>(__this + _offset);
	bool _returnValue;
	_returnValue = Plane_Equals_mE8BB777B43A258B73C1E44B688594F8DB2EC5ED0_inline(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.String System.Numerics.Plane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Plane_ToString_m17875E54E750814247C9AA31E15A6CA564262F0E (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93E5D45A92D8F20675FCB3ACED480FA2EAAD684B);
		s_Il2CppMethodInitialized = true;
	}
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		V_0 = L_0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* L_2 = (&__this->___Normal_0);
		String_t* L_3;
		L_3 = Vector3_ToString_mF5317E7625940836F28EEE7224FCB8C2B7C17986(L_2, NULL);
		float* L_4 = (&__this->___D_1);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = V_0;
		String_t* L_6;
		L_6 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(L_4, L_5, NULL);
		String_t* L_7;
		L_7 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_1, _stringLiteral93E5D45A92D8F20675FCB3ACED480FA2EAAD684B, L_3, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Plane_ToString_m17875E54E750814247C9AA31E15A6CA564262F0E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Plane_ToString_m17875E54E750814247C9AA31E15A6CA564262F0E(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Numerics.Plane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plane_GetHashCode_m51961FA68AB1895B1DCEFF55D53D53385A32DA0A (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* L_0 = (&__this->___Normal_0);
		int32_t L_1;
		L_1 = Vector3_GetHashCode_mED9B117E4B557BE71CA8171168AAFCCE39D5C9C0(L_0, NULL);
		float* L_2 = (&__this->___D_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		return ((int32_t)il2cpp_codegen_add(L_1, L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Plane_GetHashCode_m51961FA68AB1895B1DCEFF55D53D53385A32DA0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Plane_GetHashCode_m51961FA68AB1895B1DCEFF55D53D53385A32DA0A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Numerics.Quaternion System.Numerics.Quaternion::get_Identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_get_Identity_m90316CF0651A8C6B68C6B19C5E98E41555D722F2 (const RuntimeMethod* method) 
{
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Quaternion__ctor_mFB1B2EB5EF73CBF6BE84F06EC47AF925349CBF3F((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Numerics.Quaternion::get_IsIdentity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_get_IsIdentity_mD0889953CB4216F2C9A92DBACB6DC366344B5D23 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___X_0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		float L_1 = __this->___Y_1;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		float L_2 = __this->___Z_2;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		float L_3 = __this->___W_3;
		return (bool)((((float)L_3) == ((float)(1.0f)))? 1 : 0);
	}

IL_0035:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Quaternion_get_IsIdentity_mD0889953CB4216F2C9A92DBACB6DC366344B5D23_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*>(__this + _offset);
	bool _returnValue;
	_returnValue = Quaternion_get_IsIdentity_mD0889953CB4216F2C9A92DBACB6DC366344B5D23(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Numerics.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_mFB1B2EB5EF73CBF6BE84F06EC47AF925349CBF3F (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___X_0 = L_0;
		float L_1 = ___y1;
		__this->___Y_1 = L_1;
		float L_2 = ___z2;
		__this->___Z_2 = L_2;
		float L_3 = ___w3;
		__this->___W_3 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void Quaternion__ctor_mFB1B2EB5EF73CBF6BE84F06EC47AF925349CBF3F_AdjustorThunk (RuntimeObject* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*>(__this + _offset);
	Quaternion__ctor_mFB1B2EB5EF73CBF6BE84F06EC47AF925349CBF3F(_thisAdjusted, ___x0, ___y1, ___z2, ___w3, method);
}
// System.Void System.Numerics.Quaternion::.ctor(System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m706D728B1C6D9169FD72E1E5A7DF443F8E9A7FDC (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vectorPart0, float ___scalarPart1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___vectorPart0;
		float L_1 = L_0.___X_0;
		__this->___X_0 = L_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___vectorPart0;
		float L_3 = L_2.___Y_1;
		__this->___Y_1 = L_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___vectorPart0;
		float L_5 = L_4.___Z_2;
		__this->___Z_2 = L_5;
		float L_6 = ___scalarPart1;
		__this->___W_3 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void Quaternion__ctor_m706D728B1C6D9169FD72E1E5A7DF443F8E9A7FDC_AdjustorThunk (RuntimeObject* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vectorPart0, float ___scalarPart1, const RuntimeMethod* method)
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*>(__this + _offset);
	Quaternion__ctor_m706D728B1C6D9169FD72E1E5A7DF443F8E9A7FDC(_thisAdjusted, ___vectorPart0, ___scalarPart1, method);
}
// System.Single System.Numerics.Quaternion::Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Length_m8B97B9AD4BEABEC65AA782EFF70C3CFDD1BF42C2 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___X_0;
		float L_1 = __this->___X_0;
		float L_2 = __this->___Y_1;
		float L_3 = __this->___Y_1;
		float L_4 = __this->___Z_2;
		float L_5 = __this->___Z_2;
		float L_6 = __this->___W_3;
		float L_7 = __this->___W_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5)))), ((float)il2cpp_codegen_multiply(L_6, L_7))));
		float L_8 = V_0;
		float L_9;
		L_9 = sqrtf(L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C  float Quaternion_Length_m8B97B9AD4BEABEC65AA782EFF70C3CFDD1BF42C2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*>(__this + _offset);
	float _returnValue;
	_returnValue = Quaternion_Length_m8B97B9AD4BEABEC65AA782EFF70C3CFDD1BF42C2(_thisAdjusted, method);
	return _returnValue;
}
// System.Single System.Numerics.Quaternion::LengthSquared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_LengthSquared_m598A830D0B2FD78FFD3719CFE3523BD8BFE92861 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___X_0;
		float L_1 = __this->___X_0;
		float L_2 = __this->___Y_1;
		float L_3 = __this->___Y_1;
		float L_4 = __this->___Z_2;
		float L_5 = __this->___Z_2;
		float L_6 = __this->___W_3;
		float L_7 = __this->___W_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5)))), ((float)il2cpp_codegen_multiply(L_6, L_7))));
	}
}
IL2CPP_EXTERN_C  float Quaternion_LengthSquared_m598A830D0B2FD78FFD3719CFE3523BD8BFE92861_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*>(__this + _offset);
	float _returnValue;
	_returnValue = Quaternion_LengthSquared_m598A830D0B2FD78FFD3719CFE3523BD8BFE92861(_thisAdjusted, method);
	return _returnValue;
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Normalize(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Normalize_m57B0C4D109FC75AC49EF0822E22547FE5D45BB32 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value0, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value0;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value0;
		float L_3 = L_2.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value0;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value0;
		float L_7 = L_6.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value0;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value0;
		float L_11 = L_10.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value0;
		float L_13 = L_12.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value0;
		float L_15 = L_14.___W_3;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		float L_16 = V_1;
		float L_17;
		L_17 = sqrtf(L_16);
		V_2 = ((float)((1.0f)/L_17));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_18 = ___value0;
		float L_19 = L_18.___X_0;
		float L_20 = V_2;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_multiply(L_19, L_20));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_21 = ___value0;
		float L_22 = L_21.___Y_1;
		float L_23 = V_2;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_multiply(L_22, L_23));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_24 = ___value0;
		float L_25 = L_24.___Z_2;
		float L_26 = V_2;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_27 = ___value0;
		float L_28 = L_27.___W_3;
		float L_29 = V_2;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_multiply(L_28, L_29));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_30 = V_0;
		return L_30;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Conjugate(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Conjugate_mAE617743F3FE27EC725B744B12AA5AA6391E2EA4 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value0, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value0;
		float L_1 = L_0.___X_0;
		(&V_0)->___X_0 = ((-L_1));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value0;
		float L_3 = L_2.___Y_1;
		(&V_0)->___Y_1 = ((-L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value0;
		float L_5 = L_4.___Z_2;
		(&V_0)->___Z_2 = ((-L_5));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value0;
		float L_7 = L_6.___W_3;
		(&V_0)->___W_3 = L_7;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = V_0;
		return L_8;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Inverse(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Inverse_mFD9B99319D77B78713DDD0E89BB1323A5BFBA36C (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value0, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value0;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value0;
		float L_3 = L_2.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value0;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value0;
		float L_7 = L_6.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value0;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value0;
		float L_11 = L_10.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value0;
		float L_13 = L_12.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value0;
		float L_15 = L_14.___W_3;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		float L_16 = V_1;
		V_2 = ((float)((1.0f)/L_16));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_17 = ___value0;
		float L_18 = L_17.___X_0;
		float L_19 = V_2;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_multiply(((-L_18)), L_19));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_20 = ___value0;
		float L_21 = L_20.___Y_1;
		float L_22 = V_2;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_multiply(((-L_21)), L_22));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_23 = ___value0;
		float L_24 = L_23.___Z_2;
		float L_25 = V_2;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_multiply(((-L_24)), L_25));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_26 = ___value0;
		float L_27 = L_26.___W_3;
		float L_28 = V_2;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_multiply(L_27, L_28));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_29 = V_0;
		return L_29;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::CreateFromAxisAngle(System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_CreateFromAxisAngle_m081A7385D7BF23D3965AC70373A031FE914F16E2 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___axis0, float ___angle1, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = ___angle1;
		V_1 = ((float)il2cpp_codegen_multiply(L_0, (0.5f)));
		float L_1 = V_1;
		float L_2;
		L_2 = sinf(L_1);
		V_2 = L_2;
		float L_3 = V_1;
		float L_4;
		L_4 = cosf(L_3);
		V_3 = L_4;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_5 = ___axis0;
		float L_6 = L_5.___X_0;
		float L_7 = V_2;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_multiply(L_6, L_7));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___axis0;
		float L_9 = L_8.___Y_1;
		float L_10 = V_2;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_multiply(L_9, L_10));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11 = ___axis0;
		float L_12 = L_11.___Z_2;
		float L_13 = V_2;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		float L_14 = V_3;
		(&V_0)->___W_3 = L_14;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_15 = V_0;
		return L_15;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::CreateFromYawPitchRoll(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_CreateFromYawPitchRoll_m64D97B054A621FA25D32B5AF8FD1C93AE079F284 (float ___yaw0, float ___pitch1, float ___roll2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		float L_0 = ___roll2;
		V_6 = ((float)il2cpp_codegen_multiply(L_0, (0.5f)));
		float L_1 = V_6;
		float L_2;
		L_2 = sinf(L_1);
		V_0 = L_2;
		float L_3 = V_6;
		float L_4;
		L_4 = cosf(L_3);
		V_1 = L_4;
		float L_5 = ___pitch1;
		V_7 = ((float)il2cpp_codegen_multiply(L_5, (0.5f)));
		float L_6 = V_7;
		float L_7;
		L_7 = sinf(L_6);
		V_2 = L_7;
		float L_8 = V_7;
		float L_9;
		L_9 = cosf(L_8);
		V_3 = L_9;
		float L_10 = ___yaw0;
		V_8 = ((float)il2cpp_codegen_multiply(L_10, (0.5f)));
		float L_11 = V_8;
		float L_12;
		L_12 = sinf(L_11);
		V_4 = L_12;
		float L_13 = V_8;
		float L_14;
		L_14 = cosf(L_13);
		V_5 = L_14;
		float L_15 = V_5;
		float L_16 = V_2;
		float L_17 = V_1;
		float L_18 = V_4;
		float L_19 = V_3;
		float L_20 = V_0;
		(&V_9)->___X_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_15, L_16)), L_17)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_18, L_19)), L_20))));
		float L_21 = V_4;
		float L_22 = V_3;
		float L_23 = V_1;
		float L_24 = V_5;
		float L_25 = V_2;
		float L_26 = V_0;
		(&V_9)->___Y_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_21, L_22)), L_23)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_24, L_25)), L_26))));
		float L_27 = V_5;
		float L_28 = V_3;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = V_2;
		float L_32 = V_1;
		(&V_9)->___Z_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_27, L_28)), L_29)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_30, L_31)), L_32))));
		float L_33 = V_5;
		float L_34 = V_3;
		float L_35 = V_1;
		float L_36 = V_4;
		float L_37 = V_2;
		float L_38 = V_0;
		(&V_9)->___W_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_33, L_34)), L_35)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_36, L_37)), L_38))));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_39 = V_9;
		return L_39;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::CreateFromRotationMatrix(System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_CreateFromRotationMatrix_mEFE0762FAD5255D3ED2F20A615BD48E8ED55123A (Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 ___matrix0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_0 = ___matrix0;
		float L_1 = L_0.___M11_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_2 = ___matrix0;
		float L_3 = L_2.___M22_5;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_4 = ___matrix0;
		float L_5 = L_4.___M33_10;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_1, L_3)), L_5));
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37));
		float L_6 = V_0;
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = sqrtf(((float)il2cpp_codegen_add(L_7, (1.0f))));
		V_2 = L_8;
		float L_9 = V_2;
		(&V_1)->___W_3 = ((float)il2cpp_codegen_multiply(L_9, (0.5f)));
		float L_10 = V_2;
		V_2 = ((float)((0.5f)/L_10));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_11 = ___matrix0;
		float L_12 = L_11.___M23_6;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_13 = ___matrix0;
		float L_14 = L_13.___M32_9;
		float L_15 = V_2;
		(&V_1)->___X_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_16 = ___matrix0;
		float L_17 = L_16.___M31_8;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_18 = ___matrix0;
		float L_19 = L_18.___M13_2;
		float L_20 = V_2;
		(&V_1)->___Y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), L_20));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_21 = ___matrix0;
		float L_22 = L_21.___M12_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_23 = ___matrix0;
		float L_24 = L_23.___M21_4;
		float L_25 = V_2;
		(&V_1)->___Z_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_22, L_24)), L_25));
		goto IL_0243;
	}

IL_008f:
	{
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_26 = ___matrix0;
		float L_27 = L_26.___M11_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_28 = ___matrix0;
		float L_29 = L_28.___M22_5;
		if ((!(((float)L_27) >= ((float)L_29))))
		{
			goto IL_0132;
		}
	}
	{
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_30 = ___matrix0;
		float L_31 = L_30.___M11_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_32 = ___matrix0;
		float L_33 = L_32.___M33_10;
		if ((!(((float)L_31) >= ((float)L_33))))
		{
			goto IL_0132;
		}
	}
	{
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_34 = ___matrix0;
		float L_35 = L_34.___M11_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_36 = ___matrix0;
		float L_37 = L_36.___M22_5;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_38 = ___matrix0;
		float L_39 = L_38.___M33_10;
		float L_40;
		L_40 = sqrtf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add((1.0f), L_35)), L_37)), L_39)));
		V_3 = L_40;
		float L_41 = V_3;
		V_4 = ((float)((0.5f)/L_41));
		float L_42 = V_3;
		(&V_1)->___X_0 = ((float)il2cpp_codegen_multiply((0.5f), L_42));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_43 = ___matrix0;
		float L_44 = L_43.___M12_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_45 = ___matrix0;
		float L_46 = L_45.___M21_4;
		float L_47 = V_4;
		(&V_1)->___Y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_44, L_46)), L_47));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_48 = ___matrix0;
		float L_49 = L_48.___M13_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_50 = ___matrix0;
		float L_51 = L_50.___M31_8;
		float L_52 = V_4;
		(&V_1)->___Z_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_49, L_51)), L_52));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_53 = ___matrix0;
		float L_54 = L_53.___M23_6;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_55 = ___matrix0;
		float L_56 = L_55.___M32_9;
		float L_57 = V_4;
		(&V_1)->___W_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_54, L_56)), L_57));
		goto IL_0243;
	}

IL_0132:
	{
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_58 = ___matrix0;
		float L_59 = L_58.___M22_5;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_60 = ___matrix0;
		float L_61 = L_60.___M33_10;
		if ((!(((float)L_59) > ((float)L_61))))
		{
			goto IL_01c4;
		}
	}
	{
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_62 = ___matrix0;
		float L_63 = L_62.___M22_5;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_64 = ___matrix0;
		float L_65 = L_64.___M11_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_66 = ___matrix0;
		float L_67 = L_66.___M33_10;
		float L_68;
		L_68 = sqrtf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add((1.0f), L_63)), L_65)), L_67)));
		V_5 = L_68;
		float L_69 = V_5;
		V_6 = ((float)((0.5f)/L_69));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_70 = ___matrix0;
		float L_71 = L_70.___M21_4;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_72 = ___matrix0;
		float L_73 = L_72.___M12_1;
		float L_74 = V_6;
		(&V_1)->___X_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_71, L_73)), L_74));
		float L_75 = V_5;
		(&V_1)->___Y_1 = ((float)il2cpp_codegen_multiply((0.5f), L_75));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_76 = ___matrix0;
		float L_77 = L_76.___M32_9;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_78 = ___matrix0;
		float L_79 = L_78.___M23_6;
		float L_80 = V_6;
		(&V_1)->___Z_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_77, L_79)), L_80));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_81 = ___matrix0;
		float L_82 = L_81.___M31_8;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_83 = ___matrix0;
		float L_84 = L_83.___M13_2;
		float L_85 = V_6;
		(&V_1)->___W_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_82, L_84)), L_85));
		goto IL_0243;
	}

IL_01c4:
	{
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_86 = ___matrix0;
		float L_87 = L_86.___M33_10;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_88 = ___matrix0;
		float L_89 = L_88.___M11_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_90 = ___matrix0;
		float L_91 = L_90.___M22_5;
		float L_92;
		L_92 = sqrtf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add((1.0f), L_87)), L_89)), L_91)));
		V_7 = L_92;
		float L_93 = V_7;
		V_8 = ((float)((0.5f)/L_93));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_94 = ___matrix0;
		float L_95 = L_94.___M31_8;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_96 = ___matrix0;
		float L_97 = L_96.___M13_2;
		float L_98 = V_8;
		(&V_1)->___X_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_95, L_97)), L_98));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_99 = ___matrix0;
		float L_100 = L_99.___M32_9;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_101 = ___matrix0;
		float L_102 = L_101.___M23_6;
		float L_103 = V_8;
		(&V_1)->___Y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_100, L_102)), L_103));
		float L_104 = V_7;
		(&V_1)->___Z_2 = ((float)il2cpp_codegen_multiply((0.5f), L_104));
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_105 = ___matrix0;
		float L_106 = L_105.___M12_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_107 = ___matrix0;
		float L_108 = L_107.___M21_4;
		float L_109 = V_8;
		(&V_1)->___W_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_106, L_108)), L_109));
	}

IL_0243:
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_110 = V_1;
		return L_110;
	}
}
// System.Single System.Numerics.Quaternion::Dot(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Dot_m8E964659E574B100B527D23E986528FE55386699 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___quaternion10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___quaternion21, const RuntimeMethod* method) 
{
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___quaternion10;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___quaternion21;
		float L_3 = L_2.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___quaternion10;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___quaternion21;
		float L_7 = L_6.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___quaternion10;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___quaternion21;
		float L_11 = L_10.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___quaternion10;
		float L_13 = L_12.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___quaternion21;
		float L_15 = L_14.___W_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Slerp(System.Numerics.Quaternion,System.Numerics.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Slerp_m48DEF7089C3958FFCAC62748846D5A479EA96FA6 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___quaternion10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___quaternion21, float ___amount2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B10_0 = 0.0f;
	{
		float L_0 = ___amount2;
		V_0 = L_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_1 = ___quaternion10;
		float L_2 = L_1.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_3 = ___quaternion21;
		float L_4 = L_3.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_5 = ___quaternion10;
		float L_6 = L_5.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_7 = ___quaternion21;
		float L_8 = L_7.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_9 = ___quaternion10;
		float L_10 = L_9.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_11 = ___quaternion21;
		float L_12 = L_11.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_13 = ___quaternion10;
		float L_14 = L_13.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_15 = ___quaternion21;
		float L_16 = L_15.___W_3;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_4)), ((float)il2cpp_codegen_multiply(L_6, L_8)))), ((float)il2cpp_codegen_multiply(L_10, L_12)))), ((float)il2cpp_codegen_multiply(L_14, L_16))));
		V_2 = (bool)0;
		float L_17 = V_1;
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		V_2 = (bool)1;
		float L_18 = V_1;
		V_1 = ((-L_18));
	}

IL_0049:
	{
		float L_19 = V_1;
		if ((!(((float)L_19) > ((float)(0.999998987f)))))
		{
			goto IL_0065;
		}
	}
	{
		float L_20 = V_0;
		V_3 = ((float)il2cpp_codegen_subtract((1.0f), L_20));
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_005f;
		}
	}
	{
		float L_22 = V_0;
		G_B6_0 = L_22;
		goto IL_0061;
	}

IL_005f:
	{
		float L_23 = V_0;
		G_B6_0 = ((-L_23));
	}

IL_0061:
	{
		V_4 = G_B6_0;
		goto IL_00af;
	}

IL_0065:
	{
		float L_24 = V_1;
		float L_25;
		L_25 = acosf(L_24);
		V_6 = L_25;
		float L_26 = V_6;
		float L_27;
		L_27 = sinf(L_26);
		V_7 = ((float)((1.0f)/L_27));
		float L_28 = V_0;
		float L_29 = V_6;
		float L_30;
		L_30 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_28)), L_29)));
		float L_31 = V_7;
		V_3 = ((float)il2cpp_codegen_multiply(L_30, L_31));
		bool L_32 = V_2;
		if (L_32)
		{
			goto IL_00a0;
		}
	}
	{
		float L_33 = V_0;
		float L_34 = V_6;
		float L_35;
		L_35 = sinf(((float)il2cpp_codegen_multiply(L_33, L_34)));
		float L_36 = V_7;
		G_B10_0 = ((float)il2cpp_codegen_multiply(L_35, L_36));
		goto IL_00ad;
	}

IL_00a0:
	{
		float L_37 = V_0;
		float L_38 = V_6;
		float L_39;
		L_39 = sinf(((float)il2cpp_codegen_multiply(L_37, L_38)));
		float L_40 = V_7;
		G_B10_0 = ((float)il2cpp_codegen_multiply(((-L_39)), L_40));
	}

IL_00ad:
	{
		V_4 = G_B10_0;
	}

IL_00af:
	{
		float L_41 = V_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_42 = ___quaternion10;
		float L_43 = L_42.___X_0;
		float L_44 = V_4;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_45 = ___quaternion21;
		float L_46 = L_45.___X_0;
		(&V_5)->___X_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_41, L_43)), ((float)il2cpp_codegen_multiply(L_44, L_46))));
		float L_47 = V_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_48 = ___quaternion10;
		float L_49 = L_48.___Y_1;
		float L_50 = V_4;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_51 = ___quaternion21;
		float L_52 = L_51.___Y_1;
		(&V_5)->___Y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_47, L_49)), ((float)il2cpp_codegen_multiply(L_50, L_52))));
		float L_53 = V_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_54 = ___quaternion10;
		float L_55 = L_54.___Z_2;
		float L_56 = V_4;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_57 = ___quaternion21;
		float L_58 = L_57.___Z_2;
		(&V_5)->___Z_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_53, L_55)), ((float)il2cpp_codegen_multiply(L_56, L_58))));
		float L_59 = V_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_60 = ___quaternion10;
		float L_61 = L_60.___W_3;
		float L_62 = V_4;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_63 = ___quaternion21;
		float L_64 = L_63.___W_3;
		(&V_5)->___W_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_59, L_61)), ((float)il2cpp_codegen_multiply(L_62, L_64))));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_65 = V_5;
		return L_65;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Lerp(System.Numerics.Quaternion,System.Numerics.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Lerp_m7187593837B4C34F78F231026057F1153D382F2E (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___quaternion10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___quaternion21, float ___amount2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		float L_0 = ___amount2;
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), L_1));
		il2cpp_codegen_initobj((&V_2), sizeof(Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___quaternion10;
		float L_3 = L_2.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___quaternion21;
		float L_5 = L_4.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___quaternion10;
		float L_7 = L_6.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___quaternion21;
		float L_9 = L_8.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___quaternion10;
		float L_11 = L_10.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___quaternion21;
		float L_13 = L_12.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___quaternion10;
		float L_15 = L_14.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_16 = ___quaternion21;
		float L_17 = L_16.___W_3;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_9)))), ((float)il2cpp_codegen_multiply(L_11, L_13)))), ((float)il2cpp_codegen_multiply(L_15, L_17))));
		float L_18 = V_3;
		if ((!(((float)L_18) >= ((float)(0.0f)))))
		{
			goto IL_00b4;
		}
	}
	{
		float L_19 = V_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_20 = ___quaternion10;
		float L_21 = L_20.___X_0;
		float L_22 = V_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_23 = ___quaternion21;
		float L_24 = L_23.___X_0;
		(&V_2)->___X_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_19, L_21)), ((float)il2cpp_codegen_multiply(L_22, L_24))));
		float L_25 = V_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_26 = ___quaternion10;
		float L_27 = L_26.___Y_1;
		float L_28 = V_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_29 = ___quaternion21;
		float L_30 = L_29.___Y_1;
		(&V_2)->___Y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_25, L_27)), ((float)il2cpp_codegen_multiply(L_28, L_30))));
		float L_31 = V_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_32 = ___quaternion10;
		float L_33 = L_32.___Z_2;
		float L_34 = V_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_35 = ___quaternion21;
		float L_36 = L_35.___Z_2;
		(&V_2)->___Z_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_31, L_33)), ((float)il2cpp_codegen_multiply(L_34, L_36))));
		float L_37 = V_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_38 = ___quaternion10;
		float L_39 = L_38.___W_3;
		float L_40 = V_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_41 = ___quaternion21;
		float L_42 = L_41.___W_3;
		(&V_2)->___W_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_37, L_39)), ((float)il2cpp_codegen_multiply(L_40, L_42))));
		goto IL_0114;
	}

IL_00b4:
	{
		float L_43 = V_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_44 = ___quaternion10;
		float L_45 = L_44.___X_0;
		float L_46 = V_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_47 = ___quaternion21;
		float L_48 = L_47.___X_0;
		(&V_2)->___X_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_43, L_45)), ((float)il2cpp_codegen_multiply(L_46, L_48))));
		float L_49 = V_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_50 = ___quaternion10;
		float L_51 = L_50.___Y_1;
		float L_52 = V_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_53 = ___quaternion21;
		float L_54 = L_53.___Y_1;
		(&V_2)->___Y_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_52, L_54))));
		float L_55 = V_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_56 = ___quaternion10;
		float L_57 = L_56.___Z_2;
		float L_58 = V_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_59 = ___quaternion21;
		float L_60 = L_59.___Z_2;
		(&V_2)->___Z_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_55, L_57)), ((float)il2cpp_codegen_multiply(L_58, L_60))));
		float L_61 = V_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_62 = ___quaternion10;
		float L_63 = L_62.___W_3;
		float L_64 = V_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_65 = ___quaternion21;
		float L_66 = L_65.___W_3;
		(&V_2)->___W_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_61, L_63)), ((float)il2cpp_codegen_multiply(L_64, L_66))));
	}

IL_0114:
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_67 = V_2;
		float L_68 = L_67.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_69 = V_2;
		float L_70 = L_69.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_71 = V_2;
		float L_72 = L_71.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_73 = V_2;
		float L_74 = L_73.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_75 = V_2;
		float L_76 = L_75.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_77 = V_2;
		float L_78 = L_77.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_79 = V_2;
		float L_80 = L_79.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_81 = V_2;
		float L_82 = L_81.___W_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_68, L_70)), ((float)il2cpp_codegen_multiply(L_72, L_74)))), ((float)il2cpp_codegen_multiply(L_76, L_78)))), ((float)il2cpp_codegen_multiply(L_80, L_82))));
		float L_83 = V_4;
		float L_84;
		L_84 = sqrtf(L_83);
		V_5 = ((float)((1.0f)/L_84));
		float* L_85 = (&(&V_2)->___X_0);
		float* L_86 = L_85;
		float L_87 = *((float*)L_86);
		float L_88 = V_5;
		*((float*)L_86) = (float)((float)il2cpp_codegen_multiply(L_87, L_88));
		float* L_89 = (&(&V_2)->___Y_1);
		float* L_90 = L_89;
		float L_91 = *((float*)L_90);
		float L_92 = V_5;
		*((float*)L_90) = (float)((float)il2cpp_codegen_multiply(L_91, L_92));
		float* L_93 = (&(&V_2)->___Z_2);
		float* L_94 = L_93;
		float L_95 = *((float*)L_94);
		float L_96 = V_5;
		*((float*)L_94) = (float)((float)il2cpp_codegen_multiply(L_95, L_96));
		float* L_97 = (&(&V_2)->___W_3);
		float* L_98 = L_97;
		float L_99 = *((float*)L_98);
		float L_100 = V_5;
		*((float*)L_98) = (float)((float)il2cpp_codegen_multiply(L_99, L_100));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_101 = V_2;
		return L_101;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Concatenate(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Concatenate_m8C29A911B47FA8B53510204231FB1B83647BFCBB (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value21, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value21;
		float L_1 = L_0.___X_0;
		V_1 = L_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value21;
		float L_3 = L_2.___Y_1;
		V_2 = L_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value21;
		float L_5 = L_4.___Z_2;
		V_3 = L_5;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value21;
		float L_7 = L_6.___W_3;
		V_4 = L_7;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value10;
		float L_9 = L_8.___X_0;
		V_5 = L_9;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value10;
		float L_11 = L_10.___Y_1;
		V_6 = L_11;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value10;
		float L_13 = L_12.___Z_2;
		V_7 = L_13;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value10;
		float L_15 = L_14.___W_3;
		V_8 = L_15;
		float L_16 = V_2;
		float L_17 = V_7;
		float L_18 = V_3;
		float L_19 = V_6;
		V_9 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19))));
		float L_20 = V_3;
		float L_21 = V_5;
		float L_22 = V_1;
		float L_23 = V_7;
		V_10 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_20, L_21)), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_1;
		float L_25 = V_6;
		float L_26 = V_2;
		float L_27 = V_5;
		V_11 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_24, L_25)), ((float)il2cpp_codegen_multiply(L_26, L_27))));
		float L_28 = V_1;
		float L_29 = V_5;
		float L_30 = V_2;
		float L_31 = V_6;
		float L_32 = V_3;
		float L_33 = V_7;
		V_12 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_30, L_31)))), ((float)il2cpp_codegen_multiply(L_32, L_33))));
		float L_34 = V_1;
		float L_35 = V_8;
		float L_36 = V_5;
		float L_37 = V_4;
		float L_38 = V_9;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_34, L_35)), ((float)il2cpp_codegen_multiply(L_36, L_37)))), L_38));
		float L_39 = V_2;
		float L_40 = V_8;
		float L_41 = V_6;
		float L_42 = V_4;
		float L_43 = V_10;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_39, L_40)), ((float)il2cpp_codegen_multiply(L_41, L_42)))), L_43));
		float L_44 = V_3;
		float L_45 = V_8;
		float L_46 = V_7;
		float L_47 = V_4;
		float L_48 = V_11;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_44, L_45)), ((float)il2cpp_codegen_multiply(L_46, L_47)))), L_48));
		float L_49 = V_4;
		float L_50 = V_8;
		float L_51 = V_12;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_50)), L_51));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_52 = V_0;
		return L_52;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Negate(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Negate_mF79F668C33A474470FE8352E09155A6EA795E55D (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value0, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value0;
		float L_1 = L_0.___X_0;
		(&V_0)->___X_0 = ((-L_1));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value0;
		float L_3 = L_2.___Y_1;
		(&V_0)->___Y_1 = ((-L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value0;
		float L_5 = L_4.___Z_2;
		(&V_0)->___Z_2 = ((-L_5));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value0;
		float L_7 = L_6.___W_3;
		(&V_0)->___W_3 = ((-L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = V_0;
		return L_8;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Add(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Add_m3E6C68D863187C7E5D4C3707935251AF4C7704F7 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value21, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value21;
		float L_3 = L_2.___X_0;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_add(L_1, L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value21;
		float L_7 = L_6.___Y_1;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_add(L_5, L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value10;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value21;
		float L_11 = L_10.___Z_2;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_add(L_9, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value10;
		float L_13 = L_12.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value21;
		float L_15 = L_14.___W_3;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_add(L_13, L_15));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_16 = V_0;
		return L_16;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Subtract(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Subtract_mC568B533999DD257A9E05AFB0F6B1E25F0D915BC (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value21, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value21;
		float L_3 = L_2.___X_0;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value21;
		float L_7 = L_6.___Y_1;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value10;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value21;
		float L_11 = L_10.___Z_2;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value10;
		float L_13 = L_12.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value21;
		float L_15 = L_14.___W_3;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_16 = V_0;
		return L_16;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Multiply(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Multiply_mFEA10192EE51185B1673E2DA2B4BC981533ABFD6 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value21, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		V_1 = L_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value10;
		float L_3 = L_2.___Y_1;
		V_2 = L_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value10;
		float L_5 = L_4.___Z_2;
		V_3 = L_5;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value10;
		float L_7 = L_6.___W_3;
		V_4 = L_7;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value21;
		float L_9 = L_8.___X_0;
		V_5 = L_9;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value21;
		float L_11 = L_10.___Y_1;
		V_6 = L_11;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value21;
		float L_13 = L_12.___Z_2;
		V_7 = L_13;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value21;
		float L_15 = L_14.___W_3;
		V_8 = L_15;
		float L_16 = V_2;
		float L_17 = V_7;
		float L_18 = V_3;
		float L_19 = V_6;
		V_9 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19))));
		float L_20 = V_3;
		float L_21 = V_5;
		float L_22 = V_1;
		float L_23 = V_7;
		V_10 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_20, L_21)), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_1;
		float L_25 = V_6;
		float L_26 = V_2;
		float L_27 = V_5;
		V_11 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_24, L_25)), ((float)il2cpp_codegen_multiply(L_26, L_27))));
		float L_28 = V_1;
		float L_29 = V_5;
		float L_30 = V_2;
		float L_31 = V_6;
		float L_32 = V_3;
		float L_33 = V_7;
		V_12 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_30, L_31)))), ((float)il2cpp_codegen_multiply(L_32, L_33))));
		float L_34 = V_1;
		float L_35 = V_8;
		float L_36 = V_5;
		float L_37 = V_4;
		float L_38 = V_9;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_34, L_35)), ((float)il2cpp_codegen_multiply(L_36, L_37)))), L_38));
		float L_39 = V_2;
		float L_40 = V_8;
		float L_41 = V_6;
		float L_42 = V_4;
		float L_43 = V_10;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_39, L_40)), ((float)il2cpp_codegen_multiply(L_41, L_42)))), L_43));
		float L_44 = V_3;
		float L_45 = V_8;
		float L_46 = V_7;
		float L_47 = V_4;
		float L_48 = V_11;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_44, L_45)), ((float)il2cpp_codegen_multiply(L_46, L_47)))), L_48));
		float L_49 = V_4;
		float L_50 = V_8;
		float L_51 = V_12;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_50)), L_51));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_52 = V_0;
		return L_52;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Multiply(System.Numerics.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Multiply_m3E0AD7AB924EE45E5F38867E851E8424288401CB (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, float ___value21, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		float L_2 = ___value21;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_3 = ___value10;
		float L_4 = L_3.___Y_1;
		float L_5 = ___value21;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value10;
		float L_7 = L_6.___Z_2;
		float L_8 = ___value21;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_9 = ___value10;
		float L_10 = L_9.___W_3;
		float L_11 = ___value21;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_multiply(L_10, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = V_0;
		return L_12;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::Divide(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_Divide_m4C18E57E1281F1109DB464B2F0956C8C1327E242 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value21, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		V_1 = L_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value10;
		float L_3 = L_2.___Y_1;
		V_2 = L_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value10;
		float L_5 = L_4.___Z_2;
		V_3 = L_5;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value10;
		float L_7 = L_6.___W_3;
		V_4 = L_7;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value21;
		float L_9 = L_8.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value21;
		float L_11 = L_10.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value21;
		float L_13 = L_12.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value21;
		float L_15 = L_14.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_16 = ___value21;
		float L_17 = L_16.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_18 = ___value21;
		float L_19 = L_18.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_20 = ___value21;
		float L_21 = L_20.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_22 = ___value21;
		float L_23 = L_22.___W_3;
		V_5 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_multiply(L_17, L_19)))), ((float)il2cpp_codegen_multiply(L_21, L_23))));
		float L_24 = V_5;
		V_6 = ((float)((1.0f)/L_24));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_25 = ___value21;
		float L_26 = L_25.___X_0;
		float L_27 = V_6;
		V_7 = ((float)il2cpp_codegen_multiply(((-L_26)), L_27));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_28 = ___value21;
		float L_29 = L_28.___Y_1;
		float L_30 = V_6;
		V_8 = ((float)il2cpp_codegen_multiply(((-L_29)), L_30));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_31 = ___value21;
		float L_32 = L_31.___Z_2;
		float L_33 = V_6;
		V_9 = ((float)il2cpp_codegen_multiply(((-L_32)), L_33));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_34 = ___value21;
		float L_35 = L_34.___W_3;
		float L_36 = V_6;
		V_10 = ((float)il2cpp_codegen_multiply(L_35, L_36));
		float L_37 = V_2;
		float L_38 = V_9;
		float L_39 = V_3;
		float L_40 = V_8;
		V_11 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_37, L_38)), ((float)il2cpp_codegen_multiply(L_39, L_40))));
		float L_41 = V_3;
		float L_42 = V_7;
		float L_43 = V_1;
		float L_44 = V_9;
		V_12 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_41, L_42)), ((float)il2cpp_codegen_multiply(L_43, L_44))));
		float L_45 = V_1;
		float L_46 = V_8;
		float L_47 = V_2;
		float L_48 = V_7;
		V_13 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_45, L_46)), ((float)il2cpp_codegen_multiply(L_47, L_48))));
		float L_49 = V_1;
		float L_50 = V_7;
		float L_51 = V_2;
		float L_52 = V_8;
		float L_53 = V_3;
		float L_54 = V_9;
		V_14 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_49, L_50)), ((float)il2cpp_codegen_multiply(L_51, L_52)))), ((float)il2cpp_codegen_multiply(L_53, L_54))));
		float L_55 = V_1;
		float L_56 = V_10;
		float L_57 = V_7;
		float L_58 = V_4;
		float L_59 = V_11;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_55, L_56)), ((float)il2cpp_codegen_multiply(L_57, L_58)))), L_59));
		float L_60 = V_2;
		float L_61 = V_10;
		float L_62 = V_8;
		float L_63 = V_4;
		float L_64 = V_12;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_60, L_61)), ((float)il2cpp_codegen_multiply(L_62, L_63)))), L_64));
		float L_65 = V_3;
		float L_66 = V_10;
		float L_67 = V_9;
		float L_68 = V_4;
		float L_69 = V_13;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_65, L_66)), ((float)il2cpp_codegen_multiply(L_67, L_68)))), L_69));
		float L_70 = V_4;
		float L_71 = V_10;
		float L_72 = V_14;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_70, L_71)), L_72));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_73 = V_0;
		return L_73;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::op_UnaryNegation(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_op_UnaryNegation_mD3E9D26EF1E84CCF5DEAB99C36118AD398F33A0C (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value0, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value0;
		float L_1 = L_0.___X_0;
		(&V_0)->___X_0 = ((-L_1));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value0;
		float L_3 = L_2.___Y_1;
		(&V_0)->___Y_1 = ((-L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value0;
		float L_5 = L_4.___Z_2;
		(&V_0)->___Z_2 = ((-L_5));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value0;
		float L_7 = L_6.___W_3;
		(&V_0)->___W_3 = ((-L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = V_0;
		return L_8;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::op_Addition(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_op_Addition_m649B2B00DB1F7DEBE9E64CC81B4CA546D34D6F84 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value21, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value21;
		float L_3 = L_2.___X_0;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_add(L_1, L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value21;
		float L_7 = L_6.___Y_1;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_add(L_5, L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value10;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value21;
		float L_11 = L_10.___Z_2;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_add(L_9, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value10;
		float L_13 = L_12.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value21;
		float L_15 = L_14.___W_3;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_add(L_13, L_15));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_16 = V_0;
		return L_16;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::op_Subtraction(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_op_Subtraction_m3AA26E2B3081F9BF547EF4411D3A7F3D709F0DD7 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value21, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value21;
		float L_3 = L_2.___X_0;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value21;
		float L_7 = L_6.___Y_1;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value10;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value21;
		float L_11 = L_10.___Z_2;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value10;
		float L_13 = L_12.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value21;
		float L_15 = L_14.___W_3;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_16 = V_0;
		return L_16;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::op_Multiply(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_op_Multiply_mFF73AE8184135BC5890B1F1A7E9775AB30AE2C0F (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value21, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		V_1 = L_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value10;
		float L_3 = L_2.___Y_1;
		V_2 = L_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value10;
		float L_5 = L_4.___Z_2;
		V_3 = L_5;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value10;
		float L_7 = L_6.___W_3;
		V_4 = L_7;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value21;
		float L_9 = L_8.___X_0;
		V_5 = L_9;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value21;
		float L_11 = L_10.___Y_1;
		V_6 = L_11;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value21;
		float L_13 = L_12.___Z_2;
		V_7 = L_13;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value21;
		float L_15 = L_14.___W_3;
		V_8 = L_15;
		float L_16 = V_2;
		float L_17 = V_7;
		float L_18 = V_3;
		float L_19 = V_6;
		V_9 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19))));
		float L_20 = V_3;
		float L_21 = V_5;
		float L_22 = V_1;
		float L_23 = V_7;
		V_10 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_20, L_21)), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_1;
		float L_25 = V_6;
		float L_26 = V_2;
		float L_27 = V_5;
		V_11 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_24, L_25)), ((float)il2cpp_codegen_multiply(L_26, L_27))));
		float L_28 = V_1;
		float L_29 = V_5;
		float L_30 = V_2;
		float L_31 = V_6;
		float L_32 = V_3;
		float L_33 = V_7;
		V_12 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_30, L_31)))), ((float)il2cpp_codegen_multiply(L_32, L_33))));
		float L_34 = V_1;
		float L_35 = V_8;
		float L_36 = V_5;
		float L_37 = V_4;
		float L_38 = V_9;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_34, L_35)), ((float)il2cpp_codegen_multiply(L_36, L_37)))), L_38));
		float L_39 = V_2;
		float L_40 = V_8;
		float L_41 = V_6;
		float L_42 = V_4;
		float L_43 = V_10;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_39, L_40)), ((float)il2cpp_codegen_multiply(L_41, L_42)))), L_43));
		float L_44 = V_3;
		float L_45 = V_8;
		float L_46 = V_7;
		float L_47 = V_4;
		float L_48 = V_11;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_44, L_45)), ((float)il2cpp_codegen_multiply(L_46, L_47)))), L_48));
		float L_49 = V_4;
		float L_50 = V_8;
		float L_51 = V_12;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_50)), L_51));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_52 = V_0;
		return L_52;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::op_Multiply(System.Numerics.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_op_Multiply_m43278DA41182B11EB8F6038616BA57E51C238AAD (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, float ___value21, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		float L_2 = ___value21;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_3 = ___value10;
		float L_4 = L_3.___Y_1;
		float L_5 = ___value21;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value10;
		float L_7 = L_6.___Z_2;
		float L_8 = ___value21;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_9 = ___value10;
		float L_10 = L_9.___W_3;
		float L_11 = ___value21;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_multiply(L_10, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = V_0;
		return L_12;
	}
}
// System.Numerics.Quaternion System.Numerics.Quaternion::op_Division(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 Quaternion_op_Division_mD81230F23D85672C441D5625462BE97998CAC416 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value21, const RuntimeMethod* method) 
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		V_1 = L_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value10;
		float L_3 = L_2.___Y_1;
		V_2 = L_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value10;
		float L_5 = L_4.___Z_2;
		V_3 = L_5;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value10;
		float L_7 = L_6.___W_3;
		V_4 = L_7;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value21;
		float L_9 = L_8.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value21;
		float L_11 = L_10.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value21;
		float L_13 = L_12.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value21;
		float L_15 = L_14.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_16 = ___value21;
		float L_17 = L_16.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_18 = ___value21;
		float L_19 = L_18.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_20 = ___value21;
		float L_21 = L_20.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_22 = ___value21;
		float L_23 = L_22.___W_3;
		V_5 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_multiply(L_17, L_19)))), ((float)il2cpp_codegen_multiply(L_21, L_23))));
		float L_24 = V_5;
		V_6 = ((float)((1.0f)/L_24));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_25 = ___value21;
		float L_26 = L_25.___X_0;
		float L_27 = V_6;
		V_7 = ((float)il2cpp_codegen_multiply(((-L_26)), L_27));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_28 = ___value21;
		float L_29 = L_28.___Y_1;
		float L_30 = V_6;
		V_8 = ((float)il2cpp_codegen_multiply(((-L_29)), L_30));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_31 = ___value21;
		float L_32 = L_31.___Z_2;
		float L_33 = V_6;
		V_9 = ((float)il2cpp_codegen_multiply(((-L_32)), L_33));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_34 = ___value21;
		float L_35 = L_34.___W_3;
		float L_36 = V_6;
		V_10 = ((float)il2cpp_codegen_multiply(L_35, L_36));
		float L_37 = V_2;
		float L_38 = V_9;
		float L_39 = V_3;
		float L_40 = V_8;
		V_11 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_37, L_38)), ((float)il2cpp_codegen_multiply(L_39, L_40))));
		float L_41 = V_3;
		float L_42 = V_7;
		float L_43 = V_1;
		float L_44 = V_9;
		V_12 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_41, L_42)), ((float)il2cpp_codegen_multiply(L_43, L_44))));
		float L_45 = V_1;
		float L_46 = V_8;
		float L_47 = V_2;
		float L_48 = V_7;
		V_13 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_45, L_46)), ((float)il2cpp_codegen_multiply(L_47, L_48))));
		float L_49 = V_1;
		float L_50 = V_7;
		float L_51 = V_2;
		float L_52 = V_8;
		float L_53 = V_3;
		float L_54 = V_9;
		V_14 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_49, L_50)), ((float)il2cpp_codegen_multiply(L_51, L_52)))), ((float)il2cpp_codegen_multiply(L_53, L_54))));
		float L_55 = V_1;
		float L_56 = V_10;
		float L_57 = V_7;
		float L_58 = V_4;
		float L_59 = V_11;
		(&V_0)->___X_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_55, L_56)), ((float)il2cpp_codegen_multiply(L_57, L_58)))), L_59));
		float L_60 = V_2;
		float L_61 = V_10;
		float L_62 = V_8;
		float L_63 = V_4;
		float L_64 = V_12;
		(&V_0)->___Y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_60, L_61)), ((float)il2cpp_codegen_multiply(L_62, L_63)))), L_64));
		float L_65 = V_3;
		float L_66 = V_10;
		float L_67 = V_9;
		float L_68 = V_4;
		float L_69 = V_13;
		(&V_0)->___Z_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_65, L_66)), ((float)il2cpp_codegen_multiply(L_67, L_68)))), L_69));
		float L_70 = V_4;
		float L_71 = V_10;
		float L_72 = V_14;
		(&V_0)->___W_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_70, L_71)), L_72));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_73 = V_0;
		return L_73;
	}
}
// System.Boolean System.Numerics.Quaternion::op_Equality(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m1B8B2ECCF66F22A814A6664175A70E5061359C08 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value21, const RuntimeMethod* method) 
{
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value21;
		float L_3 = L_2.___X_0;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value21;
		float L_7 = L_6.___Y_1;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value10;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value21;
		float L_11 = L_10.___Z_2;
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0039;
		}
	}
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value10;
		float L_13 = L_12.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value21;
		float L_15 = L_14.___W_3;
		return (bool)((((float)L_13) == ((float)L_15))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Boolean System.Numerics.Quaternion::op_Inequality(System.Numerics.Quaternion,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m3FEF0BF26E113CF363F17BA93011EF1D4203B592 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value10, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___value21, const RuntimeMethod* method) 
{
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___value21;
		float L_3 = L_2.___X_0;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_003c;
		}
	}
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___value21;
		float L_7 = L_6.___Y_1;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_003c;
		}
	}
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___value10;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___value21;
		float L_11 = L_10.___Z_2;
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_003c;
		}
	}
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___value10;
		float L_13 = L_12.___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_14 = ___value21;
		float L_15 = L_14.___W_3;
		return (bool)((((int32_t)((((float)L_13) == ((float)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_003c:
	{
		return (bool)1;
	}
}
// System.Boolean System.Numerics.Quaternion::Equals(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_Equals_mEB44E3B9F18C38CC1903C2778FF55CBC0DE92B01 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___other0, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_1 = ___other0;
		float L_2 = L_1.___X_0;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_0039;
		}
	}
	{
		float L_3 = __this->___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___other0;
		float L_5 = L_4.___Y_1;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_0039;
		}
	}
	{
		float L_6 = __this->___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_7 = ___other0;
		float L_8 = L_7.___Z_2;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_0039;
		}
	}
	{
		float L_9 = __this->___W_3;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___other0;
		float L_11 = L_10.___W_3;
		return (bool)((((float)L_9) == ((float)L_11))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Quaternion_Equals_mEB44E3B9F18C38CC1903C2778FF55CBC0DE92B01_AdjustorThunk (RuntimeObject* __this, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___other0, const RuntimeMethod* method)
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*>(__this + _offset);
	bool _returnValue;
	_returnValue = Quaternion_Equals_mEB44E3B9F18C38CC1903C2778FF55CBC0DE92B01(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.Numerics.Quaternion::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_Equals_mF1AFC6A45FEB9E73A45CAE54B988BD6D8F792ACE (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Quaternion_Equals_mEB44E3B9F18C38CC1903C2778FF55CBC0DE92B01(__this, ((*(Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*)((Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*)(Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*)UnBox(L_1, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Quaternion_Equals_mF1AFC6A45FEB9E73A45CAE54B988BD6D8F792ACE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*>(__this + _offset);
	bool _returnValue;
	_returnValue = Quaternion_Equals_mF1AFC6A45FEB9E73A45CAE54B988BD6D8F792ACE(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.String System.Numerics.Quaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_mD769F8EA10BD837646A15B40E7CD7AC56F79C034 (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DC02E9DBA2BBA6B0B90CAE0980D70CE6132DCD1);
		s_Il2CppMethodInitialized = true;
	}
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		V_0 = L_0;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		float* L_4 = (&__this->___X_0);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = V_0;
		String_t* L_6;
		L_6 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(L_4, L_5, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		float* L_8 = (&__this->___Y_1);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9 = V_0;
		String_t* L_10;
		L_10 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(L_8, L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		float* L_12 = (&__this->___Z_2);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13 = V_0;
		String_t* L_14;
		L_14 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(L_12, L_13, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		float* L_16 = (&__this->___W_3);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_17 = V_0;
		String_t* L_18;
		L_18 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(L_16, L_17, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_1, _stringLiteral4DC02E9DBA2BBA6B0B90CAE0980D70CE6132DCD1, L_15, NULL);
		return L_19;
	}
}
IL2CPP_EXTERN_C  String_t* Quaternion_ToString_mD769F8EA10BD837646A15B40E7CD7AC56F79C034_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Quaternion_ToString_mD769F8EA10BD837646A15B40E7CD7AC56F79C034(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Numerics.Quaternion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Quaternion_GetHashCode_m3BC3F98699BCD0C97528CF800BF48E1CAB9440CD (Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* __this, const RuntimeMethod* method) 
{
	{
		float* L_0 = (&__this->___X_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___Y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___Z_2);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&__this->___W_3);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, L_3)), L_5)), L_7));
	}
}
IL2CPP_EXTERN_C  int32_t Quaternion_GetHashCode_m3BC3F98699BCD0C97528CF800BF48E1CAB9440CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Quaternion_GetHashCode_m3BC3F98699BCD0C97528CF800BF48E1CAB9440CD(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Numerics.Vector2 System.Numerics.Vector2::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_get_Zero_m36FB324642EE833496744D9A050C9ED26B4BF1D0 (const RuntimeMethod* method) 
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA));
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = V_0;
		return L_0;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_get_One_mD6E9FB91CB3DD160DF74ED62BBE4631936D2D416 (const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_0), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::get_UnitX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_get_UnitX_mC4F9A5EEF80A62EC5C54A3FA31D8058FDE7F97FB (const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_0), (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::get_UnitY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_get_UnitY_m0F2AB29F02C97F433970412349E00973569116FA (const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_0), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Numerics.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m0BAA92FF1238B70C6395AEAA8802EC3771793DF7 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___X_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float* L_3 = (&__this->___Y_1);
		int32_t L_4;
		L_4 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = HashHelpers_Combine_mF5306747D4F42347088DDDB2CB95525BBB70ED26(L_2, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t Vector2_GetHashCode_m0BAA92FF1238B70C6395AEAA8802EC3771793DF7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector2_GetHashCode_m0BAA92FF1238B70C6395AEAA8802EC3771793DF7(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Numerics.Vector2::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_m6B95AB4627B3C9279A472F03977012B491EA026D (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Vector2_Equals_mDFAEFA30B7F95DF9827D61E161AE1C7002A72AED(__this, ((*(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)((Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)UnBox(L_1, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector2_Equals_m6B95AB4627B3C9279A472F03977012B491EA026D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector2_Equals_m6B95AB4627B3C9279A472F03977012B491EA026D_inline(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.String System.Numerics.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mFE47DD39DF4017CD5AC8173912431AFA867860D5 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Vector2_ToString_m03A567B6EB47F06C009C05EE1F693EB6EF305EE7(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector2_ToString_mFE47DD39DF4017CD5AC8173912431AFA867860D5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector2_ToString_mFE47DD39DF4017CD5AC8173912431AFA867860D5(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Numerics.Vector2::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m5B752B72C571319D0F68AF0E54286C4F7E2F9359 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_2;
		L_2 = Vector2_ToString_m03A567B6EB47F06C009C05EE1F693EB6EF305EE7(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Vector2_ToString_m5B752B72C571319D0F68AF0E54286C4F7E2F9359_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector2_ToString_m5B752B72C571319D0F68AF0E54286C4F7E2F9359(_thisAdjusted, ___format0, method);
	return _returnValue;
}
// System.String System.Numerics.Vector2::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m03A567B6EB47F06C009C05EE1F693EB6EF305EE7 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___formatProvider1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)60), NULL);
		StringBuilder_t* L_6 = V_0;
		float* L_7 = (&__this->___X_0);
		String_t* L_8 = ___format0;
		RuntimeObject* L_9 = ___formatProvider1;
		String_t* L_10;
		L_10 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_7, L_8, L_9, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_10, NULL);
		StringBuilder_t* L_12 = V_0;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)32), NULL);
		StringBuilder_t* L_17 = V_0;
		float* L_18 = (&__this->___Y_1);
		String_t* L_19 = ___format0;
		RuntimeObject* L_20 = ___formatProvider1;
		String_t* L_21;
		L_21 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_18, L_19, L_20, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_21, NULL);
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, ((int32_t)62), NULL);
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		return L_26;
	}
}
IL2CPP_EXTERN_C  String_t* Vector2_ToString_m03A567B6EB47F06C009C05EE1F693EB6EF305EE7_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector2_ToString_m03A567B6EB47F06C009C05EE1F693EB6EF305EE7(_thisAdjusted, ___format0, ___formatProvider1, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector2::Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Length_m127C8E769CD34302E90D4DAE1BDC86A3E4A33790 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = (*(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)__this);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = (*(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)__this);
		float L_3;
		L_3 = Vector2_Dot_m2195C189D5A14EC605E4B85FB30E4AECF1099749_inline(L_1, L_2, NULL);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5;
		L_5 = sqrtf(L_4);
		return L_5;
	}

IL_0020:
	{
		float L_6 = __this->___X_0;
		float L_7 = __this->___X_0;
		float L_8 = __this->___Y_1;
		float L_9 = __this->___Y_1;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_7)), ((float)il2cpp_codegen_multiply(L_8, L_9))));
		float L_10 = V_1;
		float L_11;
		L_11 = sqrtf(L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C  float Vector2_Length_m127C8E769CD34302E90D4DAE1BDC86A3E4A33790_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	float _returnValue;
	_returnValue = Vector2_Length_m127C8E769CD34302E90D4DAE1BDC86A3E4A33790_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector2::LengthSquared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_LengthSquared_m4DA8A01DBE5EC9A4F3276C40DD1ECE1FCCE05FB9 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = (*(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)__this);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = (*(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)__this);
		float L_3;
		L_3 = Vector2_Dot_m2195C189D5A14EC605E4B85FB30E4AECF1099749_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		float L_4 = __this->___X_0;
		float L_5 = __this->___X_0;
		float L_6 = __this->___Y_1;
		float L_7 = __this->___Y_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_7))));
	}
}
IL2CPP_EXTERN_C  float Vector2_LengthSquared_m4DA8A01DBE5EC9A4F3276C40DD1ECE1FCCE05FB9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	float _returnValue;
	_returnValue = Vector2_LengthSquared_m4DA8A01DBE5EC9A4F3276C40DD1ECE1FCCE05FB9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector2::Distance(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_mEFA3BC16C2408E14AC1C10A30F01DFDDA70D776E (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value21, const RuntimeMethod* method) 
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___value10;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___value21;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_3;
		L_3 = Vector2_op_Subtraction_m5B12B8922F40EC927313AFF9187BF46700E4788E_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = V_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_5 = V_0;
		float L_6;
		L_6 = Vector2_Dot_m2195C189D5A14EC605E4B85FB30E4AECF1099749_inline(L_4, L_5, NULL);
		V_1 = L_6;
		float L_7 = V_1;
		float L_8;
		L_8 = sqrtf(L_7);
		return L_8;
	}

IL_001e:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_9 = ___value10;
		float L_10 = L_9.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_11 = ___value21;
		float L_12 = L_11.___X_0;
		V_2 = ((float)il2cpp_codegen_subtract(L_10, L_12));
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_13 = ___value10;
		float L_14 = L_13.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_15 = ___value21;
		float L_16 = L_15.___Y_1;
		V_3 = ((float)il2cpp_codegen_subtract(L_14, L_16));
		float L_17 = V_2;
		float L_18 = V_2;
		float L_19 = V_3;
		float L_20 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_18)), ((float)il2cpp_codegen_multiply(L_19, L_20))));
		float L_21 = V_4;
		float L_22;
		L_22 = sqrtf(L_21);
		return L_22;
	}
}
// System.Single System.Numerics.Vector2::DistanceSquared(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_DistanceSquared_mCD496438749B191A1315A6462AC548189708B383 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value21, const RuntimeMethod* method) 
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___value10;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___value21;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_3;
		L_3 = Vector2_op_Subtraction_m5B12B8922F40EC927313AFF9187BF46700E4788E_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = V_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_5 = V_0;
		float L_6;
		L_6 = Vector2_Dot_m2195C189D5A14EC605E4B85FB30E4AECF1099749_inline(L_4, L_5, NULL);
		return L_6;
	}

IL_0017:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_7 = ___value10;
		float L_8 = L_7.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_9 = ___value21;
		float L_10 = L_9.___X_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_8, L_10));
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_11 = ___value10;
		float L_12 = L_11.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_13 = ___value21;
		float L_14 = L_13.___Y_1;
		V_2 = ((float)il2cpp_codegen_subtract(L_12, L_14));
		float L_15 = V_1;
		float L_16 = V_1;
		float L_17 = V_2;
		float L_18 = V_2;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_15, L_16)), ((float)il2cpp_codegen_multiply(L_17, L_18))));
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Normalize(System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Normalize_m01974297EACBBCF2A5691EAE006C923C31A50E55 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		float L_1;
		L_1 = Vector2_Length_m127C8E769CD34302E90D4DAE1BDC86A3E4A33790_inline((&___value0), NULL);
		V_0 = L_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___value0;
		float L_3 = V_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4;
		L_4 = Vector2_op_Division_mD704B243C99FCD6838646E6A0F801EB767E30A12_inline(L_2, L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_5 = ___value0;
		float L_6 = L_5.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_7 = ___value0;
		float L_8 = L_7.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_9 = ___value0;
		float L_10 = L_9.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_11 = ___value0;
		float L_12 = L_11.___Y_1;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_12))));
		float L_13 = V_1;
		float L_14;
		L_14 = sqrtf(L_13);
		V_2 = ((float)((1.0f)/L_14));
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_15 = ___value0;
		float L_16 = L_15.___X_0;
		float L_17 = V_2;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_18 = ___value0;
		float L_19 = L_18.___Y_1;
		float L_20 = V_2;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_21), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_19, L_20)), /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Reflect(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Reflect_mD486DD60896ADE29C7D09E4EBB2D333A35619C81 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___vector0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___normal1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___vector0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___normal1;
		float L_3;
		L_3 = Vector2_Dot_m2195C189D5A14EC605E4B85FB30E4AECF1099749_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___vector0;
		float L_5 = V_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___normal1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_7;
		L_7 = Vector2_op_Multiply_m5DA88787CCA831F7D97F46AC3D52AC424B0231A1_inline(((float)il2cpp_codegen_multiply((2.0f), L_5)), L_6, NULL);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8;
		L_8 = Vector2_op_Subtraction_m5B12B8922F40EC927313AFF9187BF46700E4788E_inline(L_4, L_7, NULL);
		return L_8;
	}

IL_0023:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_9 = ___vector0;
		float L_10 = L_9.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_11 = ___normal1;
		float L_12 = L_11.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_13 = ___vector0;
		float L_14 = L_13.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_15 = ___normal1;
		float L_16 = L_15.___Y_1;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_10, L_12)), ((float)il2cpp_codegen_multiply(L_14, L_16))));
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_17 = ___vector0;
		float L_18 = L_17.___X_0;
		float L_19 = V_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_20 = ___normal1;
		float L_21 = L_20.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_22 = ___vector0;
		float L_23 = L_22.___Y_1;
		float L_24 = V_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_25 = ___normal1;
		float L_26 = L_25.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_27), ((float)il2cpp_codegen_subtract(L_18, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_19)), L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_24)), L_26)))), /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Clamp(System.Numerics.Vector2,System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Clamp_m1B8EE0926DF8F6563869698CD3A4281A138E06DA (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___min1, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___max2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B12_0 = 0.0f;
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___value10;
		float L_1 = L_0.___X_0;
		V_0 = L_1;
		float L_2 = V_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_3 = ___max2;
		float L_4 = L_3.___X_0;
		if ((((float)L_2) > ((float)L_4)))
		{
			goto IL_0013;
		}
	}
	{
		float L_5 = V_0;
		G_B3_0 = L_5;
		goto IL_0019;
	}

IL_0013:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___max2;
		float L_7 = L_6.___X_0;
		G_B3_0 = L_7;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		float L_8 = V_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_9 = ___min1;
		float L_10 = L_9.___X_0;
		if ((((float)L_8) < ((float)L_10)))
		{
			goto IL_0026;
		}
	}
	{
		float L_11 = V_0;
		G_B6_0 = L_11;
		goto IL_002c;
	}

IL_0026:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_12 = ___min1;
		float L_13 = L_12.___X_0;
		G_B6_0 = L_13;
	}

IL_002c:
	{
		V_0 = G_B6_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_14 = ___value10;
		float L_15 = L_14.___Y_1;
		V_1 = L_15;
		float L_16 = V_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_17 = ___max2;
		float L_18 = L_17.___Y_1;
		if ((((float)L_16) > ((float)L_18)))
		{
			goto IL_0040;
		}
	}
	{
		float L_19 = V_1;
		G_B9_0 = L_19;
		goto IL_0046;
	}

IL_0040:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_20 = ___max2;
		float L_21 = L_20.___Y_1;
		G_B9_0 = L_21;
	}

IL_0046:
	{
		V_1 = G_B9_0;
		float L_22 = V_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_23 = ___min1;
		float L_24 = L_23.___Y_1;
		if ((((float)L_22) < ((float)L_24)))
		{
			goto IL_0053;
		}
	}
	{
		float L_25 = V_1;
		G_B12_0 = L_25;
		goto IL_0059;
	}

IL_0053:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_26 = ___min1;
		float L_27 = L_26.___Y_1;
		G_B12_0 = L_27;
	}

IL_0059:
	{
		V_1 = G_B12_0;
		float L_28 = V_0;
		float L_29 = V_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_30), L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Lerp(System.Numerics.Vector2,System.Numerics.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Lerp_m892B1DB3AB9FF770BF96F653EBB8372D9ACED586 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value21, float ___amount2, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___value21;
		float L_3 = L_2.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___value10;
		float L_5 = L_4.___X_0;
		float L_6 = ___amount2;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_7 = ___value10;
		float L_8 = L_7.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_9 = ___value21;
		float L_10 = L_9.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_11 = ___value10;
		float L_12 = L_11.___Y_1;
		float L_13 = ___amount2;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_14), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Transform(System.Numerics.Vector2,System.Numerics.Matrix3x2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Transform_mA641F34E80BE206AC2750F7E82500C265EA549C5 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___position0, Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 ___matrix1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___position0;
		float L_1 = L_0.___X_0;
		Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 L_2 = ___matrix1;
		float L_3 = L_2.___M11_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___position0;
		float L_5 = L_4.___Y_1;
		Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 L_6 = ___matrix1;
		float L_7 = L_6.___M21_2;
		Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 L_8 = ___matrix1;
		float L_9 = L_8.___M31_4;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_10 = ___position0;
		float L_11 = L_10.___X_0;
		Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 L_12 = ___matrix1;
		float L_13 = L_12.___M12_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_14 = ___position0;
		float L_15 = L_14.___Y_1;
		Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 L_16 = ___matrix1;
		float L_17 = L_16.___M22_3;
		Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 L_18 = ___matrix1;
		float L_19 = L_18.___M32_5;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_20), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), L_9)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_11, L_13)), ((float)il2cpp_codegen_multiply(L_15, L_17)))), L_19)), /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Transform(System.Numerics.Vector2,System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Transform_m7541355383B3B580AE89455A5899273BA4384EF6 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___position0, Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 ___matrix1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___position0;
		float L_1 = L_0.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_2 = ___matrix1;
		float L_3 = L_2.___M11_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___position0;
		float L_5 = L_4.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_6 = ___matrix1;
		float L_7 = L_6.___M21_4;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_8 = ___matrix1;
		float L_9 = L_8.___M41_12;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_10 = ___position0;
		float L_11 = L_10.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_12 = ___matrix1;
		float L_13 = L_12.___M12_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_14 = ___position0;
		float L_15 = L_14.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_16 = ___matrix1;
		float L_17 = L_16.___M22_5;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_18 = ___matrix1;
		float L_19 = L_18.___M42_13;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_20), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), L_9)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_11, L_13)), ((float)il2cpp_codegen_multiply(L_15, L_17)))), L_19)), /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::TransformNormal(System.Numerics.Vector2,System.Numerics.Matrix3x2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_TransformNormal_m41E406ACE3700B4A080210948653BFB3ABFABAED (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___normal0, Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 ___matrix1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___normal0;
		float L_1 = L_0.___X_0;
		Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 L_2 = ___matrix1;
		float L_3 = L_2.___M11_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___normal0;
		float L_5 = L_4.___Y_1;
		Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 L_6 = ___matrix1;
		float L_7 = L_6.___M21_2;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8 = ___normal0;
		float L_9 = L_8.___X_0;
		Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 L_10 = ___matrix1;
		float L_11 = L_10.___M12_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_12 = ___normal0;
		float L_13 = L_12.___Y_1;
		Matrix3x2_tCDF784BE5C1BAE0E1ACFB821ED566F94B57C5CD0 L_14 = ___matrix1;
		float L_15 = L_14.___M22_3;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_16), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::TransformNormal(System.Numerics.Vector2,System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_TransformNormal_m8CC1E3C4BF1DD05F163CCC419192D61BF1BB1B68 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___normal0, Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 ___matrix1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___normal0;
		float L_1 = L_0.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_2 = ___matrix1;
		float L_3 = L_2.___M11_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___normal0;
		float L_5 = L_4.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_6 = ___matrix1;
		float L_7 = L_6.___M21_4;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8 = ___normal0;
		float L_9 = L_8.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_10 = ___matrix1;
		float L_11 = L_10.___M12_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_12 = ___normal0;
		float L_13 = L_12.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_14 = ___matrix1;
		float L_15 = L_14.___M22_5;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_16), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Transform(System.Numerics.Vector2,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Transform_mB376DB6C22FA66CAF8DFFE1CEAD6FD7012999953 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___rotation1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___rotation1;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___rotation1;
		float L_3 = L_2.___X_0;
		V_0 = ((float)il2cpp_codegen_add(L_1, L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___rotation1;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___rotation1;
		float L_7 = L_6.___Y_1;
		V_1 = ((float)il2cpp_codegen_add(L_5, L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___rotation1;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___rotation1;
		float L_11 = L_10.___Z_2;
		V_2 = ((float)il2cpp_codegen_add(L_9, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___rotation1;
		float L_13 = L_12.___W_3;
		float L_14 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_15 = ___rotation1;
		float L_16 = L_15.___X_0;
		float L_17 = V_0;
		V_4 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_18 = ___rotation1;
		float L_19 = L_18.___X_0;
		float L_20 = V_1;
		V_5 = ((float)il2cpp_codegen_multiply(L_19, L_20));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_21 = ___rotation1;
		float L_22 = L_21.___Y_1;
		float L_23 = V_1;
		V_6 = ((float)il2cpp_codegen_multiply(L_22, L_23));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_24 = ___rotation1;
		float L_25 = L_24.___Z_2;
		float L_26 = V_2;
		V_7 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_27 = ___value0;
		float L_28 = L_27.___X_0;
		float L_29 = V_6;
		float L_30 = V_7;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_31 = ___value0;
		float L_32 = L_31.___Y_1;
		float L_33 = V_5;
		float L_34 = V_3;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_35 = ___value0;
		float L_36 = L_35.___X_0;
		float L_37 = V_5;
		float L_38 = V_3;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_39 = ___value0;
		float L_40 = L_39.___Y_1;
		float L_41 = V_4;
		float L_42 = V_7;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_43), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_29)), L_30)))), ((float)il2cpp_codegen_multiply(L_32, ((float)il2cpp_codegen_subtract(L_33, L_34)))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_36, ((float)il2cpp_codegen_add(L_37, L_38)))), ((float)il2cpp_codegen_multiply(L_40, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_41)), L_42)))))), /*hidden argument*/NULL);
		return L_43;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Add(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Add_mF0B636412CB6CE98AAEB0E00E3B333DE2EF8CB22 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___right1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2;
		L_2 = Vector2_op_Addition_m5AEDFEFD6A9506D1124AEB037F0BF38FD5D878E3_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Subtract(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Subtract_m229BB6511DB6E12F23878B684D0C18E9C06F3218 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___right1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2;
		L_2 = Vector2_op_Subtraction_m5B12B8922F40EC927313AFF9187BF46700E4788E_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Multiply(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Multiply_m767401968A0D634D9DF5DA458102847AD729338D (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___right1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2;
		L_2 = Vector2_op_Multiply_m64EA130D0C8A825DA1E3CC713ED72DD7988B83F3_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Multiply(System.Numerics.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Multiply_m990441A040B9BB345621E2F98BC88A464FB94BC1 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, float ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = ___right1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2;
		L_2 = Vector2_op_Multiply_m8EB1029BB7FD782F48E2FAAF9ACCBC29F901D633_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Multiply(System.Single,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Multiply_mCF1DE6DCAF42DCF2957598A3190CDECBE9B65B0F (float ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___left0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___right1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2;
		L_2 = Vector2_op_Multiply_m5DA88787CCA831F7D97F46AC3D52AC424B0231A1_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Divide(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Divide_m84DAD54809B09EAA77F2CBBBBB6654C64AAE20A3 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___right1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2;
		L_2 = Vector2_op_Division_m74BF4999E76FF0C5DB36D2A4D615F65DE775C307_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Divide(System.Numerics.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Divide_mCAFF4E55B5C3989ACD0244B608E9468335F62077 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, float ___divisor1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = ___divisor1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2;
		L_2 = Vector2_op_Division_mD704B243C99FCD6838646E6A0F801EB767E30A12_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Negate(System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Negate_m67EC4842DAC7618625509A2056A2BF14CC045778 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___value0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1;
		L_1 = Vector2_op_UnaryNegation_mC489C1E2186814FDA7BF6E010950045EF6F6CC7F_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Numerics.Vector2::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_m7A219410626849229A109AC00F0B58037059CA6B (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		float L_1 = ___value0;
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2__ctor_m7A219410626849229A109AC00F0B58037059CA6B_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	Vector2__ctor_m7A219410626849229A109AC00F0B58037059CA6B(_thisAdjusted, ___value0, method);
}
// System.Void System.Numerics.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___X_0 = L_0;
		float L_1 = ___y1;
		__this->___Y_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B_AdjustorThunk (RuntimeObject* __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B(_thisAdjusted, ___x0, ___y1, method);
}
// System.Void System.Numerics.Vector2::CopyTo(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_CopyTo_m8D7D147DE06F2083BFF9A01B3C62630DA75B7B61 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		Vector2_CopyTo_mDDD08F43F5C977D4D7265FA3699ACB7B9E55DEC8(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2_CopyTo_m8D7D147DE06F2083BFF9A01B3C62630DA75B7B61_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	Vector2_CopyTo_m8D7D147DE06F2083BFF9A01B3C62630DA75B7B61_inline(_thisAdjusted, ___array0, method);
}
// System.Void System.Numerics.Vector2::CopyTo(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_CopyTo_mDDD08F43F5C977D4D7265FA3699ACB7B9E55DEC8 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1;
		L_1 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_NullArgumentNullRef_mA3072D049995FC076C81366072003B82FFD7AC5B(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2_CopyTo_mDDD08F43F5C977D4D7265FA3699ACB7B9E55DEC8_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_3 = ___index1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = ___index1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___array0;
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_0018:
	{
		String_t* L_6;
		L_6 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ArgumentOutOfRangeException_m0CC0F173F70B02AA1F5D2DD69D2DC9924D91803A(NULL);
		int32_t L_7 = ___index1;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_Format_m9BBA345A344FA6EA2067151B289DD08CF8392188(L_6, L_9, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2_CopyTo_mDDD08F43F5C977D4D7265FA3699ACB7B9E55DEC8_RuntimeMethod_var)));
	}

IL_0033:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___index1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))) >= ((int32_t)2)))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_14;
		L_14 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ElementsInSourceIsGreaterThanDestination_m6532FB7E4299FBA5C367D126B292F3706DE582F9(NULL);
		int32_t L_15 = ___index1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_Format_m9BBA345A344FA6EA2067151B289DD08CF8392188(L_14, L_17, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2_CopyTo_mDDD08F43F5C977D4D7265FA3699ACB7B9E55DEC8_RuntimeMethod_var)));
	}

IL_0051:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = ___array0;
		int32_t L_21 = ___index1;
		float L_22 = __this->___X_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (float)L_22);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___array0;
		int32_t L_24 = ___index1;
		float L_25 = __this->___Y_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 1))), (float)L_25);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2_CopyTo_mDDD08F43F5C977D4D7265FA3699ACB7B9E55DEC8_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	Vector2_CopyTo_mDDD08F43F5C977D4D7265FA3699ACB7B9E55DEC8(_thisAdjusted, ___array0, ___index1, method);
}
// System.Boolean System.Numerics.Vector2::Equals(System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_mDFAEFA30B7F95DF9827D61E161AE1C7002A72AED (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___other0, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___other0;
		float L_2 = L_1.___X_0;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		float L_3 = __this->___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___other0;
		float L_5 = L_4.___Y_1;
		return (bool)((((float)L_3) == ((float)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Vector2_Equals_mDFAEFA30B7F95DF9827D61E161AE1C7002A72AED_AdjustorThunk (RuntimeObject* __this, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___other0, const RuntimeMethod* method)
{
	Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector2_Equals_mDFAEFA30B7F95DF9827D61E161AE1C7002A72AED(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector2::Dot(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Dot_m2195C189D5A14EC605E4B85FB30E4AECF1099749 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value21, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___value21;
		float L_3 = L_2.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___value21;
		float L_7 = L_6.___Y_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Min(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Min_m4B743A4055E152710256488C842336FF07423A23 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value21, const RuntimeMethod* method) 
{
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___value21;
		float L_3 = L_2.___X_0;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___value21;
		float L_5 = L_4.___X_0;
		G_B3_0 = L_5;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___value10;
		float L_7 = L_6.___X_0;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8 = ___value10;
		float L_9 = L_8.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_10 = ___value21;
		float L_11 = L_10.___Y_1;
		G_B4_0 = G_B3_0;
		if ((((float)L_9) < ((float)L_11)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_12 = ___value21;
		float L_13 = L_12.___Y_1;
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0032:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_14 = ___value10;
		float L_15 = L_14.___Y_1;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_16), G_B6_1, G_B6_0, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Max(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Max_mA88AA0B40A116895BF62BD2DE25671B1BD409F53 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value21, const RuntimeMethod* method) 
{
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___value21;
		float L_3 = L_2.___X_0;
		if ((((float)L_1) > ((float)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___value21;
		float L_5 = L_4.___X_0;
		G_B3_0 = L_5;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___value10;
		float L_7 = L_6.___X_0;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8 = ___value10;
		float L_9 = L_8.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_10 = ___value21;
		float L_11 = L_10.___Y_1;
		G_B4_0 = G_B3_0;
		if ((((float)L_9) > ((float)L_11)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_12 = ___value21;
		float L_13 = L_12.___Y_1;
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0032:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_14 = ___value10;
		float L_15 = L_14.___Y_1;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_16), G_B6_1, G_B6_0, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::Abs(System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_Abs_mB22A144B6FD8975712CF4638EA8B4565590712B0 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___value0;
		float L_1 = L_0.___X_0;
		float L_2;
		L_2 = fabsf(L_1);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_3 = ___value0;
		float L_4 = L_3.___Y_1;
		float L_5;
		L_5 = fabsf(L_4);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::SquareRoot(System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_SquareRoot_m2E98465CB28839190F1035F004326471B2CCD623 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___value0;
		float L_1 = L_0.___X_0;
		float L_2;
		L_2 = sqrtf(L_1);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_3 = ___value0;
		float L_4 = L_3.___Y_1;
		float L_5;
		L_5 = sqrtf(L_4);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::op_Addition(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Addition_m5AEDFEFD6A9506D1124AEB037F0BF38FD5D878E3 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::op_Subtraction(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Subtraction_m5B12B8922F40EC927313AFF9187BF46700E4788E (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::op_Multiply(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Multiply_m64EA130D0C8A825DA1E3CC713ED72DD7988B83F3 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::op_Multiply(System.Single,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Multiply_m5DA88787CCA831F7D97F46AC3D52AC424B0231A1 (float ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___left0;
		float L_1 = ___left0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_2), L_0, L_1, /*hidden argument*/NULL);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_3 = ___right1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4;
		L_4 = Vector2_op_Multiply_m64EA130D0C8A825DA1E3CC713ED72DD7988B83F3_inline(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::op_Multiply(System.Numerics.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Multiply_m8EB1029BB7FD782F48E2FAAF9ACCBC29F901D633 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, float ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = ___right1;
		float L_2 = ___right1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_3), L_1, L_2, /*hidden argument*/NULL);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4;
		L_4 = Vector2_op_Multiply_m64EA130D0C8A825DA1E3CC713ED72DD7988B83F3_inline(L_0, L_3, NULL);
		return L_4;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::op_Division(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Division_m74BF4999E76FF0C5DB36D2A4D615F65DE775C307 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::op_Division(System.Numerics.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Division_mD704B243C99FCD6838646E6A0F801EB767E30A12 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, float ___value21, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___value21;
		V_0 = ((float)((1.0f)/L_0));
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___value10;
		float L_2 = L_1.___X_0;
		float L_3 = V_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		float L_6 = V_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_7), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_6)), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Numerics.Vector2 System.Numerics.Vector2::op_UnaryNegation(System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_UnaryNegation_mC489C1E2186814FDA7BF6E010950045EF6F6CC7F (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0;
		L_0 = Vector2_get_Zero_m36FB324642EE833496744D9A050C9ED26B4BF1D0(NULL);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___value0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2;
		L_2 = Vector2_op_Subtraction_m5B12B8922F40EC927313AFF9187BF46700E4788E_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean System.Numerics.Vector2::op_Equality(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m22EE79D4B551EDF12F65D56F0C8FF68968CFABC0 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___right1;
		bool L_1;
		L_1 = Vector2_Equals_mDFAEFA30B7F95DF9827D61E161AE1C7002A72AED((&___left0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean System.Numerics.Vector2::op_Inequality(System.Numerics.Vector2,System.Numerics.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mDDF7B0191CF32431FA743D5FCFD34E615943865A (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___right1;
		bool L_2;
		L_2 = Vector2_op_Equality_m22EE79D4B551EDF12F65D56F0C8FF68968CFABC0_inline(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Numerics.Vector3 System.Numerics.Vector3::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_get_Zero_mC55B2179B6D1A9251EB3B41384A2EA418EFD6B0A (const RuntimeMethod* method) 
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = V_0;
		return L_0;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_get_One_mEE49708B8EC93E057F79975C337B08C1C87489A9 (const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_0), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::get_UnitX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_get_UnitX_m9C1480F42F821977CDE53D299999127018C8C2ED (const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_0), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::get_UnitY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_get_UnitY_m81246F6A2EC99580C57337E70A9CC03B173A8242 (const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_0), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::get_UnitZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_get_UnitZ_m1244183EEB086D71322C0A24DEF87F2BBB793763 (const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_0), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Numerics.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mED9B117E4B557BE71CA8171168AAFCCE39D5C9C0 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___X_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float* L_3 = (&__this->___Y_1);
		int32_t L_4;
		L_4 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = HashHelpers_Combine_mF5306747D4F42347088DDDB2CB95525BBB70ED26(L_2, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		float* L_7 = (&__this->___Z_2);
		int32_t L_8;
		L_8 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_7, NULL);
		int32_t L_9;
		L_9 = HashHelpers_Combine_mF5306747D4F42347088DDDB2CB95525BBB70ED26(L_6, L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t Vector3_GetHashCode_mED9B117E4B557BE71CA8171168AAFCCE39D5C9C0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector3_GetHashCode_mED9B117E4B557BE71CA8171168AAFCCE39D5C9C0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Numerics.Vector3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_m4C4625EE9E480A0B192A87A537FD9EC82A6745A1 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Vector3_Equals_mFDFB6E4AC826DFE3EDADB911D23B16DBEF175ABA(__this, ((*(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)((Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)UnBox(L_1, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector3_Equals_m4C4625EE9E480A0B192A87A537FD9EC82A6745A1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector3_Equals_m4C4625EE9E480A0B192A87A537FD9EC82A6745A1_inline(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.String System.Numerics.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mF5317E7625940836F28EEE7224FCB8C2B7C17986 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Vector3_ToString_mEF5B36C42F47C3D3EB8D56711BFCB825A892FDC5(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3_ToString_mF5317E7625940836F28EEE7224FCB8C2B7C17986_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector3_ToString_mF5317E7625940836F28EEE7224FCB8C2B7C17986(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Numerics.Vector3::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m07A4A464F6DF0E5B08C69C564E10B782D12AFA6B (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_2;
		L_2 = Vector3_ToString_mEF5B36C42F47C3D3EB8D56711BFCB825A892FDC5(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3_ToString_m07A4A464F6DF0E5B08C69C564E10B782D12AFA6B_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector3_ToString_m07A4A464F6DF0E5B08C69C564E10B782D12AFA6B(_thisAdjusted, ___format0, method);
	return _returnValue;
}
// System.String System.Numerics.Vector3::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mEF5B36C42F47C3D3EB8D56711BFCB825A892FDC5 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___formatProvider1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)60), NULL);
		StringBuilder_t* L_6 = V_0;
		float L_7 = __this->___X_0;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = ___format0;
		RuntimeObject* L_11 = ___formatProvider1;
		String_t* L_12;
		L_12 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((float*)UnBox(L_9, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var), L_10, L_11, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_12, NULL);
		StringBuilder_t* L_14 = V_0;
		String_t* L_15 = V_1;
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_15, NULL);
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)32), NULL);
		StringBuilder_t* L_19 = V_0;
		float L_20 = __this->___Y_1;
		float L_21 = L_20;
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23 = ___format0;
		RuntimeObject* L_24 = ___formatProvider1;
		String_t* L_25;
		L_25 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((float*)UnBox(L_22, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var), L_23, L_24, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, L_25, NULL);
		StringBuilder_t* L_27 = V_0;
		String_t* L_28 = V_1;
		NullCheck(L_27);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, L_28, NULL);
		StringBuilder_t* L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_30, ((int32_t)32), NULL);
		StringBuilder_t* L_32 = V_0;
		float L_33 = __this->___Z_2;
		float L_34 = L_33;
		RuntimeObject* L_35 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_34);
		String_t* L_36 = ___format0;
		RuntimeObject* L_37 = ___formatProvider1;
		String_t* L_38;
		L_38 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((float*)UnBox(L_35, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var), L_36, L_37, NULL);
		NullCheck(L_32);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, L_38, NULL);
		StringBuilder_t* L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)62), NULL);
		StringBuilder_t* L_42 = V_0;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_42);
		return L_43;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3_ToString_mEF5B36C42F47C3D3EB8D56711BFCB825A892FDC5_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector3_ToString_mEF5B36C42F47C3D3EB8D56711BFCB825A892FDC5(_thisAdjusted, ___format0, ___formatProvider1, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector3::Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Length_mDF23146EF181AD73566BCF37688ED3221C84AB22 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = (*(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)__this);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = (*(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)__this);
		float L_3;
		L_3 = Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline(L_1, L_2, NULL);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5;
		L_5 = sqrtf(L_4);
		return L_5;
	}

IL_0020:
	{
		float L_6 = __this->___X_0;
		float L_7 = __this->___X_0;
		float L_8 = __this->___Y_1;
		float L_9 = __this->___Y_1;
		float L_10 = __this->___Z_2;
		float L_11 = __this->___Z_2;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_7)), ((float)il2cpp_codegen_multiply(L_8, L_9)))), ((float)il2cpp_codegen_multiply(L_10, L_11))));
		float L_12 = V_1;
		float L_13;
		L_13 = sqrtf(L_12);
		return L_13;
	}
}
IL2CPP_EXTERN_C  float Vector3_Length_mDF23146EF181AD73566BCF37688ED3221C84AB22_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3_Length_mDF23146EF181AD73566BCF37688ED3221C84AB22_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector3::LengthSquared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_LengthSquared_m4FABBDA4075F50315AA06D7E9048603D695C80C3 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = (*(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)__this);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = (*(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)__this);
		float L_3;
		L_3 = Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		float L_4 = __this->___X_0;
		float L_5 = __this->___X_0;
		float L_6 = __this->___Y_1;
		float L_7 = __this->___Y_1;
		float L_8 = __this->___Z_2;
		float L_9 = __this->___Z_2;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_7)))), ((float)il2cpp_codegen_multiply(L_8, L_9))));
	}
}
IL2CPP_EXTERN_C  float Vector3_LengthSquared_m4FABBDA4075F50315AA06D7E9048603D695C80C3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3_LengthSquared_m4FABBDA4075F50315AA06D7E9048603D695C80C3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector3::Distance(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_m18B7EDA7A9C697DC657EF61B4DBCE45BEA423BDA (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value21, const RuntimeMethod* method) 
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___value10;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___value21;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3;
		L_3 = Vector3_op_Subtraction_m5D2D4FFD4BE9EA857665C94C207D745C164BD717_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_5 = V_0;
		float L_6;
		L_6 = Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline(L_4, L_5, NULL);
		V_1 = L_6;
		float L_7 = V_1;
		float L_8;
		L_8 = sqrtf(L_7);
		return L_8;
	}

IL_001e:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9 = ___value10;
		float L_10 = L_9.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11 = ___value21;
		float L_12 = L_11.___X_0;
		V_2 = ((float)il2cpp_codegen_subtract(L_10, L_12));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_13 = ___value10;
		float L_14 = L_13.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_15 = ___value21;
		float L_16 = L_15.___Y_1;
		V_3 = ((float)il2cpp_codegen_subtract(L_14, L_16));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_17 = ___value10;
		float L_18 = L_17.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_19 = ___value21;
		float L_20 = L_19.___Z_2;
		V_4 = ((float)il2cpp_codegen_subtract(L_18, L_20));
		float L_21 = V_2;
		float L_22 = V_2;
		float L_23 = V_3;
		float L_24 = V_3;
		float L_25 = V_4;
		float L_26 = V_4;
		V_5 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_24)))), ((float)il2cpp_codegen_multiply(L_25, L_26))));
		float L_27 = V_5;
		float L_28;
		L_28 = sqrtf(L_27);
		return L_28;
	}
}
// System.Single System.Numerics.Vector3::DistanceSquared(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_DistanceSquared_m00DC4985CB78A03527344E574866216131CE1787 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value21, const RuntimeMethod* method) 
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___value10;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___value21;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3;
		L_3 = Vector3_op_Subtraction_m5D2D4FFD4BE9EA857665C94C207D745C164BD717_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_5 = V_0;
		float L_6;
		L_6 = Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline(L_4, L_5, NULL);
		return L_6;
	}

IL_0017:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_7 = ___value10;
		float L_8 = L_7.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9 = ___value21;
		float L_10 = L_9.___X_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_8, L_10));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11 = ___value10;
		float L_12 = L_11.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_13 = ___value21;
		float L_14 = L_13.___Y_1;
		V_2 = ((float)il2cpp_codegen_subtract(L_12, L_14));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_15 = ___value10;
		float L_16 = L_15.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_17 = ___value21;
		float L_18 = L_17.___Z_2;
		V_3 = ((float)il2cpp_codegen_subtract(L_16, L_18));
		float L_19 = V_1;
		float L_20 = V_1;
		float L_21 = V_2;
		float L_22 = V_2;
		float L_23 = V_3;
		float L_24 = V_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_19, L_20)), ((float)il2cpp_codegen_multiply(L_21, L_22)))), ((float)il2cpp_codegen_multiply(L_23, L_24))));
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Normalize(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Normalize_m4C57D163C6A541513FD2BE0C4C2B77FB079283C8 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		float L_1;
		L_1 = Vector3_Length_mDF23146EF181AD73566BCF37688ED3221C84AB22_inline((&___value0), NULL);
		V_0 = L_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___value0;
		float L_3 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4;
		L_4 = Vector3_op_Division_m51E43B54188B9A27492E7ECBEE87DEF65580C1B5_inline(L_2, L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_5 = ___value0;
		float L_6 = L_5.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_7 = ___value0;
		float L_8 = L_7.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9 = ___value0;
		float L_10 = L_9.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11 = ___value0;
		float L_12 = L_11.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_13 = ___value0;
		float L_14 = L_13.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_15 = ___value0;
		float L_16 = L_15.___Z_2;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_12)))), ((float)il2cpp_codegen_multiply(L_14, L_16))));
		float L_17 = V_1;
		float L_18;
		L_18 = sqrtf(L_17);
		V_2 = L_18;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_19 = ___value0;
		float L_20 = L_19.___X_0;
		float L_21 = V_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_22 = ___value0;
		float L_23 = L_22.___Y_1;
		float L_24 = V_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_25 = ___value0;
		float L_26 = L_25.___Z_2;
		float L_27 = V_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_28), ((float)(L_20/L_21)), ((float)(L_23/L_24)), ((float)(L_26/L_27)), /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Cross(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Cross_m4FED62DEE3F5D56489ECFC310E5007B25D730805 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector21, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___vector10;
		float L_1 = L_0.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___vector21;
		float L_3 = L_2.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___vector10;
		float L_5 = L_4.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___vector21;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___vector10;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___vector21;
		float L_11 = L_10.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12 = ___vector10;
		float L_13 = L_12.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_14 = ___vector21;
		float L_15 = L_14.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_16 = ___vector10;
		float L_17 = L_16.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_18 = ___vector21;
		float L_19 = L_18.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_20 = ___vector10;
		float L_21 = L_20.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_22 = ___vector21;
		float L_23 = L_22.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Reflect(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Reflect_mC8A0A76564DA17B727A866EA842F1C951FD13E73 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___normal1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___vector0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___normal1;
		float L_3;
		L_3 = Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___normal1;
		float L_5 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6;
		L_6 = Vector3_op_Multiply_m85DCD131468B1E2CDECCC420A87367ADA67A0ED9_inline(L_4, L_5, NULL);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_7;
		L_7 = Vector3_op_Multiply_m85DCD131468B1E2CDECCC420A87367ADA67A0ED9_inline(L_6, (2.0f), NULL);
		V_1 = L_7;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___vector0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9 = V_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10;
		L_10 = Vector3_op_Subtraction_m5D2D4FFD4BE9EA857665C94C207D745C164BD717_inline(L_8, L_9, NULL);
		return L_10;
	}

IL_0029:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11 = ___vector0;
		float L_12 = L_11.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_13 = ___normal1;
		float L_14 = L_13.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_15 = ___vector0;
		float L_16 = L_15.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_17 = ___normal1;
		float L_18 = L_17.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_19 = ___vector0;
		float L_20 = L_19.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_21 = ___normal1;
		float L_22 = L_21.___Z_2;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_14)), ((float)il2cpp_codegen_multiply(L_16, L_18)))), ((float)il2cpp_codegen_multiply(L_20, L_22))));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_23 = ___normal1;
		float L_24 = L_23.___X_0;
		float L_25 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_24, L_25)), (2.0f)));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_26 = ___normal1;
		float L_27 = L_26.___Y_1;
		float L_28 = V_2;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_27, L_28)), (2.0f)));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_29 = ___normal1;
		float L_30 = L_29.___Z_2;
		float L_31 = V_2;
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_30, L_31)), (2.0f)));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_32 = ___vector0;
		float L_33 = L_32.___X_0;
		float L_34 = V_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_35 = ___vector0;
		float L_36 = L_35.___Y_1;
		float L_37 = V_4;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_38 = ___vector0;
		float L_39 = L_38.___Z_2;
		float L_40 = V_5;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_41), ((float)il2cpp_codegen_subtract(L_33, L_34)), ((float)il2cpp_codegen_subtract(L_36, L_37)), ((float)il2cpp_codegen_subtract(L_39, L_40)), /*hidden argument*/NULL);
		return L_41;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Clamp(System.Numerics.Vector3,System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Clamp_m0574F6B29CF4C185FB33F7C5D1507F6757A77A4D (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___min1, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___max2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B15_0 = 0.0f;
	float G_B18_0 = 0.0f;
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		V_0 = L_1;
		float L_2 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3 = ___max2;
		float L_4 = L_3.___X_0;
		if ((((float)L_2) > ((float)L_4)))
		{
			goto IL_0013;
		}
	}
	{
		float L_5 = V_0;
		G_B3_0 = L_5;
		goto IL_0019;
	}

IL_0013:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___max2;
		float L_7 = L_6.___X_0;
		G_B3_0 = L_7;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		float L_8 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9 = ___min1;
		float L_10 = L_9.___X_0;
		if ((((float)L_8) < ((float)L_10)))
		{
			goto IL_0026;
		}
	}
	{
		float L_11 = V_0;
		G_B6_0 = L_11;
		goto IL_002c;
	}

IL_0026:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12 = ___min1;
		float L_13 = L_12.___X_0;
		G_B6_0 = L_13;
	}

IL_002c:
	{
		V_0 = G_B6_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_14 = ___value10;
		float L_15 = L_14.___Y_1;
		V_1 = L_15;
		float L_16 = V_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_17 = ___max2;
		float L_18 = L_17.___Y_1;
		if ((((float)L_16) > ((float)L_18)))
		{
			goto IL_0040;
		}
	}
	{
		float L_19 = V_1;
		G_B9_0 = L_19;
		goto IL_0046;
	}

IL_0040:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_20 = ___max2;
		float L_21 = L_20.___Y_1;
		G_B9_0 = L_21;
	}

IL_0046:
	{
		V_1 = G_B9_0;
		float L_22 = V_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_23 = ___min1;
		float L_24 = L_23.___Y_1;
		if ((((float)L_22) < ((float)L_24)))
		{
			goto IL_0053;
		}
	}
	{
		float L_25 = V_1;
		G_B12_0 = L_25;
		goto IL_0059;
	}

IL_0053:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_26 = ___min1;
		float L_27 = L_26.___Y_1;
		G_B12_0 = L_27;
	}

IL_0059:
	{
		V_1 = G_B12_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_28 = ___value10;
		float L_29 = L_28.___Z_2;
		V_2 = L_29;
		float L_30 = V_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_31 = ___max2;
		float L_32 = L_31.___Z_2;
		if ((((float)L_30) > ((float)L_32)))
		{
			goto IL_006d;
		}
	}
	{
		float L_33 = V_2;
		G_B15_0 = L_33;
		goto IL_0073;
	}

IL_006d:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_34 = ___max2;
		float L_35 = L_34.___Z_2;
		G_B15_0 = L_35;
	}

IL_0073:
	{
		V_2 = G_B15_0;
		float L_36 = V_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_37 = ___min1;
		float L_38 = L_37.___Z_2;
		if ((((float)L_36) < ((float)L_38)))
		{
			goto IL_0080;
		}
	}
	{
		float L_39 = V_2;
		G_B18_0 = L_39;
		goto IL_0086;
	}

IL_0080:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_40 = ___min1;
		float L_41 = L_40.___Z_2;
		G_B18_0 = L_41;
	}

IL_0086:
	{
		V_2 = G_B18_0;
		float L_42 = V_0;
		float L_43 = V_1;
		float L_44 = V_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_45), L_42, L_43, L_44, /*hidden argument*/NULL);
		return L_45;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Lerp(System.Numerics.Vector3,System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Lerp_mBBE3F1E5D24C9930C649D4B3991D9BE97855D469 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value21, float ___amount2, const RuntimeMethod* method) 
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___value10;
		float L_2 = ___amount2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3;
		L_3 = Vector3_op_Multiply_m85DCD131468B1E2CDECCC420A87367ADA67A0ED9_inline(L_1, ((float)il2cpp_codegen_subtract((1.0f), L_2)), NULL);
		V_0 = L_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___value21;
		float L_5 = ___amount2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6;
		L_6 = Vector3_op_Multiply_m85DCD131468B1E2CDECCC420A87367ADA67A0ED9_inline(L_4, L_5, NULL);
		V_1 = L_6;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_7 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = V_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9;
		L_9 = Vector3_op_Addition_m489A8D4D4534E48BFFC2610DEAB9E356F78E9A20_inline(L_7, L_8, NULL);
		return L_9;
	}

IL_0025:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___value10;
		float L_11 = L_10.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12 = ___value21;
		float L_13 = L_12.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_14 = ___value10;
		float L_15 = L_14.___X_0;
		float L_16 = ___amount2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_17 = ___value10;
		float L_18 = L_17.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_19 = ___value21;
		float L_20 = L_19.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_21 = ___value10;
		float L_22 = L_21.___Y_1;
		float L_23 = ___amount2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_24 = ___value10;
		float L_25 = L_24.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_26 = ___value21;
		float L_27 = L_26.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_28 = ___value10;
		float L_29 = L_28.___Z_2;
		float L_30 = ___amount2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_31), ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_13, L_15)), L_16)))), ((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_20, L_22)), L_23)))), ((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_27, L_29)), L_30)))), /*hidden argument*/NULL);
		return L_31;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Transform(System.Numerics.Vector3,System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Transform_m0C8A89279727F174D282885B105AA1BBC53CD49C (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___position0, Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 ___matrix1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___position0;
		float L_1 = L_0.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_2 = ___matrix1;
		float L_3 = L_2.___M11_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___position0;
		float L_5 = L_4.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_6 = ___matrix1;
		float L_7 = L_6.___M21_4;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___position0;
		float L_9 = L_8.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_10 = ___matrix1;
		float L_11 = L_10.___M31_8;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_12 = ___matrix1;
		float L_13 = L_12.___M41_12;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_14 = ___position0;
		float L_15 = L_14.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_16 = ___matrix1;
		float L_17 = L_16.___M12_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_18 = ___position0;
		float L_19 = L_18.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_20 = ___matrix1;
		float L_21 = L_20.___M22_5;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_22 = ___position0;
		float L_23 = L_22.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_24 = ___matrix1;
		float L_25 = L_24.___M32_9;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_26 = ___matrix1;
		float L_27 = L_26.___M42_13;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_28 = ___position0;
		float L_29 = L_28.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_30 = ___matrix1;
		float L_31 = L_30.___M13_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_32 = ___position0;
		float L_33 = L_32.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_34 = ___matrix1;
		float L_35 = L_34.___M23_6;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_36 = ___position0;
		float L_37 = L_36.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_38 = ___matrix1;
		float L_39 = L_38.___M33_10;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_40 = ___matrix1;
		float L_41 = L_40.___M43_14;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_42), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), L_13)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_15, L_17)), ((float)il2cpp_codegen_multiply(L_19, L_21)))), ((float)il2cpp_codegen_multiply(L_23, L_25)))), L_27)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_29, L_31)), ((float)il2cpp_codegen_multiply(L_33, L_35)))), ((float)il2cpp_codegen_multiply(L_37, L_39)))), L_41)), /*hidden argument*/NULL);
		return L_42;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::TransformNormal(System.Numerics.Vector3,System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_TransformNormal_mA92E2A2FB62B05C923831345780E938EFCD298F4 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___normal0, Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 ___matrix1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___normal0;
		float L_1 = L_0.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_2 = ___matrix1;
		float L_3 = L_2.___M11_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___normal0;
		float L_5 = L_4.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_6 = ___matrix1;
		float L_7 = L_6.___M21_4;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___normal0;
		float L_9 = L_8.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_10 = ___matrix1;
		float L_11 = L_10.___M31_8;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12 = ___normal0;
		float L_13 = L_12.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_14 = ___matrix1;
		float L_15 = L_14.___M12_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_16 = ___normal0;
		float L_17 = L_16.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_18 = ___matrix1;
		float L_19 = L_18.___M22_5;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_20 = ___normal0;
		float L_21 = L_20.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_22 = ___matrix1;
		float L_23 = L_22.___M32_9;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_24 = ___normal0;
		float L_25 = L_24.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_26 = ___matrix1;
		float L_27 = L_26.___M13_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_28 = ___normal0;
		float L_29 = L_28.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_30 = ___matrix1;
		float L_31 = L_30.___M23_6;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_32 = ___normal0;
		float L_33 = L_32.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_34 = ___matrix1;
		float L_35 = L_34.___M33_10;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_36), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_15)), ((float)il2cpp_codegen_multiply(L_17, L_19)))), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_25, L_27)), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_multiply(L_33, L_35)))), /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Transform(System.Numerics.Vector3,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Transform_m89F2FF487CBD874C69352B59EE15BC4A1297DB4D (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___rotation1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___rotation1;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___rotation1;
		float L_3 = L_2.___X_0;
		V_0 = ((float)il2cpp_codegen_add(L_1, L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___rotation1;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___rotation1;
		float L_7 = L_6.___Y_1;
		V_1 = ((float)il2cpp_codegen_add(L_5, L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___rotation1;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___rotation1;
		float L_11 = L_10.___Z_2;
		V_2 = ((float)il2cpp_codegen_add(L_9, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___rotation1;
		float L_13 = L_12.___W_3;
		float L_14 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_15 = ___rotation1;
		float L_16 = L_15.___W_3;
		float L_17 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_18 = ___rotation1;
		float L_19 = L_18.___W_3;
		float L_20 = V_2;
		V_5 = ((float)il2cpp_codegen_multiply(L_19, L_20));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_21 = ___rotation1;
		float L_22 = L_21.___X_0;
		float L_23 = V_0;
		V_6 = ((float)il2cpp_codegen_multiply(L_22, L_23));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_24 = ___rotation1;
		float L_25 = L_24.___X_0;
		float L_26 = V_1;
		V_7 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_27 = ___rotation1;
		float L_28 = L_27.___X_0;
		float L_29 = V_2;
		V_8 = ((float)il2cpp_codegen_multiply(L_28, L_29));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_30 = ___rotation1;
		float L_31 = L_30.___Y_1;
		float L_32 = V_1;
		V_9 = ((float)il2cpp_codegen_multiply(L_31, L_32));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_33 = ___rotation1;
		float L_34 = L_33.___Y_1;
		float L_35 = V_2;
		V_10 = ((float)il2cpp_codegen_multiply(L_34, L_35));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_36 = ___rotation1;
		float L_37 = L_36.___Z_2;
		float L_38 = V_2;
		V_11 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_39 = ___value0;
		float L_40 = L_39.___X_0;
		float L_41 = V_9;
		float L_42 = V_11;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_43 = ___value0;
		float L_44 = L_43.___Y_1;
		float L_45 = V_7;
		float L_46 = V_5;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_47 = ___value0;
		float L_48 = L_47.___Z_2;
		float L_49 = V_8;
		float L_50 = V_4;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_51 = ___value0;
		float L_52 = L_51.___X_0;
		float L_53 = V_7;
		float L_54 = V_5;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_55 = ___value0;
		float L_56 = L_55.___Y_1;
		float L_57 = V_6;
		float L_58 = V_11;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_59 = ___value0;
		float L_60 = L_59.___Z_2;
		float L_61 = V_10;
		float L_62 = V_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_63 = ___value0;
		float L_64 = L_63.___X_0;
		float L_65 = V_8;
		float L_66 = V_4;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_67 = ___value0;
		float L_68 = L_67.___Y_1;
		float L_69 = V_10;
		float L_70 = V_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_71 = ___value0;
		float L_72 = L_71.___Z_2;
		float L_73 = V_6;
		float L_74 = V_9;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_75), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_40, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_41)), L_42)))), ((float)il2cpp_codegen_multiply(L_44, ((float)il2cpp_codegen_subtract(L_45, L_46)))))), ((float)il2cpp_codegen_multiply(L_48, ((float)il2cpp_codegen_add(L_49, L_50)))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_52, ((float)il2cpp_codegen_add(L_53, L_54)))), ((float)il2cpp_codegen_multiply(L_56, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_57)), L_58)))))), ((float)il2cpp_codegen_multiply(L_60, ((float)il2cpp_codegen_subtract(L_61, L_62)))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_64, ((float)il2cpp_codegen_subtract(L_65, L_66)))), ((float)il2cpp_codegen_multiply(L_68, ((float)il2cpp_codegen_add(L_69, L_70)))))), ((float)il2cpp_codegen_multiply(L_72, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_73)), L_74)))))), /*hidden argument*/NULL);
		return L_75;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Add(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Add_m25DED224ECAB7AA9D4D9B05516FB9F11FAC0D44D (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___right1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2;
		L_2 = Vector3_op_Addition_m489A8D4D4534E48BFFC2610DEAB9E356F78E9A20_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Subtract(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Subtract_mC236EB6CFBD7B48C2A43CDFCD8F70C4CFE31C85E (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___right1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2;
		L_2 = Vector3_op_Subtraction_m5D2D4FFD4BE9EA857665C94C207D745C164BD717_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Multiply(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Multiply_m1C61CEDE7FA549186BFBA1A802168B5C455FC36D (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___right1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2;
		L_2 = Vector3_op_Multiply_m8EEE05F1692F7E5F16F40ACBCED3C975AD8E559F_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Multiply(System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Multiply_mA5E54A5ADE156EE146F1AB148CC64795436976EC (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, float ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = ___right1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2;
		L_2 = Vector3_op_Multiply_m85DCD131468B1E2CDECCC420A87367ADA67A0ED9_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Multiply(System.Single,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Multiply_mD5A961D7135BC044D8D345732592A1CBAC2FAC69 (float ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___left0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___right1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2;
		L_2 = Vector3_op_Multiply_m13AA8243EC77FF9DCC3E9B07ECAE09E0BB3AD8FE_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Divide(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Divide_mCDC1D5F3517A3E27D1EF10E5B396E68E9FE47B65 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___right1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2;
		L_2 = Vector3_op_Division_mAED4236D3C3497699344F7795D6B7F93F5CC278D_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Divide(System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Divide_m843D2B42CB84D73AB143384397E1A9B2AD55DC9A (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, float ___divisor1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = ___divisor1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2;
		L_2 = Vector3_op_Division_m51E43B54188B9A27492E7ECBEE87DEF65580C1B5_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Negate(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Negate_m7E789DF1E30B46E7EBF6E7387E4B1916873549AA (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1;
		L_1 = Vector3_op_UnaryNegation_m6D4876FBF052E59B725FDAB146ED2DA5650F97F7_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Numerics.Vector3::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m9475463CCA9CA06A42AA0B41F7BCFD106639581B (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		float L_1 = ___value0;
		float L_2 = ___value0;
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3__ctor_m9475463CCA9CA06A42AA0B41F7BCFD106639581B_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	Vector3__ctor_m9475463CCA9CA06A42AA0B41F7BCFD106639581B(_thisAdjusted, ___value0, method);
}
// System.Void System.Numerics.Vector3::.ctor(System.Numerics.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_mF2B17A87ED35989966F690BD7F5764E576DF6EE8 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, float ___z1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___value0;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___value0;
		float L_3 = L_2.___Y_1;
		float L_4 = ___z1;
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA(__this, L_1, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3__ctor_mF2B17A87ED35989966F690BD7F5764E576DF6EE8_AdjustorThunk (RuntimeObject* __this, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, float ___z1, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	Vector3__ctor_mF2B17A87ED35989966F690BD7F5764E576DF6EE8(_thisAdjusted, ___value0, ___z1, method);
}
// System.Void System.Numerics.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___X_0 = L_0;
		float L_1 = ___y1;
		__this->___Y_1 = L_1;
		float L_2 = ___z2;
		__this->___Z_2 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA_AdjustorThunk (RuntimeObject* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Void System.Numerics.Vector3::CopyTo(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_CopyTo_mA16E6E2DE0BDA44E513DE61574DA11FF283AC419 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_inline(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_CopyTo_mA16E6E2DE0BDA44E513DE61574DA11FF283AC419_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	Vector3_CopyTo_mA16E6E2DE0BDA44E513DE61574DA11FF283AC419_inline(_thisAdjusted, ___array0, method);
}
// System.Void System.Numerics.Vector3::CopyTo(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1;
		L_1 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_NullArgumentNullRef_mA3072D049995FC076C81366072003B82FFD7AC5B(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_3 = ___index1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = ___index1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___array0;
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_0018:
	{
		String_t* L_6;
		L_6 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ArgumentOutOfRangeException_m0CC0F173F70B02AA1F5D2DD69D2DC9924D91803A(NULL);
		int32_t L_7 = ___index1;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_Format_m9BBA345A344FA6EA2067151B289DD08CF8392188(L_6, L_9, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_RuntimeMethod_var)));
	}

IL_0033:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___index1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))) >= ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_14;
		L_14 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ElementsInSourceIsGreaterThanDestination_m6532FB7E4299FBA5C367D126B292F3706DE582F9(NULL);
		int32_t L_15 = ___index1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_Format_m9BBA345A344FA6EA2067151B289DD08CF8392188(L_14, L_17, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_RuntimeMethod_var)));
	}

IL_0051:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = ___array0;
		int32_t L_21 = ___index1;
		float L_22 = __this->___X_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (float)L_22);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___array0;
		int32_t L_24 = ___index1;
		float L_25 = __this->___Y_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 1))), (float)L_25);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = ___array0;
		int32_t L_27 = ___index1;
		float L_28 = __this->___Z_2;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 2))), (float)L_28);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_inline(_thisAdjusted, ___array0, ___index1, method);
}
// System.Boolean System.Numerics.Vector3::Equals(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_mFDFB6E4AC826DFE3EDADB911D23B16DBEF175ABA (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___other0, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___other0;
		float L_2 = L_1.___X_0;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		float L_3 = __this->___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___other0;
		float L_5 = L_4.___Y_1;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		float L_6 = __this->___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_7 = ___other0;
		float L_8 = L_7.___Z_2;
		return (bool)((((float)L_6) == ((float)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Vector3_Equals_mFDFB6E4AC826DFE3EDADB911D23B16DBEF175ABA_AdjustorThunk (RuntimeObject* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___other0, const RuntimeMethod* method)
{
	Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector3_Equals_mFDFB6E4AC826DFE3EDADB911D23B16DBEF175ABA(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector3::Dot(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector21, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___vector10;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___vector21;
		float L_3 = L_2.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___vector10;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___vector21;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___vector10;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___vector21;
		float L_11 = L_10.___Z_2;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Min(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Min_m52306688E53FDD26129C335A87FBA04ED09AE5A9 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value21, const RuntimeMethod* method) 
{
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B9_2 = 0.0f;
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___value21;
		float L_3 = L_2.___X_0;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___value21;
		float L_5 = L_4.___X_0;
		G_B3_0 = L_5;
		goto IL_001c;
	}

IL_0016:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___value10;
		float L_7 = L_6.___X_0;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___value10;
		float L_9 = L_8.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___value21;
		float L_11 = L_10.___Y_1;
		G_B4_0 = G_B3_0;
		if ((((float)L_9) < ((float)L_11)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12 = ___value21;
		float L_13 = L_12.___Y_1;
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0032:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_14 = ___value10;
		float L_15 = L_14.___Y_1;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_16 = ___value10;
		float L_17 = L_16.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_18 = ___value21;
		float L_19 = L_18.___Z_2;
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		if ((((float)L_17) < ((float)L_19)))
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			goto IL_004e;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_20 = ___value21;
		float L_21 = L_20.___Z_2;
		G_B9_0 = L_21;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0054;
	}

IL_004e:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_22 = ___value10;
		float L_23 = L_22.___Z_2;
		G_B9_0 = L_23;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0054:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_24), G_B9_2, G_B9_1, G_B9_0, /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Max(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Max_m2ED4A88D103D786FDA493811B3A17EEA700076C8 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value21, const RuntimeMethod* method) 
{
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B9_2 = 0.0f;
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___value21;
		float L_3 = L_2.___X_0;
		if ((((float)L_1) > ((float)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___value21;
		float L_5 = L_4.___X_0;
		G_B3_0 = L_5;
		goto IL_001c;
	}

IL_0016:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___value10;
		float L_7 = L_6.___X_0;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___value10;
		float L_9 = L_8.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___value21;
		float L_11 = L_10.___Y_1;
		G_B4_0 = G_B3_0;
		if ((((float)L_9) > ((float)L_11)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12 = ___value21;
		float L_13 = L_12.___Y_1;
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0032:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_14 = ___value10;
		float L_15 = L_14.___Y_1;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_16 = ___value10;
		float L_17 = L_16.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_18 = ___value21;
		float L_19 = L_18.___Z_2;
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		if ((((float)L_17) > ((float)L_19)))
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			goto IL_004e;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_20 = ___value21;
		float L_21 = L_20.___Z_2;
		G_B9_0 = L_21;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0054;
	}

IL_004e:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_22 = ___value10;
		float L_23 = L_22.___Z_2;
		G_B9_0 = L_23;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0054:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_24), G_B9_2, G_B9_1, G_B9_0, /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::Abs(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Abs_mDB572B4C19510174C66103AD4663A6508171F23C (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___value0;
		float L_1 = L_0.___X_0;
		float L_2;
		L_2 = fabsf(L_1);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3 = ___value0;
		float L_4 = L_3.___Y_1;
		float L_5;
		L_5 = fabsf(L_4);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___value0;
		float L_7 = L_6.___Z_2;
		float L_8;
		L_8 = fabsf(L_7);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::SquareRoot(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_SquareRoot_m92C2B8B29CEF33933B838BB7929D912D8C716F27 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___value0;
		float L_1 = L_0.___X_0;
		float L_2;
		L_2 = sqrtf(L_1);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3 = ___value0;
		float L_4 = L_3.___Y_1;
		float L_5;
		L_5 = sqrtf(L_4);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___value0;
		float L_7 = L_6.___Z_2;
		float L_8;
		L_8 = sqrtf(L_7);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::op_Addition(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Addition_m489A8D4D4534E48BFFC2610DEAB9E356F78E9A20 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::op_Subtraction(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Subtraction_m5D2D4FFD4BE9EA857665C94C207D745C164BD717 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::op_Multiply(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Multiply_m8EEE05F1692F7E5F16F40ACBCED3C975AD8E559F (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::op_Multiply(System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Multiply_m85DCD131468B1E2CDECCC420A87367ADA67A0ED9 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, float ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = ___right1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m9475463CCA9CA06A42AA0B41F7BCFD106639581B((&L_2), L_1, /*hidden argument*/NULL);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3;
		L_3 = Vector3_op_Multiply_m8EEE05F1692F7E5F16F40ACBCED3C975AD8E559F_inline(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::op_Multiply(System.Single,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Multiply_m13AA8243EC77FF9DCC3E9B07ECAE09E0BB3AD8FE (float ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___left0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m9475463CCA9CA06A42AA0B41F7BCFD106639581B((&L_1), L_0, /*hidden argument*/NULL);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3;
		L_3 = Vector3_op_Multiply_m8EEE05F1692F7E5F16F40ACBCED3C975AD8E559F_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::op_Division(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Division_mAED4236D3C3497699344F7795D6B7F93F5CC278D (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_12), ((float)(L_1/L_3)), ((float)(L_5/L_7)), ((float)(L_9/L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::op_Division(System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Division_m51E43B54188B9A27492E7ECBEE87DEF65580C1B5 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value10, float ___value21, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___value21;
		V_0 = ((float)((1.0f)/L_0));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___value10;
		float L_2 = L_1.___X_0;
		float L_3 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		float L_6 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_7 = ___value10;
		float L_8 = L_7.___Z_2;
		float L_9 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_10), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_9)), /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Numerics.Vector3 System.Numerics.Vector3::op_UnaryNegation(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_UnaryNegation_m6D4876FBF052E59B725FDAB146ED2DA5650F97F7 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0;
		L_0 = Vector3_get_Zero_mC55B2179B6D1A9251EB3B41384A2EA418EFD6B0A(NULL);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2;
		L_2 = Vector3_op_Subtraction_m5D2D4FFD4BE9EA857665C94C207D745C164BD717_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean System.Numerics.Vector3::op_Equality(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m4B026FA30C193092F3D438804BB71790C63A91D0 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_002b;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002b;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		return (bool)((((float)L_9) == ((float)L_11))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean System.Numerics.Vector3::op_Inequality(System.Numerics.Vector3,System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m4B9335E6EC8DE6FF26D8C220B9AB118F6F68A576 (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_002e;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		return (bool)((((int32_t)((((float)L_9) == ((float)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)1;
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
// System.Numerics.Vector4 System.Numerics.Vector4::get_Zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_get_Zero_mB81FF2CB69C92EF6A4F4CE80EA1080BD933088D0 (const RuntimeMethod* method) 
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9));
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = V_0;
		return L_0;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_get_One_mC3DE16A22D357370493BC6AE2DBAE5F08E718569 (const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::get_UnitX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_get_UnitX_m12BF18A683FD3EC40C51FCDD1C079D55EE5401B0 (const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_0), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::get_UnitY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_get_UnitY_m80B0C64FF13CAE91006347A4BCCE32E7E5965EC9 (const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_0), (0.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::get_UnitZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_get_UnitZ_m497A0AB77A944D3774EB3FDBEE38B6160A865CB1 (const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_0), (0.0f), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::get_UnitW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_get_UnitW_m9E9F579D830124EB366FCA7DF623EC77D96C6597 (const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Numerics.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m09893D1770024B47DFEC5C08F373D0993CBB6A09 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___X_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float* L_3 = (&__this->___Y_1);
		int32_t L_4;
		L_4 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = HashHelpers_Combine_mF5306747D4F42347088DDDB2CB95525BBB70ED26(L_2, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		float* L_7 = (&__this->___Z_2);
		int32_t L_8;
		L_8 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_7, NULL);
		int32_t L_9;
		L_9 = HashHelpers_Combine_mF5306747D4F42347088DDDB2CB95525BBB70ED26(L_6, L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		float* L_11 = (&__this->___W_3);
		int32_t L_12;
		L_12 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_11, NULL);
		int32_t L_13;
		L_13 = HashHelpers_Combine_mF5306747D4F42347088DDDB2CB95525BBB70ED26(L_10, L_12, NULL);
		V_0 = L_13;
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t Vector4_GetHashCode_m09893D1770024B47DFEC5C08F373D0993CBB6A09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector4_GetHashCode_m09893D1770024B47DFEC5C08F373D0993CBB6A09(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Numerics.Vector4::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_mF7D2E422209A01B1F1EE782EE1CEBAE7B3B72E51 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Vector4_Equals_m48D255BD8A67CA811BA969873186A001D7BC02CE(__this, ((*(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)((Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)UnBox(L_1, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector4_Equals_mF7D2E422209A01B1F1EE782EE1CEBAE7B3B72E51_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector4_Equals_mF7D2E422209A01B1F1EE782EE1CEBAE7B3B72E51_inline(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.String System.Numerics.Vector4::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m0B52BE21D477CB2A1119F83C0B9DBC02C5922E12 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Vector4_ToString_m765B7CB17939FF5EB09676BD02B58DC2F1B32BA0(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector4_ToString_m0B52BE21D477CB2A1119F83C0B9DBC02C5922E12_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector4_ToString_m0B52BE21D477CB2A1119F83C0B9DBC02C5922E12(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Numerics.Vector4::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_mC2008038D358868BA6DB62B9646C44FB010D40AC (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_2;
		L_2 = Vector4_ToString_m765B7CB17939FF5EB09676BD02B58DC2F1B32BA0(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Vector4_ToString_mC2008038D358868BA6DB62B9646C44FB010D40AC_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector4_ToString_mC2008038D358868BA6DB62B9646C44FB010D40AC(_thisAdjusted, ___format0, method);
	return _returnValue;
}
// System.String System.Numerics.Vector4::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m765B7CB17939FF5EB09676BD02B58DC2F1B32BA0 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___formatProvider1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)60), NULL);
		StringBuilder_t* L_6 = V_0;
		float* L_7 = (&__this->___X_0);
		String_t* L_8 = ___format0;
		RuntimeObject* L_9 = ___formatProvider1;
		String_t* L_10;
		L_10 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_7, L_8, L_9, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_10, NULL);
		StringBuilder_t* L_12 = V_0;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)32), NULL);
		StringBuilder_t* L_17 = V_0;
		float* L_18 = (&__this->___Y_1);
		String_t* L_19 = ___format0;
		RuntimeObject* L_20 = ___formatProvider1;
		String_t* L_21;
		L_21 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_18, L_19, L_20, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_21, NULL);
		StringBuilder_t* L_23 = V_0;
		String_t* L_24 = V_1;
		NullCheck(L_23);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_24, NULL);
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_26, ((int32_t)32), NULL);
		StringBuilder_t* L_28 = V_0;
		float* L_29 = (&__this->___Z_2);
		String_t* L_30 = ___format0;
		RuntimeObject* L_31 = ___formatProvider1;
		String_t* L_32;
		L_32 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_29, L_30, L_31, NULL);
		NullCheck(L_28);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, L_32, NULL);
		StringBuilder_t* L_34 = V_0;
		String_t* L_35 = V_1;
		NullCheck(L_34);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_35, NULL);
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_37, ((int32_t)32), NULL);
		StringBuilder_t* L_39 = V_0;
		float* L_40 = (&__this->___W_3);
		String_t* L_41 = ___format0;
		RuntimeObject* L_42 = ___formatProvider1;
		String_t* L_43;
		L_43 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_40, L_41, L_42, NULL);
		NullCheck(L_39);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, L_43, NULL);
		StringBuilder_t* L_45 = V_0;
		NullCheck(L_45);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_45, ((int32_t)62), NULL);
		StringBuilder_t* L_47 = V_0;
		NullCheck(L_47);
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
		return L_48;
	}
}
IL2CPP_EXTERN_C  String_t* Vector4_ToString_m765B7CB17939FF5EB09676BD02B58DC2F1B32BA0_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector4_ToString_m765B7CB17939FF5EB09676BD02B58DC2F1B32BA0(_thisAdjusted, ___format0, ___formatProvider1, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector4::Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_Length_m93E4C625DD055A8665C1D1037F727C2452C885FE (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = (*(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)__this);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = (*(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)__this);
		float L_3;
		L_3 = Vector4_Dot_m2802186971C959363FC1D5F3CD4220D9D64550A9_inline(L_1, L_2, NULL);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5;
		L_5 = sqrtf(L_4);
		return L_5;
	}

IL_0020:
	{
		float L_6 = __this->___X_0;
		float L_7 = __this->___X_0;
		float L_8 = __this->___Y_1;
		float L_9 = __this->___Y_1;
		float L_10 = __this->___Z_2;
		float L_11 = __this->___Z_2;
		float L_12 = __this->___W_3;
		float L_13 = __this->___W_3;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_7)), ((float)il2cpp_codegen_multiply(L_8, L_9)))), ((float)il2cpp_codegen_multiply(L_10, L_11)))), ((float)il2cpp_codegen_multiply(L_12, L_13))));
		float L_14 = V_1;
		float L_15;
		L_15 = sqrtf(L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C  float Vector4_Length_m93E4C625DD055A8665C1D1037F727C2452C885FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	float _returnValue;
	_returnValue = Vector4_Length_m93E4C625DD055A8665C1D1037F727C2452C885FE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector4::LengthSquared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_LengthSquared_m32E38BAF00F1390A52904324F1C13A12271B87C4 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = (*(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)__this);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = (*(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)__this);
		float L_3;
		L_3 = Vector4_Dot_m2802186971C959363FC1D5F3CD4220D9D64550A9_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		float L_4 = __this->___X_0;
		float L_5 = __this->___X_0;
		float L_6 = __this->___Y_1;
		float L_7 = __this->___Y_1;
		float L_8 = __this->___Z_2;
		float L_9 = __this->___Z_2;
		float L_10 = __this->___W_3;
		float L_11 = __this->___W_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_7)))), ((float)il2cpp_codegen_multiply(L_8, L_9)))), ((float)il2cpp_codegen_multiply(L_10, L_11))));
	}
}
IL2CPP_EXTERN_C  float Vector4_LengthSquared_m32E38BAF00F1390A52904324F1C13A12271B87C4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	float _returnValue;
	_returnValue = Vector4_LengthSquared_m32E38BAF00F1390A52904324F1C13A12271B87C4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector4::Distance(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_Distance_mC6560178AB71E08AE889382C679D76FF012E4F92 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value10, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value21, const RuntimeMethod* method) 
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___value10;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___value21;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_3;
		L_3 = Vector4_op_Subtraction_m15527DD71F5BA01CE0B948FF0BD7A00B0B935743_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_5 = V_0;
		float L_6;
		L_6 = Vector4_Dot_m2802186971C959363FC1D5F3CD4220D9D64550A9_inline(L_4, L_5, NULL);
		V_1 = L_6;
		float L_7 = V_1;
		float L_8;
		L_8 = sqrtf(L_7);
		return L_8;
	}

IL_001e:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_9 = ___value10;
		float L_10 = L_9.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_11 = ___value21;
		float L_12 = L_11.___X_0;
		V_2 = ((float)il2cpp_codegen_subtract(L_10, L_12));
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_13 = ___value10;
		float L_14 = L_13.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_15 = ___value21;
		float L_16 = L_15.___Y_1;
		V_3 = ((float)il2cpp_codegen_subtract(L_14, L_16));
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_17 = ___value10;
		float L_18 = L_17.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_19 = ___value21;
		float L_20 = L_19.___Z_2;
		V_4 = ((float)il2cpp_codegen_subtract(L_18, L_20));
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_21 = ___value10;
		float L_22 = L_21.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_23 = ___value21;
		float L_24 = L_23.___W_3;
		V_5 = ((float)il2cpp_codegen_subtract(L_22, L_24));
		float L_25 = V_2;
		float L_26 = V_2;
		float L_27 = V_3;
		float L_28 = V_3;
		float L_29 = V_4;
		float L_30 = V_4;
		float L_31 = V_5;
		float L_32 = V_5;
		V_6 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_25, L_26)), ((float)il2cpp_codegen_multiply(L_27, L_28)))), ((float)il2cpp_codegen_multiply(L_29, L_30)))), ((float)il2cpp_codegen_multiply(L_31, L_32))));
		float L_33 = V_6;
		float L_34;
		L_34 = sqrtf(L_33);
		return L_34;
	}
}
// System.Single System.Numerics.Vector4::DistanceSquared(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_DistanceSquared_m5EFE4E827CF195E405BD2C15D6DC0AE9D4C7EDDC (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value10, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value21, const RuntimeMethod* method) 
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___value10;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___value21;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_3;
		L_3 = Vector4_op_Subtraction_m15527DD71F5BA01CE0B948FF0BD7A00B0B935743_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_5 = V_0;
		float L_6;
		L_6 = Vector4_Dot_m2802186971C959363FC1D5F3CD4220D9D64550A9_inline(L_4, L_5, NULL);
		return L_6;
	}

IL_0017:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_7 = ___value10;
		float L_8 = L_7.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_9 = ___value21;
		float L_10 = L_9.___X_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_8, L_10));
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_11 = ___value10;
		float L_12 = L_11.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_13 = ___value21;
		float L_14 = L_13.___Y_1;
		V_2 = ((float)il2cpp_codegen_subtract(L_12, L_14));
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_15 = ___value10;
		float L_16 = L_15.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_17 = ___value21;
		float L_18 = L_17.___Z_2;
		V_3 = ((float)il2cpp_codegen_subtract(L_16, L_18));
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_19 = ___value10;
		float L_20 = L_19.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_21 = ___value21;
		float L_22 = L_21.___W_3;
		V_4 = ((float)il2cpp_codegen_subtract(L_20, L_22));
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25 = V_2;
		float L_26 = V_2;
		float L_27 = V_3;
		float L_28 = V_3;
		float L_29 = V_4;
		float L_30 = V_4;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_23, L_24)), ((float)il2cpp_codegen_multiply(L_25, L_26)))), ((float)il2cpp_codegen_multiply(L_27, L_28)))), ((float)il2cpp_codegen_multiply(L_29, L_30))));
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Normalize(System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Normalize_m42E4460382B5851D6A905B782B78DAF9683D7B84 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___vector0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		float L_1;
		L_1 = Vector4_Length_m93E4C625DD055A8665C1D1037F727C2452C885FE_inline((&___vector0), NULL);
		V_0 = L_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___vector0;
		float L_3 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4;
		L_4 = Vector4_op_Division_mBE4D08CB3C79F762575F6105966F730081331E69_inline(L_2, L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_5 = ___vector0;
		float L_6 = L_5.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_7 = ___vector0;
		float L_8 = L_7.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_9 = ___vector0;
		float L_10 = L_9.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_11 = ___vector0;
		float L_12 = L_11.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_13 = ___vector0;
		float L_14 = L_13.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_15 = ___vector0;
		float L_16 = L_15.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_17 = ___vector0;
		float L_18 = L_17.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_19 = ___vector0;
		float L_20 = L_19.___W_3;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_12)))), ((float)il2cpp_codegen_multiply(L_14, L_16)))), ((float)il2cpp_codegen_multiply(L_18, L_20))));
		float L_21 = V_1;
		float L_22;
		L_22 = sqrtf(L_21);
		V_2 = ((float)((1.0f)/L_22));
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_23 = ___vector0;
		float L_24 = L_23.___X_0;
		float L_25 = V_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_26 = ___vector0;
		float L_27 = L_26.___Y_1;
		float L_28 = V_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_29 = ___vector0;
		float L_30 = L_29.___Z_2;
		float L_31 = V_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_32 = ___vector0;
		float L_33 = L_32.___W_3;
		float L_34 = V_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_35), ((float)il2cpp_codegen_multiply(L_24, L_25)), ((float)il2cpp_codegen_multiply(L_27, L_28)), ((float)il2cpp_codegen_multiply(L_30, L_31)), ((float)il2cpp_codegen_multiply(L_33, L_34)), /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Clamp(System.Numerics.Vector4,System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Clamp_mD1DE73D63F343AA5D6F6C552E39F9CA500C51200 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value10, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___min1, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___max2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B15_0 = 0.0f;
	float G_B18_0 = 0.0f;
	float G_B21_0 = 0.0f;
	float G_B24_0 = 0.0f;
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		V_0 = L_1;
		float L_2 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_3 = ___max2;
		float L_4 = L_3.___X_0;
		if ((((float)L_2) > ((float)L_4)))
		{
			goto IL_0013;
		}
	}
	{
		float L_5 = V_0;
		G_B3_0 = L_5;
		goto IL_0019;
	}

IL_0013:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___max2;
		float L_7 = L_6.___X_0;
		G_B3_0 = L_7;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		float L_8 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_9 = ___min1;
		float L_10 = L_9.___X_0;
		if ((((float)L_8) < ((float)L_10)))
		{
			goto IL_0026;
		}
	}
	{
		float L_11 = V_0;
		G_B6_0 = L_11;
		goto IL_002c;
	}

IL_0026:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___min1;
		float L_13 = L_12.___X_0;
		G_B6_0 = L_13;
	}

IL_002c:
	{
		V_0 = G_B6_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___value10;
		float L_15 = L_14.___Y_1;
		V_1 = L_15;
		float L_16 = V_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_17 = ___max2;
		float L_18 = L_17.___Y_1;
		if ((((float)L_16) > ((float)L_18)))
		{
			goto IL_0040;
		}
	}
	{
		float L_19 = V_1;
		G_B9_0 = L_19;
		goto IL_0046;
	}

IL_0040:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_20 = ___max2;
		float L_21 = L_20.___Y_1;
		G_B9_0 = L_21;
	}

IL_0046:
	{
		V_1 = G_B9_0;
		float L_22 = V_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_23 = ___min1;
		float L_24 = L_23.___Y_1;
		if ((((float)L_22) < ((float)L_24)))
		{
			goto IL_0053;
		}
	}
	{
		float L_25 = V_1;
		G_B12_0 = L_25;
		goto IL_0059;
	}

IL_0053:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_26 = ___min1;
		float L_27 = L_26.___Y_1;
		G_B12_0 = L_27;
	}

IL_0059:
	{
		V_1 = G_B12_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_28 = ___value10;
		float L_29 = L_28.___Z_2;
		V_2 = L_29;
		float L_30 = V_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_31 = ___max2;
		float L_32 = L_31.___Z_2;
		if ((((float)L_30) > ((float)L_32)))
		{
			goto IL_006d;
		}
	}
	{
		float L_33 = V_2;
		G_B15_0 = L_33;
		goto IL_0073;
	}

IL_006d:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_34 = ___max2;
		float L_35 = L_34.___Z_2;
		G_B15_0 = L_35;
	}

IL_0073:
	{
		V_2 = G_B15_0;
		float L_36 = V_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_37 = ___min1;
		float L_38 = L_37.___Z_2;
		if ((((float)L_36) < ((float)L_38)))
		{
			goto IL_0080;
		}
	}
	{
		float L_39 = V_2;
		G_B18_0 = L_39;
		goto IL_0086;
	}

IL_0080:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_40 = ___min1;
		float L_41 = L_40.___Z_2;
		G_B18_0 = L_41;
	}

IL_0086:
	{
		V_2 = G_B18_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_42 = ___value10;
		float L_43 = L_42.___W_3;
		V_3 = L_43;
		float L_44 = V_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_45 = ___max2;
		float L_46 = L_45.___W_3;
		if ((((float)L_44) > ((float)L_46)))
		{
			goto IL_009a;
		}
	}
	{
		float L_47 = V_3;
		G_B21_0 = L_47;
		goto IL_00a0;
	}

IL_009a:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_48 = ___max2;
		float L_49 = L_48.___W_3;
		G_B21_0 = L_49;
	}

IL_00a0:
	{
		V_3 = G_B21_0;
		float L_50 = V_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_51 = ___min1;
		float L_52 = L_51.___W_3;
		if ((((float)L_50) < ((float)L_52)))
		{
			goto IL_00ad;
		}
	}
	{
		float L_53 = V_3;
		G_B24_0 = L_53;
		goto IL_00b3;
	}

IL_00ad:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_54 = ___min1;
		float L_55 = L_54.___W_3;
		G_B24_0 = L_55;
	}

IL_00b3:
	{
		V_3 = G_B24_0;
		float L_56 = V_0;
		float L_57 = V_1;
		float L_58 = V_2;
		float L_59 = V_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_60), L_56, L_57, L_58, L_59, /*hidden argument*/NULL);
		return L_60;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Lerp(System.Numerics.Vector4,System.Numerics.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Lerp_m68858F2EE4390BED0CFF20496C0AAB6B542438C2 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value10, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value21, float ___amount2, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___value21;
		float L_3 = L_2.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___value10;
		float L_5 = L_4.___X_0;
		float L_6 = ___amount2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_7 = ___value10;
		float L_8 = L_7.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_9 = ___value21;
		float L_10 = L_9.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_11 = ___value10;
		float L_12 = L_11.___Y_1;
		float L_13 = ___amount2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___value10;
		float L_15 = L_14.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16 = ___value21;
		float L_17 = L_16.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_18 = ___value10;
		float L_19 = L_18.___Z_2;
		float L_20 = ___amount2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_21 = ___value10;
		float L_22 = L_21.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_23 = ___value21;
		float L_24 = L_23.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_25 = ___value10;
		float L_26 = L_25.___W_3;
		float L_27 = ___amount2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_28), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), L_20)))), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_24, L_26)), L_27)))), /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Transform(System.Numerics.Vector2,System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Transform_mAA0CF026EF9F04220E59A1439C67C48304AC351B (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___position0, Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 ___matrix1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___position0;
		float L_1 = L_0.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_2 = ___matrix1;
		float L_3 = L_2.___M11_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___position0;
		float L_5 = L_4.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_6 = ___matrix1;
		float L_7 = L_6.___M21_4;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_8 = ___matrix1;
		float L_9 = L_8.___M41_12;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_10 = ___position0;
		float L_11 = L_10.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_12 = ___matrix1;
		float L_13 = L_12.___M12_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_14 = ___position0;
		float L_15 = L_14.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_16 = ___matrix1;
		float L_17 = L_16.___M22_5;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_18 = ___matrix1;
		float L_19 = L_18.___M42_13;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_20 = ___position0;
		float L_21 = L_20.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_22 = ___matrix1;
		float L_23 = L_22.___M13_2;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_24 = ___position0;
		float L_25 = L_24.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_26 = ___matrix1;
		float L_27 = L_26.___M23_6;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_28 = ___matrix1;
		float L_29 = L_28.___M43_14;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_30 = ___position0;
		float L_31 = L_30.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_32 = ___matrix1;
		float L_33 = L_32.___M14_3;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_34 = ___position0;
		float L_35 = L_34.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_36 = ___matrix1;
		float L_37 = L_36.___M24_7;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_38 = ___matrix1;
		float L_39 = L_38.___M44_15;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_40), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), L_9)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_11, L_13)), ((float)il2cpp_codegen_multiply(L_15, L_17)))), L_19)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_23)), ((float)il2cpp_codegen_multiply(L_25, L_27)))), L_29)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_31, L_33)), ((float)il2cpp_codegen_multiply(L_35, L_37)))), L_39)), /*hidden argument*/NULL);
		return L_40;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Transform(System.Numerics.Vector3,System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Transform_m532B3E23D687F5C3D80D9F0552B3B57088C31DFA (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___position0, Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 ___matrix1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___position0;
		float L_1 = L_0.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_2 = ___matrix1;
		float L_3 = L_2.___M11_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___position0;
		float L_5 = L_4.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_6 = ___matrix1;
		float L_7 = L_6.___M21_4;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___position0;
		float L_9 = L_8.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_10 = ___matrix1;
		float L_11 = L_10.___M31_8;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_12 = ___matrix1;
		float L_13 = L_12.___M41_12;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_14 = ___position0;
		float L_15 = L_14.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_16 = ___matrix1;
		float L_17 = L_16.___M12_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_18 = ___position0;
		float L_19 = L_18.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_20 = ___matrix1;
		float L_21 = L_20.___M22_5;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_22 = ___position0;
		float L_23 = L_22.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_24 = ___matrix1;
		float L_25 = L_24.___M32_9;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_26 = ___matrix1;
		float L_27 = L_26.___M42_13;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_28 = ___position0;
		float L_29 = L_28.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_30 = ___matrix1;
		float L_31 = L_30.___M13_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_32 = ___position0;
		float L_33 = L_32.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_34 = ___matrix1;
		float L_35 = L_34.___M23_6;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_36 = ___position0;
		float L_37 = L_36.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_38 = ___matrix1;
		float L_39 = L_38.___M33_10;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_40 = ___matrix1;
		float L_41 = L_40.___M43_14;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_42 = ___position0;
		float L_43 = L_42.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_44 = ___matrix1;
		float L_45 = L_44.___M14_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_46 = ___position0;
		float L_47 = L_46.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_48 = ___matrix1;
		float L_49 = L_48.___M24_7;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_50 = ___position0;
		float L_51 = L_50.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_52 = ___matrix1;
		float L_53 = L_52.___M34_11;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_54 = ___matrix1;
		float L_55 = L_54.___M44_15;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_56), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), L_13)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_15, L_17)), ((float)il2cpp_codegen_multiply(L_19, L_21)))), ((float)il2cpp_codegen_multiply(L_23, L_25)))), L_27)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_29, L_31)), ((float)il2cpp_codegen_multiply(L_33, L_35)))), ((float)il2cpp_codegen_multiply(L_37, L_39)))), L_41)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_43, L_45)), ((float)il2cpp_codegen_multiply(L_47, L_49)))), ((float)il2cpp_codegen_multiply(L_51, L_53)))), L_55)), /*hidden argument*/NULL);
		return L_56;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Transform(System.Numerics.Vector4,System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Transform_mBA29D12B62EFC0209309A15EE47E5840A4A53221 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___vector0, Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 ___matrix1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___vector0;
		float L_1 = L_0.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_2 = ___matrix1;
		float L_3 = L_2.___M11_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___vector0;
		float L_5 = L_4.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_6 = ___matrix1;
		float L_7 = L_6.___M21_4;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___vector0;
		float L_9 = L_8.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_10 = ___matrix1;
		float L_11 = L_10.___M31_8;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___vector0;
		float L_13 = L_12.___W_3;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_14 = ___matrix1;
		float L_15 = L_14.___M41_12;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16 = ___vector0;
		float L_17 = L_16.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_18 = ___matrix1;
		float L_19 = L_18.___M12_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_20 = ___vector0;
		float L_21 = L_20.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_22 = ___matrix1;
		float L_23 = L_22.___M22_5;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_24 = ___vector0;
		float L_25 = L_24.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_26 = ___matrix1;
		float L_27 = L_26.___M32_9;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_28 = ___vector0;
		float L_29 = L_28.___W_3;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_30 = ___matrix1;
		float L_31 = L_30.___M42_13;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_32 = ___vector0;
		float L_33 = L_32.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_34 = ___matrix1;
		float L_35 = L_34.___M13_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_36 = ___vector0;
		float L_37 = L_36.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_38 = ___matrix1;
		float L_39 = L_38.___M23_6;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_40 = ___vector0;
		float L_41 = L_40.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_42 = ___matrix1;
		float L_43 = L_42.___M33_10;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_44 = ___vector0;
		float L_45 = L_44.___W_3;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_46 = ___matrix1;
		float L_47 = L_46.___M43_14;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_48 = ___vector0;
		float L_49 = L_48.___X_0;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_50 = ___matrix1;
		float L_51 = L_50.___M14_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_52 = ___vector0;
		float L_53 = L_52.___Y_1;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_54 = ___matrix1;
		float L_55 = L_54.___M24_7;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_56 = ___vector0;
		float L_57 = L_56.___Z_2;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_58 = ___matrix1;
		float L_59 = L_58.___M34_11;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_60 = ___vector0;
		float L_61 = L_60.___W_3;
		Matrix4x4_t31C5DD6C7D3B041CA9BF804D7D244953E4E3D081 L_62 = ___matrix1;
		float L_63 = L_62.___M44_15;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_64), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		return L_64;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Transform(System.Numerics.Vector2,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Transform_m7939EB0320CA28E4C82F8AFE188F445D2D73A3D0 (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___rotation1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___rotation1;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___rotation1;
		float L_3 = L_2.___X_0;
		V_0 = ((float)il2cpp_codegen_add(L_1, L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___rotation1;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___rotation1;
		float L_7 = L_6.___Y_1;
		V_1 = ((float)il2cpp_codegen_add(L_5, L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___rotation1;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___rotation1;
		float L_11 = L_10.___Z_2;
		V_2 = ((float)il2cpp_codegen_add(L_9, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___rotation1;
		float L_13 = L_12.___W_3;
		float L_14 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_15 = ___rotation1;
		float L_16 = L_15.___W_3;
		float L_17 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_18 = ___rotation1;
		float L_19 = L_18.___W_3;
		float L_20 = V_2;
		V_5 = ((float)il2cpp_codegen_multiply(L_19, L_20));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_21 = ___rotation1;
		float L_22 = L_21.___X_0;
		float L_23 = V_0;
		V_6 = ((float)il2cpp_codegen_multiply(L_22, L_23));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_24 = ___rotation1;
		float L_25 = L_24.___X_0;
		float L_26 = V_1;
		V_7 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_27 = ___rotation1;
		float L_28 = L_27.___X_0;
		float L_29 = V_2;
		V_8 = ((float)il2cpp_codegen_multiply(L_28, L_29));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_30 = ___rotation1;
		float L_31 = L_30.___Y_1;
		float L_32 = V_1;
		V_9 = ((float)il2cpp_codegen_multiply(L_31, L_32));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_33 = ___rotation1;
		float L_34 = L_33.___Y_1;
		float L_35 = V_2;
		V_10 = ((float)il2cpp_codegen_multiply(L_34, L_35));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_36 = ___rotation1;
		float L_37 = L_36.___Z_2;
		float L_38 = V_2;
		V_11 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_39 = ___value0;
		float L_40 = L_39.___X_0;
		float L_41 = V_9;
		float L_42 = V_11;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_43 = ___value0;
		float L_44 = L_43.___Y_1;
		float L_45 = V_7;
		float L_46 = V_5;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_47 = ___value0;
		float L_48 = L_47.___X_0;
		float L_49 = V_7;
		float L_50 = V_5;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_51 = ___value0;
		float L_52 = L_51.___Y_1;
		float L_53 = V_6;
		float L_54 = V_11;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_55 = ___value0;
		float L_56 = L_55.___X_0;
		float L_57 = V_8;
		float L_58 = V_4;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_59 = ___value0;
		float L_60 = L_59.___Y_1;
		float L_61 = V_10;
		float L_62 = V_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_63), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_40, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_41)), L_42)))), ((float)il2cpp_codegen_multiply(L_44, ((float)il2cpp_codegen_subtract(L_45, L_46)))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_48, ((float)il2cpp_codegen_add(L_49, L_50)))), ((float)il2cpp_codegen_multiply(L_52, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_53)), L_54)))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_56, ((float)il2cpp_codegen_subtract(L_57, L_58)))), ((float)il2cpp_codegen_multiply(L_60, ((float)il2cpp_codegen_add(L_61, L_62)))))), (1.0f), /*hidden argument*/NULL);
		return L_63;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Transform(System.Numerics.Vector3,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Transform_mC04FEC30B58D531745E6CBE5FE48E728DCE03F9F (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___rotation1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___rotation1;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___rotation1;
		float L_3 = L_2.___X_0;
		V_0 = ((float)il2cpp_codegen_add(L_1, L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___rotation1;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___rotation1;
		float L_7 = L_6.___Y_1;
		V_1 = ((float)il2cpp_codegen_add(L_5, L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___rotation1;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___rotation1;
		float L_11 = L_10.___Z_2;
		V_2 = ((float)il2cpp_codegen_add(L_9, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___rotation1;
		float L_13 = L_12.___W_3;
		float L_14 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_15 = ___rotation1;
		float L_16 = L_15.___W_3;
		float L_17 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_18 = ___rotation1;
		float L_19 = L_18.___W_3;
		float L_20 = V_2;
		V_5 = ((float)il2cpp_codegen_multiply(L_19, L_20));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_21 = ___rotation1;
		float L_22 = L_21.___X_0;
		float L_23 = V_0;
		V_6 = ((float)il2cpp_codegen_multiply(L_22, L_23));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_24 = ___rotation1;
		float L_25 = L_24.___X_0;
		float L_26 = V_1;
		V_7 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_27 = ___rotation1;
		float L_28 = L_27.___X_0;
		float L_29 = V_2;
		V_8 = ((float)il2cpp_codegen_multiply(L_28, L_29));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_30 = ___rotation1;
		float L_31 = L_30.___Y_1;
		float L_32 = V_1;
		V_9 = ((float)il2cpp_codegen_multiply(L_31, L_32));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_33 = ___rotation1;
		float L_34 = L_33.___Y_1;
		float L_35 = V_2;
		V_10 = ((float)il2cpp_codegen_multiply(L_34, L_35));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_36 = ___rotation1;
		float L_37 = L_36.___Z_2;
		float L_38 = V_2;
		V_11 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_39 = ___value0;
		float L_40 = L_39.___X_0;
		float L_41 = V_9;
		float L_42 = V_11;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_43 = ___value0;
		float L_44 = L_43.___Y_1;
		float L_45 = V_7;
		float L_46 = V_5;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_47 = ___value0;
		float L_48 = L_47.___Z_2;
		float L_49 = V_8;
		float L_50 = V_4;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_51 = ___value0;
		float L_52 = L_51.___X_0;
		float L_53 = V_7;
		float L_54 = V_5;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_55 = ___value0;
		float L_56 = L_55.___Y_1;
		float L_57 = V_6;
		float L_58 = V_11;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_59 = ___value0;
		float L_60 = L_59.___Z_2;
		float L_61 = V_10;
		float L_62 = V_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_63 = ___value0;
		float L_64 = L_63.___X_0;
		float L_65 = V_8;
		float L_66 = V_4;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_67 = ___value0;
		float L_68 = L_67.___Y_1;
		float L_69 = V_10;
		float L_70 = V_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_71 = ___value0;
		float L_72 = L_71.___Z_2;
		float L_73 = V_6;
		float L_74 = V_9;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_75), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_40, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_41)), L_42)))), ((float)il2cpp_codegen_multiply(L_44, ((float)il2cpp_codegen_subtract(L_45, L_46)))))), ((float)il2cpp_codegen_multiply(L_48, ((float)il2cpp_codegen_add(L_49, L_50)))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_52, ((float)il2cpp_codegen_add(L_53, L_54)))), ((float)il2cpp_codegen_multiply(L_56, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_57)), L_58)))))), ((float)il2cpp_codegen_multiply(L_60, ((float)il2cpp_codegen_subtract(L_61, L_62)))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_64, ((float)il2cpp_codegen_subtract(L_65, L_66)))), ((float)il2cpp_codegen_multiply(L_68, ((float)il2cpp_codegen_add(L_69, L_70)))))), ((float)il2cpp_codegen_multiply(L_72, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_73)), L_74)))))), (1.0f), /*hidden argument*/NULL);
		return L_75;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Transform(System.Numerics.Vector4,System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Transform_m970689A2EEA8D6FAFA588D16203E5FC4A15CDFB7 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value0, Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 ___rotation1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_0 = ___rotation1;
		float L_1 = L_0.___X_0;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_2 = ___rotation1;
		float L_3 = L_2.___X_0;
		V_0 = ((float)il2cpp_codegen_add(L_1, L_3));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_4 = ___rotation1;
		float L_5 = L_4.___Y_1;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_6 = ___rotation1;
		float L_7 = L_6.___Y_1;
		V_1 = ((float)il2cpp_codegen_add(L_5, L_7));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_8 = ___rotation1;
		float L_9 = L_8.___Z_2;
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_10 = ___rotation1;
		float L_11 = L_10.___Z_2;
		V_2 = ((float)il2cpp_codegen_add(L_9, L_11));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_12 = ___rotation1;
		float L_13 = L_12.___W_3;
		float L_14 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply(L_13, L_14));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_15 = ___rotation1;
		float L_16 = L_15.___W_3;
		float L_17 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_18 = ___rotation1;
		float L_19 = L_18.___W_3;
		float L_20 = V_2;
		V_5 = ((float)il2cpp_codegen_multiply(L_19, L_20));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_21 = ___rotation1;
		float L_22 = L_21.___X_0;
		float L_23 = V_0;
		V_6 = ((float)il2cpp_codegen_multiply(L_22, L_23));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_24 = ___rotation1;
		float L_25 = L_24.___X_0;
		float L_26 = V_1;
		V_7 = ((float)il2cpp_codegen_multiply(L_25, L_26));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_27 = ___rotation1;
		float L_28 = L_27.___X_0;
		float L_29 = V_2;
		V_8 = ((float)il2cpp_codegen_multiply(L_28, L_29));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_30 = ___rotation1;
		float L_31 = L_30.___Y_1;
		float L_32 = V_1;
		V_9 = ((float)il2cpp_codegen_multiply(L_31, L_32));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_33 = ___rotation1;
		float L_34 = L_33.___Y_1;
		float L_35 = V_2;
		V_10 = ((float)il2cpp_codegen_multiply(L_34, L_35));
		Quaternion_tE57A06C497C8A014774EDEF58CF430CE269A7B37 L_36 = ___rotation1;
		float L_37 = L_36.___Z_2;
		float L_38 = V_2;
		V_11 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_39 = ___value0;
		float L_40 = L_39.___X_0;
		float L_41 = V_9;
		float L_42 = V_11;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_43 = ___value0;
		float L_44 = L_43.___Y_1;
		float L_45 = V_7;
		float L_46 = V_5;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_47 = ___value0;
		float L_48 = L_47.___Z_2;
		float L_49 = V_8;
		float L_50 = V_4;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_51 = ___value0;
		float L_52 = L_51.___X_0;
		float L_53 = V_7;
		float L_54 = V_5;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_55 = ___value0;
		float L_56 = L_55.___Y_1;
		float L_57 = V_6;
		float L_58 = V_11;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_59 = ___value0;
		float L_60 = L_59.___Z_2;
		float L_61 = V_10;
		float L_62 = V_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_63 = ___value0;
		float L_64 = L_63.___X_0;
		float L_65 = V_8;
		float L_66 = V_4;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_67 = ___value0;
		float L_68 = L_67.___Y_1;
		float L_69 = V_10;
		float L_70 = V_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_71 = ___value0;
		float L_72 = L_71.___Z_2;
		float L_73 = V_6;
		float L_74 = V_9;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_75 = ___value0;
		float L_76 = L_75.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_77), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_40, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_41)), L_42)))), ((float)il2cpp_codegen_multiply(L_44, ((float)il2cpp_codegen_subtract(L_45, L_46)))))), ((float)il2cpp_codegen_multiply(L_48, ((float)il2cpp_codegen_add(L_49, L_50)))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_52, ((float)il2cpp_codegen_add(L_53, L_54)))), ((float)il2cpp_codegen_multiply(L_56, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_57)), L_58)))))), ((float)il2cpp_codegen_multiply(L_60, ((float)il2cpp_codegen_subtract(L_61, L_62)))))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_64, ((float)il2cpp_codegen_subtract(L_65, L_66)))), ((float)il2cpp_codegen_multiply(L_68, ((float)il2cpp_codegen_add(L_69, L_70)))))), ((float)il2cpp_codegen_multiply(L_72, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_73)), L_74)))))), L_76, /*hidden argument*/NULL);
		return L_77;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Add(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Add_m840D8D402A2C58F9D57269B678DC32094C6964F6 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___right1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2;
		L_2 = Vector4_op_Addition_m019D527FA9C977C7ACC41935AFEDF69588795141_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Subtract(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Subtract_mAEFB0F2CEA10AA741568776685F1EE612DC29B09 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___right1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2;
		L_2 = Vector4_op_Subtraction_m15527DD71F5BA01CE0B948FF0BD7A00B0B935743_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Multiply(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Multiply_mA363C18FBC41DF676D34C3863E1BC441CF7D588C (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___right1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2;
		L_2 = Vector4_op_Multiply_mCEB726CB782C1B434FBEE7279C8D8668C5C5DD66_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Multiply(System.Numerics.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Multiply_m27B5FFFA1F098E4827B31C88A9370D2D58737995 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, float ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		float L_1 = ___right1;
		float L_2 = ___right1;
		float L_3 = ___right1;
		float L_4 = ___right1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_5), L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6;
		L_6 = Vector4_op_Multiply_mCEB726CB782C1B434FBEE7279C8D8668C5C5DD66_inline(L_0, L_5, NULL);
		return L_6;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Multiply(System.Single,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Multiply_m746AEBE8F47849216C6E89C27B5933DD479E7A3D (float ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___left0;
		float L_1 = ___left0;
		float L_2 = ___left0;
		float L_3 = ___left0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_5 = ___right1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6;
		L_6 = Vector4_op_Multiply_mCEB726CB782C1B434FBEE7279C8D8668C5C5DD66_inline(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Divide(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Divide_m6FECCC344E1232CD9864215AE72CF1B956C32497 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___right1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2;
		L_2 = Vector4_op_Division_mAC8CA5113511E8F1723211A71F5D21D53C05096B_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Divide(System.Numerics.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Divide_m24D2DB178F34F7D1A3B00A5C4F886DA080A718F5 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, float ___divisor1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		float L_1 = ___divisor1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2;
		L_2 = Vector4_op_Division_mBE4D08CB3C79F762575F6105966F730081331E69_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Negate(System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Negate_mF462AB08AF5408D05826D32C57E1633344F69251 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value0, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___value0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1;
		L_1 = Vector4_op_UnaryNegation_m76A09B6C9FFC0C21B6E1E46C11E8A5360A772AFC_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Numerics.Vector4::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m99E6D1DF327F7715011171265CCEA0AAD67FB5D7 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		float L_1 = ___value0;
		float L_2 = ___value0;
		float L_3 = ___value0;
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4__ctor_m99E6D1DF327F7715011171265CCEA0AAD67FB5D7_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	Vector4__ctor_m99E6D1DF327F7715011171265CCEA0AAD67FB5D7(_thisAdjusted, ___value0, method);
}
// System.Void System.Numerics.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___w3;
		__this->___W_3 = L_0;
		float L_1 = ___x0;
		__this->___X_0 = L_1;
		float L_2 = ___y1;
		__this->___Y_1 = L_2;
		float L_3 = ___z2;
		__this->___Z_2 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825_AdjustorThunk (RuntimeObject* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825(_thisAdjusted, ___x0, ___y1, ___z2, ___w3, method);
}
// System.Void System.Numerics.Vector4::.ctor(System.Numerics.Vector2,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m646FFC6D99F72917CBAF561B89DB49339577FEC1 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, float ___z1, float ___w2, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___value0;
		float L_1 = L_0.___X_0;
		__this->___X_0 = L_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___value0;
		float L_3 = L_2.___Y_1;
		__this->___Y_1 = L_3;
		float L_4 = ___z1;
		__this->___Z_2 = L_4;
		float L_5 = ___w2;
		__this->___W_3 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4__ctor_m646FFC6D99F72917CBAF561B89DB49339577FEC1_AdjustorThunk (RuntimeObject* __this, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, float ___z1, float ___w2, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	Vector4__ctor_m646FFC6D99F72917CBAF561B89DB49339577FEC1(_thisAdjusted, ___value0, ___z1, ___w2, method);
}
// System.Void System.Numerics.Vector4::.ctor(System.Numerics.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m8C296B9F43734A8788C28C2B20FCBCC5797BB40E (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, float ___w1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___value0;
		float L_1 = L_0.___X_0;
		__this->___X_0 = L_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___value0;
		float L_3 = L_2.___Y_1;
		__this->___Y_1 = L_3;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___value0;
		float L_5 = L_4.___Z_2;
		__this->___Z_2 = L_5;
		float L_6 = ___w1;
		__this->___W_3 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4__ctor_m8C296B9F43734A8788C28C2B20FCBCC5797BB40E_AdjustorThunk (RuntimeObject* __this, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, float ___w1, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	Vector4__ctor_m8C296B9F43734A8788C28C2B20FCBCC5797BB40E(_thisAdjusted, ___value0, ___w1, method);
}
// System.Void System.Numerics.Vector4::CopyTo(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_CopyTo_mF75273503DCD2931F68BD498F7052B1492C09A72 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_inline(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4_CopyTo_mF75273503DCD2931F68BD498F7052B1492C09A72_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	Vector4_CopyTo_mF75273503DCD2931F68BD498F7052B1492C09A72_inline(_thisAdjusted, ___array0, method);
}
// System.Void System.Numerics.Vector4::CopyTo(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1;
		L_1 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_NullArgumentNullRef_mA3072D049995FC076C81366072003B82FFD7AC5B(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_3 = ___index1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = ___index1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___array0;
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_0018:
	{
		String_t* L_6;
		L_6 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ArgumentOutOfRangeException_m0CC0F173F70B02AA1F5D2DD69D2DC9924D91803A(NULL);
		int32_t L_7 = ___index1;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_Format_m9BBA345A344FA6EA2067151B289DD08CF8392188(L_6, L_9, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_RuntimeMethod_var)));
	}

IL_0033:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___index1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))) >= ((int32_t)4)))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_14;
		L_14 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ElementsInSourceIsGreaterThanDestination_m6532FB7E4299FBA5C367D126B292F3706DE582F9(NULL);
		int32_t L_15 = ___index1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_Format_m9BBA345A344FA6EA2067151B289DD08CF8392188(L_14, L_17, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_RuntimeMethod_var)));
	}

IL_0051:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = ___array0;
		int32_t L_21 = ___index1;
		float L_22 = __this->___X_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (float)L_22);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___array0;
		int32_t L_24 = ___index1;
		float L_25 = __this->___Y_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 1))), (float)L_25);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = ___array0;
		int32_t L_27 = ___index1;
		float L_28 = __this->___Z_2;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 2))), (float)L_28);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = ___array0;
		int32_t L_30 = ___index1;
		float L_31 = __this->___W_3;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_30, 3))), (float)L_31);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_inline(_thisAdjusted, ___array0, ___index1, method);
}
// System.Boolean System.Numerics.Vector4::Equals(System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m48D255BD8A67CA811BA969873186A001D7BC02CE (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___other0, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___other0;
		float L_2 = L_1.___X_0;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_0039;
		}
	}
	{
		float L_3 = __this->___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___other0;
		float L_5 = L_4.___Y_1;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_0039;
		}
	}
	{
		float L_6 = __this->___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_7 = ___other0;
		float L_8 = L_7.___Z_2;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_0039;
		}
	}
	{
		float L_9 = __this->___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___other0;
		float L_11 = L_10.___W_3;
		return (bool)((((float)L_9) == ((float)L_11))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Vector4_Equals_m48D255BD8A67CA811BA969873186A001D7BC02CE_AdjustorThunk (RuntimeObject* __this, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___other0, const RuntimeMethod* method)
{
	Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector4_Equals_m48D255BD8A67CA811BA969873186A001D7BC02CE(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Single System.Numerics.Vector4::Dot(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_Dot_m2802186971C959363FC1D5F3CD4220D9D64550A9 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___vector10, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___vector21, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___vector10;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___vector21;
		float L_3 = L_2.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___vector10;
		float L_5 = L_4.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___vector21;
		float L_7 = L_6.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___vector10;
		float L_9 = L_8.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___vector21;
		float L_11 = L_10.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___vector10;
		float L_13 = L_12.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___vector21;
		float L_15 = L_14.___W_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Min(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Min_mD4D77E3FC44D84C21F7BA5763157864D43550CBD (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value10, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value21, const RuntimeMethod* method) 
{
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B9_2 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	float G_B11_2 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	float G_B12_2 = 0.0f;
	float G_B12_3 = 0.0f;
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___value21;
		float L_3 = L_2.___X_0;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___value21;
		float L_5 = L_4.___X_0;
		G_B3_0 = L_5;
		goto IL_001c;
	}

IL_0016:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___value10;
		float L_7 = L_6.___X_0;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___value10;
		float L_9 = L_8.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___value21;
		float L_11 = L_10.___Y_1;
		G_B4_0 = G_B3_0;
		if ((((float)L_9) < ((float)L_11)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___value21;
		float L_13 = L_12.___Y_1;
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0032:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___value10;
		float L_15 = L_14.___Y_1;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16 = ___value10;
		float L_17 = L_16.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_18 = ___value21;
		float L_19 = L_18.___Z_2;
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		if ((((float)L_17) < ((float)L_19)))
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			goto IL_004e;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_20 = ___value21;
		float L_21 = L_20.___Z_2;
		G_B9_0 = L_21;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0054;
	}

IL_004e:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_22 = ___value10;
		float L_23 = L_22.___Z_2;
		G_B9_0 = L_23;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0054:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_24 = ___value10;
		float L_25 = L_24.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_26 = ___value21;
		float L_27 = L_26.___W_3;
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if ((((float)L_25) < ((float)L_27)))
		{
			G_B11_0 = G_B9_0;
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_006a;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_28 = ___value21;
		float L_29 = L_28.___W_3;
		G_B12_0 = L_29;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0070;
	}

IL_006a:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_30 = ___value10;
		float L_31 = L_30.___W_3;
		G_B12_0 = L_31;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0070:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_32), G_B12_3, G_B12_2, G_B12_1, G_B12_0, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Max(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Max_mCD3E47E01781ABC2911C9B7447C3DCCF70239CA7 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value10, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value21, const RuntimeMethod* method) 
{
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B9_2 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	float G_B11_2 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	float G_B12_2 = 0.0f;
	float G_B12_3 = 0.0f;
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___value21;
		float L_3 = L_2.___X_0;
		if ((((float)L_1) > ((float)L_3)))
		{
			goto IL_0016;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___value21;
		float L_5 = L_4.___X_0;
		G_B3_0 = L_5;
		goto IL_001c;
	}

IL_0016:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___value10;
		float L_7 = L_6.___X_0;
		G_B3_0 = L_7;
	}

IL_001c:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___value10;
		float L_9 = L_8.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___value21;
		float L_11 = L_10.___Y_1;
		G_B4_0 = G_B3_0;
		if ((((float)L_9) > ((float)L_11)))
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___value21;
		float L_13 = L_12.___Y_1;
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0032:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___value10;
		float L_15 = L_14.___Y_1;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16 = ___value10;
		float L_17 = L_16.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_18 = ___value21;
		float L_19 = L_18.___Z_2;
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		if ((((float)L_17) > ((float)L_19)))
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			goto IL_004e;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_20 = ___value21;
		float L_21 = L_20.___Z_2;
		G_B9_0 = L_21;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0054;
	}

IL_004e:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_22 = ___value10;
		float L_23 = L_22.___Z_2;
		G_B9_0 = L_23;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0054:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_24 = ___value10;
		float L_25 = L_24.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_26 = ___value21;
		float L_27 = L_26.___W_3;
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if ((((float)L_25) > ((float)L_27)))
		{
			G_B11_0 = G_B9_0;
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_006a;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_28 = ___value21;
		float L_29 = L_28.___W_3;
		G_B12_0 = L_29;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0070;
	}

IL_006a:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_30 = ___value10;
		float L_31 = L_30.___W_3;
		G_B12_0 = L_31;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0070:
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_32), G_B12_3, G_B12_2, G_B12_1, G_B12_0, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::Abs(System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_Abs_mE7EE62BBD6C9EC54BD923AC2C5C5FF0E92084C51 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value0, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___value0;
		float L_1 = L_0.___X_0;
		float L_2;
		L_2 = fabsf(L_1);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_3 = ___value0;
		float L_4 = L_3.___Y_1;
		float L_5;
		L_5 = fabsf(L_4);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___value0;
		float L_7 = L_6.___Z_2;
		float L_8;
		L_8 = fabsf(L_7);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_9 = ___value0;
		float L_10 = L_9.___W_3;
		float L_11;
		L_11 = fabsf(L_10);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::SquareRoot(System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_SquareRoot_m1C84E4A90FD85C5566B4AC3B889CF9C947016F69 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value0, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___value0;
		float L_1 = L_0.___X_0;
		float L_2;
		L_2 = sqrtf(L_1);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_3 = ___value0;
		float L_4 = L_3.___Y_1;
		float L_5;
		L_5 = sqrtf(L_4);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___value0;
		float L_7 = L_6.___Z_2;
		float L_8;
		L_8 = sqrtf(L_7);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_9 = ___value0;
		float L_10 = L_9.___W_3;
		float L_11;
		L_11 = sqrtf(L_10);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::op_Addition(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Addition_m019D527FA9C977C7ACC41935AFEDF69588795141 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___left0;
		float L_13 = L_12.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___right1;
		float L_15 = L_14.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::op_Subtraction(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Subtraction_m15527DD71F5BA01CE0B948FF0BD7A00B0B935743 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___left0;
		float L_13 = L_12.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___right1;
		float L_15 = L_14.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_16), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::op_Multiply(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Multiply_mCEB726CB782C1B434FBEE7279C8D8668C5C5DD66 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___left0;
		float L_13 = L_12.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___right1;
		float L_15 = L_14.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_16), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::op_Multiply(System.Numerics.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Multiply_m86E3793CEF7B60F97DAE2630C366BF374697FE56 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, float ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		float L_1 = ___right1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector4__ctor_m99E6D1DF327F7715011171265CCEA0AAD67FB5D7((&L_2), L_1, /*hidden argument*/NULL);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_3;
		L_3 = Vector4_op_Multiply_mCEB726CB782C1B434FBEE7279C8D8668C5C5DD66_inline(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::op_Multiply(System.Single,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Multiply_mD513477ED1CF190BD79E5BBAACD42D66878F8B90 (float ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___left0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector4__ctor_m99E6D1DF327F7715011171265CCEA0AAD67FB5D7((&L_1), L_0, /*hidden argument*/NULL);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___right1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_3;
		L_3 = Vector4_op_Multiply_mCEB726CB782C1B434FBEE7279C8D8668C5C5DD66_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::op_Division(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Division_mAC8CA5113511E8F1723211A71F5D21D53C05096B (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___left0;
		float L_13 = L_12.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___right1;
		float L_15 = L_14.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_16), ((float)(L_1/L_3)), ((float)(L_5/L_7)), ((float)(L_9/L_11)), ((float)(L_13/L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::op_Division(System.Numerics.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Division_mBE4D08CB3C79F762575F6105966F730081331E69 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value10, float ___value21, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___value21;
		V_0 = ((float)((1.0f)/L_0));
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___value10;
		float L_2 = L_1.___X_0;
		float L_3 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		float L_6 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_7 = ___value10;
		float L_8 = L_7.___Z_2;
		float L_9 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___value10;
		float L_11 = L_10.___W_3;
		float L_12 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_13), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_11, L_12)), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Numerics.Vector4 System.Numerics.Vector4::op_UnaryNegation(System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_UnaryNegation_m76A09B6C9FFC0C21B6E1E46C11E8A5360A772AFC (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value0, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0;
		L_0 = Vector4_get_Zero_mB81FF2CB69C92EF6A4F4CE80EA1080BD933088D0(NULL);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___value0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2;
		L_2 = Vector4_op_Subtraction_m15527DD71F5BA01CE0B948FF0BD7A00B0B935743_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean System.Numerics.Vector4::op_Equality(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m5F588677B8F528732DF26A87A7F5513316D19F1B (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___right1;
		bool L_1;
		L_1 = Vector4_Equals_m48D255BD8A67CA811BA969873186A001D7BC02CE((&___left0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean System.Numerics.Vector4::op_Inequality(System.Numerics.Vector4,System.Numerics.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m7220B0280F9C9D2BFD00B0C5035EB40473E12310 (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___right1;
		bool L_2;
		L_2 = Vector4_op_Equality_m5F588677B8F528732DF26A87A7F5513316D19F1B_inline(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Int32 System.Numerics.Hashing.HashHelpers::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mF5306747D4F42347088DDDB2CB95525BBB70ED26 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___h10;
		int32_t L_1 = ___h10;
		V_0 = ((int32_t)(((int32_t)(L_0<<5))|((int32_t)((uint32_t)L_1>>((int32_t)27)))));
		uint32_t L_2 = V_0;
		int32_t L_3 = ___h10;
		int32_t L_4 = ___h21;
		return ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_2, L_3))^L_4));
	}
}
// System.Void System.Numerics.Hashing.HashHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashHelpers__cctor_m4DB5D308C7772715695F057CFD127193385D6EC0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&V_0), NULL);
		((HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_tBC175653882FED3D3D5FCC6879097079E2D7FE53_il2cpp_TypeInfo_var))->___RandomSeed_0 = L_1;
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
// System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Void*,System.Void*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_mF7097D4D7AAD811A966FD3848ED73E65CC47D553 (void* ___destination0, void* ___source1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		void* L_1 = ___source1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_m47DD36565AA1ECAD05C0755634397DF854CCDF32 (uint8_t* ___destination0, uint8_t* ___source1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		uint8_t* L_1 = ___source1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Void*,System.Void*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_mE6A1E6DBEA2AC4F01E2771F061D39D8749B40DC0 (void* ___destination0, void* ___source1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		void* L_1 = ___source1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Byte&,System.Byte&,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_mE0F17D4286FC4C3E08C8963F48189539F776519C (uint8_t* ___destination0, uint8_t* ___source1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		uint8_t* L_1 = ___source1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::InitBlock(System.Void*,System.Byte,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlock_mF981E349877DE70B69F52A65E2A80673A3507519 (void* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___startAddress0;
		uint8_t L_1 = ___value1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::InitBlock(System.Byte&,System.Byte,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlock_m4D80B693855075C72AF7F9760150F45910B3082D (uint8_t* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___startAddress0;
		uint8_t L_1 = ___value1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m7184219A1DB199CCEEB4C33B9826C9FF98A0087A (void* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___startAddress0;
		uint8_t L_1 = ___value1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_mDA2B4CE4450608D391D3DFEC1F68CAADC17800AE (uint8_t* ___startAddress0, uint8_t ___value1, uint32_t ___byteCount2, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___startAddress0;
		uint8_t L_1 = ___value1;
		uint32_t L_2 = ___byteCount2;
		il2cpp_codegen_memset(L_0, L_1, L_2);
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
// System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonVersionableAttribute__ctor_m1185AEE22A10521C5347AA461C40602F2CD5362F (NonVersionableAttribute_tCD81A4C378265DB4067F02D7DDEF32E5BE8A79DB* __this, const RuntimeMethod* method) 
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
// System.Void System.Runtime.CompilerServices.<919d9a8d-d7ff-4808-8e3c-672c1fe27e9a>IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C919d9a8dU2Dd7ffU2D4808U2D8e3cU2D672c1fe27e9aU3EIsReadOnlyAttribute__ctor_m0C3F38A0B84C53E5FBE91679203D92C5061B9A00 (U3C919d9a8dU2Dd7ffU2D4808U2D8e3cU2D672c1fe27e9aU3EIsReadOnlyAttribute_t5F2A57A1AF4B203E61787164ECF6BA08F9793D8E* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.CodeAnalysis.<06e9bf70-f5ca-44ed-8ef1-f544203364d5>EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C06e9bf70U2Df5caU2D44edU2D8ef1U2Df544203364d5U3EEmbeddedAttribute__ctor_m62BF15D808E97160631AF39419FBE980CE827207 (U3C06e9bf70U2Df5caU2D44edU2D8ef1U2Df544203364d5U3EEmbeddedAttribute_t24A530D59D25E310C5248F668EB67587A0A86120* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mEA96E7CEADEEB9A3AC311A524A1D3507AC8A0BCB (NullableAttribute_t84973F43ED822B00B520B092D49118BC0D6979CF* __this, uint8_t p0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mEF4D460261294E41832FF3DECE91ACE3BDDC644F (NullableAttribute_t84973F43ED822B00B520B092D49118BC0D6979CF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m5070B19E201ACDB912DE391F51E87E8AF2F551F4 (NullableContextAttribute_t036DE6BA6E12A49EE092B583A127F0E4762CB411* __this, uint8_t p0, const RuntimeMethod* method) 
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
// System.Void System.Runtime.CompilerServices.NullablePublicOnlyAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_m77EF24187E80D893613C9B10F0B09EEB04BEC223 (NullablePublicOnlyAttribute_t603C5DB94114B8321CEAF471D115C828F7975C61* __this, bool p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = p0;
		__this->___IncludesInternals_0 = L_0;
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
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_StaticFields*)il2cpp_codegen_static_fields_for(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
// System.String System.SR::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m8D272754540A6D7BC8757D8D20123ED638D11963 (String_t* ___resourceKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857_inline(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ___resourceKey0;
		return L_1;
	}

IL_0009:
	{
		V_0 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_2;
		L_2 = SR_get_ResourceManager_mA9FC2DECC3AD84304C14DF6967673D4D2DF8A851(NULL);
		String_t* L_3 = ___resourceKey0;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_2, L_3);
		V_0 = L_4;
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{// begin catch(System.Resources.MissingManifestResourceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mD449CCB286B290B99782851BE96B6D7C0D9E4165 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___resourceKey0;
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = SR_GetResourceString_m8D272754540A6D7BC8757D8D20123ED638D11963(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___resourceKey0;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_6 = V_0;
		return L_6;
	}

IL_0015:
	{
		String_t* L_7 = ___defaultString1;
		return L_7;
	}
}
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m4AF7EAA041A6BE0DE6163AF4087D2B5CB934D383 (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857_inline(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		String_t* L_6;
		L_6 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_6;
	}

IL_0020:
	{
		String_t* L_7 = ___resourceFormat0;
		RuntimeObject* L_8 = ___p11;
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_7, L_8, NULL);
		return L_9;
	}
}
// System.String System.SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mE6E654837B02090132DC613411E52AF49AC56C94 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857_inline(NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___p22;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		String_t* L_8;
		L_8 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_6, NULL);
		return L_8;
	}

IL_0024:
	{
		String_t* L_9 = ___resourceFormat0;
		RuntimeObject* L_10 = ___p11;
		RuntimeObject* L_11 = ___p22;
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// System.String System.SR::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m6168E5C9C30087D77E19CB692D5B0BECED6C6333 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, RuntimeObject* ___p33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857_inline(NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___p22;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		RuntimeObject* L_9 = ___p33;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_8, NULL);
		return L_10;
	}

IL_0028:
	{
		String_t* L_11 = ___resourceFormat0;
		RuntimeObject* L_12 = ___p11;
		RuntimeObject* L_13 = ___p22;
		RuntimeObject* L_14 = ___p33;
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_11, L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.String System.SR::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mD06AB020B00A191AFE404B2DDBE3C95E3560CCA3 (String_t* ___resourceFormat0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857_inline(NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___resourceFormat0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args1;
		String_t* L_4;
		L_4 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		String_t* L_6 = ___resourceFormat0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___args1;
		String_t* L_8;
		L_8 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_6, L_7, NULL);
		return L_8;
	}

IL_0029:
	{
		String_t* L_9 = ___resourceFormat0;
		return L_9;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mA57EB6208A41CF0BE53CAD6C577F7EF3450C434A (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857_inline(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p12;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		String_t* L_6;
		L_6 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_6;
	}

IL_0020:
	{
		RuntimeObject* L_7 = ___provider0;
		String_t* L_8 = ___resourceFormat1;
		RuntimeObject* L_9 = ___p12;
		String_t* L_10;
		L_10 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mFC65E3C9EA0AA88A59B34CC50F35080FCEADBED8 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, RuntimeObject* ___p23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857_inline(NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p12;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___p23;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		String_t* L_8;
		L_8 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_6, NULL);
		return L_8;
	}

IL_0024:
	{
		RuntimeObject* L_9 = ___provider0;
		String_t* L_10 = ___resourceFormat1;
		RuntimeObject* L_11 = ___p12;
		RuntimeObject* L_12 = ___p23;
		String_t* L_13;
		L_13 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m007F416FC1B7DA1CB81C03DB0FEB305FAF0FC646 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, RuntimeObject* ___p23, RuntimeObject* ___p34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857_inline(NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p12;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___p23;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		RuntimeObject* L_9 = ___p34;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_8, NULL);
		return L_10;
	}

IL_0029:
	{
		RuntimeObject* L_11 = ___provider0;
		String_t* L_12 = ___resourceFormat1;
		RuntimeObject* L_13 = ___p12;
		RuntimeObject* L_14 = ___p23;
		RuntimeObject* L_15 = ___p34;
		String_t* L_16;
		L_16 = String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263(L_11, L_12, L_13, L_14, L_15, NULL);
		return L_16;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mFBA5255A430962BC19411A01408EFECD5E2A4DDF (RuntimeObject* ___provider0, String_t* ___resourceFormat1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args2;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857_inline(NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___resourceFormat1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args2;
		String_t* L_4;
		L_4 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		RuntimeObject* L_6 = ___provider0;
		String_t* L_7 = ___resourceFormat1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args2;
		String_t* L_9;
		L_9 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_002a:
	{
		String_t* L_10 = ___resourceFormat1;
		return L_10;
	}
}
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mA9FC2DECC3AD84304C14DF6967673D4D2DF8A851 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tD15204EF4560B3B8208F6449DB119B748D5D3092_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_StaticFields*)il2cpp_codegen_static_fields_for(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var))->___s_resourceManager_1;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SR_tD15204EF4560B3B8208F6449DB119B748D5D3092_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_4, L_3, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		((SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_StaticFields*)il2cpp_codegen_static_fields_for(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var))->___s_resourceManager_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_StaticFields*)il2cpp_codegen_static_fields_for(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var))->___s_resourceManager_1), (void*)L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_ChannelClosedException_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ChannelClosedException_DefaultMessage_mBB2B2258FB2D4A538C94DC541BD8989803BD27B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m8D272754540A6D7BC8757D8D20123ED638D11963(_stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B, NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_IncompleteAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncompleteAsyncOperation_m47631F961B19125443B01D0666475A1525391990 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m8D272754540A6D7BC8757D8D20123ED638D11963(_stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97, NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_MultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_MultipleContinuations_m2993F2879060A338576B4CC6B1AF1E932E19885B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m8D272754540A6D7BC8757D8D20123ED638D11963(_stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466, NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_IncorrectToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncorrectToken_m28659A75E9B6C25B86989801F7CAB5AD2000D33E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m8D272754540A6D7BC8757D8D20123ED638D11963(_stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604, NULL);
		return L_0;
	}
}
// System.Void System.SR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_mF772B4197385006078271336F114ABFD169A5AC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78(_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6, (&V_0), NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_0011:
	{
		bool L_1 = V_0;
		G_B3_0 = ((int32_t)(L_1));
	}

IL_0012:
	{
		((SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_StaticFields*)il2cpp_codegen_static_fields_for(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0 = (bool)G_B3_0;
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
// System.Void System.Diagnostics.CodeAnalysis.AllowNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowNullAttribute__ctor_m5348E1D5DCEA0BDE4A14D0793B025C42F2A58110 (AllowNullAttribute_t68F3E977C711D8BCE1AA19C2D7CE031BB2781957* __this, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.CodeAnalysis.DisallowNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisallowNullAttribute__ctor_m9A1D4A233A4FF2499A1F0C8D73B80AF64609A9A0 (DisallowNullAttribute_tD46EF28E9C6436EE7EF001F767781F65622ACD2E* __this, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.CodeAnalysis.MaybeNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaybeNullAttribute__ctor_mBEACC5BE3B1DF591F57422ECDA3CA1E105322746 (MaybeNullAttribute_tD580B0C2FAE1E1296E662839B26CE395D77D3F79* __this, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullAttribute__ctor_m8E114A5CDA0E9DA2F447147173157307027B08FB (NotNullAttribute_t4154F07615CB610B75C9ECEF46FC5448A8CAF491* __this, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaybeNullWhenAttribute__ctor_m3600FB3E5E5FC602DC2006B3D511E3D978D26A51 (MaybeNullWhenAttribute_t25EAABBA8D44AEB26C1B869E93BFC990C1638FE5* __this, bool ___returnValue0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::get_ReturnValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaybeNullWhenAttribute_get_ReturnValue_mF1C9226761094AC62190D31439BF692E54F03402 (MaybeNullWhenAttribute_t25EAABBA8D44AEB26C1B869E93BFC990C1638FE5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CReturnValueU3Ek__BackingField_0;
		return L_0;
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullWhenAttribute__ctor_m3884615E904D703BFD7F105537E8DF3507289C41 (NotNullWhenAttribute_t7509128E69D8DD2F7FE8FFB4A35586C10E438833* __this, bool ___returnValue0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::get_ReturnValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotNullWhenAttribute_get_ReturnValue_m14FF67BB127DD151B7E098E43F96FCE67DAE0E78 (NotNullWhenAttribute_t7509128E69D8DD2F7FE8FFB4A35586C10E438833* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CReturnValueU3Ek__BackingField_0;
		return L_0;
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullIfNotNullAttribute__ctor_mE445079C249372F5C6EFD6A9C0575E7ABBECB6DA (NotNullIfNotNullAttribute_tAA5476DC55D7812CCDB143507D05D199609AC9BD* __this, String_t* ___parameterName0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___parameterName0;
		__this->___U3CParameterNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParameterNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute::get_ParameterName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotNullIfNotNullAttribute_get_ParameterName_m0DACB522C0E26EBF9E69CCD40CA972DF5239A92D (NotNullIfNotNullAttribute_tAA5476DC55D7812CCDB143507D05D199609AC9BD* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CParameterNameU3Ek__BackingField_0;
		return L_0;
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
// System.Void System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoesNotReturnAttribute__ctor_m62026CF9B6BF511E624AA30D26E8CAD8EFB80C38 (DoesNotReturnAttribute_t04001AD79987F0B0044B2D1D679B4197D5BFEF34* __this, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoesNotReturnIfAttribute__ctor_m6B6C82DA3CC071912D7D90C03420D08BF9E70DD8 (DoesNotReturnIfAttribute_tD9D5B1C452292A83CE9E36AA3C30A0182A1A03C7* __this, bool ___parameterValue0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___parameterValue0;
		__this->___U3CParameterValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::get_ParameterValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoesNotReturnIfAttribute_get_ParameterValue_m8D850023F73CBA5BBFC0BBC77E1DBBFF6F564BC2 (DoesNotReturnIfAttribute_tD9D5B1C452292A83CE9E36AA3C30A0182A1A03C7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CParameterValueU3Ek__BackingField_0;
		return L_0;
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
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullAttribute__ctor_mEC200072DFE4CCEE474AAE43DFD19E909A1F7443 (MemberNotNullAttribute_t61B3324283A23DB98DF14DFA12E93367848DB556* __this, String_t* ___member0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2 = ___member0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		__this->___U3CMembersU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMembersU3Ek__BackingField_0), (void*)L_1);
		return;
	}
}
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullAttribute__ctor_mF81562CB19FB24A36E6BAA3675CF030121A1BBA1 (MemberNotNullAttribute_t61B3324283A23DB98DF14DFA12E93367848DB556* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___members0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___members0;
		__this->___U3CMembersU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMembersU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::get_Members()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MemberNotNullAttribute_get_Members_mB437B6AEAB94F6419C9921F0F75C491835B6B191 (MemberNotNullAttribute_t61B3324283A23DB98DF14DFA12E93367848DB556* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CMembersU3Ek__BackingField_0;
		return L_0;
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
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::.ctor(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullWhenAttribute__ctor_m0A9131BC98B792710A4DC2321D1A9A4E3FBE3FE6 (MemberNotNullWhenAttribute_t1203E9CE25CA392D2D1F8E2856879E6D5E4CC1B9* __this, bool ___returnValue0, String_t* ___member1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___member1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		__this->___U3CMembersU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMembersU3Ek__BackingField_1), (void*)L_2);
		return;
	}
}
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::.ctor(System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullWhenAttribute__ctor_m7493C19EB2EF3039EA24A3A98F2C3B2310F6A2CD (MemberNotNullWhenAttribute_t1203E9CE25CA392D2D1F8E2856879E6D5E4CC1B9* __this, bool ___returnValue0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___members1, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___members1;
		__this->___U3CMembersU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMembersU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::get_ReturnValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberNotNullWhenAttribute_get_ReturnValue_mB62C266D2262D0C6D1CD21B969CD8E8DE53CC51F (MemberNotNullWhenAttribute_t1203E9CE25CA392D2D1F8E2856879E6D5E4CC1B9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CReturnValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::get_Members()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MemberNotNullWhenAttribute_get_Members_m1EC6F497C16D0E5B819D551DCCC988E0BE12553F (MemberNotNullWhenAttribute_t1203E9CE25CA392D2D1F8E2856879E6D5E4CC1B9* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CMembersU3Ek__BackingField_1;
		return L_0;
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
// System.Void System.Threading.Channels.AsyncOperation::AvailableSentinel(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_AvailableSentinel_m51D273C0AF17B3100AFDDB904354D1C94ECB8031 (RuntimeObject* ___s0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::CompletedSentinel(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_CompletedSentinel_mB06679187FE6852F4446F4F1B60F502A47622E41 (RuntimeObject* ___s0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowIncompleteOperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowIncompleteOperationException_mB11EF4CBF3AB0190B12B0DAB1879C02B321A0A43 (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var)));
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_IncompleteAsyncOperation_m47631F961B19125443B01D0666475A1525391990(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowIncompleteOperationException_mB11EF4CBF3AB0190B12B0DAB1879C02B321A0A43_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowMultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowMultipleContinuations_m9ABDEED2AD276A61A30402BA6E45E0C4227F18CF (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var)));
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_MultipleContinuations_m2993F2879060A338576B4CC6B1AF1E932E19885B(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowMultipleContinuations_m9ABDEED2AD276A61A30402BA6E45E0C4227F18CF_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowIncorrectCurrentIdException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowIncorrectCurrentIdException_m31F71609AAC117BF9DC50FC2AFCE0D60E0402110 (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var)));
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_IncorrectToken_m28659A75E9B6C25B86989801F7CAB5AD2000D33E(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowIncorrectCurrentIdException_m31F71609AAC117BF9DC50FC2AFCE0D60E0402110_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_mBC270189D9F2430F5AB0435255F623EA3094BDBA (AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__cctor_m1AC4D8FE4A135BFEC72E3E53E5C8C786CACAC8A0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_AvailableSentinel_m51D273C0AF17B3100AFDDB904354D1C94ECB8031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_CompletedSentinel_mB06679187FE6852F4446F4F1B60F502A47622E41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)AsyncOperation_AvailableSentinel_m51D273C0AF17B3100AFDDB904354D1C94ECB8031_RuntimeMethod_var), NULL);
		((AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A_il2cpp_TypeInfo_var))->___s_availableSentinel_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A_il2cpp_TypeInfo_var))->___s_availableSentinel_0), (void*)L_0);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)AsyncOperation_CompletedSentinel_mB06679187FE6852F4446F4F1B60F502A47622E41_RuntimeMethod_var), NULL);
		((AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A_il2cpp_TypeInfo_var))->___s_completedSentinel_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_t27641A113CCEFE783EAFC5F4C7ACCC50AD59DA2A_il2cpp_TypeInfo_var))->___s_completedSentinel_1), (void*)L_1);
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
// System.Void System.Threading.Channels.ChannelClosedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m86BCA70DF85EC9451D30250CD0F8F19601B33319 (ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_ChannelClosedException_DefaultMessage_mBB2B2258FB2D4A538C94DC541BD8989803BD27B7(NULL);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m832BD7E79A1C6D2E16357B3A80A306545E9B5642 (ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_mC856EE26FD11DBC619F47C29492FD1A7F1B6B95A (ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434* __this, Exception_t* ___innerException0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_get_ChannelClosedException_DefaultMessage_mBB2B2258FB2D4A538C94DC541BD8989803BD27B7(NULL);
		Exception_t* L_1 = ___innerException0;
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m5C2850AF4AB94FCDFCC1D2F5781F6ACCECF462AA (ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(__this, L_0, L_1, NULL);
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
// System.Boolean System.Threading.Channels.ChannelOptions::get_SingleWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelOptions_get_SingleWriter_mF60EFCDAC858E3467ECBC8955E9127711AA92C7F (ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CSingleWriterU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::set_SingleWriter(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_SingleWriter_m5EC171C4961C32E8131085F5FA6F54D6F2352532 (ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CSingleWriterU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Channels.ChannelOptions::get_SingleReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelOptions_get_SingleReader_mD0B8A91ADD84F7E845B14303630CB574C8096668 (ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CSingleReaderU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::set_SingleReader(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_SingleReader_m6A29978253650BE7B41D813B9C0E4441827068A4 (ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CSingleReaderU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Channels.ChannelOptions::get_AllowSynchronousContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelOptions_get_AllowSynchronousContinuations_mE06F68ABDE57E94342D6F681F63FE3C8EFD36C8B (ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAllowSynchronousContinuationsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::set_AllowSynchronousContinuations(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_AllowSynchronousContinuations_m69109B4B2C4D9678AE2051D416789850E4AC99A1 (ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CAllowSynchronousContinuationsU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions__ctor_m5CD934C9F82FB892AA1B3F66FED1EE4732B26F78 (ChannelOptions_t66A8EC85C1894105449BBEFC22B83B15AF3130DE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void System.Threading.Channels.BoundedChannelOptions::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedChannelOptions__ctor_m84404F2F8389B10329449FFBE40942EC79A2ABD7 (BoundedChannelOptions_tDE303FEAC97009A3DA962B86551F460522FD72F8* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		ChannelOptions__ctor_m5CD934C9F82FB892AA1B3F66FED1EE4732B26F78(__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BoundedChannelOptions__ctor_m84404F2F8389B10329449FFBE40942EC79A2ABD7_RuntimeMethod_var)));
	}

IL_0015:
	{
		int32_t L_2 = ___capacity0;
		BoundedChannelOptions_set_Capacity_m1EF5DE2B6C4F2D5DC788D0B03ED25486AAA32954(__this, L_2, NULL);
		return;
	}
}
// System.Int32 System.Threading.Channels.BoundedChannelOptions::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedChannelOptions_get_Capacity_mB4E033AE3D9C014AFE0A7645EB04FD03F9606E42 (BoundedChannelOptions_tDE303FEAC97009A3DA962B86551F460522FD72F8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____capacity_3;
		return L_0;
	}
}
// System.Void System.Threading.Channels.BoundedChannelOptions::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedChannelOptions_set_Capacity_m1EF5DE2B6C4F2D5DC788D0B03ED25486AAA32954 (BoundedChannelOptions_tDE303FEAC97009A3DA962B86551F460522FD72F8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BoundedChannelOptions_set_Capacity_m1EF5DE2B6C4F2D5DC788D0B03ED25486AAA32954_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___value0;
		__this->____capacity_3 = L_2;
		return;
	}
}
// System.Threading.Channels.BoundedChannelFullMode System.Threading.Channels.BoundedChannelOptions::get_FullMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedChannelOptions_get_FullMode_mB32AFBEA43992334C704F652993D2E450212C943 (BoundedChannelOptions_tDE303FEAC97009A3DA962B86551F460522FD72F8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____mode_4;
		return L_0;
	}
}
// System.Void System.Threading.Channels.BoundedChannelOptions::set_FullMode(System.Threading.Channels.BoundedChannelFullMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedChannelOptions_set_FullMode_mA25A72A2F704B420818AAAB94D4C7659A58F7715 (BoundedChannelOptions_tDE303FEAC97009A3DA962B86551F460522FD72F8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if ((!(((uint32_t)L_0) <= ((uint32_t)3))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___value0;
		__this->____mode_4 = L_1;
		return;
	}

IL_000c:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BoundedChannelOptions_set_FullMode_mA25A72A2F704B420818AAAB94D4C7659A58F7715_RuntimeMethod_var)));
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
// System.Void System.Threading.Channels.UnboundedChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnboundedChannelOptions__ctor_mD4FFDA825BA795079242F13E58C25D4EC5E60FE9 (UnboundedChannelOptions_t83622F787367EA0381FF20CD2D1B1A3A6AEF916A* __this, const RuntimeMethod* method) 
{
	{
		ChannelOptions__ctor_m5CD934C9F82FB892AA1B3F66FED1EE4732B26F78(__this, NULL);
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
// System.Void System.Threading.Channels.ChannelUtilities::Complete(System.Threading.Channels.TaskCompletionSource,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities_Complete_m92F773A1D6EEE612E32F3293D7262C37403C4B57 (TaskCompletionSource_t0BC7EEBC47E32D3D6E9C8D1C1306DCA962350277* ___tcs0, Exception_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetCanceled_m3C598C83B2A05FCBC8ABA338B33160A555C07497_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m8359BDA4D65B0B6DECF30C9A343E8C5134CD6A83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_0 = NULL;
	{
		Exception_t* L_0 = ___error1;
		V_0 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_0, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskCompletionSource_t0BC7EEBC47E32D3D6E9C8D1C1306DCA962350277* L_2 = ___tcs0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_3 = V_0;
		NullCheck(L_3);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4;
		L_4 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = TaskCompletionSource_1_TrySetCanceled_m3C598C83B2A05FCBC8ABA338B33160A555C07497(L_2, L_4, TaskCompletionSource_1_TrySetCanceled_m3C598C83B2A05FCBC8ABA338B33160A555C07497_RuntimeMethod_var);
		return;
	}

IL_0018:
	{
		Exception_t* L_6 = ___error1;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		Exception_t* L_7 = ___error1;
		il2cpp_codegen_runtime_class_init_inline(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var);
		Exception_t* L_8 = ((ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var))->___s_doneWritingSentinel_0;
		if ((((RuntimeObject*)(Exception_t*)L_7) == ((RuntimeObject*)(Exception_t*)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		TaskCompletionSource_t0BC7EEBC47E32D3D6E9C8D1C1306DCA962350277* L_9 = ___tcs0;
		Exception_t* L_10 = ___error1;
		NullCheck(L_9);
		bool L_11;
		L_11 = TaskCompletionSource_1_TrySetException_m8359BDA4D65B0B6DECF30C9A343E8C5134CD6A83(L_9, L_10, TaskCompletionSource_1_TrySetException_m8359BDA4D65B0B6DECF30C9A343E8C5134CD6A83_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		TaskCompletionSource_t0BC7EEBC47E32D3D6E9C8D1C1306DCA962350277* L_12 = ___tcs0;
		NullCheck(L_12);
		bool L_13;
		L_13 = TaskCompletionSource_TrySetResult_m7E36689FBE56E69EECAEB3F0B2F406CF48DC6B8E(L_12, NULL);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelUtilities::QueueWaiter(System.Threading.Channels.AsyncOperation`1<System.Boolean>&,System.Threading.Channels.AsyncOperation`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities_QueueWaiter_m212AD963DFCB817D1094B28E539377DA06D3B709 (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824** ___tail0, AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* ___waiter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* V_0 = NULL;
	{
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824** L_0 = ___tail0;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_1 = *((AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824**)L_0);
		V_0 = L_1;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_3 = ___waiter1;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_4 = ___waiter1;
		NullCheck(L_3);
		AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_inline(L_3, L_4, AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_RuntimeMethod_var);
		goto IL_0022;
	}

IL_000f:
	{
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_5 = ___waiter1;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_6 = V_0;
		NullCheck(L_6);
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_7;
		L_7 = AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_inline(L_6, AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_RuntimeMethod_var);
		NullCheck(L_5);
		AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_inline(L_5, L_7, AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_RuntimeMethod_var);
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_8 = V_0;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_9 = ___waiter1;
		NullCheck(L_8);
		AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_inline(L_8, L_9, AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_RuntimeMethod_var);
	}

IL_0022:
	{
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824** L_10 = ___tail0;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_11 = ___waiter1;
		*((RuntimeObject**)L_10) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_10, (void*)(RuntimeObject*)L_11);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelUtilities::WakeUpWaiters(System.Threading.Channels.AsyncOperation`1<System.Boolean>&,System.Boolean,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities_WakeUpWaiters_m7BFA13351AA615681AAA0B36C20EF2AFFA4FCDE0 (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824** ___listTail0, bool ___result1, Exception_t* ___error2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_TrySetException_mAA11CC5F8C767B8823F0AC4695784455BBEB7369_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_TrySetResult_m2F4182C4CFAF1F0A6CAD06404B0C3FDDC258A4AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* V_0 = NULL;
	AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* V_1 = NULL;
	AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* V_2 = NULL;
	AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* V_3 = NULL;
	bool V_4 = false;
	bool G_B5_0 = false;
	{
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824** L_0 = ___listTail0;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_1 = *((AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824**)L_0);
		V_0 = L_1;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824** L_3 = ___listTail0;
		*((RuntimeObject**)L_3) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)NULL);
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_4 = V_0;
		NullCheck(L_4);
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_5;
		L_5 = AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_inline(L_4, AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_RuntimeMethod_var);
		V_1 = L_5;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_6 = V_1;
		V_2 = L_6;
	}

IL_0012:
	{
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_7 = V_2;
		NullCheck(L_7);
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_8;
		L_8 = AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_inline(L_7, AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_RuntimeMethod_var);
		V_3 = L_8;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_9 = V_2;
		NullCheck(L_9);
		AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_inline(L_9, (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824*)NULL, AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_RuntimeMethod_var);
		Exception_t* L_10 = ___error2;
		if (L_10)
		{
			goto IL_002c;
		}
	}
	{
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_11 = V_2;
		bool L_12 = ___result1;
		NullCheck(L_11);
		bool L_13;
		L_13 = AsyncOperation_1_TrySetResult_m2F4182C4CFAF1F0A6CAD06404B0C3FDDC258A4AB(L_11, L_12, AsyncOperation_1_TrySetResult_m2F4182C4CFAF1F0A6CAD06404B0C3FDDC258A4AB_RuntimeMethod_var);
		G_B5_0 = L_13;
		goto IL_0033;
	}

IL_002c:
	{
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_14 = V_2;
		Exception_t* L_15 = ___error2;
		NullCheck(L_14);
		bool L_16;
		L_16 = AsyncOperation_1_TrySetException_mAA11CC5F8C767B8823F0AC4695784455BBEB7369(L_14, L_15, AsyncOperation_1_TrySetException_mAA11CC5F8C767B8823F0AC4695784455BBEB7369_RuntimeMethod_var);
		G_B5_0 = L_16;
	}

IL_0033:
	{
		V_4 = G_B5_0;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_17 = V_3;
		V_2 = L_17;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_18 = V_2;
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_19 = V_1;
		if ((!(((RuntimeObject*)(AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824*)L_18) == ((RuntimeObject*)(AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824*)L_19))))
		{
			goto IL_0012;
		}
	}

IL_003b:
	{
		return;
	}
}
// System.Exception System.Threading.Channels.ChannelUtilities::CreateInvalidCompletionException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ChannelUtilities_CreateInvalidCompletionException_mDA917668A6E0CD2761ED65B143E898EDE2570B8F (Exception_t* ___inner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___inner0;
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_0, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_0020;
		}
	}
	{
		Exception_t* L_1 = ___inner0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t* L_2 = ___inner0;
		il2cpp_codegen_runtime_class_init_inline(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var);
		Exception_t* L_3 = ((ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var))->___s_doneWritingSentinel_0;
		if ((!(((RuntimeObject*)(Exception_t*)L_2) == ((RuntimeObject*)(Exception_t*)L_3))))
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434* L_4 = (ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434*)il2cpp_codegen_object_new(ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ChannelClosedException__ctor_m86BCA70DF85EC9451D30250CD0F8F19601B33319(L_4, NULL);
		return L_4;
	}

IL_0019:
	{
		Exception_t* L_5 = ___inner0;
		ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434* L_6 = (ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434*)il2cpp_codegen_object_new(ChannelClosedException_t63CE77369EF3CB54AB8D37A31DE4E2A35F081434_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ChannelClosedException__ctor_mC856EE26FD11DBC619F47C29492FD1A7F1B6B95A(L_6, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		Exception_t* L_7 = ___inner0;
		return L_7;
	}
}
// System.Void System.Threading.Channels.ChannelUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities__cctor_m32559B75B09C1DFC545D4878395D333D62C16993 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, _stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904, NULL);
		((ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var))->___s_doneWritingSentinel_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var))->___s_doneWritingSentinel_0), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_1;
		L_1 = Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B((bool)1, Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_RuntimeMethod_var);
		((ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var))->___s_trueTask_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var))->___s_trueTask_1), (void*)L_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_2;
		L_2 = Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B((bool)0, Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_RuntimeMethod_var);
		((ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var))->___s_falseTask_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var))->___s_falseTask_2), (void*)L_2);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_3 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_3, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		NullCheck(L_3);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_3, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		((ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var))->___s_neverCompletingTask_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t8D1FEA2C5D1067C30B484BAACDA3ABD69FD6CB94_il2cpp_TypeInfo_var))->___s_neverCompletingTask_3), (void*)L_4);
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
// System.Void System.Threading.Channels.TaskCompletionSource::.ctor(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource__ctor_mABA8FD4C79F67C9FCDBF2D82D18493402AE6E85D (TaskCompletionSource_t0BC7EEBC47E32D3D6E9C8D1C1306DCA962350277* __this, int32_t ___creationOptions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m2F2EF067B552582B5F78CD2629EF726D897BEF63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___creationOptions0;
		TaskCompletionSource_1__ctor_m2F2EF067B552582B5F78CD2629EF726D897BEF63(__this, L_0, TaskCompletionSource_1__ctor_m2F2EF067B552582B5F78CD2629EF726D897BEF63_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Threading.Channels.TaskCompletionSource::TrySetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_TrySetResult_m7E36689FBE56E69EECAEB3F0B2F406CF48DC6B8E (TaskCompletionSource_t0BC7EEBC47E32D3D6E9C8D1C1306DCA962350277* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mC39B9A6ABFA1873A03DDC5A0C17E261A06E2A22B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	VoidResult_t4FAE53FA1382A104B6F3ED74D21274FFED4AF50E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(VoidResult_t4FAE53FA1382A104B6F3ED74D21274FFED4AF50E));
		VoidResult_t4FAE53FA1382A104B6F3ED74D21274FFED4AF50E L_0 = V_0;
		bool L_1;
		L_1 = TaskCompletionSource_1_TrySetResult_mC39B9A6ABFA1873A03DDC5A0C17E261A06E2A22B(__this, L_0, TaskCompletionSource_1_TrySetResult_mC39B9A6ABFA1873A03DDC5A0C17E261A06E2A22B_RuntimeMethod_var);
		return L_1;
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m41D78EDF25ED931514788FCD6F1CF0BC40553399 (EmbeddedAttribute_tC2F6AECA6544C1D8E144AB5A4250CFDB094E096F* __this, const RuntimeMethod* method) 
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m4E13874030154AF0A5EE521F7BA00EDB36856F7B (IsReadOnlyAttribute_tF50F7B62487F876FFAC182E7AE896D4165FC3C3E* __this, const RuntimeMethod* method) 
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
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_mABD10E4C699B1990196916EF48CC994DFB64DA54 (int32_t ___argument0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___argument0;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1;
		L_1 = ThrowHelper_GetArgumentNullException_m3611480D7C6C3B23DF7D7FE540B14A82DD30F1AD(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentNullException_mABD10E4C699B1990196916EF48CC994DFB64DA54_RuntimeMethod_var)));
	}
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m07EA3FFDA5223D12F5F6395C8B86E40B1E26595A (int32_t ___argument0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___argument0;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1;
		L_1 = ThrowHelper_GetArgumentOutOfRangeException_m0ECACB4E4578D81140762DE392575065B9407419(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_m07EA3FFDA5223D12F5F6395C8B86E40B1E26595A_RuntimeMethod_var)));
	}
}
// System.ArgumentNullException System.ThrowHelper::GetArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* ThrowHelper_GetArgumentNullException_m3611480D7C6C3B23DF7D7FE540B14A82DD30F1AD (int32_t ___argument0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_mBA01F9DD8B1A98894C613C571D2773C0ECFD1DCE(L_0, NULL);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, L_1, NULL);
		return L_2;
	}
}
// System.ArgumentOutOfRangeException System.ThrowHelper::GetArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* ThrowHelper_GetArgumentOutOfRangeException_m0ECACB4E4578D81140762DE392575065B9407419 (int32_t ___argument0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_mBA01F9DD8B1A98894C613C571D2773C0ECFD1DCE(L_0, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, L_1, NULL);
		return L_2;
	}
}
// System.String System.ThrowHelper::GetArgumentName(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_mBA01F9DD8B1A98894C613C571D2773C0ECFD1DCE (int32_t ___argument0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t791CA867470F464E1C2FA437597F284141F7BFF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(ExceptionArgument_t791CA867470F464E1C2FA437597F284141F7BFF4_il2cpp_TypeInfo_var, (&___argument0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		return L_1;
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
// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ValueTask_get_CompletedTask_m1013A05BD0B8D5973F70D8A6D5B07D0D9DEB0936 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_StaticFields*)il2cpp_codegen_static_fields_for(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask__ctor_mEA004E6ACD98F6FEB5231CD966A8069F26FADAF9 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) 
{
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___task0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mABD10E4C699B1990196916EF48CC994DFB64DA54(0, NULL);
	}

IL_0009:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = ___task0;
		__this->____obj_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_2), (void*)L_1);
		__this->____continueOnCapturedContext_4 = (bool)1;
		__this->____token_3 = (int16_t)0;
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTask__ctor_mEA004E6ACD98F6FEB5231CD966A8069F26FADAF9_AdjustorThunk (RuntimeObject* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	ValueTask__ctor_mEA004E6ACD98F6FEB5231CD966A8069F26FADAF9_inline(_thisAdjusted, ___task0, method);
}
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Threading.Tasks.Sources.IValueTaskSource,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask__ctor_m9485C649296A783DE67F7190938E67FFF18D2DDA (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, RuntimeObject* ___source0, int16_t ___token1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mABD10E4C699B1990196916EF48CC994DFB64DA54(1, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___source0;
		__this->____obj_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_2), (void*)L_1);
		int16_t L_2 = ___token1;
		__this->____token_3 = L_2;
		__this->____continueOnCapturedContext_4 = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTask__ctor_m9485C649296A783DE67F7190938E67FFF18D2DDA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___source0, int16_t ___token1, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	ValueTask__ctor_m9485C649296A783DE67F7190938E67FFF18D2DDA_inline(_thisAdjusted, ___source0, ___token1, method);
}
// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Object,System.Int16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask__ctor_m7772A59A3DCD6AB9E26DE6287AB6FEE4B3A92B73 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, RuntimeObject* ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___obj0;
		__this->____obj_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_2), (void*)L_0);
		int16_t L_1 = ___token1;
		__this->____token_3 = L_1;
		bool L_2 = ___continueOnCapturedContext2;
		__this->____continueOnCapturedContext_4 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTask__ctor_m7772A59A3DCD6AB9E26DE6287AB6FEE4B3A92B73_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	ValueTask__ctor_m7772A59A3DCD6AB9E26DE6287AB6FEE4B3A92B73_inline(_thisAdjusted, ___obj0, ___token1, ___continueOnCapturedContext2, method);
}
// System.Int32 System.Threading.Tasks.ValueTask::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTask_GetHashCode_m85289D5F9313610FD912757BFBE04F82F9FFB473 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B2_0);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTask_GetHashCode_m85289D5F9313610FD912757BFBE04F82F9FFB473_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTask_GetHashCode_m85289D5F9313610FD912757BFBE04F82F9FFB473(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Threading.Tasks.ValueTask::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_Equals_m674C3493BA861982E373FFCFDAC6347269CBF4D1 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTask_Equals_m0A5B7AA1BECF60B296E0EBADFB1C9120DA8822D1(__this, ((*(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*)((ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*)(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*)UnBox(L_1, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTask_Equals_m674C3493BA861982E373FFCFDAC6347269CBF4D1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTask_Equals_m674C3493BA861982E373FFCFDAC6347269CBF4D1(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.Threading.Tasks.ValueTask::Equals(System.Threading.Tasks.ValueTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_Equals_m0A5B7AA1BECF60B296E0EBADFB1C9120DA8822D1 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___other0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____obj_2;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_1 = ___other0;
		RuntimeObject* L_2 = L_1.____obj_2;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		int16_t L_3 = __this->____token_3;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_4 = ___other0;
		int16_t L_5 = L_4.____token_3;
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTask_Equals_m0A5B7AA1BECF60B296E0EBADFB1C9120DA8822D1_AdjustorThunk (RuntimeObject* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___other0, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTask_Equals_m0A5B7AA1BECF60B296E0EBADFB1C9120DA8822D1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.Threading.Tasks.ValueTask::op_Equality(System.Threading.Tasks.ValueTask,System.Threading.Tasks.ValueTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_op_Equality_m25CEE5102D4D381DE1F031C36DD5F3FCDD415B5A (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___left0, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___right1, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_0 = ___right1;
		bool L_1;
		L_1 = ValueTask_Equals_m0A5B7AA1BECF60B296E0EBADFB1C9120DA8822D1((&___left0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean System.Threading.Tasks.ValueTask::op_Inequality(System.Threading.Tasks.ValueTask,System.Threading.Tasks.ValueTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_op_Inequality_m85DD0C831E1CCB16EB15A6BCFBAB54273A0A56C6 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___left0, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___right1, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_0 = ___right1;
		bool L_1;
		L_1 = ValueTask_Equals_m0A5B7AA1BECF60B296E0EBADFB1C9120DA8822D1((&___left0), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::AsTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ValueTask_AsTask_m45DF0F1AB28BAE7C36DA777069159708846AC5EC (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B4_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B2_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = il2cpp_unsafe_as<RuntimeObject*>(L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = ValueTask_GetTaskForValueTaskSource_m5BE942C13A73B028AD02F0C3A272E9DFBB2A1D6D(__this, L_5, NULL);
		return L_6;
	}

IL_0021:
	{
		il2cpp_codegen_runtime_class_init_inline(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = ValueTask_get_CompletedTask_m1013A05BD0B8D5973F70D8A6D5B07D0D9DEB0936_inline(NULL);
		G_B4_0 = L_7;
	}

IL_0026:
	{
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ValueTask_AsTask_m45DF0F1AB28BAE7C36DA777069159708846AC5EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* _returnValue;
	_returnValue = ValueTask_AsTask_m45DF0F1AB28BAE7C36DA777069159708846AC5EC(_thisAdjusted, method);
	return _returnValue;
}
// System.Threading.Tasks.ValueTask System.Threading.Tasks.ValueTask::Preserve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ValueTask_Preserve_m3186C9038B63C01E324BF11B3EA27DA3F5F8D35F (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____obj_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = ValueTask_AsTask_m45DF0F1AB28BAE7C36DA777069159708846AC5EC(__this, NULL);
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ValueTask__ctor_mEA004E6ACD98F6FEB5231CD966A8069F26FADAF9_inline((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_3 = (*(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*)__this);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ValueTask_Preserve_m3186C9038B63C01E324BF11B3EA27DA3F5F8D35F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 _returnValue;
	_returnValue = ValueTask_Preserve_m3186C9038B63C01E324BF11B3EA27DA3F5F8D35F(_thisAdjusted, method);
	return _returnValue;
}
// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::GetTaskForValueTaskSource(System.Threading.Tasks.Sources.IValueTaskSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ValueTask_GetTaskForValueTaskSource_m5BE942C13A73B028AD02F0C3A272E9DFBB2A1D6D (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* V_1 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_2 = NULL;
	Exception_t* V_3 = NULL;
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___t0;
		int16_t L_1 = __this->____token_3;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_4 = ___t0;
		int16_t L_5 = __this->____token_3;
		NullCheck(L_4);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_4, L_5);
		il2cpp_codegen_runtime_class_init_inline(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = ValueTask_get_CompletedTask_m1013A05BD0B8D5973F70D8A6D5B07D0D9DEB0936_inline(NULL);
		V_2 = L_6;
		goto IL_005f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{// begin catch(System.Exception)
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			int32_t L_7 = V_0;
			if ((!(((uint32_t)L_7) == ((uint32_t)3))))
			{
				goto IL_0031;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var)));
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8 = ((ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var))))->___s_canceledTask_0;
			V_2 = L_8;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_005f;
		}

IL_0031:
		{
			TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_9 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var)));
			NullCheck(L_9);
			TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var)));
			V_4 = L_9;
			TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_10 = V_4;
			Exception_t* L_11 = V_3;
			NullCheck(L_10);
			bool L_12;
			L_12 = TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE(L_10, L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE_RuntimeMethod_var)));
			TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_13 = V_4;
			NullCheck(L_13);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_14;
			L_14 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var)));
			V_2 = L_14;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_005f;
		}
	}// end catch (depth: 1)

IL_004b:
	{
		RuntimeObject* L_15 = ___t0;
		int16_t L_16 = __this->____token_3;
		ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* L_17 = (ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701*)il2cpp_codegen_object_new(ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		ValueTaskSourceAsTask__ctor_m03024BFA0B8C66CBBD73AB820AD9D3B920BFF7AE(L_17, L_15, L_16, NULL);
		V_1 = L_17;
		ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* L_18 = V_1;
		NullCheck(L_18);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_19;
		L_19 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_18, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		return L_19;
	}

IL_005f:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_20 = V_2;
		return L_20;
	}
}
IL2CPP_EXTERN_C  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ValueTask_GetTaskForValueTaskSource_m5BE942C13A73B028AD02F0C3A272E9DFBB2A1D6D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___t0, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* _returnValue;
	_returnValue = ValueTask_GetTaskForValueTaskSource_m5BE942C13A73B028AD02F0C3A272E9DFBB2A1D6D(_thisAdjusted, ___t0, method);
	return _returnValue;
}
// System.Boolean System.Threading.Tasks.ValueTask::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mC2814057CD742D7EEA51F4601EFE4F96C2DC4F02 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token_3;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_7, L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ValueTask_get_IsCompleted_mC2814057CD742D7EEA51F4601EFE4F96C2DC4F02_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTask_get_IsCompleted_mC2814057CD742D7EEA51F4601EFE4F96C2DC4F02_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Threading.Tasks.ValueTask::get_IsCompletedSuccessfully()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompletedSuccessfully_m311CF899A0D1A2153E532A0369674D88D964F852 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Task_get_Status_m9707FD4B44416BA03FA2FDBEB3D0F0F281D90AD8(L_4, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)5))? 1 : 0);
	}

IL_0020:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token_3;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_7, L_8);
		return (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ValueTask_get_IsCompletedSuccessfully_m311CF899A0D1A2153E532A0369674D88D964F852_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTask_get_IsCompletedSuccessfully_m311CF899A0D1A2153E532A0369674D88D964F852_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Threading.Tasks.ValueTask::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_get_IsFaulted_m93237240E4B965CF3350BCB6D3D8421F6A6736A3 (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token_3;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_7, L_8);
		return (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ValueTask_get_IsFaulted_m93237240E4B965CF3350BCB6D3D8421F6A6736A3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTask_get_IsFaulted_m93237240E4B965CF3350BCB6D3D8421F6A6736A3(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Threading.Tasks.ValueTask::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_get_IsCanceled_m043D9DEEB38D0B5A52EB91B7F9FAF06F5069F9FA (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token_3;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_7, L_8);
		return (bool)((((int32_t)L_9) == ((int32_t)3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ValueTask_get_IsCanceled_m043D9DEEB38D0B5A52EB91B7F9FAF06F5069F9FA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTask_get_IsCanceled_m043D9DEEB38D0B5A52EB91B7F9FAF06F5069F9FA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Threading.Tasks.ValueTask::ThrowIfCompletedUnsuccessfully()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_mD23792FC760A1070B1843A612FAEB6B3200F961B (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = __this->____obj_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
		L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
		V_2 = L_5;
		TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
		return;
	}

IL_0023:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token_3;
		NullCheck(L_7);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTask_ThrowIfCompletedUnsuccessfully_mD23792FC760A1070B1843A612FAEB6B3200F961B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	ValueTask_ThrowIfCompletedUnsuccessfully_mD23792FC760A1070B1843A612FAEB6B3200F961B_inline(_thisAdjusted, method);
}
// System.Runtime.CompilerServices.ValueTaskAwaiter System.Threading.Tasks.ValueTask::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9 ValueTask_GetAwaiter_mE4D1C1B7ED83C204E029F5E08A88AD89CDC029FC (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_0 = (*(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*)__this);
		ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ValueTaskAwaiter__ctor_mB8DBFF246A57E35665AE43DD3F81C9573757FE08_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9 ValueTask_GetAwaiter_mE4D1C1B7ED83C204E029F5E08A88AD89CDC029FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9 _returnValue;
	_returnValue = ValueTask_GetAwaiter_mE4D1C1B7ED83C204E029F5E08A88AD89CDC029FC(_thisAdjusted, method);
	return _returnValue;
}
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable System.Threading.Tasks.ValueTask::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F ValueTask_ConfigureAwait_m01F33AD4A76B1D7E090F1D9FF1FFEB06F3A7498E (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____obj_2;
		int16_t L_1 = __this->____token_3;
		bool L_2 = ___continueOnCapturedContext0;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTask__ctor_m7772A59A3DCD6AB9E26DE6287AB6FEE4B3A92B73_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ConfiguredValueTaskAwaitable__ctor_m8E64A2DA18BB19D517B378B8E1076837D67A094E_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F ValueTask_ConfigureAwait_m01F33AD4A76B1D7E090F1D9FF1FFEB06F3A7498E_AdjustorThunk (RuntimeObject* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64*>(__this + _offset);
	ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F _returnValue;
	_returnValue = ValueTask_ConfigureAwait_m01F33AD4A76B1D7E090F1D9FF1FFEB06F3A7498E_inline(_thisAdjusted, ___continueOnCapturedContext0, method);
	return _returnValue;
}
// System.Void System.Threading.Tasks.ValueTask::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask__cctor_mE3563D0CF75C04994A224B35FDA14DF8778F070D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0;
		memset((&L_0), 0, sizeof(L_0));
		CancellationToken__ctor_m5DAD339D4A9DEF9962B7EF1E30564BADC78E9BD6((&L_0), (bool)1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_Delay_mE80CABEC364832FBA3042CA2460AA3913B74C10B((-1), L_0, NULL);
		((ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_StaticFields*)il2cpp_codegen_static_fields_for(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var))->___s_canceledTask_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_StaticFields*)il2cpp_codegen_static_fields_for(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var))->___s_canceledTask_0), (void*)L_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = Task_Delay_m4B84654B4DAADEC41096D9F01C099CCEA9927A48(0, NULL);
		((ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_StaticFields*)il2cpp_codegen_static_fields_for(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_StaticFields*)il2cpp_codegen_static_fields_for(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_1), (void*)L_2);
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
// System.Void System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask::.ctor(System.Threading.Tasks.Sources.IValueTaskSource,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskSourceAsTask__ctor_m03024BFA0B8C66CBBD73AB820AD9D3B920BFF7AE (ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* __this, RuntimeObject* ___source0, int16_t ___token1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(__this, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		int16_t L_0 = ___token1;
		__this->____token_3 = L_0;
		RuntimeObject* L_1 = ___source0;
		__this->____source_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source_2), (void*)L_1);
		RuntimeObject* L_2 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_il2cpp_TypeInfo_var))->___s_completionAction_1;
		int16_t L_4 = ___token1;
		NullCheck(L_2);
		InterfaceActionInvoker4< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, int32_t >::Invoke(1 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_2, L_3, __this, L_4, 0);
		return;
	}
}
// System.Void System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskSourceAsTask__cctor_m7AE62391843E465F7545666DB0042938E6D08C30 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__4_0_m0D25E8498C88D3E9AE6AAED1AC691BDA8FC2A299_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_il2cpp_TypeInfo_var);
		U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C* L_0 = ((U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__4_0_m0D25E8498C88D3E9AE6AAED1AC691BDA8FC2A299_RuntimeMethod_var), NULL);
		((ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_il2cpp_TypeInfo_var))->___s_completionAction_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_il2cpp_TypeInfo_var))->___s_completionAction_1), (void*)L_1);
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
// System.Void System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8C4B4A58F06533E1699F7E2AAF0E1B55FDB39DC0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C* L_0 = (U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C*)il2cpp_codegen_object_new(U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m59170D28D84FC37690A2AB22C18E8E631C9BF429(L_0, NULL);
		((U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m59170D28D84FC37690A2AB22C18E8E631C9BF429 (U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c::<.cctor>b__4_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__4_0_m0D25E8498C88D3E9AE6AAED1AC691BDA8FC2A299 (U3CU3Ec_t181B37360B0A56D3B1BF8A6C12141557E2A37E7C* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___state0;
		ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* L_1 = ((ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701*)IsInstSealed((RuntimeObject*)L_0, ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701_il2cpp_TypeInfo_var));
		V_0 = L_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->____source_2;
		RuntimeObject* L_4 = L_3;
		V_1 = L_4;
		if (L_4)
		{
			goto IL_001b;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m07EA3FFDA5223D12F5F6395C8B86E40B1E26595A(2, NULL);
		return;
	}

IL_001b:
	{
		ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* L_5 = V_0;
		NullCheck(L_5);
		L_5->____source_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____source_2), (void*)(RuntimeObject*)NULL);
		RuntimeObject* L_6 = V_1;
		ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* L_7 = V_0;
		NullCheck(L_7);
		int16_t L_8 = L_7->____token_3;
		NullCheck(L_6);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_6, L_8);
		V_2 = L_9;
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_10 = V_1;
		ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* L_11 = V_0;
		NullCheck(L_11);
		int16_t L_12 = L_11->____token_3;
		NullCheck(L_10);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_10, L_12);
		ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1(L_13, (bool)0, TaskCompletionSource_1_TrySetResult_m3B4D8D267C1B26945C3C417057DEB50C56B689B1_RuntimeMethod_var);
		goto IL_005d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0045;
		}
		throw e;
	}

CATCH_0045:
	{// begin catch(System.Exception)
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			int32_t L_15 = V_2;
			if ((!(((uint32_t)L_15) == ((uint32_t)3))))
			{
				goto IL_0053;
			}
		}
		{
			ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* L_16 = V_0;
			NullCheck(L_16);
			bool L_17;
			L_17 = TaskCompletionSource_1_TrySetCanceled_m5C6EB9D3086FE734F238D6893CA8656F922D690E(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1_TrySetCanceled_m5C6EB9D3086FE734F238D6893CA8656F922D690E_RuntimeMethod_var)));
			goto IL_005b;
		}

IL_0053:
		{
			ValueTaskSourceAsTask_t6ADF39AA67BD610EE221AC481BE48C1D6937F701* L_18 = V_0;
			Exception_t* L_19 = V_3;
			NullCheck(L_18);
			bool L_20;
			L_20 = TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1_TrySetException_m439CB88F99980A2A50B1588B7ACD795274C8D7EE_RuntimeMethod_var)));
		}

IL_005b:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_005d;
		}
	}// end catch (depth: 1)

IL_005d:
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
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderAttribute__ctor_m22E48F3212EA79B934951F4CF43625A2F50FACF4 (AsyncMethodBuilderAttribute_t758B6CCF08F66F30344158C6D9262034F0C8179A* __this, Type_t* ___builderType0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___builderType0;
		__this->___U3CBuilderTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBuilderTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Type System.Runtime.CompilerServices.AsyncMethodBuilderAttribute::get_BuilderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AsyncMethodBuilderAttribute_get_BuilderType_m2C94FF3965953EFABC50D12642C795D70AA42DD3 (AsyncMethodBuilderAttribute_t758B6CCF08F66F30344158C6D9262034F0C8179A* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CBuilderTypeU3Ek__BackingField_0;
		return L_0;
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
// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08 AsyncValueTaskMethodBuilder_Create_m9CC1BFB233F7D437EC10718AD48513CC0B6B8D5C (const RuntimeMethod* method) 
{
	AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08));
		AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08 L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetStateMachine_m6D23C101B95833CD356F8FFC08F7402B58CEF26D (AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->____methodBuilder_0);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncValueTaskMethodBuilder_SetStateMachine_m6D23C101B95833CD356F8FFC08F7402B58CEF26D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08*>(__this + _offset);
	AsyncValueTaskMethodBuilder_SetStateMachine_m6D23C101B95833CD356F8FFC08F7402B58CEF26D(_thisAdjusted, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetResult_m59EACB647C9731E78331B2E1F7801C1D33ECFAA0 (AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____useBuilder_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&__this->____methodBuilder_0);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_1, NULL);
		return;
	}

IL_0014:
	{
		__this->____haveResult_1 = (bool)1;
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncValueTaskMethodBuilder_SetResult_m59EACB647C9731E78331B2E1F7801C1D33ECFAA0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08*>(__this + _offset);
	AsyncValueTaskMethodBuilder_SetResult_m59EACB647C9731E78331B2E1F7801C1D33ECFAA0(_thisAdjusted, method);
}
// System.Void System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncValueTaskMethodBuilder_SetException_m2234204ADA15D8DA271BC4CF783ABF580D936FA6 (AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->____methodBuilder_0);
		Exception_t* L_1 = ___exception0;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncValueTaskMethodBuilder_SetException_m2234204ADA15D8DA271BC4CF783ABF580D936FA6_AdjustorThunk (RuntimeObject* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08*>(__this + _offset);
	AsyncValueTaskMethodBuilder_SetException_m2234204ADA15D8DA271BC4CF783ABF580D936FA6(_thisAdjusted, ___exception0, method);
}
// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 AsyncValueTaskMethodBuilder_get_Task_mE70843FBEEDCD8478581FF4325D2F496C4631DF4 (AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* __this, const RuntimeMethod* method) 
{
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = __this->____haveResult_1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64));
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		__this->____useBuilder_2 = (bool)1;
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&__this->____methodBuilder_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ValueTask__ctor_mEA004E6ACD98F6FEB5231CD966A8069F26FADAF9_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 AsyncValueTaskMethodBuilder_get_Task_mE70843FBEEDCD8478581FF4325D2F496C4631DF4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncValueTaskMethodBuilder_t56F138F65C3EBC2DB5A9F0D9BD5F9A172D42AF08*>(__this + _offset);
	ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 _returnValue;
	_returnValue = AsyncValueTaskMethodBuilder_get_Task_mE70843FBEEDCD8478581FF4325D2F496C4631DF4(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_m8E64A2DA18BB19D517B378B8E1076837D67A094E (ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_2), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredValueTaskAwaitable__ctor_m8E64A2DA18BB19D517B378B8E1076837D67A094E_AdjustorThunk (RuntimeObject* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method)
{
	ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F*>(__this + _offset);
	ConfiguredValueTaskAwaitable__ctor_m8E64A2DA18BB19D517B378B8E1076837D67A094E_inline(_thisAdjusted, ___value0, method);
}
// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9 ConfiguredValueTaskAwaitable_GetAwaiter_mE4B30CBF74721AD40BE2C76E9EE045987F1B159F (ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_0 = __this->____value_0;
		ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredValueTaskAwaiter__ctor_mA704C6D2A3EF7EB8089C83A47023E748A80E6B61_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9 ConfiguredValueTaskAwaitable_GetAwaiter_mE4B30CBF74721AD40BE2C76E9EE045987F1B159F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F*>(__this + _offset);
	ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9 _returnValue;
	_returnValue = ConfiguredValueTaskAwaitable_GetAwaiter_mE4B30CBF74721AD40BE2C76E9EE045987F1B159F_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_mA704C6D2A3EF7EB8089C83A47023E748A80E6B61 (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_2), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredValueTaskAwaiter__ctor_mA704C6D2A3EF7EB8089C83A47023E748A80E6B61_AdjustorThunk (RuntimeObject* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method)
{
	ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9*>(__this + _offset);
	ConfiguredValueTaskAwaiter__ctor_mA704C6D2A3EF7EB8089C83A47023E748A80E6B61_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_mC43C229029BE82CF10AAF0C011E1E6764264B34A (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_0);
		bool L_1;
		L_1 = ValueTask_get_IsCompleted_mC2814057CD742D7EEA51F4601EFE4F96C2DC4F02_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ConfiguredValueTaskAwaiter_get_IsCompleted_mC43C229029BE82CF10AAF0C011E1E6764264B34A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9*>(__this + _offset);
	bool _returnValue;
	_returnValue = ConfiguredValueTaskAwaiter_get_IsCompleted_mC43C229029BE82CF10AAF0C011E1E6764264B34A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_mBF53F306B3E95C29641AA9F35404A65994427B79 (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_0);
		ValueTask_ThrowIfCompletedUnsuccessfully_mD23792FC760A1070B1843A612FAEB6B3200F961B_inline(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredValueTaskAwaiter_GetResult_mBF53F306B3E95C29641AA9F35404A65994427B79_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9*>(__this + _offset);
	ConfiguredValueTaskAwaiter_GetResult_mBF53F306B3E95C29641AA9F35404A65994427B79_inline(_thisAdjusted, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_OnCompleted_m1C5C82A0158CF5781868A544FBE0B13216BD4657 (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B5_0 = 0;
	int16_t G_B5_1 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_2 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B5_3 = NULL;
	RuntimeObject* G_B5_4 = NULL;
	int32_t G_B4_0 = 0;
	int16_t G_B4_1 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_2 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_3 = NULL;
	RuntimeObject* G_B4_4 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int16_t G_B6_2 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B6_3 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B6_4 = NULL;
	RuntimeObject* G_B6_5 = NULL;
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_0);
		RuntimeObject* L_1 = L_0->____obj_2;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_5 = (&__this->____value_0);
		bool L_6 = L_5->____continueOnCapturedContext_4;
		NullCheck(L_4);
		ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_7;
		L_7 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_4, L_6, NULL);
		V_2 = L_7;
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_8;
		L_8 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_2), NULL);
		V_3 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___continuation0;
		ConfiguredTaskAwaiter_OnCompleted_mB6A56C98F368A70EC9FC750C492A08F62DD7EEA5((&V_3), L_9, NULL);
		return;
	}

IL_0039:
	{
		RuntimeObject* L_10 = V_0;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = il2cpp_unsafe_as<RuntimeObject*>(L_11);
		il2cpp_codegen_runtime_class_init_inline(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_13 = ((ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var))->___s_invokeActionDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ___continuation0;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_15 = (&__this->____value_0);
		int16_t L_16 = L_15->____token_3;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_17 = (&__this->____value_0);
		bool L_18 = L_17->____continueOnCapturedContext_4;
		G_B4_0 = 2;
		G_B4_1 = L_16;
		G_B4_2 = L_14;
		G_B4_3 = L_13;
		G_B4_4 = L_12;
		if (L_18)
		{
			G_B5_0 = 2;
			G_B5_1 = L_16;
			G_B5_2 = L_14;
			G_B5_3 = L_13;
			G_B5_4 = L_12;
			goto IL_0064;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_0065;
	}

IL_0064:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_0065:
	{
		NullCheck(G_B6_5);
		InterfaceActionInvoker4< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, int32_t >::Invoke(1 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, G_B6_5, G_B6_4, G_B6_3, G_B6_2, ((int32_t)(G_B6_1|G_B6_0)));
		return;
	}

IL_006c:
	{
		il2cpp_codegen_runtime_class_init_inline(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_19;
		L_19 = ValueTask_get_CompletedTask_m1013A05BD0B8D5973F70D8A6D5B07D0D9DEB0936_inline(NULL);
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_20 = (&__this->____value_0);
		bool L_21 = L_20->____continueOnCapturedContext_4;
		NullCheck(L_19);
		ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_22;
		L_22 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_19, L_21, NULL);
		V_2 = L_22;
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_23;
		L_23 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_2), NULL);
		V_3 = L_23;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = ___continuation0;
		ConfiguredTaskAwaiter_OnCompleted_mB6A56C98F368A70EC9FC750C492A08F62DD7EEA5((&V_3), L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredValueTaskAwaiter_OnCompleted_m1C5C82A0158CF5781868A544FBE0B13216BD4657_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9*>(__this + _offset);
	ConfiguredValueTaskAwaiter_OnCompleted_m1C5C82A0158CF5781868A544FBE0B13216BD4657(_thisAdjusted, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_UnsafeOnCompleted_m63E6DBC6B03D67A90E0826E4F8A91A5F39480A50 (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int16_t G_B5_0 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B5_2 = NULL;
	RuntimeObject* G_B5_3 = NULL;
	int16_t G_B4_0 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_2 = NULL;
	RuntimeObject* G_B4_3 = NULL;
	int32_t G_B6_0 = 0;
	int16_t G_B6_1 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B6_2 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B6_3 = NULL;
	RuntimeObject* G_B6_4 = NULL;
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_0);
		RuntimeObject* L_1 = L_0->____obj_2;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_5 = (&__this->____value_0);
		bool L_6 = L_5->____continueOnCapturedContext_4;
		NullCheck(L_4);
		ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_7;
		L_7 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_4, L_6, NULL);
		V_2 = L_7;
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_8;
		L_8 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_2), NULL);
		V_3 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___continuation0;
		ConfiguredTaskAwaiter_UnsafeOnCompleted_m4D9FAB57031DB65424E4AACFB07EFF773CAC4618((&V_3), L_9, NULL);
		return;
	}

IL_0039:
	{
		RuntimeObject* L_10 = V_0;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = il2cpp_unsafe_as<RuntimeObject*>(L_11);
		il2cpp_codegen_runtime_class_init_inline(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_13 = ((ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var))->___s_invokeActionDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ___continuation0;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_15 = (&__this->____value_0);
		int16_t L_16 = L_15->____token_3;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_17 = (&__this->____value_0);
		bool L_18 = L_17->____continueOnCapturedContext_4;
		G_B4_0 = L_16;
		G_B4_1 = L_14;
		G_B4_2 = L_13;
		G_B4_3 = L_12;
		if (L_18)
		{
			G_B5_0 = L_16;
			G_B5_1 = L_14;
			G_B5_2 = L_13;
			G_B5_3 = L_12;
			goto IL_0063;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0064;
	}

IL_0063:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0064:
	{
		NullCheck(G_B6_4);
		InterfaceActionInvoker4< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, int32_t >::Invoke(1 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, G_B6_4, G_B6_3, G_B6_2, G_B6_1, G_B6_0);
		return;
	}

IL_006a:
	{
		il2cpp_codegen_runtime_class_init_inline(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_19;
		L_19 = ValueTask_get_CompletedTask_m1013A05BD0B8D5973F70D8A6D5B07D0D9DEB0936_inline(NULL);
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_20 = (&__this->____value_0);
		bool L_21 = L_20->____continueOnCapturedContext_4;
		NullCheck(L_19);
		ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_22;
		L_22 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_19, L_21, NULL);
		V_2 = L_22;
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_23;
		L_23 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_2), NULL);
		V_3 = L_23;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = ___continuation0;
		ConfiguredTaskAwaiter_UnsafeOnCompleted_m4D9FAB57031DB65424E4AACFB07EFF773CAC4618((&V_3), L_24, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ConfiguredValueTaskAwaiter_UnsafeOnCompleted_m63E6DBC6B03D67A90E0826E4F8A91A5F39480A50_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9*>(__this + _offset);
	ConfiguredValueTaskAwaiter_UnsafeOnCompleted_m63E6DBC6B03D67A90E0826E4F8A91A5F39480A50(_thisAdjusted, ___continuation0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Runtime.CompilerServices.ValueTaskAwaiter
IL2CPP_EXTERN_C void ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshal_pinvoke(const ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9& unmarshaled, ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshaled_pinvoke& marshaled)
{
	Exception_t* ____value_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'ValueTaskAwaiter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_1Exception, NULL);
}
IL2CPP_EXTERN_C void ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshal_pinvoke_back(const ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshaled_pinvoke& marshaled, ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9& unmarshaled)
{
	Exception_t* ____value_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'ValueTaskAwaiter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Runtime.CompilerServices.ValueTaskAwaiter
IL2CPP_EXTERN_C void ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshal_pinvoke_cleanup(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Runtime.CompilerServices.ValueTaskAwaiter
IL2CPP_EXTERN_C void ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshal_com(const ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9& unmarshaled, ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshaled_com& marshaled)
{
	Exception_t* ____value_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'ValueTaskAwaiter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_1Exception, NULL);
}
IL2CPP_EXTERN_C void ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshal_com_back(const ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshaled_com& marshaled, ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9& unmarshaled)
{
	Exception_t* ____value_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_value' of type 'ValueTaskAwaiter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____value_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Runtime.CompilerServices.ValueTaskAwaiter
IL2CPP_EXTERN_C void ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshal_com_cleanup(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_marshaled_com& marshaled)
{
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::.ctor(System.Threading.Tasks.ValueTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter__ctor_mB8DBFF246A57E35665AE43DD3F81C9573757FE08 (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_0 = ___value0;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->____obj_2), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTaskAwaiter__ctor_mB8DBFF246A57E35665AE43DD3F81C9573757FE08_AdjustorThunk (RuntimeObject* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method)
{
	ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9*>(__this + _offset);
	ValueTaskAwaiter__ctor_mB8DBFF246A57E35665AE43DD3F81C9573757FE08_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean System.Runtime.CompilerServices.ValueTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_get_IsCompleted_m4A1CAC64CF6954D77DBB0B21EB23FA1DD053A244 (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_1);
		bool L_1;
		L_1 = ValueTask_get_IsCompleted_mC2814057CD742D7EEA51F4601EFE4F96C2DC4F02_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ValueTaskAwaiter_get_IsCompleted_m4A1CAC64CF6954D77DBB0B21EB23FA1DD053A244_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTaskAwaiter_get_IsCompleted_m4A1CAC64CF6954D77DBB0B21EB23FA1DD053A244_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_GetResult_m1967A73F16A0035CE2F67CDDD43504F20D60B528 (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_1);
		ValueTask_ThrowIfCompletedUnsuccessfully_mD23792FC760A1070B1843A612FAEB6B3200F961B_inline(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTaskAwaiter_GetResult_m1967A73F16A0035CE2F67CDDD43504F20D60B528_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9*>(__this + _offset);
	ValueTaskAwaiter_GetResult_m1967A73F16A0035CE2F67CDDD43504F20D60B528_inline(_thisAdjusted, method);
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_OnCompleted_m8CF036D714B6762A225FDB39B424D9C084D1D734 (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_1);
		RuntimeObject* L_1 = L_0->____obj_2;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
		L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
		V_2 = L_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		TaskAwaiter_OnCompleted_mF7EA19A71D3695AF9B41A32133E9047C97AA4159((&V_2), L_6, NULL);
		return;
	}

IL_0026:
	{
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = il2cpp_unsafe_as<RuntimeObject*>(L_8);
		il2cpp_codegen_runtime_class_init_inline(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_10 = ((ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var))->___s_invokeActionDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___continuation0;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_12 = (&__this->____value_1);
		int16_t L_13 = L_12->____token_3;
		NullCheck(L_9);
		InterfaceActionInvoker4< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, int32_t >::Invoke(1 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_13, 3);
		return;
	}

IL_0047:
	{
		il2cpp_codegen_runtime_class_init_inline(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14;
		L_14 = ValueTask_get_CompletedTask_m1013A05BD0B8D5973F70D8A6D5B07D0D9DEB0936_inline(NULL);
		NullCheck(L_14);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15;
		L_15 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_14, NULL);
		V_2 = L_15;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___continuation0;
		TaskAwaiter_OnCompleted_mF7EA19A71D3695AF9B41A32133E9047C97AA4159((&V_2), L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTaskAwaiter_OnCompleted_m8CF036D714B6762A225FDB39B424D9C084D1D734_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9*>(__this + _offset);
	ValueTaskAwaiter_OnCompleted_m8CF036D714B6762A225FDB39B424D9C084D1D734(_thisAdjusted, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_UnsafeOnCompleted_m638DB5D62AE988061ADB1B4F48034C2ADA6B390A (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_1);
		RuntimeObject* L_1 = L_0->____obj_2;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
		L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
		V_2 = L_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		TaskAwaiter_UnsafeOnCompleted_mF1081A8F37EBEA02847BAE72365A1F65DAA932D7((&V_2), L_6, NULL);
		return;
	}

IL_0026:
	{
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = il2cpp_unsafe_as<RuntimeObject*>(L_8);
		il2cpp_codegen_runtime_class_init_inline(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_10 = ((ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var))->___s_invokeActionDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___continuation0;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_12 = (&__this->____value_1);
		int16_t L_13 = L_12->____token_3;
		NullCheck(L_9);
		InterfaceActionInvoker4< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, int32_t >::Invoke(1 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_13, 1);
		return;
	}

IL_0047:
	{
		il2cpp_codegen_runtime_class_init_inline(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14;
		L_14 = ValueTask_get_CompletedTask_m1013A05BD0B8D5973F70D8A6D5B07D0D9DEB0936_inline(NULL);
		NullCheck(L_14);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15;
		L_15 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_14, NULL);
		V_2 = L_15;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___continuation0;
		TaskAwaiter_UnsafeOnCompleted_mF1081A8F37EBEA02847BAE72365A1F65DAA932D7((&V_2), L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTaskAwaiter_UnsafeOnCompleted_m638DB5D62AE988061ADB1B4F48034C2ADA6B390A_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9*>(__this + _offset);
	ValueTaskAwaiter_UnsafeOnCompleted_m638DB5D62AE988061ADB1B4F48034C2ADA6B390A(_thisAdjusted, ___continuation0, method);
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter__cctor_mD755C62EBBA4449C84ECC25EB2D3B17E9799C25E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__9_0_m9DE45F558B89D2D950F290C7731E379FC49EA265_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_il2cpp_TypeInfo_var);
		U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A* L_0 = ((U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__9_0_m9DE45F558B89D2D950F290C7731E379FC49EA265_RuntimeMethod_var), NULL);
		((ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var))->___s_invokeActionDelegate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9_il2cpp_TypeInfo_var))->___s_invokeActionDelegate_0), (void*)L_1);
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
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBD2889BD510AE64620E5AD99CD15EA8C17ABE039 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A* L_0 = (U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A*)il2cpp_codegen_object_new(U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m74C7A3C417BC239F2D4F977F946500551932F6E4(L_0, NULL);
		((U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m74C7A3C417BC239F2D4F977F946500551932F6E4 (U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.ValueTaskAwaiter/<>c::<.cctor>b__9_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__9_0_m9DE45F558B89D2D950F290C7731E379FC49EA265 (U3CU3Ec_t9862925F09FD9A5F017BF96F2090D87056F6311A* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___state0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)IsInstSealed((RuntimeObject*)L_0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		V_0 = L_1;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m07EA3FFDA5223D12F5F6395C8B86E40B1E26595A(2, NULL);
		return;
	}

IL_0011:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_0;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
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
// System.Void System.Runtime.CompilerServices.__BlockReflectionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __BlockReflectionAttribute__ctor_mDA4811D2FB7C5CCF78FF1E1280D1D9C84482A92D (__BlockReflectionAttribute_tC942C054C78ADBE13736EB3D11725B23C4A20DD6* __this, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.StackTraceHiddenAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTraceHiddenAttribute__ctor_mDDE4D0DFCE0F6B84250F6E02560A94E6CF1F4655 (StackTraceHiddenAttribute_tFD8B80D8B9045EA1F0473C38809C30F5E165F15F* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Subtraction_m5D2D4FFD4BE9EA857665C94C207D745C164BD717_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Cross_m4FED62DEE3F5D56489ECFC310E5007B25D730805_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector21, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___vector10;
		float L_1 = L_0.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___vector21;
		float L_3 = L_2.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___vector10;
		float L_5 = L_4.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___vector21;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___vector10;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___vector21;
		float L_11 = L_10.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12 = ___vector10;
		float L_13 = L_12.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_14 = ___vector21;
		float L_15 = L_14.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_16 = ___vector10;
		float L_17 = L_16.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_18 = ___vector21;
		float L_19 = L_18.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_20 = ___vector10;
		float L_21 = L_20.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_22 = ___vector21;
		float L_23 = L_22.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_Normalize_m4C57D163C6A541513FD2BE0C4C2B77FB079283C8_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		float L_1;
		L_1 = Vector3_Length_mDF23146EF181AD73566BCF37688ED3221C84AB22_inline((&___value0), NULL);
		V_0 = L_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___value0;
		float L_3 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4;
		L_4 = Vector3_op_Division_m51E43B54188B9A27492E7ECBEE87DEF65580C1B5_inline(L_2, L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_5 = ___value0;
		float L_6 = L_5.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_7 = ___value0;
		float L_8 = L_7.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_9 = ___value0;
		float L_10 = L_9.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11 = ___value0;
		float L_12 = L_11.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_13 = ___value0;
		float L_14 = L_13.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_15 = ___value0;
		float L_16 = L_15.___Z_2;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_12)))), ((float)il2cpp_codegen_multiply(L_14, L_16))));
		float L_17 = V_1;
		float L_18;
		L_18 = sqrtf(L_17);
		V_2 = L_18;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_19 = ___value0;
		float L_20 = L_19.___X_0;
		float L_21 = V_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_22 = ___value0;
		float L_23 = L_22.___Y_1;
		float L_24 = V_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_25 = ___value0;
		float L_26 = L_25.___Z_2;
		float L_27 = V_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_28), ((float)(L_20/L_21)), ((float)(L_23/L_24)), ((float)(L_26/L_27)), /*hidden argument*/NULL);
		return L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector10, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___vector21, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___vector10;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___vector21;
		float L_3 = L_2.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___vector10;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___vector21;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___vector10;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___vector21;
		float L_11 = L_10.___Z_2;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_LengthSquared_m4FABBDA4075F50315AA06D7E9048603D695C80C3_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = (*(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)__this);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = (*(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)__this);
		float L_3;
		L_3 = Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		float L_4 = __this->___X_0;
		float L_5 = __this->___X_0;
		float L_6 = __this->___Y_1;
		float L_7 = __this->___Y_1;
		float L_8 = __this->___Z_2;
		float L_9 = __this->___Z_2;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_7)))), ((float)il2cpp_codegen_multiply(L_8, L_9))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Division_m51E43B54188B9A27492E7ECBEE87DEF65580C1B5_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value10, float ___value21, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___value21;
		V_0 = ((float)((1.0f)/L_0));
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___value10;
		float L_2 = L_1.___X_0;
		float L_3 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		float L_6 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_7 = ___value10;
		float L_8 = L_7.___Z_2;
		float L_9 = V_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_10), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_9)), /*hidden argument*/NULL);
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Plane_Equals_m3658C1030EDADC65021DB291F7FA2A1077F00999_inline (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A ___other0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* L_1 = (&__this->___Normal_0);
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_2 = ___other0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3 = L_2.___Normal_0;
		bool L_4;
		L_4 = Vector3_Equals_mFDFB6E4AC826DFE3EDADB911D23B16DBEF175ABA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		float L_5 = __this->___D_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_6 = ___other0;
		float L_7 = L_6.___D_1;
		return (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* L_8 = (&__this->___Normal_0);
		float L_9 = L_8->___X_0;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_10 = ___other0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_11 = L_10.___Normal_0;
		float L_12 = L_11.___X_0;
		if ((!(((float)L_9) == ((float)L_12))))
		{
			goto IL_0082;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* L_13 = (&__this->___Normal_0);
		float L_14 = L_13->___Y_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_15 = ___other0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_16 = L_15.___Normal_0;
		float L_17 = L_16.___Y_1;
		if ((!(((float)L_14) == ((float)L_17))))
		{
			goto IL_0082;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* L_18 = (&__this->___Normal_0);
		float L_19 = L_18->___Z_2;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_20 = ___other0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_21 = L_20.___Normal_0;
		float L_22 = L_21.___Z_2;
		if ((!(((float)L_19) == ((float)L_22))))
		{
			goto IL_0082;
		}
	}
	{
		float L_23 = __this->___D_1;
		Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A L_24 = ___other0;
		float L_25 = L_24.___D_1;
		return (bool)((((float)L_23) == ((float)L_25))? 1 : 0);
	}

IL_0082:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Plane_Equals_mE8BB777B43A258B73C1E44B688594F8DB2EC5ED0_inline (Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Plane_Equals_m3658C1030EDADC65021DB291F7FA2A1077F00999_inline(__this, ((*(Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*)((Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*)(Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A*)UnBox(L_1, Plane_t4B301DDCCBDFB52B1C277C6743022ED9763C0E1A_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m6B95AB4627B3C9279A472F03977012B491EA026D_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Vector2_Equals_mDFAEFA30B7F95DF9827D61E161AE1C7002A72AED(__this, ((*(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)((Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)UnBox(L_1, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberGroupSeparator_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_m2195C189D5A14EC605E4B85FB30E4AECF1099749_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value21, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___value10;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___value21;
		float L_3 = L_2.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___value21;
		float L_7 = L_6.___Y_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Length_m127C8E769CD34302E90D4DAE1BDC86A3E4A33790_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = (*(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)__this);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = (*(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)__this);
		float L_3;
		L_3 = Vector2_Dot_m2195C189D5A14EC605E4B85FB30E4AECF1099749_inline(L_1, L_2, NULL);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5;
		L_5 = sqrtf(L_4);
		return L_5;
	}

IL_0020:
	{
		float L_6 = __this->___X_0;
		float L_7 = __this->___X_0;
		float L_8 = __this->___Y_1;
		float L_9 = __this->___Y_1;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_7)), ((float)il2cpp_codegen_multiply(L_8, L_9))));
		float L_10 = V_1;
		float L_11;
		L_11 = sqrtf(L_10);
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_LengthSquared_m4DA8A01DBE5EC9A4F3276C40DD1ECE1FCCE05FB9_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = (*(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)__this);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = (*(Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA*)__this);
		float L_3;
		L_3 = Vector2_Dot_m2195C189D5A14EC605E4B85FB30E4AECF1099749_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		float L_4 = __this->___X_0;
		float L_5 = __this->___X_0;
		float L_6 = __this->___Y_1;
		float L_7 = __this->___Y_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_7))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Subtraction_m5B12B8922F40EC927313AFF9187BF46700E4788E_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Division_mD704B243C99FCD6838646E6A0F801EB767E30A12_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value10, float ___value21, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___value21;
		V_0 = ((float)((1.0f)/L_0));
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___value10;
		float L_2 = L_1.___X_0;
		float L_3 = V_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		float L_6 = V_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_7), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_6)), /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Multiply_m5DA88787CCA831F7D97F46AC3D52AC424B0231A1_inline (float ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___left0;
		float L_1 = ___left0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_2), L_0, L_1, /*hidden argument*/NULL);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_3 = ___right1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4;
		L_4 = Vector2_op_Multiply_m64EA130D0C8A825DA1E3CC713ED72DD7988B83F3_inline(L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Addition_m5AEDFEFD6A9506D1124AEB037F0BF38FD5D878E3_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Multiply_m64EA130D0C8A825DA1E3CC713ED72DD7988B83F3_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Multiply_m8EB1029BB7FD782F48E2FAAF9ACCBC29F901D633_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, float ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = ___right1;
		float L_2 = ___right1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_3), L_1, L_2, /*hidden argument*/NULL);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4;
		L_4 = Vector2_op_Multiply_m64EA130D0C8A825DA1E3CC713ED72DD7988B83F3_inline(L_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_Division_m74BF4999E76FF0C5DB36D2A4D615F65DE775C307_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m169281D36745C6F9890E5825147E9DE5ED8A7D6B((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA Vector2_op_UnaryNegation_mC489C1E2186814FDA7BF6E010950045EF6F6CC7F_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___value0, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0;
		L_0 = Vector2_get_Zero_m36FB324642EE833496744D9A050C9ED26B4BF1D0(NULL);
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_1 = ___value0;
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_2;
		L_2 = Vector2_op_Subtraction_m5B12B8922F40EC927313AFF9187BF46700E4788E_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_CopyTo_m8D7D147DE06F2083BFF9A01B3C62630DA75B7B61_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		Vector2_CopyTo_mDDD08F43F5C977D4D7265FA3699ACB7B9E55DEC8(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m22EE79D4B551EDF12F65D56F0C8FF68968CFABC0_inline (Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___left0, Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t2B6759AFF7E354C75D0E6B386230D75F987F53EA L_0 = ___right1;
		bool L_1;
		L_1 = Vector2_Equals_mDFAEFA30B7F95DF9827D61E161AE1C7002A72AED((&___left0), L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_m4C4625EE9E480A0B192A87A537FD9EC82A6745A1_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Vector3_Equals_mFDFB6E4AC826DFE3EDADB911D23B16DBEF175ABA(__this, ((*(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)((Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)UnBox(L_1, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Length_mDF23146EF181AD73566BCF37688ED3221C84AB22_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = (*(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)__this);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = (*(Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74*)__this);
		float L_3;
		L_3 = Vector3_Dot_mC992D5A41958369A6363F9318061FE13EC6CC4E7_inline(L_1, L_2, NULL);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5;
		L_5 = sqrtf(L_4);
		return L_5;
	}

IL_0020:
	{
		float L_6 = __this->___X_0;
		float L_7 = __this->___X_0;
		float L_8 = __this->___Y_1;
		float L_9 = __this->___Y_1;
		float L_10 = __this->___Z_2;
		float L_11 = __this->___Z_2;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_7)), ((float)il2cpp_codegen_multiply(L_8, L_9)))), ((float)il2cpp_codegen_multiply(L_10, L_11))));
		float L_12 = V_1;
		float L_13;
		L_13 = sqrtf(L_12);
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Multiply_m85DCD131468B1E2CDECCC420A87367ADA67A0ED9_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, float ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = ___right1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m9475463CCA9CA06A42AA0B41F7BCFD106639581B((&L_2), L_1, /*hidden argument*/NULL);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3;
		L_3 = Vector3_op_Multiply_m8EEE05F1692F7E5F16F40ACBCED3C975AD8E559F_inline(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Addition_m489A8D4D4534E48BFFC2610DEAB9E356F78E9A20_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Multiply_m8EEE05F1692F7E5F16F40ACBCED3C975AD8E559F_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Multiply_m13AA8243EC77FF9DCC3E9B07ECAE09E0BB3AD8FE_inline (float ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___left0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m9475463CCA9CA06A42AA0B41F7BCFD106639581B((&L_1), L_0, /*hidden argument*/NULL);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_3;
		L_3 = Vector3_op_Multiply_m8EEE05F1692F7E5F16F40ACBCED3C975AD8E559F_inline(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_Division_mAED4236D3C3497699344F7795D6B7F93F5CC278D_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___left0, Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_mB75022564532EF792E6524A9E30888FDE3EDFAFA((&L_12), ((float)(L_1/L_3)), ((float)(L_5/L_7)), ((float)(L_9/L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 Vector3_op_UnaryNegation_m6D4876FBF052E59B725FDAB146ED2DA5650F97F7_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_0;
		L_0 = Vector3_get_Zero_mC55B2179B6D1A9251EB3B41384A2EA418EFD6B0A(NULL);
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_1 = ___value0;
		Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74 L_2;
		L_2 = Vector3_op_Subtraction_m5D2D4FFD4BE9EA857665C94C207D745C164BD717_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1;
		L_1 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_NullArgumentNullRef_mA3072D049995FC076C81366072003B82FFD7AC5B(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_3 = ___index1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = ___index1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___array0;
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_0018:
	{
		String_t* L_6;
		L_6 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ArgumentOutOfRangeException_m0CC0F173F70B02AA1F5D2DD69D2DC9924D91803A(NULL);
		int32_t L_7 = ___index1;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_Format_m9BBA345A344FA6EA2067151B289DD08CF8392188(L_6, L_9, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_RuntimeMethod_var)));
	}

IL_0033:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___index1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))) >= ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_14;
		L_14 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ElementsInSourceIsGreaterThanDestination_m6532FB7E4299FBA5C367D126B292F3706DE582F9(NULL);
		int32_t L_15 = ___index1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_Format_m9BBA345A344FA6EA2067151B289DD08CF8392188(L_14, L_17, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_RuntimeMethod_var)));
	}

IL_0051:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = ___array0;
		int32_t L_21 = ___index1;
		float L_22 = __this->___X_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (float)L_22);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___array0;
		int32_t L_24 = ___index1;
		float L_25 = __this->___Y_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 1))), (float)L_25);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = ___array0;
		int32_t L_27 = ___index1;
		float L_28 = __this->___Z_2;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 2))), (float)L_28);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_CopyTo_mA16E6E2DE0BDA44E513DE61574DA11FF283AC419_inline (Vector3_t7FA6E2442D84D8FE41DA9ACA7EA1170B20C70D74* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		Vector3_CopyTo_mA5B5C27A326B8F858DA9A65C89FC59CCC61AB8EE_inline(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mF7D2E422209A01B1F1EE782EE1CEBAE7B3B72E51_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Vector4_Equals_m48D255BD8A67CA811BA969873186A001D7BC02CE(__this, ((*(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)((Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)UnBox(L_1, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m2802186971C959363FC1D5F3CD4220D9D64550A9_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___vector10, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___vector21, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___vector10;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___vector21;
		float L_3 = L_2.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___vector10;
		float L_5 = L_4.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___vector21;
		float L_7 = L_6.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___vector10;
		float L_9 = L_8.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___vector21;
		float L_11 = L_10.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___vector10;
		float L_13 = L_12.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___vector21;
		float L_15 = L_14.___W_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Length_m93E4C625DD055A8665C1D1037F727C2452C885FE_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = (*(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)__this);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = (*(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)__this);
		float L_3;
		L_3 = Vector4_Dot_m2802186971C959363FC1D5F3CD4220D9D64550A9_inline(L_1, L_2, NULL);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5;
		L_5 = sqrtf(L_4);
		return L_5;
	}

IL_0020:
	{
		float L_6 = __this->___X_0;
		float L_7 = __this->___X_0;
		float L_8 = __this->___Y_1;
		float L_9 = __this->___Y_1;
		float L_10 = __this->___Z_2;
		float L_11 = __this->___Z_2;
		float L_12 = __this->___W_3;
		float L_13 = __this->___W_3;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_7)), ((float)il2cpp_codegen_multiply(L_8, L_9)))), ((float)il2cpp_codegen_multiply(L_10, L_11)))), ((float)il2cpp_codegen_multiply(L_12, L_13))));
		float L_14 = V_1;
		float L_15;
		L_15 = sqrtf(L_14);
		return L_15;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_LengthSquared_m32E38BAF00F1390A52904324F1C13A12271B87C4_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_mF9ADDE94233F6F1EFE8C0B0204E0B2037351F8CC(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = (*(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)__this);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = (*(Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9*)__this);
		float L_3;
		L_3 = Vector4_Dot_m2802186971C959363FC1D5F3CD4220D9D64550A9_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		float L_4 = __this->___X_0;
		float L_5 = __this->___X_0;
		float L_6 = __this->___Y_1;
		float L_7 = __this->___Y_1;
		float L_8 = __this->___Z_2;
		float L_9 = __this->___Z_2;
		float L_10 = __this->___W_3;
		float L_11 = __this->___W_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_7)))), ((float)il2cpp_codegen_multiply(L_8, L_9)))), ((float)il2cpp_codegen_multiply(L_10, L_11))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Subtraction_m15527DD71F5BA01CE0B948FF0BD7A00B0B935743_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___left0;
		float L_13 = L_12.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___right1;
		float L_15 = L_14.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_16), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Division_mBE4D08CB3C79F762575F6105966F730081331E69_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value10, float ___value21, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___value21;
		V_0 = ((float)((1.0f)/L_0));
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___value10;
		float L_2 = L_1.___X_0;
		float L_3 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___value10;
		float L_5 = L_4.___Y_1;
		float L_6 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_7 = ___value10;
		float L_8 = L_7.___Z_2;
		float L_9 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___value10;
		float L_11 = L_10.___W_3;
		float L_12 = V_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_13), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_11, L_12)), /*hidden argument*/NULL);
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Addition_m019D527FA9C977C7ACC41935AFEDF69588795141_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___left0;
		float L_13 = L_12.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___right1;
		float L_15 = L_14.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Multiply_mCEB726CB782C1B434FBEE7279C8D8668C5C5DD66_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___left0;
		float L_13 = L_12.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___right1;
		float L_15 = L_14.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_16), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_Division_mAC8CA5113511E8F1723211A71F5D21D53C05096B_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___left0;
		float L_1 = L_0.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2 = ___right1;
		float L_3 = L_2.___X_0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_4 = ___left0;
		float L_5 = L_4.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_6 = ___right1;
		float L_7 = L_6.___Y_1;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_8 = ___left0;
		float L_9 = L_8.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_10 = ___right1;
		float L_11 = L_10.___Z_2;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_12 = ___left0;
		float L_13 = L_12.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_14 = ___right1;
		float L_15 = L_14.___W_3;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m5F7FC8C70D4819524D157ABF226AF6EA70D34825((&L_16), ((float)(L_1/L_3)), ((float)(L_5/L_7)), ((float)(L_9/L_11)), ((float)(L_13/L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 Vector4_op_UnaryNegation_m76A09B6C9FFC0C21B6E1E46C11E8A5360A772AFC_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___value0, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0;
		L_0 = Vector4_get_Zero_mB81FF2CB69C92EF6A4F4CE80EA1080BD933088D0(NULL);
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_1 = ___value0;
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_2;
		L_2 = Vector4_op_Subtraction_m15527DD71F5BA01CE0B948FF0BD7A00B0B935743_inline(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1;
		L_1 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_NullArgumentNullRef_mA3072D049995FC076C81366072003B82FFD7AC5B(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_3 = ___index1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = ___index1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___array0;
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_0018:
	{
		String_t* L_6;
		L_6 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ArgumentOutOfRangeException_m0CC0F173F70B02AA1F5D2DD69D2DC9924D91803A(NULL);
		int32_t L_7 = ___index1;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_Format_m9BBA345A344FA6EA2067151B289DD08CF8392188(L_6, L_9, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_RuntimeMethod_var)));
	}

IL_0033:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___index1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))) >= ((int32_t)4)))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_14;
		L_14 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_get_Arg_ElementsInSourceIsGreaterThanDestination_m6532FB7E4299FBA5C367D126B292F3706DE582F9(NULL);
		int32_t L_15 = ___index1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = U3C2b014251U2D439bU2D459aU2D885cU2D061d3c8490abU3ESR_Format_m9BBA345A344FA6EA2067151B289DD08CF8392188(L_14, L_17, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_RuntimeMethod_var)));
	}

IL_0051:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = ___array0;
		int32_t L_21 = ___index1;
		float L_22 = __this->___X_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (float)L_22);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ___array0;
		int32_t L_24 = ___index1;
		float L_25 = __this->___Y_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 1))), (float)L_25);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = ___array0;
		int32_t L_27 = ___index1;
		float L_28 = __this->___Z_2;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 2))), (float)L_28);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = ___array0;
		int32_t L_30 = ___index1;
		float L_31 = __this->___W_3;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_30, 3))), (float)L_31);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_CopyTo_mF75273503DCD2931F68BD498F7052B1492C09A72_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		Vector4_CopyTo_m17BC0896260DEE32E1F368C958C66236C44B6E53_inline(__this, L_0, 0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m5F588677B8F528732DF26A87A7F5513316D19F1B_inline (Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___left0, Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 ___right1, const RuntimeMethod* method) 
{
	{
		Vector4_t23A06B6F15E9FD29390178074D9BE059EA56B8B9 L_0 = ___right1;
		bool L_1;
		L_1 = Vector4_Equals_m48D255BD8A67CA811BA969873186A001D7BC02CE((&___left0), L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mF9D76F00F8826E3850ABB43FD04D4A3ED246B857_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_StaticFields*)il2cpp_codegen_static_fields_for(SR_t54598BD2F1AF7228ACC1A64987FD6350832C55AB_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_mEA004E6ACD98F6FEB5231CD966A8069F26FADAF9_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) 
{
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___task0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mABD10E4C699B1990196916EF48CC994DFB64DA54(0, NULL);
	}

IL_0009:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = ___task0;
		__this->____obj_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_2), (void*)L_1);
		__this->____continueOnCapturedContext_4 = (bool)1;
		__this->____token_3 = (int16_t)0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m9485C649296A783DE67F7190938E67FFF18D2DDA_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, RuntimeObject* ___source0, int16_t ___token1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mABD10E4C699B1990196916EF48CC994DFB64DA54(1, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___source0;
		__this->____obj_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_2), (void*)L_1);
		int16_t L_2 = ___token1;
		__this->____token_3 = L_2;
		__this->____continueOnCapturedContext_4 = (bool)1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask__ctor_m7772A59A3DCD6AB9E26DE6287AB6FEE4B3A92B73_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, RuntimeObject* ___obj0, int16_t ___token1, bool ___continueOnCapturedContext2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___obj0;
		__this->____obj_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____obj_2), (void*)L_0);
		int16_t L_1 = ___token1;
		__this->____token_3 = L_1;
		bool L_2 = ___continueOnCapturedContext2;
		__this->____continueOnCapturedContext_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ValueTask_get_CompletedTask_m1013A05BD0B8D5973F70D8A6D5B07D0D9DEB0936_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_StaticFields*)il2cpp_codegen_static_fields_for(ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompleted_mC2814057CD742D7EEA51F4601EFE4F96C2DC4F02_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token_3;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_7, L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_get_IsCompletedSuccessfully_m311CF899A0D1A2153E532A0369674D88D964F852_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____obj_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Task_get_Status_m9707FD4B44416BA03FA2FDBEB3D0F0F281D90AD8(L_4, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)5))? 1 : 0);
	}

IL_0020:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token_3;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_7, L_8);
		return (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_ThrowIfCompletedUnsuccessfully_mD23792FC760A1070B1843A612FAEB6B3200F961B_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = __this->____obj_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)IsInstClass((RuntimeObject*)L_2, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_1;
		NullCheck(L_4);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
		L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
		V_2 = L_5;
		TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
		return;
	}

IL_0023:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = __this->____token_3;
		NullCheck(L_7);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16) */, IValueTaskSource_t2BDE6310400267D054C670A0BF558A9B445119FB_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter__ctor_mB8DBFF246A57E35665AE43DD3F81C9573757FE08_inline (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_0 = ___value0;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_1))->____obj_2), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaitable__ctor_m8E64A2DA18BB19D517B378B8E1076837D67A094E_inline (ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_2), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F ValueTask_ConfigureAwait_m01F33AD4A76B1D7E090F1D9FF1FFEB06F3A7498E_inline (ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____obj_2;
		int16_t L_1 = __this->____token_3;
		bool L_2 = ___continueOnCapturedContext0;
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTask__ctor_m7772A59A3DCD6AB9E26DE6287AB6FEE4B3A92B73_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ConfiguredValueTaskAwaitable__ctor_m8E64A2DA18BB19D517B378B8E1076837D67A094E_inline((&L_4), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter__ctor_mA704C6D2A3EF7EB8089C83A47023E748A80E6B61_inline (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 ___value0, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->____obj_2), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9 ConfiguredValueTaskAwaitable_GetAwaiter_mE4B30CBF74721AD40BE2C76E9EE045987F1B159F_inline (ConfiguredValueTaskAwaitable_t40717BDBB78150B516FC13D87F92BB9E545F219F* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64 L_0 = __this->____value_0;
		ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConfiguredValueTaskAwaiter__ctor_mA704C6D2A3EF7EB8089C83A47023E748A80E6B61_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfiguredValueTaskAwaiter_get_IsCompleted_mC43C229029BE82CF10AAF0C011E1E6764264B34A_inline (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_0);
		bool L_1;
		L_1 = ValueTask_get_IsCompleted_mC2814057CD742D7EEA51F4601EFE4F96C2DC4F02_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConfiguredValueTaskAwaiter_GetResult_mBF53F306B3E95C29641AA9F35404A65994427B79_inline (ConfiguredValueTaskAwaiter_t11883018E771D9B1C72E49B73E6DBC5A25B1C8F9* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_0);
		ValueTask_ThrowIfCompletedUnsuccessfully_mD23792FC760A1070B1843A612FAEB6B3200F961B_inline(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_get_IsCompleted_m4A1CAC64CF6954D77DBB0B21EB23FA1DD053A244_inline (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_1);
		bool L_1;
		L_1 = ValueTask_get_IsCompleted_mC2814057CD742D7EEA51F4601EFE4F96C2DC4F02_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter_GetResult_m1967A73F16A0035CE2F67CDDD43504F20D60B528_inline (ValueTaskAwaiter_tA336C441C54F766FDCAEBFF25B394B7EE7F8E5A9* __this, const RuntimeMethod* method) 
{
	{
		ValueTask_t5C98D5CAC3B406C762667FAE967292268B370D64* L_0 = (&__this->____value_1);
		ValueTask_ThrowIfCompletedUnsuccessfully_mD23792FC760A1070B1843A612FAEB6B3200F961B_inline(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_1_set_Next_m78308AE8B28D6F7FAB96BE7C3998F988D9962D70_gshared_inline (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* __this, AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* ___value0, const RuntimeMethod* method) 
{
	{
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_0 = ___value0;
		__this->___U3CNextU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNextU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* AsyncOperation_1_get_Next_mD962DBC00B5CA85ED80CB570194E1143EB05FCA9_gshared_inline (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* __this, const RuntimeMethod* method) 
{
	{
		AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824* L_0 = (AsyncOperation_1_tE789F1EA10C9EEC5DAB2929AA90851E7E9CC3824*)__this->___U3CNextU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)__this->____task_0;
		return L_0;
	}
}
