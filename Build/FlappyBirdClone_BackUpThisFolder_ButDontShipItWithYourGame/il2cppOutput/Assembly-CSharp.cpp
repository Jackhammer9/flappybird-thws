#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// FlappyScript
struct FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC;
// FloorMoveScript
struct FloorMoveScript_t9A037105946F1EC440BB199D717472A504529D63;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PipeDestroyerScript
struct PipeDestroyerScript_t8970A500BB019082C30F193DA6F1996F60A7867A;
// RandomBackgroundScript
struct RandomBackgroundScript_tE9BA8BFDBA93D3F7AF470944C66975B635F5A6A6;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScoreManagerScript
struct ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506;
// SerialHandler
struct SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894;
// System.IO.Ports.SerialPort
struct SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636;
// SpawnerScript
struct SpawnerScript_t37F7AF986ED6AECA135FD46CD2DF3E7E839C75A7;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// SerialHandler/DataReceivedEventHandler
struct DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1;

IL2CPP_EXTERN_C RuntimeClass* DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF;
IL2CPP_EXTERN_C String_t* _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9;
IL2CPP_EXTERN_C String_t* _stringLiteralA0D93F80EB041C74D940218478A47C361ECB361A;
IL2CPP_EXTERN_C String_t* _stringLiteralA7DCAFB7BF90AB70BCBB4853D8BCEA52992529F0;
IL2CPP_EXTERN_C String_t* _stringLiteralBFEAB9E13D073101FFAA79F0336006B48CF74886;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlappyScript_OnDataReceived_mFA00D26FEEA23EE69D10B1F7C531CEE816820015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___events_3)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// GameState
struct GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE 
{
public:
	// System.Int32 GameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameState_t220CA73AF42CC54408408696DBFFAB424F309FAE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.IO.Ports.SerialPort
struct SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636  : public Component_t015539CFEAEEBFD7619041FE006475373E0D71DF
{
public:

public:
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// FlappyScript/FlappyYAxisTravelState
struct FlappyYAxisTravelState_tF83B998230887EF251F5DADBC251E4D376C759EF 
{
public:
	// System.Int32 FlappyScript/FlappyYAxisTravelState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FlappyYAxisTravelState_tF83B998230887EF251F5DADBC251E4D376C759EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// GameStateManager
struct GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67  : public RuntimeObject
{
public:

public:
};

struct GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_StaticFields
{
public:
	// GameState GameStateManager::<GameState>k__BackingField
	int32_t ___U3CGameStateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CGameStateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_StaticFields, ___U3CGameStateU3Ek__BackingField_0)); }
	inline int32_t get_U3CGameStateU3Ek__BackingField_0() const { return ___U3CGameStateU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CGameStateU3Ek__BackingField_0() { return &___U3CGameStateU3Ek__BackingField_0; }
	inline void set_U3CGameStateU3Ek__BackingField_0(int32_t value)
	{
		___U3CGameStateU3Ek__BackingField_0 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// SerialHandler/DataReceivedEventHandler
struct DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CameraFollow::cameraZ
	float ___cameraZ_4;
	// UnityEngine.Transform CameraFollow::Player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Player_5;

public:
	inline static int32_t get_offset_of_cameraZ_4() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___cameraZ_4)); }
	inline float get_cameraZ_4() const { return ___cameraZ_4; }
	inline float* get_address_of_cameraZ_4() { return &___cameraZ_4; }
	inline void set_cameraZ_4(float value)
	{
		___cameraZ_4 = value;
	}

	inline static int32_t get_offset_of_Player_5() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___Player_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Player_5() const { return ___Player_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Player_5() { return &___Player_5; }
	inline void set_Player_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_5), (void*)value);
	}
};


// FlappyScript
struct FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip FlappyScript::FlyAudioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___FlyAudioClip_4;
	// UnityEngine.AudioClip FlappyScript::DeathAudioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___DeathAudioClip_5;
	// UnityEngine.AudioClip FlappyScript::ScoredAudioClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___ScoredAudioClip_6;
	// UnityEngine.Sprite FlappyScript::GetReadySprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___GetReadySprite_7;
	// System.Single FlappyScript::RotateUpSpeed
	float ___RotateUpSpeed_8;
	// System.Single FlappyScript::RotateDownSpeed
	float ___RotateDownSpeed_9;
	// UnityEngine.GameObject FlappyScript::IntroGUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___IntroGUI_10;
	// UnityEngine.GameObject FlappyScript::DeathGUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___DeathGUI_11;
	// UnityEngine.Collider2D FlappyScript::restartButtonGameCollider
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___restartButtonGameCollider_12;
	// System.Single FlappyScript::VelocityPerJump
	float ___VelocityPerJump_13;
	// System.Single FlappyScript::XSpeed
	float ___XSpeed_14;
	// System.String FlappyScript::portName
	String_t* ___portName_15;
	// System.Int32 FlappyScript::baudRate
	int32_t ___baudRate_16;
	// SerialHandler FlappyScript::serialHandler
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * ___serialHandler_17;
	// System.Boolean FlappyScript::doOnce
	bool ___doOnce_18;
	// System.Boolean FlappyScript::doOnce2
	bool ___doOnce2_19;
	// FlappyScript/FlappyYAxisTravelState FlappyScript::flappyYAxisTravelState
	int32_t ___flappyYAxisTravelState_20;
	// UnityEngine.Vector3 FlappyScript::birdRotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___birdRotation_21;

public:
	inline static int32_t get_offset_of_FlyAudioClip_4() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___FlyAudioClip_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_FlyAudioClip_4() const { return ___FlyAudioClip_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_FlyAudioClip_4() { return &___FlyAudioClip_4; }
	inline void set_FlyAudioClip_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___FlyAudioClip_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FlyAudioClip_4), (void*)value);
	}

	inline static int32_t get_offset_of_DeathAudioClip_5() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___DeathAudioClip_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_DeathAudioClip_5() const { return ___DeathAudioClip_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_DeathAudioClip_5() { return &___DeathAudioClip_5; }
	inline void set_DeathAudioClip_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___DeathAudioClip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeathAudioClip_5), (void*)value);
	}

	inline static int32_t get_offset_of_ScoredAudioClip_6() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___ScoredAudioClip_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_ScoredAudioClip_6() const { return ___ScoredAudioClip_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_ScoredAudioClip_6() { return &___ScoredAudioClip_6; }
	inline void set_ScoredAudioClip_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___ScoredAudioClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScoredAudioClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_GetReadySprite_7() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___GetReadySprite_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_GetReadySprite_7() const { return ___GetReadySprite_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_GetReadySprite_7() { return &___GetReadySprite_7; }
	inline void set_GetReadySprite_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___GetReadySprite_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetReadySprite_7), (void*)value);
	}

	inline static int32_t get_offset_of_RotateUpSpeed_8() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___RotateUpSpeed_8)); }
	inline float get_RotateUpSpeed_8() const { return ___RotateUpSpeed_8; }
	inline float* get_address_of_RotateUpSpeed_8() { return &___RotateUpSpeed_8; }
	inline void set_RotateUpSpeed_8(float value)
	{
		___RotateUpSpeed_8 = value;
	}

	inline static int32_t get_offset_of_RotateDownSpeed_9() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___RotateDownSpeed_9)); }
	inline float get_RotateDownSpeed_9() const { return ___RotateDownSpeed_9; }
	inline float* get_address_of_RotateDownSpeed_9() { return &___RotateDownSpeed_9; }
	inline void set_RotateDownSpeed_9(float value)
	{
		___RotateDownSpeed_9 = value;
	}

	inline static int32_t get_offset_of_IntroGUI_10() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___IntroGUI_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_IntroGUI_10() const { return ___IntroGUI_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_IntroGUI_10() { return &___IntroGUI_10; }
	inline void set_IntroGUI_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___IntroGUI_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IntroGUI_10), (void*)value);
	}

	inline static int32_t get_offset_of_DeathGUI_11() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___DeathGUI_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_DeathGUI_11() const { return ___DeathGUI_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_DeathGUI_11() { return &___DeathGUI_11; }
	inline void set_DeathGUI_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___DeathGUI_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeathGUI_11), (void*)value);
	}

	inline static int32_t get_offset_of_restartButtonGameCollider_12() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___restartButtonGameCollider_12)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_restartButtonGameCollider_12() const { return ___restartButtonGameCollider_12; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_restartButtonGameCollider_12() { return &___restartButtonGameCollider_12; }
	inline void set_restartButtonGameCollider_12(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___restartButtonGameCollider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___restartButtonGameCollider_12), (void*)value);
	}

	inline static int32_t get_offset_of_VelocityPerJump_13() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___VelocityPerJump_13)); }
	inline float get_VelocityPerJump_13() const { return ___VelocityPerJump_13; }
	inline float* get_address_of_VelocityPerJump_13() { return &___VelocityPerJump_13; }
	inline void set_VelocityPerJump_13(float value)
	{
		___VelocityPerJump_13 = value;
	}

	inline static int32_t get_offset_of_XSpeed_14() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___XSpeed_14)); }
	inline float get_XSpeed_14() const { return ___XSpeed_14; }
	inline float* get_address_of_XSpeed_14() { return &___XSpeed_14; }
	inline void set_XSpeed_14(float value)
	{
		___XSpeed_14 = value;
	}

	inline static int32_t get_offset_of_portName_15() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___portName_15)); }
	inline String_t* get_portName_15() const { return ___portName_15; }
	inline String_t** get_address_of_portName_15() { return &___portName_15; }
	inline void set_portName_15(String_t* value)
	{
		___portName_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portName_15), (void*)value);
	}

	inline static int32_t get_offset_of_baudRate_16() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___baudRate_16)); }
	inline int32_t get_baudRate_16() const { return ___baudRate_16; }
	inline int32_t* get_address_of_baudRate_16() { return &___baudRate_16; }
	inline void set_baudRate_16(int32_t value)
	{
		___baudRate_16 = value;
	}

	inline static int32_t get_offset_of_serialHandler_17() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___serialHandler_17)); }
	inline SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * get_serialHandler_17() const { return ___serialHandler_17; }
	inline SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 ** get_address_of_serialHandler_17() { return &___serialHandler_17; }
	inline void set_serialHandler_17(SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * value)
	{
		___serialHandler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialHandler_17), (void*)value);
	}

	inline static int32_t get_offset_of_doOnce_18() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___doOnce_18)); }
	inline bool get_doOnce_18() const { return ___doOnce_18; }
	inline bool* get_address_of_doOnce_18() { return &___doOnce_18; }
	inline void set_doOnce_18(bool value)
	{
		___doOnce_18 = value;
	}

	inline static int32_t get_offset_of_doOnce2_19() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___doOnce2_19)); }
	inline bool get_doOnce2_19() const { return ___doOnce2_19; }
	inline bool* get_address_of_doOnce2_19() { return &___doOnce2_19; }
	inline void set_doOnce2_19(bool value)
	{
		___doOnce2_19 = value;
	}

	inline static int32_t get_offset_of_flappyYAxisTravelState_20() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___flappyYAxisTravelState_20)); }
	inline int32_t get_flappyYAxisTravelState_20() const { return ___flappyYAxisTravelState_20; }
	inline int32_t* get_address_of_flappyYAxisTravelState_20() { return &___flappyYAxisTravelState_20; }
	inline void set_flappyYAxisTravelState_20(int32_t value)
	{
		___flappyYAxisTravelState_20 = value;
	}

	inline static int32_t get_offset_of_birdRotation_21() { return static_cast<int32_t>(offsetof(FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC, ___birdRotation_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_birdRotation_21() const { return ___birdRotation_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_birdRotation_21() { return &___birdRotation_21; }
	inline void set_birdRotation_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___birdRotation_21 = value;
	}
};


// FloorMoveScript
struct FloorMoveScript_t9A037105946F1EC440BB199D717472A504529D63  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PipeDestroyerScript
struct PipeDestroyerScript_t8970A500BB019082C30F193DA6F1996F60A7867A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// RandomBackgroundScript
struct RandomBackgroundScript_tE9BA8BFDBA93D3F7AF470944C66975B635F5A6A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite[] RandomBackgroundScript::Backgrounds
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___Backgrounds_4;

public:
	inline static int32_t get_offset_of_Backgrounds_4() { return static_cast<int32_t>(offsetof(RandomBackgroundScript_tE9BA8BFDBA93D3F7AF470944C66975B635F5A6A6, ___Backgrounds_4)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_Backgrounds_4() const { return ___Backgrounds_4; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_Backgrounds_4() { return &___Backgrounds_4; }
	inline void set_Backgrounds_4(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___Backgrounds_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Backgrounds_4), (void*)value);
	}
};


// ScoreManagerScript
struct ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ScoreManagerScript::previousScore
	int32_t ___previousScore_5;
	// UnityEngine.Sprite[] ScoreManagerScript::numberSprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___numberSprites_6;
	// UnityEngine.SpriteRenderer ScoreManagerScript::Units
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___Units_7;
	// UnityEngine.SpriteRenderer ScoreManagerScript::Tens
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___Tens_8;
	// UnityEngine.SpriteRenderer ScoreManagerScript::Hundreds
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___Hundreds_9;

public:
	inline static int32_t get_offset_of_previousScore_5() { return static_cast<int32_t>(offsetof(ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506, ___previousScore_5)); }
	inline int32_t get_previousScore_5() const { return ___previousScore_5; }
	inline int32_t* get_address_of_previousScore_5() { return &___previousScore_5; }
	inline void set_previousScore_5(int32_t value)
	{
		___previousScore_5 = value;
	}

	inline static int32_t get_offset_of_numberSprites_6() { return static_cast<int32_t>(offsetof(ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506, ___numberSprites_6)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_numberSprites_6() const { return ___numberSprites_6; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_numberSprites_6() { return &___numberSprites_6; }
	inline void set_numberSprites_6(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___numberSprites_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberSprites_6), (void*)value);
	}

	inline static int32_t get_offset_of_Units_7() { return static_cast<int32_t>(offsetof(ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506, ___Units_7)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_Units_7() const { return ___Units_7; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_Units_7() { return &___Units_7; }
	inline void set_Units_7(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___Units_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Units_7), (void*)value);
	}

	inline static int32_t get_offset_of_Tens_8() { return static_cast<int32_t>(offsetof(ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506, ___Tens_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_Tens_8() const { return ___Tens_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_Tens_8() { return &___Tens_8; }
	inline void set_Tens_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___Tens_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tens_8), (void*)value);
	}

	inline static int32_t get_offset_of_Hundreds_9() { return static_cast<int32_t>(offsetof(ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506, ___Hundreds_9)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_Hundreds_9() const { return ___Hundreds_9; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_Hundreds_9() { return &___Hundreds_9; }
	inline void set_Hundreds_9(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___Hundreds_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Hundreds_9), (void*)value);
	}
};

struct ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_StaticFields
{
public:
	// System.Int32 ScoreManagerScript::<Score>k__BackingField
	int32_t ___U3CScoreU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CScoreU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_StaticFields, ___U3CScoreU3Ek__BackingField_4)); }
	inline int32_t get_U3CScoreU3Ek__BackingField_4() const { return ___U3CScoreU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CScoreU3Ek__BackingField_4() { return &___U3CScoreU3Ek__BackingField_4; }
	inline void set_U3CScoreU3Ek__BackingField_4(int32_t value)
	{
		___U3CScoreU3Ek__BackingField_4 = value;
	}
};


// SerialHandler
struct SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.IO.Ports.SerialPort SerialHandler::serialPort
	SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * ___serialPort_4;
	// System.String SerialHandler::portName
	String_t* ___portName_5;
	// System.Int32 SerialHandler::baudRate
	int32_t ___baudRate_6;
	// SerialHandler/DataReceivedEventHandler SerialHandler::OnDataReceived
	DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * ___OnDataReceived_7;

public:
	inline static int32_t get_offset_of_serialPort_4() { return static_cast<int32_t>(offsetof(SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894, ___serialPort_4)); }
	inline SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * get_serialPort_4() const { return ___serialPort_4; }
	inline SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 ** get_address_of_serialPort_4() { return &___serialPort_4; }
	inline void set_serialPort_4(SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * value)
	{
		___serialPort_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialPort_4), (void*)value);
	}

	inline static int32_t get_offset_of_portName_5() { return static_cast<int32_t>(offsetof(SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894, ___portName_5)); }
	inline String_t* get_portName_5() const { return ___portName_5; }
	inline String_t** get_address_of_portName_5() { return &___portName_5; }
	inline void set_portName_5(String_t* value)
	{
		___portName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portName_5), (void*)value);
	}

	inline static int32_t get_offset_of_baudRate_6() { return static_cast<int32_t>(offsetof(SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894, ___baudRate_6)); }
	inline int32_t get_baudRate_6() const { return ___baudRate_6; }
	inline int32_t* get_address_of_baudRate_6() { return &___baudRate_6; }
	inline void set_baudRate_6(int32_t value)
	{
		___baudRate_6 = value;
	}

	inline static int32_t get_offset_of_OnDataReceived_7() { return static_cast<int32_t>(offsetof(SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894, ___OnDataReceived_7)); }
	inline DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * get_OnDataReceived_7() const { return ___OnDataReceived_7; }
	inline DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 ** get_address_of_OnDataReceived_7() { return &___OnDataReceived_7; }
	inline void set_OnDataReceived_7(DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * value)
	{
		___OnDataReceived_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDataReceived_7), (void*)value);
	}
};


// SpawnerScript
struct SpawnerScript_t37F7AF986ED6AECA135FD46CD2DF3E7E839C75A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject SpawnerScript::SpawnObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SpawnObject_4;
	// UnityEngine.GameObject[] SpawnerScript::SpawnObjects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___SpawnObjects_5;
	// System.Single SpawnerScript::timeMin
	float ___timeMin_6;
	// System.Single SpawnerScript::timeMax
	float ___timeMax_7;

public:
	inline static int32_t get_offset_of_SpawnObject_4() { return static_cast<int32_t>(offsetof(SpawnerScript_t37F7AF986ED6AECA135FD46CD2DF3E7E839C75A7, ___SpawnObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SpawnObject_4() const { return ___SpawnObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SpawnObject_4() { return &___SpawnObject_4; }
	inline void set_SpawnObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SpawnObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpawnObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_SpawnObjects_5() { return static_cast<int32_t>(offsetof(SpawnerScript_t37F7AF986ED6AECA135FD46CD2DF3E7E839C75A7, ___SpawnObjects_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_SpawnObjects_5() const { return ___SpawnObjects_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_SpawnObjects_5() { return &___SpawnObjects_5; }
	inline void set_SpawnObjects_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___SpawnObjects_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpawnObjects_5), (void*)value);
	}

	inline static int32_t get_offset_of_timeMin_6() { return static_cast<int32_t>(offsetof(SpawnerScript_t37F7AF986ED6AECA135FD46CD2DF3E7E839C75A7, ___timeMin_6)); }
	inline float get_timeMin_6() const { return ___timeMin_6; }
	inline float* get_address_of_timeMin_6() { return &___timeMin_6; }
	inline void set_timeMin_6(float value)
	{
		___timeMin_6 = value;
	}

	inline static int32_t get_offset_of_timeMax_7() { return static_cast<int32_t>(offsetof(SpawnerScript_t37F7AF986ED6AECA135FD46CD2DF3E7E839C75A7, ___timeMax_7)); }
	inline float get_timeMax_7() const { return ___timeMax_7; }
	inline float* get_address_of_timeMax_7() { return &___timeMax_7; }
	inline void set_timeMax_7(float value)
	{
		___timeMax_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  m_Items[1];

public:
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mBD77C0F802DCADE1347AF93EA32016846C791C65_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void SerialHandler::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialHandler__ctor_mA25BADE3D3690C475FF84A50F9AAA06987F02B34 (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, String_t* ___portName0, int32_t ___baudRate1, const RuntimeMethod* method);
// System.Void SerialHandler/DataReceivedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceivedEventHandler__ctor_m2E378291EB0F1AB8DC29DE3AB4E65F76A99E6BFA (DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SerialHandler::add_OnDataReceived(SerialHandler/DataReceivedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialHandler_add_OnDataReceived_m5B1C9DA9E8B2F0E76E39EE5599BA9DC0F3820A73 (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m806A477EAE0AE49AA9C5E518A0800A3D80D873DC (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267 (const RuntimeMethod* method);
// GameState GameStateManager::get_GameState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline (const RuntimeMethod* method);
// System.Void FlappyScript::MoveBirdOnXAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_MoveBirdOnXAxis_m667776F9995246A752D350B415A9D8D438FA151B (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method);
// System.Boolean SerialHandler::IsDataAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerialHandler_IsDataAvailable_m3C301D3CFD644D4DF85E1C3260D0662134813B30 (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, const RuntimeMethod* method);
// System.String SerialHandler::ReadSerialData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerialHandler_ReadSerialData_mDA77F16833BEA362F60F60BFA04F76A2B3EA7E3C (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void SerialHandler::SendData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialHandler_SendData_m6C6727DECF92E5E989C76D076EE287EF7CA0D046 (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, String_t* ___data0, const RuntimeMethod* method);
// System.Void FlappyScript::BoostOnYAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_BoostOnYAxis_m90D55056705887691811D10BEF7C781F5785D76A (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method);
// System.Void GameStateManager::set_GameState(GameState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameStateManager_set_GameState_mDDF43E18E26C5AFD46769809A303C69FA5525EA9_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ScoreManagerScript::set_Score(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreManagerScript_set_Score_m74AF40FBDD56AC3BF6A807FE6AD6B4F3657BEC32_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean FlappyScript::WasTouchedOrClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlappyScript_WasTouchedOrClicked_m09049F9BF44EB7A9CB30B2049E615D9F793AA512 (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_mD28A0EC932762710AFA0BBB9CCC63716C3BD064D (const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m565DDA076AD6E8E57D4F3F698A760D7B5ACBF505 (const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* Input_get_touches_m970BDA1D26415B34ADDF828BFCDC5FC9E1DAEF7A (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m689599122AC9F35D1FCCA2BF2414387472B0799F (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_m4E3DB1CD03E916476426AB3F78B26F21690EE26B (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapPoint_m7DE104FCAB7C3F5E4921114C3D27A5439D6A871C (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_loadedLevelName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_loadedLevelName_m2E24DAC26D1319218FD233C57423C466AD5E2714 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_LoadLevel_mA9392C3DEA2974952023BDE233EC9D4FE5177A7A (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody2D::get_mass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_mass_mE62570BBAB2CE7ACC2FA3B20EE5EB8FBDBEF019F (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// System.Void FlappyScript::FixFlappyRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_FixFlappyRotation_m592A9A0638CF14C1FE8F61AD371B8A10C41107CD (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_mFE7C663734D39FA395E90CC845D9C04449B1A75A (String_t* ___buttonName0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 ScoreManagerScript::get_Score()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline (const RuntimeMethod* method);
// System.Void FlappyScript::FlappyDies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_FlappyDies_m96C440F631909C9E3C6DC7982F51F700BDB451A1 (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void SerialHandler::OpenSerialPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialHandler_OpenSerialPort_m2088788FD503461D5349344CA7F2C116EBF27F04 (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort__ctor_m464EB123CC799E2A34D958656E746086028AC1DD (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, String_t* ___portName0, int32_t ___baudRate1, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_Open_m8AD6DD164A6CA49E736D1D3C7CADE54264335A63 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::set_ReadTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_set_ReadTimeout_mD5EC3B8F392013DDBB2331064ABD232486B4C012 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.IO.Ports.SerialPort::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerialPort_get_IsOpen_m67DAEA08CB7DDEF1144419F6C5F09F4E3C3D3D39 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// System.String System.IO.Ports.SerialPort::ReadLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerialPort_ReadLine_mA740CD9A1AAB5E391B35493D56845843EBE07ADE (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Void SerialHandler/DataReceivedEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceivedEventHandler_Invoke_mEFA0D7C536ADA1C58C080529C05EAF31F2D239D6 (DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * __this, String_t* ___receivedData0, const RuntimeMethod* method);
// System.Int32 System.IO.Ports.SerialPort::get_BytesToRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerialPort_get_BytesToRead_m7A5A8C9C0DB60A9943AE1197D9B2B6A92DC35413 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_Close_m288C294F0F4AF5508E932492937DFCD348AB9C34 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_Write_mECAFF3087D6028991DD52C63A415EFD20FAC7286 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void SpawnerScript::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerScript_Spawn_m5F2F197B327FDC72CD8F3CF47D57801A25A045B2 (SpawnerScript_t37F7AF986ED6AECA135FD46CD2DF3E7E839C75A7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mBD77C0F802DCADE1347AF93EA32016846C791C65_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
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
// System.Void CameraFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Start_mC13DAB135378AADB3E72275F75CDEAF53343810D (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		// cameraZ = transform.position.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_4();
		__this->set_cameraZ_4(L_2);
		// }
		return;
	}
}
// System.Void CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_m9762CC5B7A2D28B7B8116BA8DE2342AFB654AB08 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = new Vector3(Player.position.x + 0.5f, 0, cameraZ);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_Player_5();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_cameraZ_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), ((float)il2cpp_codegen_add((float)L_3, (float)(0.5f))), (0.0f), L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m29F88CCFD2ED12A7BCC75A9BBA892CEF179C83DE (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FlappyScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_Start_m624511A3BA9735D628EEA3708A65FE1EAEF19863 (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlappyScript_OnDataReceived_mFA00D26FEEA23EE69D10B1F7C531CEE816820015_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialHandler = new SerialHandler(portName, baudRate);
		String_t* L_0 = __this->get_portName_15();
		int32_t L_1 = __this->get_baudRate_16();
		SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_2 = (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 *)il2cpp_codegen_object_new(SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894_il2cpp_TypeInfo_var);
		SerialHandler__ctor_mA25BADE3D3690C475FF84A50F9AAA06987F02B34(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_serialHandler_17(L_2);
		// serialHandler.OnDataReceived += OnDataReceived;
		SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_3 = __this->get_serialHandler_17();
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_4 = (DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 *)il2cpp_codegen_object_new(DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1_il2cpp_TypeInfo_var);
		DataReceivedEventHandler__ctor_m2E378291EB0F1AB8DC29DE3AB4E65F76A99E6BFA(L_4, __this, (intptr_t)((intptr_t)FlappyScript_OnDataReceived_mFA00D26FEEA23EE69D10B1F7C531CEE816820015_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		SerialHandler_add_OnDataReceived_m5B1C9DA9E8B2F0E76E39EE5599BA9DC0F3820A73(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlappyScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_Update_mFD131FB05A5111F38D60FF80C790DC0A1E812199 (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B7_0 = NULL;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B8_1 = NULL;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B12_0 = NULL;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B13_1 = NULL;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B20_0 = NULL;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B19_0 = NULL;
	String_t* G_B21_0 = NULL;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B21_1 = NULL;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B33_0 = NULL;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B32_0 = NULL;
	String_t* G_B34_0 = NULL;
	SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * G_B34_1 = NULL;
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m806A477EAE0AE49AA9C5E518A0800A3D80D873DC(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267(/*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (GameStateManager.GameState == GameState.Intro)
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_00ee;
		}
	}
	{
		// MoveBirdOnXAxis();
		FlappyScript_MoveBirdOnXAxis_m667776F9995246A752D350B415A9D8D438FA151B(__this, /*hidden argument*/NULL);
		// if (serialHandler.IsDataAvailable())
		SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_2 = __this->get_serialHandler_17();
		NullCheck(L_2);
		bool L_3;
		L_3 = SerialHandler_IsDataAvailable_m3C301D3CFD644D4DF85E1C3260D0662134813B30(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00c4;
		}
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			// string receivedData = serialHandler.ReadSerialData();
			SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_4 = __this->get_serialHandler_17();
			NullCheck(L_4);
			String_t* L_5;
			L_5 = SerialHandler_ReadSerialData_mDA77F16833BEA362F60F60BFA04F76A2B3EA7E3C(L_4, /*hidden argument*/NULL);
			// if (receivedData == "1")
			bool L_6;
			L_6 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_5, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0082;
			}
		}

IL_0045:
		{
			// serialHandler.SendData(GameStateManager.GameState == GameState.Playing ? "1" : "0");
			SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_7 = __this->get_serialHandler_17();
			IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
			int32_t L_8;
			L_8 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
			G_B6_0 = L_7;
			if ((((int32_t)L_8) == ((int32_t)1)))
			{
				G_B7_0 = L_7;
				goto IL_005a;
			}
		}

IL_0053:
		{
			G_B8_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
			G_B8_1 = G_B6_0;
			goto IL_005f;
		}

IL_005a:
		{
			G_B8_0 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
			G_B8_1 = G_B7_0;
		}

IL_005f:
		{
			NullCheck(G_B8_1);
			SerialHandler_SendData_m6C6727DECF92E5E989C76D076EE287EF7CA0D046(G_B8_1, G_B8_0, /*hidden argument*/NULL);
			// BoostOnYAxis();
			FlappyScript_BoostOnYAxis_m90D55056705887691811D10BEF7C781F5785D76A(__this, /*hidden argument*/NULL);
			// GameStateManager.GameState = GameState.Playing;
			IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
			GameStateManager_set_GameState_mDDF43E18E26C5AFD46769809A303C69FA5525EA9_inline(1, /*hidden argument*/NULL);
			// IntroGUI.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_IntroGUI_10();
			NullCheck(L_9);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
			// ScoreManagerScript.Score = 0;
			ScoreManagerScript_set_Score_m74AF40FBDD56AC3BF6A807FE6AD6B4F3657BEC32_inline(0, /*hidden argument*/NULL);
		}

IL_0082:
		{
			// }
			goto IL_00c4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0084;
		}
		throw e;
	}

CATCH_0084:
	{ // begin catch(System.Exception)
		{
			// catch (System.Exception)
			// serialHandler.SendData(GameStateManager.GameState == GameState.Playing ? "1" : "0");
			SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_10 = __this->get_serialHandler_17();
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var)));
			int32_t L_11;
			L_11 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
			G_B11_0 = L_10;
			if ((((int32_t)L_11) == ((int32_t)1)))
			{
				G_B12_0 = L_10;
				goto IL_009a;
			}
		}

IL_0093:
		{
			G_B13_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024));
			G_B13_1 = G_B11_0;
			goto IL_009f;
		}

IL_009a:
		{
			G_B13_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3));
			G_B13_1 = G_B12_0;
		}

IL_009f:
		{
			NullCheck(G_B13_1);
			SerialHandler_SendData_m6C6727DECF92E5E989C76D076EE287EF7CA0D046(G_B13_1, G_B13_0, /*hidden argument*/NULL);
			// BoostOnYAxis();
			FlappyScript_BoostOnYAxis_m90D55056705887691811D10BEF7C781F5785D76A(__this, /*hidden argument*/NULL);
			// GameStateManager.GameState = GameState.Playing;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var)));
			GameStateManager_set_GameState_mDDF43E18E26C5AFD46769809A303C69FA5525EA9_inline(1, /*hidden argument*/NULL);
			// IntroGUI.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_IntroGUI_10();
			NullCheck(L_12);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
			// ScoreManagerScript.Score = 0;
			ScoreManagerScript_set_Score_m74AF40FBDD56AC3BF6A807FE6AD6B4F3657BEC32_inline(0, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c4;
		}
	} // end catch (depth: 1)

IL_00c4:
	{
		// if (WasTouchedOrClicked())
		bool L_13;
		L_13 = FlappyScript_WasTouchedOrClicked_m09049F9BF44EB7A9CB30B2049E615D9F793AA512(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_026d;
		}
	}
	{
		// BoostOnYAxis();
		FlappyScript_BoostOnYAxis_m90D55056705887691811D10BEF7C781F5785D76A(__this, /*hidden argument*/NULL);
		// GameStateManager.GameState = GameState.Playing;
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		GameStateManager_set_GameState_mDDF43E18E26C5AFD46769809A303C69FA5525EA9_inline(1, /*hidden argument*/NULL);
		// IntroGUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_IntroGUI_10();
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// ScoreManagerScript.Score = 0;
		ScoreManagerScript_set_Score_m74AF40FBDD56AC3BF6A807FE6AD6B4F3657BEC32_inline(0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ee:
	{
		// else if (GameStateManager.GameState == GameState.Playing)
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_017b;
		}
	}
	{
		// if (doOnce2 == true)
		bool L_16 = __this->get_doOnce2_19();
		if (!L_16)
		{
			goto IL_0127;
		}
	}
	{
		// serialHandler.SendData(GameStateManager.GameState == GameState.Playing ? "1" : "0");
		SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_17 = __this->get_serialHandler_17();
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		G_B19_0 = L_17;
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			G_B20_0 = L_17;
			goto IL_0116;
		}
	}
	{
		G_B21_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		G_B21_1 = G_B19_0;
		goto IL_011b;
	}

IL_0116:
	{
		G_B21_0 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		G_B21_1 = G_B20_0;
	}

IL_011b:
	{
		NullCheck(G_B21_1);
		SerialHandler_SendData_m6C6727DECF92E5E989C76D076EE287EF7CA0D046(G_B21_1, G_B21_0, /*hidden argument*/NULL);
		// doOnce2 = false;
		__this->set_doOnce2_19((bool)0);
	}

IL_0127:
	{
		// MoveBirdOnXAxis();
		FlappyScript_MoveBirdOnXAxis_m667776F9995246A752D350B415A9D8D438FA151B(__this, /*hidden argument*/NULL);
		// doOnce = true;
		__this->set_doOnce_18((bool)1);
		// if (serialHandler.IsDataAvailable())
		SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_19 = __this->get_serialHandler_17();
		NullCheck(L_19);
		bool L_20;
		L_20 = SerialHandler_IsDataAvailable_m3C301D3CFD644D4DF85E1C3260D0662134813B30(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0169;
		}
	}

IL_0141:
	try
	{ // begin try (depth: 1)
		{
			// string receivedData = serialHandler.ReadSerialData();
			SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_21 = __this->get_serialHandler_17();
			NullCheck(L_21);
			String_t* L_22;
			L_22 = SerialHandler_ReadSerialData_mDA77F16833BEA362F60F60BFA04F76A2B3EA7E3C(L_21, /*hidden argument*/NULL);
			// if (receivedData == "1")
			bool L_23;
			L_23 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_22, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_015e;
			}
		}

IL_0158:
		{
			// BoostOnYAxis();
			FlappyScript_BoostOnYAxis_m90D55056705887691811D10BEF7C781F5785D76A(__this, /*hidden argument*/NULL);
		}

IL_015e:
		{
			// }
			goto IL_0169;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0160;
		}
		throw e;
	}

CATCH_0160:
	{ // begin catch(System.Exception)
		// catch (System.Exception)
		// BoostOnYAxis();
		FlappyScript_BoostOnYAxis_m90D55056705887691811D10BEF7C781F5785D76A(__this, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0169;
	} // end catch (depth: 1)

IL_0169:
	{
		// if (WasTouchedOrClicked())
		bool L_24;
		L_24 = FlappyScript_WasTouchedOrClicked_m09049F9BF44EB7A9CB30B2049E615D9F793AA512(__this, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_026d;
		}
	}
	{
		// BoostOnYAxis();
		FlappyScript_BoostOnYAxis_m90D55056705887691811D10BEF7C781F5785D76A(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_017b:
	{
		// else if (GameStateManager.GameState == GameState.Dead)
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_026d;
		}
	}
	{
		// Vector2 contactPoint = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Vector2_get_zero_mD28A0EC932762710AFA0BBB9CCC63716C3BD064D(/*hidden argument*/NULL);
		V_0 = L_26;
		// doOnce2 = true;
		__this->set_doOnce2_19((bool)1);
		// if (doOnce)
		bool L_27 = __this->get_doOnce_18();
		if (!L_27)
		{
			goto IL_01c1;
		}
	}
	{
		// doOnce = false;
		__this->set_doOnce_18((bool)0);
		// serialHandler.SendData(GameStateManager.GameState == GameState.Playing ? "1" : "0");
		SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_28 = __this->get_serialHandler_17();
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		G_B32_0 = L_28;
		if ((((int32_t)L_29) == ((int32_t)1)))
		{
			G_B33_0 = L_28;
			goto IL_01b7;
		}
	}
	{
		G_B34_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		G_B34_1 = G_B32_0;
		goto IL_01bc;
	}

IL_01b7:
	{
		G_B34_0 = _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
		G_B34_1 = G_B33_0;
	}

IL_01bc:
	{
		NullCheck(G_B34_1);
		SerialHandler_SendData_m6C6727DECF92E5E989C76D076EE287EF7CA0D046(G_B34_1, G_B34_0, /*hidden argument*/NULL);
	}

IL_01c1:
	{
		// if (Input.touchCount > 0)
		int32_t L_30;
		L_30 = Input_get_touchCount_m565DDA076AD6E8E57D4F3F698A760D7B5ACBF505(/*hidden argument*/NULL);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_01da;
		}
	}
	{
		// contactPoint = Input.touches[0].position;
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_31;
		L_31 = Input_get_touches_m970BDA1D26415B34ADDF828BFCDC5FC9E1DAEF7A(/*hidden argument*/NULL);
		NullCheck(L_31);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32;
		L_32 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		V_0 = L_32;
	}

IL_01da:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_33;
		L_33 = Input_GetMouseButtonDown_m689599122AC9F35D1FCCA2BF2414387472B0799F(0, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_01ed;
		}
	}
	{
		// contactPoint = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Input_get_mousePosition_mBCEAE9AEF8827512D6ADF03AB336DFA2C8A223E0(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline(L_34, /*hidden argument*/NULL);
		V_0 = L_35;
	}

IL_01ed:
	{
		// if (restartButtonGameCollider == Physics2D.OverlapPoint
		//     (Camera.main.ScreenToWorldPoint(contactPoint)))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_36 = __this->get_restartButtonGameCollider_12();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_37;
		L_37 = Camera_get_main_m4E3DB1CD03E916476426AB3F78B26F21690EE26B(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_37, L_39, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		L_41 = Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_42;
		L_42 = Physics2D_OverlapPoint_m7DE104FCAB7C3F5E4921114C3D27A5439D6A871C(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_36, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0224;
		}
	}
	{
		// GameStateManager.GameState = GameState.Intro;
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		GameStateManager_set_GameState_mDDF43E18E26C5AFD46769809A303C69FA5525EA9_inline(0, /*hidden argument*/NULL);
		// Application.LoadLevel(Application.loadedLevelName);
		String_t* L_44;
		L_44 = Application_get_loadedLevelName_m2E24DAC26D1319218FD233C57423C466AD5E2714(/*hidden argument*/NULL);
		Application_LoadLevel_mA9392C3DEA2974952023BDE233EC9D4FE5177A7A(L_44, /*hidden argument*/NULL);
	}

IL_0224:
	{
		// if (serialHandler.IsDataAvailable())
		SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_45 = __this->get_serialHandler_17();
		NullCheck(L_45);
		bool L_46;
		L_46 = SerialHandler_IsDataAvailable_m3C301D3CFD644D4DF85E1C3260D0662134813B30(L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_026d;
		}
	}

IL_0231:
	try
	{ // begin try (depth: 1)
		{
			// string receivedData = serialHandler.ReadSerialData();
			SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * L_47 = __this->get_serialHandler_17();
			NullCheck(L_47);
			String_t* L_48;
			L_48 = SerialHandler_ReadSerialData_mDA77F16833BEA362F60F60BFA04F76A2B3EA7E3C(L_47, /*hidden argument*/NULL);
			// if (receivedData == "1")
			bool L_49;
			L_49 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_48, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
			if (!L_49)
			{
				goto IL_0258;
			}
		}

IL_0248:
		{
			// GameStateManager.GameState = GameState.Intro;
			IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
			GameStateManager_set_GameState_mDDF43E18E26C5AFD46769809A303C69FA5525EA9_inline(0, /*hidden argument*/NULL);
			// Application.LoadLevel(Application.loadedLevelName);
			String_t* L_50;
			L_50 = Application_get_loadedLevelName_m2E24DAC26D1319218FD233C57423C466AD5E2714(/*hidden argument*/NULL);
			Application_LoadLevel_mA9392C3DEA2974952023BDE233EC9D4FE5177A7A(L_50, /*hidden argument*/NULL);
		}

IL_0258:
		{
			// }
			goto IL_026d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_025a;
		}
		throw e;
	}

CATCH_025a:
	{ // begin catch(System.Exception)
		// catch (System.Exception)
		// GameStateManager.GameState = GameState.Intro;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var)));
		GameStateManager_set_GameState_mDDF43E18E26C5AFD46769809A303C69FA5525EA9_inline(0, /*hidden argument*/NULL);
		// Application.LoadLevel(Application.loadedLevelName);
		String_t* L_51;
		L_51 = Application_get_loadedLevelName_m2E24DAC26D1319218FD233C57423C466AD5E2714(/*hidden argument*/NULL);
		Application_LoadLevel_mA9392C3DEA2974952023BDE233EC9D4FE5177A7A(L_51, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_026d;
	} // end catch (depth: 1)

IL_026d:
	{
		// }
		return;
	}
}
// System.Void FlappyScript::OnDataReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_OnDataReceived_mFA00D26FEEA23EE69D10B1F7C531CEE816820015 (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FlappyScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_FixedUpdate_m6A98402FA58C85330657FE1D424D7C321FAB72DA (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameStateManager.GameState == GameState.Intro)
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		// if (GetComponent<Rigidbody2D>().velocity.y < -1) //when the speed drops, give a boost
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_1();
		if ((!(((float)L_3) < ((float)(-1.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddForce(new Vector2(0, GetComponent<Rigidbody2D>().mass * 5500 * Time.deltaTime)); //lots of play and stop
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4;
		L_4 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5;
		L_5 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6;
		L_6 = Rigidbody2D_get_mass_mE62570BBAB2CE7ACC2FA3B20EE5EB8FBDBEF019F(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_6, (float)(5500.0f))), (float)L_7)), /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_4, L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004b:
	{
		// else if (GameStateManager.GameState == GameState.Playing || GameStateManager.GameState == GameState.Dead)
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0061;
		}
	}

IL_005b:
	{
		// FixFlappyRotation();
		FlappyScript_FixFlappyRotation_m592A9A0638CF14C1FE8F61AD371B8A10C41107CD(__this, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Boolean FlappyScript::WasTouchedOrClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlappyScript_WasTouchedOrClicked_m09049F9BF44EB7A9CB30B2049E615D9F793AA512 (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonUp("Jump") || Input.GetMouseButtonDown(0) ||
		//     (Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Ended))
		bool L_0;
		L_0 = Input_GetButtonUp_mFE7C663734D39FA395E90CC845D9C04449B1A75A(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m689599122AC9F35D1FCCA2BF2414387472B0799F(0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_2;
		L_2 = Input_get_touchCount_m565DDA076AD6E8E57D4F3F698A760D7B5ACBF505(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_3;
		L_3 = Input_get_touches_m970BDA1D26415B34ADDF828BFCDC5FC9E1DAEF7A(/*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0031;
		}
	}

IL_002f:
	{
		// return true;
		return (bool)1;
	}

IL_0031:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void FlappyScript::MoveBirdOnXAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_MoveBirdOnXAxis_m667776F9995246A752D350B415A9D8D438FA151B (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method)
{
	{
		// transform.position += new Vector3(Time.deltaTime * XSpeed, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3;
		L_3 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_4 = __this->get_XSpeed_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlappyScript::BoostOnYAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_BoostOnYAxis_m90D55056705887691811D10BEF7C781F5785D76A (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Rigidbody2D>().velocity = new Vector2(0, VelocityPerJump);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		float L_1 = __this->get_VelocityPerJump_13();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.0f), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_2, /*hidden argument*/NULL);
		// GetComponent<AudioSource>().PlayOneShot(FlyAudioClip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = __this->get_FlyAudioClip_4();
		NullCheck(L_3);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlappyScript::FixFlappyRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_FixFlappyRotation_m592A9A0638CF14C1FE8F61AD371B8A10C41107CD (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// if (GetComponent<Rigidbody2D>().velocity.y > 0) flappyYAxisTravelState = FlappyYAxisTravelState.GoingUp;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_1();
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// if (GetComponent<Rigidbody2D>().velocity.y > 0) flappyYAxisTravelState = FlappyYAxisTravelState.GoingUp;
		__this->set_flappyYAxisTravelState_20(0);
		goto IL_0027;
	}

IL_0020:
	{
		// else flappyYAxisTravelState = FlappyYAxisTravelState.GoingDown;
		__this->set_flappyYAxisTravelState_20(1);
	}

IL_0027:
	{
		// float degreesToAdd = 0;
		V_0 = (0.0f);
		// switch (flappyYAxisTravelState)
		int32_t L_3 = __this->get_flappyYAxisTravelState_20();
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0059;
	}

IL_003d:
	{
		// degreesToAdd = 6 * RotateUpSpeed;
		float L_6 = __this->get_RotateUpSpeed_8();
		V_0 = ((float)il2cpp_codegen_multiply((float)(6.0f), (float)L_6));
		// break;
		goto IL_0059;
	}

IL_004c:
	{
		// degreesToAdd = -3 * RotateDownSpeed;
		float L_7 = __this->get_RotateDownSpeed_9();
		V_0 = ((float)il2cpp_codegen_multiply((float)(-3.0f), (float)L_7));
	}

IL_0059:
	{
		// birdRotation = new Vector3(0, 0, Mathf.Clamp(birdRotation.z + degreesToAdd, -90, 45));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_birdRotation_21();
		float L_9 = L_8->get_z_4();
		float L_10 = V_0;
		float L_11;
		L_11 = Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF(((float)il2cpp_codegen_add((float)L_9, (float)L_10)), (-90.0f), (45.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), (0.0f), (0.0f), L_11, /*hidden argument*/NULL);
		__this->set_birdRotation_21(L_12);
		// transform.eulerAngles = birdRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_birdRotation_21();
		NullCheck(L_13);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_13, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlappyScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_OnTriggerEnter2D_mF4EE1C6371214F6CB850F71D07FD1ECBC670F219 (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0D93F80EB041C74D940218478A47C361ECB361A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFEAB9E13D073101FFAA79F0336006B48CF74886);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameStateManager.GameState == GameState.Playing)
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_005a;
		}
	}
	{
		// if (col.gameObject.tag == "Pipeblank") //pipeblank is an empty gameobject with a collider between the two pipes
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ___col0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_3, _stringLiteralBFEAB9E13D073101FFAA79F0336006B48CF74886, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// GetComponent<AudioSource>().PlayOneShot(ScoredAudioClip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = __this->get_ScoredAudioClip_6();
		NullCheck(L_5);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_5, L_6, /*hidden argument*/NULL);
		// ScoreManagerScript.Score++;
		int32_t L_7;
		L_7 = ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline(/*hidden argument*/NULL);
		ScoreManagerScript_set_Score_m74AF40FBDD56AC3BF6A807FE6AD6B4F3657BEC32_inline(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_003d:
	{
		// else if (col.gameObject.tag == "Pipe")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___col0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_10, _stringLiteralA0D93F80EB041C74D940218478A47C361ECB361A, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		// FlappyDies();
		FlappyScript_FlappyDies_m96C440F631909C9E3C6DC7982F51F700BDB451A1(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void FlappyScript::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_OnCollisionEnter2D_m0F25492928A0F52D9642418D6F636957F7B3E8D4 (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameStateManager.GameState == GameState.Playing)
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// if (col.gameObject.tag == "Floor")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_1 = ___col0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_3, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// FlappyDies();
		FlappyScript_FlappyDies_m96C440F631909C9E3C6DC7982F51F700BDB451A1(__this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void FlappyScript::FlappyDies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript_FlappyDies_m96C440F631909C9E3C6DC7982F51F700BDB451A1 (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameStateManager.GameState = GameState.Dead;
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		GameStateManager_set_GameState_mDDF43E18E26C5AFD46769809A303C69FA5525EA9_inline(2, /*hidden argument*/NULL);
		// DeathGUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_DeathGUI_11();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// GetComponent<AudioSource>().PlayOneShot(DeathAudioClip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_DeathAudioClip_5();
		NullCheck(L_1);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlappyScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlappyScript__ctor_m38DE7FE3E095FEBD575DDFB9F136524DBA0B4301 (FlappyScript_t2CD1043DBC7D6A512D804EA4C1952AD304E452AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7DCAFB7BF90AB70BCBB4853D8BCEA52992529F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float RotateUpSpeed = 1, RotateDownSpeed = 1;
		__this->set_RotateUpSpeed_8((1.0f));
		// public float RotateUpSpeed = 1, RotateDownSpeed = 1;
		__this->set_RotateDownSpeed_9((1.0f));
		// public float VelocityPerJump = 3;
		__this->set_VelocityPerJump_13((3.0f));
		// public float XSpeed = 1;
		__this->set_XSpeed_14((1.0f));
		// public string portName = "COM7"; // Change to your Arduino port
		__this->set_portName_15(_stringLiteralA7DCAFB7BF90AB70BCBB4853D8BCEA52992529F0);
		// public int baudRate = 9600;
		__this->set_baudRate_16(((int32_t)9600));
		// private bool doOnce = true;
		__this->set_doOnce_18((bool)1);
		// private bool doOnce2 = true;
		__this->set_doOnce2_19((bool)1);
		// Vector3 birdRotation = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_birdRotation_21(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FloorMoveScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloorMoveScript_Start_m4B3DAE3D7A14EBB14034B2CB1D8F39D2E998F107 (FloorMoveScript_t9A037105946F1EC440BB199D717472A504529D63 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FloorMoveScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloorMoveScript_Update_m981DEE0CCD9F1FA93B14B7A7A8AE4784D1A4BF05 (FloorMoveScript_t9A037105946F1EC440BB199D717472A504529D63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameStateManager.GameState == GameState.Dead)
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (transform.localPosition.x < -3.9f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		if ((!(((float)L_3) < ((float)(-3.9000001f)))))
		{
			goto IL_0055;
		}
	}
	{
		// transform.localPosition = new Vector3(0, transform.localPosition.y, transform.localPosition.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), (0.0f), L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_4, L_11, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// transform.Translate(-Time.deltaTime, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_12, ((-L_13)), (0.0f), (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FloorMoveScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloorMoveScript__ctor_m47F78BCBC4D7ADFC66BFD86E4C7654DBD80AE20E (FloorMoveScript_t9A037105946F1EC440BB199D717472A504529D63 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// GameState GameStateManager::get_GameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameState GameState { get; set; }
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_StaticFields*)il2cpp_codegen_static_fields_for(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var))->get_U3CGameStateU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void GameStateManager::set_GameState(GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateManager_set_GameState_mDDF43E18E26C5AFD46769809A303C69FA5525EA9 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameState GameState { get; set; }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		((GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_StaticFields*)il2cpp_codegen_static_fields_for(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var))->set_U3CGameStateU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void GameStateManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStateManager__cctor_m6D05BBCFF94CA2DF03439F911657743CD6AB5C31 (const RuntimeMethod* method)
{
	{
		// GameState = GameState.Intro;
		GameStateManager_set_GameState_mDDF43E18E26C5AFD46769809A303C69FA5525EA9_inline(0, /*hidden argument*/NULL);
		// }
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
// System.Void PipeDestroyerScript::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeDestroyerScript_OnTriggerEnter2D_m4583CE561949F319F8210B13C40712DF6208BCAD (PipeDestroyerScript_t8970A500BB019082C30F193DA6F1996F60A7867A * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0D93F80EB041C74D940218478A47C361ECB361A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFEAB9E13D073101FFAA79F0336006B48CF74886);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.tag == "Pipe" || col.tag == "Pipeblank")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteralA0D93F80EB041C74D940218478A47C361ECB361A, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___col0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_4, _stringLiteralBFEAB9E13D073101FFAA79F0336006B48CF74886, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}

IL_0024:
	{
		// Destroy(col.gameObject.transform.parent.gameObject); //free up some memory
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6 = ___col0;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_10, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void PipeDestroyerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipeDestroyerScript__ctor_m17AD5D274302CA0BAB25055D94E1C98599B4C624 (PipeDestroyerScript_t8970A500BB019082C30F193DA6F1996F60A7867A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RandomBackgroundScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomBackgroundScript_Start_m0D934CD1FDAAAA049C3D99F8D514EF0846C045A0 (RandomBackgroundScript_tE9BA8BFDBA93D3F7AF470944C66975B635F5A6A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (GetComponent<Renderer>() as SpriteRenderer).sprite = Backgrounds[Random.Range(0, Backgrounds.Length)];
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_1 = __this->get_Backgrounds_4();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_2 = __this->get_Backgrounds_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4 = L_3;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF *)IsInstSealed((RuntimeObject*)L_0, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_il2cpp_TypeInfo_var)));
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(((SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF *)IsInstSealed((RuntimeObject*)L_0, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RandomBackgroundScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomBackgroundScript_Update_mF0609B380B7156337E44A395350077C1B1BF65F2 (RandomBackgroundScript_tE9BA8BFDBA93D3F7AF470944C66975B635F5A6A6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RandomBackgroundScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomBackgroundScript__ctor_m899FF939B552B446E2F47943797F62BD3E89B74E (RandomBackgroundScript_tE9BA8BFDBA93D3F7AF470944C66975B635F5A6A6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 ScoreManagerScript::get_Score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Score { get; set; }
		int32_t L_0 = ((ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_il2cpp_TypeInfo_var))->get_U3CScoreU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ScoreManagerScript::set_Score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManagerScript_set_Score_m74AF40FBDD56AC3BF6A807FE6AD6B4F3657BEC32 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Score { get; set; }
		int32_t L_0 = ___value0;
		((ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_il2cpp_TypeInfo_var))->set_U3CScoreU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void ScoreManagerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManagerScript_Start_mE9C9CF6F01BF4B494F8726D1014F0399375172AF (ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506 * __this, const RuntimeMethod* method)
{
	{
		// (Tens.gameObject as GameObject).SetActive(false);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_Tens_8();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// (Hundreds.gameObject as GameObject).SetActive(false);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get_Hundreds_9();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreManagerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManagerScript_Update_m61DCCDF89CB448E6A62126FF862FE507A6000A3E (ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (previousScore != Score) //save perf from non needed calculations
		int32_t L_0 = __this->get_previousScore_5();
		int32_t L_1;
		L_1 = ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_00f2;
		}
	}
	{
		// if(Score < 10)
		int32_t L_2;
		L_2 = ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0031;
		}
	}
	{
		// Units.sprite = numberSprites[Score];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3 = __this->get_Units_7();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_4 = __this->get_numberSprites_6();
		int32_t L_5;
		L_5 = ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_3, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0031:
	{
		// else if(Score >= 10 && Score < 100)
		int32_t L_8;
		L_8 = ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)10))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_9;
		L_9 = ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0089;
		}
	}
	{
		// (Tens.gameObject as GameObject).SetActive(true);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_10 = __this->get_Tens_8();
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// Tens.sprite = numberSprites[Score / 10];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_12 = __this->get_Tens_8();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_13 = __this->get_numberSprites_6();
		int32_t L_14;
		L_14 = ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline(/*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)((int32_t)L_14/(int32_t)((int32_t)10)));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_12, L_16, /*hidden argument*/NULL);
		// Units.sprite = numberSprites[Score % 10];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_17 = __this->get_Units_7();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_18 = __this->get_numberSprites_6();
		int32_t L_19;
		L_19 = ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline(/*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)((int32_t)L_19%(int32_t)((int32_t)10)));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_17, L_21, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0089:
	{
		// else if(Score >= 100)
		int32_t L_22;
		L_22 = ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)100))))
		{
			goto IL_00f2;
		}
	}
	{
		// (Hundreds.gameObject as GameObject).SetActive(true);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_23 = __this->get_Hundreds_9();
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)1, /*hidden argument*/NULL);
		// Hundreds.sprite = numberSprites[Score / 100];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_25 = __this->get_Hundreds_9();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_26 = __this->get_numberSprites_6();
		int32_t L_27;
		L_27 = ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline(/*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)((int32_t)L_27/(int32_t)((int32_t)100)));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_25);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_25, L_29, /*hidden argument*/NULL);
		// int rest = Score % 100;
		int32_t L_30;
		L_30 = ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline(/*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_30%(int32_t)((int32_t)100)));
		// Tens.sprite = numberSprites[rest / 10];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_31 = __this->get_Tens_8();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_32 = __this->get_numberSprites_6();
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)((int32_t)L_33/(int32_t)((int32_t)10)));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_31, L_35, /*hidden argument*/NULL);
		// Units.sprite = numberSprites[rest % 10];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_36 = __this->get_Units_7();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_37 = __this->get_numberSprites_6();
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)((int32_t)L_38%(int32_t)((int32_t)10)));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_36, L_40, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		// }
		return;
	}
}
// System.Void ScoreManagerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManagerScript__ctor_mC6D2E5B61E9DFE594F34C983943E01798610ED30 (ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506 * __this, const RuntimeMethod* method)
{
	{
		// int previousScore = -1;
		__this->set_previousScore_5((-1));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SerialHandler::add_OnDataReceived(SerialHandler/DataReceivedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialHandler_add_OnDataReceived_m5B1C9DA9E8B2F0E76E39EE5599BA9DC0F3820A73 (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * V_0 = NULL;
	DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * V_1 = NULL;
	DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * V_2 = NULL;
	{
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_0 = __this->get_OnDataReceived_7();
		V_0 = L_0;
	}

IL_0007:
	{
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_1 = V_0;
		V_1 = L_1;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_2 = V_1;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 *)CastclassSealed((RuntimeObject*)L_4, DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1_il2cpp_TypeInfo_var));
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 ** L_5 = __this->get_address_of_OnDataReceived_7();
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_6 = V_2;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_7 = V_1;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_8;
		L_8 = InterlockedCompareExchangeImpl<DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 *>((DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 **)L_5, L_6, L_7);
		V_0 = L_8;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_9 = V_0;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_10 = V_1;
		if ((!(((RuntimeObject*)(DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 *)L_9) == ((RuntimeObject*)(DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SerialHandler::remove_OnDataReceived(SerialHandler/DataReceivedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialHandler_remove_OnDataReceived_mC40A36CDF3922F908D71720FA0600A71A88AC86B (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * V_0 = NULL;
	DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * V_1 = NULL;
	DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * V_2 = NULL;
	{
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_0 = __this->get_OnDataReceived_7();
		V_0 = L_0;
	}

IL_0007:
	{
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_1 = V_0;
		V_1 = L_1;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_2 = V_1;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 *)CastclassSealed((RuntimeObject*)L_4, DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1_il2cpp_TypeInfo_var));
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 ** L_5 = __this->get_address_of_OnDataReceived_7();
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_6 = V_2;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_7 = V_1;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_8;
		L_8 = InterlockedCompareExchangeImpl<DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 *>((DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 **)L_5, L_6, L_7);
		V_0 = L_8;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_9 = V_0;
		DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_10 = V_1;
		if ((!(((RuntimeObject*)(DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 *)L_9) == ((RuntimeObject*)(DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SerialHandler::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialHandler__ctor_mA25BADE3D3690C475FF84A50F9AAA06987F02B34 (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, String_t* ___portName0, int32_t ___baudRate1, const RuntimeMethod* method)
{
	{
		// public SerialHandler(string portName, int baudRate)
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// this.portName = portName;
		String_t* L_0 = ___portName0;
		__this->set_portName_5(L_0);
		// this.baudRate = baudRate;
		int32_t L_1 = ___baudRate1;
		__this->set_baudRate_6(L_1);
		// OpenSerialPort();
		SerialHandler_OpenSerialPort_m2088788FD503461D5349344CA7F2C116EBF27F04(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerialHandler::OpenSerialPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialHandler_OpenSerialPort_m2088788FD503461D5349344CA7F2C116EBF27F04 (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialPort = new SerialPort(portName, baudRate);
		String_t* L_0 = __this->get_portName_5();
		int32_t L_1 = __this->get_baudRate_6();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_2 = (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 *)il2cpp_codegen_object_new(SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636_il2cpp_TypeInfo_var);
		SerialPort__ctor_m464EB123CC799E2A34D958656E746086028AC1DD(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_serialPort_4(L_2);
		// serialPort.Open();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_3 = __this->get_serialPort_4();
		NullCheck(L_3);
		SerialPort_Open_m8AD6DD164A6CA49E736D1D3C7CADE54264335A63(L_3, /*hidden argument*/NULL);
		// serialPort.ReadTimeout = 10;
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_4 = __this->get_serialPort_4();
		NullCheck(L_4);
		SerialPort_set_ReadTimeout_mD5EC3B8F392013DDBB2331064ABD232486B4C012(L_4, ((int32_t)10), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SerialHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialHandler_Update_m1D37BE7DB6857B6758318AADC3BB3BB350C963D1 (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (serialPort.IsOpen)
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = __this->get_serialPort_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = SerialPort_get_IsOpen_m67DAEA08CB7DDEF1144419F6C5F09F4E3C3D3D39(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			// string data = serialPort.ReadLine();
			SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_2 = __this->get_serialPort_4();
			NullCheck(L_2);
			String_t* L_3;
			L_3 = SerialPort_ReadLine_mA740CD9A1AAB5E391B35493D56845843EBE07ADE(L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			// if (OnDataReceived != null)
			DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_4 = __this->get_OnDataReceived_7();
			if (!L_4)
			{
				goto IL_0032;
			}
		}

IL_0021:
		{
			// OnDataReceived(data.Trim());
			DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * L_5 = __this->get_OnDataReceived_7();
			String_t* L_6 = V_0;
			NullCheck(L_6);
			String_t* L_7;
			L_7 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_6, /*hidden argument*/NULL);
			NullCheck(L_5);
			DataReceivedEventHandler_Invoke_mEFA0D7C536ADA1C58C080529C05EAF31F2D239D6(L_5, L_7, /*hidden argument*/NULL);
		}

IL_0032:
		{
			// }
			goto IL_0037;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		throw e;
	}

CATCH_0034:
	{ // begin catch(System.Exception)
		// catch (System.Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		// }
		return;
	}
}
// System.Boolean SerialHandler::IsDataAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerialHandler_IsDataAvailable_m3C301D3CFD644D4DF85E1C3260D0662134813B30 (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, const RuntimeMethod* method)
{
	{
		// return serialPort != null && serialPort.IsOpen && serialPort.BytesToRead > 0;
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = __this->get_serialPort_4();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_1 = __this->get_serialPort_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = SerialPort_get_IsOpen_m67DAEA08CB7DDEF1144419F6C5F09F4E3C3D3D39(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_3 = __this->get_serialPort_4();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerialPort_get_BytesToRead_m7A5A8C9C0DB60A9943AE1197D9B2B6A92DC35413(L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.String SerialHandler::ReadSerialData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerialHandler_ReadSerialData_mDA77F16833BEA362F60F60BFA04F76A2B3EA7E3C (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, const RuntimeMethod* method)
{
	{
		// return serialPort.ReadLine().Trim();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = __this->get_serialPort_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = SerialPort_ReadLine_mA740CD9A1AAB5E391B35493D56845843EBE07ADE(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void SerialHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialHandler_OnDestroy_m52EE070A0E9F84419D10A6325F0CE461A57B9D6F (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, const RuntimeMethod* method)
{
	{
		// if (serialPort != null && serialPort.IsOpen)
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = __this->get_serialPort_4();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_1 = __this->get_serialPort_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = SerialPort_get_IsOpen_m67DAEA08CB7DDEF1144419F6C5F09F4E3C3D3D39(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// serialPort.Close();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_3 = __this->get_serialPort_4();
		NullCheck(L_3);
		SerialPort_Close_m288C294F0F4AF5508E932492937DFCD348AB9C34(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void SerialHandler::SendData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialHandler_SendData_m6C6727DECF92E5E989C76D076EE287EF7CA0D046 (SerialHandler_t45CB561F65CDC203099645C92315C70A015FA894 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (serialPort != null && serialPort.IsOpen)
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = __this->get_serialPort_4();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_1 = __this->get_serialPort_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = SerialPort_get_IsOpen_m67DAEA08CB7DDEF1144419F6C5F09F4E3C3D3D39(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// serialPort.Write(data);
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_3 = __this->get_serialPort_4();
		String_t* L_4 = ___data0;
		NullCheck(L_3);
		SerialPort_Write_mECAFF3087D6028991DD52C63A415EFD20FAC7286(L_3, L_4, /*hidden argument*/NULL);
		// }
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Exception)
		// catch (System.Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		// }
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
// System.Void SpawnerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerScript_Start_mE59155761645F2BD312DE38273E796DD2A87164D (SpawnerScript_t37F7AF986ED6AECA135FD46CD2DF3E7E839C75A7 * __this, const RuntimeMethod* method)
{
	{
		// SpawnObject = SpawnObjects[Random.Range(0, SpawnObjects.Length)];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_SpawnObjects_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_SpawnObjects_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_mCD7505433C26B6FA511AC1EA07E58AEF7ED1C213(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->set_SpawnObject_4(L_4);
		// Spawn();
		SpawnerScript_Spawn_m5F2F197B327FDC72CD8F3CF47D57801A25A045B2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpawnerScript::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerScript_Spawn_m5F2F197B327FDC72CD8F3CF47D57801A25A045B2 (SpawnerScript_t37F7AF986ED6AECA135FD46CD2DF3E7E839C75A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (GameStateManager.GameState == GameState.Playing)
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		// float y = Random.Range(-0.5f, 1f);
		float L_1;
		L_1 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5((-0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_1;
		// GameObject go = Instantiate(SpawnObject, this.transform.position + new Vector3(0, y, 0), Quaternion.identity) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SpawnObject_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), L_5, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline(L_4, L_6, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F(L_2, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3D9494354F266A105B5A9DE8603B57850EAD902F_RuntimeMethod_var);
	}

IL_0049:
	{
		// Invoke("Spawn", Random.Range(timeMin, timeMax));
		float L_10 = __this->get_timeMin_6();
		float L_11 = __this->get_timeMax_7();
		float L_12;
		L_12 = Random_Range_mA944A98B82AFE4D46D05EF533ED0068148EFAEA5(L_10, L_11, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpawnerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerScript__ctor_m4CF954F7689C1191285E01EBCFB38CC3B5D0AAC5 (SpawnerScript_t37F7AF986ED6AECA135FD46CD2DF3E7E839C75A7 * __this, const RuntimeMethod* method)
{
	{
		// public float timeMin = 0.7f;
		__this->set_timeMin_6((0.699999988f));
		// public float timeMax = 2f;
		__this->set_timeMax_7((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 (DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * __this, String_t* ___receivedData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___receivedData0' to native representation
	char* ____receivedData0_marshaled = NULL;
	____receivedData0_marshaled = il2cpp_codegen_marshal_string(___receivedData0);

	// Native function invocation
	il2cppPInvokeFunc(____receivedData0_marshaled);

	// Marshaling cleanup of parameter '___receivedData0' native representation
	il2cpp_codegen_marshal_free(____receivedData0_marshaled);
	____receivedData0_marshaled = NULL;

}
// System.Void SerialHandler/DataReceivedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceivedEventHandler__ctor_m2E378291EB0F1AB8DC29DE3AB4E65F76A99E6BFA (DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SerialHandler/DataReceivedEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceivedEventHandler_Invoke_mEFA0D7C536ADA1C58C080529C05EAF31F2D239D6 (DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * __this, String_t* ___receivedData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___receivedData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___receivedData0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___receivedData0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___receivedData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___receivedData0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___receivedData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___receivedData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___receivedData0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___receivedData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___receivedData0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___receivedData0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___receivedData0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___receivedData0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult SerialHandler/DataReceivedEventHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataReceivedEventHandler_BeginInvoke_m77FD8B18D8190FA2CFEF3DBCF3C844A832321259 (DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * __this, String_t* ___receivedData0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___receivedData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void SerialHandler/DataReceivedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceivedEventHandler_EndInvoke_mBEF91E9839FC6B460434AF4FB763D12B7E5A92AC (DataReceivedEventHandler_tE48741CD4C97D271D385616C4F9640D09DC01BB1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameStateManager_get_GameState_mC306FA2B272D56C45A7C47A9BCF342B2DB42CD8F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameState GameState { get; set; }
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_StaticFields*)il2cpp_codegen_static_fields_for(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var))->get_U3CGameStateU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameStateManager_set_GameState_mDDF43E18E26C5AFD46769809A303C69FA5525EA9_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameState GameState { get; set; }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var);
		((GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_StaticFields*)il2cpp_codegen_static_fields_for(GameStateManager_t581A50F0CEB605A7870C3A10FC14F9CAA6879A67_il2cpp_TypeInfo_var))->set_U3CGameStateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScoreManagerScript_set_Score_m74AF40FBDD56AC3BF6A807FE6AD6B4F3657BEC32_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Score { get; set; }
		int32_t L_0 = ___value0;
		((ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_il2cpp_TypeInfo_var))->set_U3CScoreU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_m101DE5340601C037D9252FB6B99AD18C793C54A1_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_m2E3CBC2DA8F97FF21F4F845D857746EF6BC83A01_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreManagerScript_get_Score_mA4AD10C32F5441898D4854F8F8FACBC4FB6A35DD_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Score { get; set; }
		int32_t L_0 = ((ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManagerScript_tC5BCE3E4E48F43B3125D1A9D6A5FD79E79A4A506_il2cpp_TypeInfo_var))->get_U3CScoreU3Ek__BackingField_4();
		return L_0;
	}
}
