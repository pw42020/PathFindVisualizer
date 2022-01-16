#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>
struct Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,TileScript>
struct Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3Int>
struct IEqualityComparer_1_tEBF21F776A48B7F61078A377E017CCF584C46F0C;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector3Int,System.Object>
struct KeyCollection_tA379587106F22E8913F8B2E1EA6845E5A736D4EA;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector3Int,TileScript>
struct KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>
struct List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Vector3Int>
struct List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector3Int,TileScript>
struct ValueCollection_t85A0974BF46DEBA8141AD2879116A65AE7A924B6;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Vector3Int,TileScript>[]
struct EntryU5BU5D_tA0324087B4B0AC47A60123FC4B2A555FAC816DFF;
// System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>[]
struct ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816;
// UnityEngine.GameObject[][]
struct GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector3Int[]
struct Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// ButtonScript
struct ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraMovement
struct CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Dijkstra
struct Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817;
// FinishScript
struct FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.GridLayout
struct GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InitializeGrid
struct InitializeGrid_t0411CA9413327B7591CD30FF6D448E7C3DA60212;
// InteractTiles
struct InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628;
// MapManager
struct MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PriorityQueue
struct PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// StartScript
struct StartScript_tCC6B6DE674F70B70F4A3AF1158C54683A6775740;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Tilemaps.TileBase
struct TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052;
// TileScript
struct TileScript_t6E723D639E7213BAEA1F8346F405265665193642;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Dijkstra/<startAlgorithm>d__5
struct U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileScript_t6E723D639E7213BAEA1F8346F405265665193642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral171C4980CEDD496590EA02D7A9FA3D5825D2797B;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC9E039324DDB82B6801B1846C1987DF1F4AFCC;
IL2CPP_EXTERN_C String_t* _stringLiteral5C902504D3B71DE57ED2DC2422E12B512328ED13;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralE090C20B19D850ABD64F22A177D7A290F3FC082D;
IL2CPP_EXTERN_C String_t* _stringLiteralE7721A47648B53D1891F250EA273B37FCC74C117;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m51D56D65424EF4D398ED807D537506F0BDE8492C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mCE51D191DC98BB3F87C1A1B2892DDCDDDC951AA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m39CB0B597F4E98552F1A70DC3CC5A89598CA343A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m9A23ADCB03F86D01E40E69C9C097C2A0CEED71CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m1744EB032A163FDB4A690EA6D59F63B1DE1F092C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m23F73B815D52415BA49378576D444624B7259D92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE383366DA9347FCDD39AEEAE012470CD47206BB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m27D297DD08E8092CBD8F3FAE983F542EC9DE0243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m94C833B421A86958F78EF25421F27E5334A3A10C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA5C395E41F4BD985AE156D3E79106A66EC41DC27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBE7E52D5DCAFA92CF5677546C14BED6BAD8CF800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m8DBDB4B1CAFCA90E9F183EE44FACEB76D3B3F6A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m29959ADC02B9A9B8031480672B98D23AF5DFC33E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m988EA6B6A8FE1DF3EB5AA5D82A5177029C8BA2A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7CA657ADF1C3EB3A89EBCAB2E113127669E7ADEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8EA1ACBF8FE9A73519A1309E6CBC1C4A836B5EDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mC8351AD00084C9AEC3409B78A79E019B37E12180_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m37D844C561014FDD2C6E1AEE127A5A087F9ADC88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8E42011BCD7853639127DFB481489DEA580A3305_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CstartAlgorithmU3Ed__5_System_Collections_IEnumerator_Reset_mB4FE6EAB5633A947EE09DFA78D5C1E8888232761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m88A2D2A1748B3823E485FE8E274EE526556A0EAC_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816;
struct GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C;
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

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


// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,TileScript>
struct Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA0324087B4B0AC47A60123FC4B2A555FAC816DFF* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t85A0974BF46DEBA8141AD2879116A65AE7A924B6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96, ___entries_1)); }
	inline EntryU5BU5D_tA0324087B4B0AC47A60123FC4B2A555FAC816DFF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA0324087B4B0AC47A60123FC4B2A555FAC816DFF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA0324087B4B0AC47A60123FC4B2A555FAC816DFF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96, ___keys_7)); }
	inline KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96, ___values_8)); }
	inline ValueCollection_t85A0974BF46DEBA8141AD2879116A65AE7A924B6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t85A0974BF46DEBA8141AD2879116A65AE7A924B6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t85A0974BF46DEBA8141AD2879116A65AE7A924B6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector3Int,TileScript>
struct KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3, ___dictionary_0)); }
	inline Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>
struct List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4, ____items_1)); }
	inline ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816* get__items_1() const { return ____items_1; }
	inline ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4_StaticFields, ____emptyArray_5)); }
	inline ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998, ____items_1)); }
	inline Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* get__items_1() const { return ____items_1; }
	inline Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998_StaticFields, ____emptyArray_5)); }
	inline Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3Int>
struct List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D, ____items_1)); }
	inline Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* get__items_1() const { return ____items_1; }
	inline Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_StaticFields, ____emptyArray_5)); }
	inline Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3IntU5BU5D_t7DAC6D862D51B078659528745F8248658F262D7D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// PriorityQueue
struct PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>> PriorityQueue::heapList
	List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * ___heapList_0;
	// System.Int32 PriorityQueue::currentSize
	int32_t ___currentSize_1;

public:
	inline static int32_t get_offset_of_heapList_0() { return static_cast<int32_t>(offsetof(PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F, ___heapList_0)); }
	inline List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * get_heapList_0() const { return ___heapList_0; }
	inline List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 ** get_address_of_heapList_0() { return &___heapList_0; }
	inline void set_heapList_0(List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * value)
	{
		___heapList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heapList_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentSize_1() { return static_cast<int32_t>(offsetof(PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F, ___currentSize_1)); }
	inline int32_t get_currentSize_1() const { return ___currentSize_1; }
	inline int32_t* get_address_of_currentSize_1() { return &___currentSize_1; }
	inline void set_currentSize_1(int32_t value)
	{
		___currentSize_1 = value;
	}
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
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


// UnityEngine.Vector3Int
struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Back_10;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_One_4)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Right_8 = value;
	}

	inline static int32_t get_offset_of_s_Forward_9() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Forward_9)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Forward_9() const { return ___s_Forward_9; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Forward_9() { return &___s_Forward_9; }
	inline void set_s_Forward_9(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Forward_9 = value;
	}

	inline static int32_t get_offset_of_s_Back_10() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Back_10)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Back_10() const { return ___s_Back_10; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Back_10() { return &___s_Back_10; }
	inline void set_s_Back_10(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Back_10 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>
struct Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B, ___list_0)); }
	inline List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * get_list_0() const { return ___list_0; }
	inline List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B, ___current_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_current_3() const { return ___current_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Vector3Int,System.Object>
struct Enumerator_tCAEEE187D2E58B4D61A5C099EE6D6C4E40D59BA5 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tCAEEE187D2E58B4D61A5C099EE6D6C4E40D59BA5, ___dictionary_0)); }
	inline Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCAEEE187D2E58B4D61A5C099EE6D6C4E40D59BA5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCAEEE187D2E58B4D61A5C099EE6D6C4E40D59BA5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_tCAEEE187D2E58B4D61A5C099EE6D6C4E40D59BA5, ___currentKey_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_currentKey_3() const { return ___currentKey_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___currentKey_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Vector3Int,TileScript>
struct Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5, ___dictionary_0)); }
	inline Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5, ___currentKey_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_currentKey_3() const { return ___currentKey_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___currentKey_3 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,System.Object>
struct KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE, ___key_0)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_key_0() const { return ___key_0; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,TileScript>
struct KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0, ___key_0)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_key_0() const { return ___key_0; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0, ___value_1)); }
	inline TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * get_value_1() const { return ___value_1; }
	inline TileScript_t6E723D639E7213BAEA1F8346F405265665193642 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>
struct ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6 
{
public:
	// T1 System.ValueTuple`2::Item1
	float ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6, ___Item1_0)); }
	inline float get_Item1_0() const { return ___Item1_0; }
	inline float* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(float value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6, ___Item2_1)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_Item2_1() const { return ___Item2_1; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___Item2_1 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.Tilemaps.TileFlags
struct TileFlags_tAA2786C2FC3467D33A613BE2AE244E9E43EF510B 
{
public:
	// System.Int32 UnityEngine.Tilemaps.TileFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TileFlags_tAA2786C2FC3467D33A613BE2AE244E9E43EF510B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TileScript
struct TileScript_t6E723D639E7213BAEA1F8346F405265665193642  : public RuntimeObject
{
public:
	// UnityEngine.Tilemaps.Tilemap TileScript::map
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___map_0;
	// System.Collections.Generic.List`1<UnityEngine.Vector3Int> TileScript::neighbors
	List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * ___neighbors_1;
	// System.Single TileScript::weight
	float ___weight_2;
	// System.Single TileScript::distance
	float ___distance_3;
	// System.Boolean TileScript::isWall
	bool ___isWall_4;
	// System.Boolean TileScript::isFound
	bool ___isFound_5;
	// System.Boolean TileScript::isPath
	bool ___isPath_6;
	// UnityEngine.Vector3Int TileScript::coords
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___coords_7;
	// UnityEngine.Vector3Int TileScript::pred
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___pred_8;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(TileScript_t6E723D639E7213BAEA1F8346F405265665193642, ___map_0)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_map_0() const { return ___map_0; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_0), (void*)value);
	}

	inline static int32_t get_offset_of_neighbors_1() { return static_cast<int32_t>(offsetof(TileScript_t6E723D639E7213BAEA1F8346F405265665193642, ___neighbors_1)); }
	inline List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * get_neighbors_1() const { return ___neighbors_1; }
	inline List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D ** get_address_of_neighbors_1() { return &___neighbors_1; }
	inline void set_neighbors_1(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * value)
	{
		___neighbors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neighbors_1), (void*)value);
	}

	inline static int32_t get_offset_of_weight_2() { return static_cast<int32_t>(offsetof(TileScript_t6E723D639E7213BAEA1F8346F405265665193642, ___weight_2)); }
	inline float get_weight_2() const { return ___weight_2; }
	inline float* get_address_of_weight_2() { return &___weight_2; }
	inline void set_weight_2(float value)
	{
		___weight_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(TileScript_t6E723D639E7213BAEA1F8346F405265665193642, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_isWall_4() { return static_cast<int32_t>(offsetof(TileScript_t6E723D639E7213BAEA1F8346F405265665193642, ___isWall_4)); }
	inline bool get_isWall_4() const { return ___isWall_4; }
	inline bool* get_address_of_isWall_4() { return &___isWall_4; }
	inline void set_isWall_4(bool value)
	{
		___isWall_4 = value;
	}

	inline static int32_t get_offset_of_isFound_5() { return static_cast<int32_t>(offsetof(TileScript_t6E723D639E7213BAEA1F8346F405265665193642, ___isFound_5)); }
	inline bool get_isFound_5() const { return ___isFound_5; }
	inline bool* get_address_of_isFound_5() { return &___isFound_5; }
	inline void set_isFound_5(bool value)
	{
		___isFound_5 = value;
	}

	inline static int32_t get_offset_of_isPath_6() { return static_cast<int32_t>(offsetof(TileScript_t6E723D639E7213BAEA1F8346F405265665193642, ___isPath_6)); }
	inline bool get_isPath_6() const { return ___isPath_6; }
	inline bool* get_address_of_isPath_6() { return &___isPath_6; }
	inline void set_isPath_6(bool value)
	{
		___isPath_6 = value;
	}

	inline static int32_t get_offset_of_coords_7() { return static_cast<int32_t>(offsetof(TileScript_t6E723D639E7213BAEA1F8346F405265665193642, ___coords_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_coords_7() const { return ___coords_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_coords_7() { return &___coords_7; }
	inline void set_coords_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___coords_7 = value;
	}

	inline static int32_t get_offset_of_pred_8() { return static_cast<int32_t>(offsetof(TileScript_t6E723D639E7213BAEA1F8346F405265665193642, ___pred_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_pred_8() const { return ___pred_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_pred_8() { return &___pred_8; }
	inline void set_pred_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___pred_8 = value;
	}
};


// Dijkstra/<startAlgorithm>d__5
struct U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2  : public RuntimeObject
{
public:
	// System.Int32 Dijkstra/<startAlgorithm>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Dijkstra/<startAlgorithm>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Dijkstra Dijkstra/<startAlgorithm>d__5::<>4__this
	Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * ___U3CU3E4__this_2;
	// System.Single Dijkstra/<startAlgorithm>d__5::<dist>5__2
	float ___U3CdistU3E5__2_3;
	// System.Boolean Dijkstra/<startAlgorithm>d__5::<breakFlag>5__3
	bool ___U3CbreakFlagU3E5__3_4;
	// UnityEngine.Vector3Int Dijkstra/<startAlgorithm>d__5::<currentVert>5__4
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___U3CcurrentVertU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2, ___U3CU3E4__this_2)); }
	inline Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdistU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2, ___U3CdistU3E5__2_3)); }
	inline float get_U3CdistU3E5__2_3() const { return ___U3CdistU3E5__2_3; }
	inline float* get_address_of_U3CdistU3E5__2_3() { return &___U3CdistU3E5__2_3; }
	inline void set_U3CdistU3E5__2_3(float value)
	{
		___U3CdistU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CbreakFlagU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2, ___U3CbreakFlagU3E5__3_4)); }
	inline bool get_U3CbreakFlagU3E5__3_4() const { return ___U3CbreakFlagU3E5__3_4; }
	inline bool* get_address_of_U3CbreakFlagU3E5__3_4() { return &___U3CbreakFlagU3E5__3_4; }
	inline void set_U3CbreakFlagU3E5__3_4(bool value)
	{
		___U3CbreakFlagU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentVertU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2, ___U3CcurrentVertU3E5__4_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_U3CcurrentVertU3E5__4_5() const { return ___U3CcurrentVertU3E5__4_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_U3CcurrentVertU3E5__4_5() { return &___U3CcurrentVertU3E5__4_5; }
	inline void set_U3CcurrentVertU3E5__4_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___U3CcurrentVertU3E5__4_5 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,System.Object>
struct Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE, ___dictionary_0)); }
	inline Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE, ___current_3)); }
	inline KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,TileScript>
struct Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871, ___dictionary_0)); }
	inline Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871, ___current_3)); }
	inline KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
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


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
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


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.Tilemaps.TileBase
struct TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
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


// UnityEngine.GridLayout
struct GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// ButtonScript
struct ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MapManager ButtonScript::mapManager
	MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * ___mapManager_4;
	// UnityEngine.Tilemaps.Tilemap ButtonScript::map
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___map_5;
	// Dijkstra ButtonScript::dijkstra
	Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * ___dijkstra_6;
	// UnityEngine.UI.Text ButtonScript::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_7;
	// UnityEngine.UI.Slider ButtonScript::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_8;
	// System.Boolean ButtonScript::turnWall
	bool ___turnWall_9;
	// System.Boolean ButtonScript::hasReset
	bool ___hasReset_10;
	// System.Boolean ButtonScript::erase
	bool ___erase_11;

public:
	inline static int32_t get_offset_of_mapManager_4() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ___mapManager_4)); }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * get_mapManager_4() const { return ___mapManager_4; }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 ** get_address_of_mapManager_4() { return &___mapManager_4; }
	inline void set_mapManager_4(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * value)
	{
		___mapManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_map_5() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ___map_5)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_map_5() const { return ___map_5; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_map_5() { return &___map_5; }
	inline void set_map_5(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___map_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_5), (void*)value);
	}

	inline static int32_t get_offset_of_dijkstra_6() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ___dijkstra_6)); }
	inline Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * get_dijkstra_6() const { return ___dijkstra_6; }
	inline Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 ** get_address_of_dijkstra_6() { return &___dijkstra_6; }
	inline void set_dijkstra_6(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * value)
	{
		___dijkstra_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dijkstra_6), (void*)value);
	}

	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ___text_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_7() const { return ___text_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_7), (void*)value);
	}

	inline static int32_t get_offset_of_slider_8() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ___slider_8)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_8() const { return ___slider_8; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_8() { return &___slider_8; }
	inline void set_slider_8(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_8), (void*)value);
	}

	inline static int32_t get_offset_of_turnWall_9() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ___turnWall_9)); }
	inline bool get_turnWall_9() const { return ___turnWall_9; }
	inline bool* get_address_of_turnWall_9() { return &___turnWall_9; }
	inline void set_turnWall_9(bool value)
	{
		___turnWall_9 = value;
	}

	inline static int32_t get_offset_of_hasReset_10() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ___hasReset_10)); }
	inline bool get_hasReset_10() const { return ___hasReset_10; }
	inline bool* get_address_of_hasReset_10() { return &___hasReset_10; }
	inline void set_hasReset_10(bool value)
	{
		___hasReset_10 = value;
	}

	inline static int32_t get_offset_of_erase_11() { return static_cast<int32_t>(offsetof(ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7, ___erase_11)); }
	inline bool get_erase_11() const { return ___erase_11; }
	inline bool* get_address_of_erase_11() { return &___erase_11; }
	inline void set_erase_11(bool value)
	{
		___erase_11 = value;
	}
};


// CameraMovement
struct CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MapManager CameraMovement::mapManager
	MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * ___mapManager_4;
	// UnityEngine.Vector3 CameraMovement::initPosR
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initPosR_5;
	// UnityEngine.Vector3 CameraMovement::newPosR
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPosR_6;
	// UnityEngine.Vector3 CameraMovement::initPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initPos_7;
	// UnityEngine.Vector3 CameraMovement::newPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPos_8;
	// System.Single CameraMovement::sensitivity
	float ___sensitivity_9;
	// UnityEngine.GameObject CameraMovement::start
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___start_10;
	// UnityEngine.GameObject CameraMovement::finish
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___finish_11;
	// System.String CameraMovement::func
	String_t* ___func_12;

public:
	inline static int32_t get_offset_of_mapManager_4() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___mapManager_4)); }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * get_mapManager_4() const { return ___mapManager_4; }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 ** get_address_of_mapManager_4() { return &___mapManager_4; }
	inline void set_mapManager_4(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * value)
	{
		___mapManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_initPosR_5() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___initPosR_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initPosR_5() const { return ___initPosR_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initPosR_5() { return &___initPosR_5; }
	inline void set_initPosR_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initPosR_5 = value;
	}

	inline static int32_t get_offset_of_newPosR_6() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___newPosR_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newPosR_6() const { return ___newPosR_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newPosR_6() { return &___newPosR_6; }
	inline void set_newPosR_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newPosR_6 = value;
	}

	inline static int32_t get_offset_of_initPos_7() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___initPos_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initPos_7() const { return ___initPos_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initPos_7() { return &___initPos_7; }
	inline void set_initPos_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initPos_7 = value;
	}

	inline static int32_t get_offset_of_newPos_8() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___newPos_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newPos_8() const { return ___newPos_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newPos_8() { return &___newPos_8; }
	inline void set_newPos_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newPos_8 = value;
	}

	inline static int32_t get_offset_of_sensitivity_9() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___sensitivity_9)); }
	inline float get_sensitivity_9() const { return ___sensitivity_9; }
	inline float* get_address_of_sensitivity_9() { return &___sensitivity_9; }
	inline void set_sensitivity_9(float value)
	{
		___sensitivity_9 = value;
	}

	inline static int32_t get_offset_of_start_10() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___start_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_start_10() const { return ___start_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_start_10() { return &___start_10; }
	inline void set_start_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___start_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___start_10), (void*)value);
	}

	inline static int32_t get_offset_of_finish_11() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___finish_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_finish_11() const { return ___finish_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_finish_11() { return &___finish_11; }
	inline void set_finish_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___finish_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___finish_11), (void*)value);
	}

	inline static int32_t get_offset_of_func_12() { return static_cast<int32_t>(offsetof(CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35, ___func_12)); }
	inline String_t* get_func_12() const { return ___func_12; }
	inline String_t** get_address_of_func_12() { return &___func_12; }
	inline void set_func_12(String_t* value)
	{
		___func_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_12), (void*)value);
	}
};


// Dijkstra
struct Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MapManager Dijkstra::mapManager
	MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * ___mapManager_4;
	// PriorityQueue Dijkstra::pq
	PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * ___pq_5;
	// System.Single Dijkstra::speed
	float ___speed_6;
	// UnityEngine.Tilemaps.Tilemap Dijkstra::map
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___map_7;

public:
	inline static int32_t get_offset_of_mapManager_4() { return static_cast<int32_t>(offsetof(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817, ___mapManager_4)); }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * get_mapManager_4() const { return ___mapManager_4; }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 ** get_address_of_mapManager_4() { return &___mapManager_4; }
	inline void set_mapManager_4(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * value)
	{
		___mapManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_pq_5() { return static_cast<int32_t>(offsetof(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817, ___pq_5)); }
	inline PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * get_pq_5() const { return ___pq_5; }
	inline PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F ** get_address_of_pq_5() { return &___pq_5; }
	inline void set_pq_5(PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * value)
	{
		___pq_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pq_5), (void*)value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_map_7() { return static_cast<int32_t>(offsetof(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817, ___map_7)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_map_7() const { return ___map_7; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_map_7() { return &___map_7; }
	inline void set_map_7(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___map_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_7), (void*)value);
	}
};


// FinishScript
struct FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MapManager FinishScript::mapManager
	MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * ___mapManager_4;

public:
	inline static int32_t get_offset_of_mapManager_4() { return static_cast<int32_t>(offsetof(FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C, ___mapManager_4)); }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * get_mapManager_4() const { return ___mapManager_4; }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 ** get_address_of_mapManager_4() { return &___mapManager_4; }
	inline void set_mapManager_4(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * value)
	{
		___mapManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapManager_4), (void*)value);
	}
};


// InitializeGrid
struct InitializeGrid_t0411CA9413327B7591CD30FF6D448E7C3DA60212  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject InitializeGrid::tile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tile_4;
	// UnityEngine.GameObject[][] InitializeGrid::arr
	GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C* ___arr_5;

public:
	inline static int32_t get_offset_of_tile_4() { return static_cast<int32_t>(offsetof(InitializeGrid_t0411CA9413327B7591CD30FF6D448E7C3DA60212, ___tile_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tile_4() const { return ___tile_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tile_4() { return &___tile_4; }
	inline void set_tile_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tile_4), (void*)value);
	}

	inline static int32_t get_offset_of_arr_5() { return static_cast<int32_t>(offsetof(InitializeGrid_t0411CA9413327B7591CD30FF6D448E7C3DA60212, ___arr_5)); }
	inline GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C* get_arr_5() const { return ___arr_5; }
	inline GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C** get_address_of_arr_5() { return &___arr_5; }
	inline void set_arr_5(GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C* value)
	{
		___arr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arr_5), (void*)value);
	}
};


// InteractTiles
struct InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean InteractTiles::isStart
	bool ___isStart_4;
	// System.Boolean InteractTiles::isFinish
	bool ___isFinish_5;
	// System.Boolean InteractTiles::isDefense
	bool ___isDefense_6;
	// System.Boolean InteractTiles::isFound
	bool ___isFound_7;
	// System.Single InteractTiles::weight
	float ___weight_8;
	// System.Collections.Generic.List`1<UnityEngine.Collider2D> InteractTiles::colliders
	List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998 * ___colliders_9;
	// UnityEngine.BoxCollider2D InteractTiles::boxCollider2d
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * ___boxCollider2d_10;
	// UnityEngine.RaycastHit2D InteractTiles::raycastHit2D
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___raycastHit2D_11;

public:
	inline static int32_t get_offset_of_isStart_4() { return static_cast<int32_t>(offsetof(InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628, ___isStart_4)); }
	inline bool get_isStart_4() const { return ___isStart_4; }
	inline bool* get_address_of_isStart_4() { return &___isStart_4; }
	inline void set_isStart_4(bool value)
	{
		___isStart_4 = value;
	}

	inline static int32_t get_offset_of_isFinish_5() { return static_cast<int32_t>(offsetof(InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628, ___isFinish_5)); }
	inline bool get_isFinish_5() const { return ___isFinish_5; }
	inline bool* get_address_of_isFinish_5() { return &___isFinish_5; }
	inline void set_isFinish_5(bool value)
	{
		___isFinish_5 = value;
	}

	inline static int32_t get_offset_of_isDefense_6() { return static_cast<int32_t>(offsetof(InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628, ___isDefense_6)); }
	inline bool get_isDefense_6() const { return ___isDefense_6; }
	inline bool* get_address_of_isDefense_6() { return &___isDefense_6; }
	inline void set_isDefense_6(bool value)
	{
		___isDefense_6 = value;
	}

	inline static int32_t get_offset_of_isFound_7() { return static_cast<int32_t>(offsetof(InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628, ___isFound_7)); }
	inline bool get_isFound_7() const { return ___isFound_7; }
	inline bool* get_address_of_isFound_7() { return &___isFound_7; }
	inline void set_isFound_7(bool value)
	{
		___isFound_7 = value;
	}

	inline static int32_t get_offset_of_weight_8() { return static_cast<int32_t>(offsetof(InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628, ___weight_8)); }
	inline float get_weight_8() const { return ___weight_8; }
	inline float* get_address_of_weight_8() { return &___weight_8; }
	inline void set_weight_8(float value)
	{
		___weight_8 = value;
	}

	inline static int32_t get_offset_of_colliders_9() { return static_cast<int32_t>(offsetof(InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628, ___colliders_9)); }
	inline List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998 * get_colliders_9() const { return ___colliders_9; }
	inline List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998 ** get_address_of_colliders_9() { return &___colliders_9; }
	inline void set_colliders_9(List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998 * value)
	{
		___colliders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliders_9), (void*)value);
	}

	inline static int32_t get_offset_of_boxCollider2d_10() { return static_cast<int32_t>(offsetof(InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628, ___boxCollider2d_10)); }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * get_boxCollider2d_10() const { return ___boxCollider2d_10; }
	inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 ** get_address_of_boxCollider2d_10() { return &___boxCollider2d_10; }
	inline void set_boxCollider2d_10(BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * value)
	{
		___boxCollider2d_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider2d_10), (void*)value);
	}

	inline static int32_t get_offset_of_raycastHit2D_11() { return static_cast<int32_t>(offsetof(InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628, ___raycastHit2D_11)); }
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  get_raycastHit2D_11() const { return ___raycastHit2D_11; }
	inline RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * get_address_of_raycastHit2D_11() { return &___raycastHit2D_11; }
	inline void set_raycastHit2D_11(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  value)
	{
		___raycastHit2D_11 = value;
	}
};


// MapManager
struct MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Tilemaps.Tilemap MapManager::map
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___map_4;
	// Dijkstra MapManager::dijkstra
	Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * ___dijkstra_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,TileScript> MapManager::tiles
	Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * ___tiles_6;
	// UnityEngine.Vector3Int MapManager::start
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___start_7;
	// UnityEngine.Vector3Int MapManager::finish
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___finish_8;

public:
	inline static int32_t get_offset_of_map_4() { return static_cast<int32_t>(offsetof(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225, ___map_4)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_map_4() const { return ___map_4; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_map_4() { return &___map_4; }
	inline void set_map_4(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___map_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_4), (void*)value);
	}

	inline static int32_t get_offset_of_dijkstra_5() { return static_cast<int32_t>(offsetof(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225, ___dijkstra_5)); }
	inline Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * get_dijkstra_5() const { return ___dijkstra_5; }
	inline Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 ** get_address_of_dijkstra_5() { return &___dijkstra_5; }
	inline void set_dijkstra_5(Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * value)
	{
		___dijkstra_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dijkstra_5), (void*)value);
	}

	inline static int32_t get_offset_of_tiles_6() { return static_cast<int32_t>(offsetof(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225, ___tiles_6)); }
	inline Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * get_tiles_6() const { return ___tiles_6; }
	inline Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 ** get_address_of_tiles_6() { return &___tiles_6; }
	inline void set_tiles_6(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * value)
	{
		___tiles_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tiles_6), (void*)value);
	}

	inline static int32_t get_offset_of_start_7() { return static_cast<int32_t>(offsetof(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225, ___start_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_start_7() const { return ___start_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_start_7() { return &___start_7; }
	inline void set_start_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___start_7 = value;
	}

	inline static int32_t get_offset_of_finish_8() { return static_cast<int32_t>(offsetof(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225, ___finish_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_finish_8() const { return ___finish_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_finish_8() { return &___finish_8; }
	inline void set_finish_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___finish_8 = value;
	}
};


// StartScript
struct StartScript_tCC6B6DE674F70B70F4A3AF1158C54683A6775740  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MapManager StartScript::mapManager
	MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * ___mapManager_4;

public:
	inline static int32_t get_offset_of_mapManager_4() { return static_cast<int32_t>(offsetof(StartScript_tCC6B6DE674F70B70F4A3AF1158C54683A6775740, ___mapManager_4)); }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * get_mapManager_4() const { return ___mapManager_4; }
	inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 ** get_address_of_mapManager_4() { return &___mapManager_4; }
	inline void set_mapManager_4(MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * value)
	{
		___mapManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapManager_4), (void*)value);
	}
};


// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31  : public GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UnityEngine.GameObject[][]
struct GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* m_Items[1];

public:
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * m_Items[1];

public:
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>[]
struct ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  m_Items[1];

public:
	inline ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  value)
	{
		m_Items[index] = value;
	}
};


// !1 System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m7016424392EA506B0D2D8B84F85C1ED0CEC24881_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA379587106F22E8913F8B2E1EA6845E5A736D4EA * Dictionary_2_get_Keys_m854C8738E1A099E13E3923C804A42199588B51BA_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector3Int,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCAEEE187D2E58B4D61A5C099EE6D6C4E40D59BA5  KeyCollection_GetEnumerator_mF0202950B742152F61D12EFD74DB2D1F29FDD114_gshared (KeyCollection_tA379587106F22E8913F8B2E1EA6845E5A736D4EA * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Vector3Int,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Enumerator_get_Current_mDCBD0C39CA8B32D579BFBECDCA9987C1BCBF288D_gshared_inline (Enumerator_tCAEEE187D2E58B4D61A5C099EE6D6C4E40D59BA5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Vector3Int,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA8E4AF8D2BDE1E12187A21946845659C6B826B6D_gshared (Enumerator_tCAEEE187D2E58B4D61A5C099EE6D6C4E40D59BA5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Vector3Int,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4B3A7D1BFFA750168317EDCE39E38EBB2AE37E61_gshared (Enumerator_tCAEEE187D2E58B4D61A5C099EE6D6C4E40D59BA5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3Int>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_gshared (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93B04621288D2320063526D57E63C5828AC91356_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9C3273981F42B6D2E10C45DE98A87F523A7092AC_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE  Dictionary_2_GetEnumerator_mBCC98892BE6E1FB46BB14AEEC8625CB1E2F5A88F_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  Enumerator_get_Current_mDFFB7974DE64CBA005418096447D17DBD07B9E88_gshared_inline (Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mD547C1FD8A32EAD3DA92B371F436FB362F2B058C_gshared_inline (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  KeyValuePair_2_get_Key_mCC04ED20A66A66A4926D26D920DB3A9BAA935EA2_gshared_inline (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m88A2D2A1748B3823E485FE8E274EE526556A0EAC_gshared (ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6 * __this, float ___item10, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m7CA657ADF1C3EB3A89EBCAB2E113127669E7ADEF_gshared (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * __this, ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m62FD7D5DCF9787848BE010285625E3BF4B1A6D5F_gshared (Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8CBD299F4694FBF338D5B9EF0BC6CCEA2BD81B85_gshared (Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m353F78F810C11FF53B6F16BCAF9C0477C2571805_gshared (Dictionary_2_t7239DE6B99AB8AD21F665B71EAC57626D4C8B7C4 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_gshared_inline (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_gshared (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * __this, int32_t ___index0, ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mC8351AD00084C9AEC3409B78A79E019B37E12180_gshared (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8E42011BCD7853639127DFB481489DEA580A3305_gshared (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_gshared (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector3Int>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_gshared (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_gshared_inline (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_gshared (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_gshared (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method);

// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3Int UnityEngine.Vector3Int::RoundToInt(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void ButtonScript::changeToWall(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_changeToWall_m9CEAC6713DCCBFF8297475F0AD2F0F99304F7010 (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___coords0, const RuntimeMethod* method);
// System.Void ButtonScript::eraseWall(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_eraseWall_mA245774ECD40BD301E82AE6A03077D3BA674EE30 (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___coords0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,TileScript>::get_Item(!0)
inline TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730 (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key0, const RuntimeMethod* method)
{
	return ((  TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * (*) (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 *, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA , const RuntimeMethod*))Dictionary_2_get_Item_m7016424392EA506B0D2D8B84F85C1ED0CEC24881_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTileFlags(UnityEngine.Vector3Int,UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileFlags_mC88DE5654C5FAB5CFBDD0CAD7ED500AD0B1033C2 (Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, int32_t ___flags1, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Tilemaps.Tilemap::SetColor(UnityEngine.Vector3Int,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColor_mC78B3CC9FFA5C5EB63D061FBBD047D24C13BEA81 (Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,TileScript>::get_Keys()
inline KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3 * Dictionary_2_get_Keys_m1744EB032A163FDB4A690EA6D59F63B1DE1F092C (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3 * (*) (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 *, const RuntimeMethod*))Dictionary_2_get_Keys_m854C8738E1A099E13E3923C804A42199588B51BA_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector3Int,TileScript>::GetEnumerator()
inline Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5  KeyCollection_GetEnumerator_m8DBDB4B1CAFCA90E9F183EE44FACEB76D3B3F6A2 (KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5  (*) (KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3 *, const RuntimeMethod*))KeyCollection_GetEnumerator_mF0202950B742152F61D12EFD74DB2D1F29FDD114_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Vector3Int,TileScript>::get_Current()
inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Enumerator_get_Current_mBE7E52D5DCAFA92CF5677546C14BED6BAD8CF800_inline (Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 * __this, const RuntimeMethod* method)
{
	return ((  Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  (*) (Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 *, const RuntimeMethod*))Enumerator_get_Current_mDCBD0C39CA8B32D579BFBECDCA9987C1BCBF288D_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Vector3Int::op_Inequality(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Inequality_mA54738AF377CBBA523CAEF47398C32F0338BF8E7_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___lhs0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___rhs1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Vector3Int,TileScript>::MoveNext()
inline bool Enumerator_MoveNext_m94C833B421A86958F78EF25421F27E5334A3A10C (Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 *, const RuntimeMethod*))Enumerator_MoveNext_mA8E4AF8D2BDE1E12187A21946845659C6B826B6D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Vector3Int,TileScript>::Dispose()
inline void Enumerator_Dispose_m23F73B815D52415BA49378576D444624B7259D92 (Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 *, const RuntimeMethod*))Enumerator_Dispose_m4B3A7D1BFFA750168317EDCE39E38EBB2AE37E61_gshared)(__this, method);
}
// System.Collections.IEnumerator Dijkstra::startAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dijkstra_startAlgorithm_m0ACEFEDDAD6BC2B13DD92FF9B5762D5B3A8DB680 (Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<MapManager>()
inline MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94 (const RuntimeMethod* method)
{
	return ((  MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void CameraMovement::leftClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_leftClick_m213DF60DF46389E3695BAFC8A83E017016FE4E7C (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method);
// System.Void CameraMovement::rightClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_rightClick_m29053183E4A56BD0C7A11F430C3A521806E373C7 (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method);
// System.Void CameraMovement::zoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_zoom_mDC34C499BE79C9A26957F27D333E689AB272C96D (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3Int::op_Equality(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___lhs0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___rhs1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Dijkstra/<startAlgorithm>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartAlgorithmU3Ed__5__ctor_m47EABC9332857F8BADCBE41ACEE381F5537C27D0 (U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void PriorityQueue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue__ctor_m09E4E30DCFBC64660D7CF8731551788CE2D4CB74 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void MapManager::setFinish(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_setFinish_mC7228DB3C20E1A411EC38D84D67BC344099C55A1 (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___coords0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3Int::op_Implicit(UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Int_op_Implicit_mD812DEDBDE886508E86FB3222BB9DDB4949B4475_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void InteractTiles::hasConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractTiles_hasConnection_mDC9B505F1515E62EAC2C14DB2C932576D6B9F4C9 (InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628 * __this, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* Physics2D_OverlapCircleAll_m9D7CF119EA9F260FBAD101EA8A6916A643551C0D (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::Add(!0)
inline void List_1_Add_m8EA1ACBF8FE9A73519A1309E6CBC1C4A836B5EDF (List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998 *, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::.ctor()
inline void List_1__ctor_m37D844C561014FDD2C6E1AEE127A5A087F9ADC88 (List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Tilemaps.Tilemap::get_localBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Tilemap_get_localBounds_m9C56553C51B3B97DEEA4D33F1842D68FB4D0F24E (Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method);
// System.Void TileScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileScript__ctor_m40C007E48A65267B60C98794FD21E0CF2D17CC6C (TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3Int>::Add(!0)
inline void List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA , const RuntimeMethod*))List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,TileScript>::Add(!0,!1)
inline void Dictionary_2_Add_m51D56D65424EF4D398ED807D537506F0BDE8492C (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___key0, TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 *, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA , TileScript_t6E723D639E7213BAEA1F8346F405265665193642 *, const RuntimeMethod*))Dictionary_2_Add_m93B04621288D2320063526D57E63C5828AC91356_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3Int UnityEngine.GridLayout::WorldToCell(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9 (GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// UnityEngine.Tilemaps.TileBase UnityEngine.Tilemaps.Tilemap::GetTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052 * Tilemap_GetTile_m611C89C47D6FE68099998192BA57344FCE782B19 (Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,TileScript>::.ctor()
inline void Dictionary_2__ctor_m39CB0B597F4E98552F1A70DC3CC5A89598CA343A (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 *, const RuntimeMethod*))Dictionary_2__ctor_m9C3273981F42B6D2E10C45DE98A87F523A7092AC_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,TileScript>::GetEnumerator()
inline Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871  Dictionary_2_GetEnumerator_mCE51D191DC98BB3F87C1A1B2892DDCDDDC951AA1 (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871  (*) (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mBCC98892BE6E1FB46BB14AEEC8625CB1E2F5A88F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,TileScript>::get_Current()
inline KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0  Enumerator_get_Current_mA5C395E41F4BD985AE156D3E79106A66EC41DC27_inline (Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0  (*) (Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871 *, const RuntimeMethod*))Enumerator_get_Current_mDFFB7974DE64CBA005418096447D17DBD07B9E88_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,TileScript>::get_Value()
inline TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * KeyValuePair_2_get_Value_m988EA6B6A8FE1DF3EB5AA5D82A5177029C8BA2A8_inline (KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0 * __this, const RuntimeMethod* method)
{
	return ((  TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * (*) (KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mD547C1FD8A32EAD3DA92B371F436FB362F2B058C_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Vector3Int,TileScript>::get_Key()
inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  KeyValuePair_2_get_Key_m29959ADC02B9A9B8031480672B98D23AF5DFC33E_inline (KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0 * __this, const RuntimeMethod* method)
{
	return ((  Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  (*) (KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCC04ED20A66A66A4926D26D920DB3A9BAA935EA2_gshared_inline)(__this, method);
}
// System.Void System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_m88A2D2A1748B3823E485FE8E274EE526556A0EAC (ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6 * __this, float ___item10, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6 *, float, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA , const RuntimeMethod*))ValueTuple_2__ctor_m88A2D2A1748B3823E485FE8E274EE526556A0EAC_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>::Add(!0)
inline void List_1_Add_m7CA657ADF1C3EB3A89EBCAB2E113127669E7ADEF (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * __this, ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 *, ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6 , const RuntimeMethod*))List_1_Add_m7CA657ADF1C3EB3A89EBCAB2E113127669E7ADEF_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,TileScript>::MoveNext()
inline bool Enumerator_MoveNext_m27D297DD08E8092CBD8F3FAE983F542EC9DE0243 (Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871 *, const RuntimeMethod*))Enumerator_MoveNext_m62FD7D5DCF9787848BE010285625E3BF4B1A6D5F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Vector3Int,TileScript>::Dispose()
inline void Enumerator_Dispose_mE383366DA9347FCDD39AEEAE012470CD47206BB7 (Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871 *, const RuntimeMethod*))Enumerator_Dispose_m8CBD299F4694FBF338D5B9EF0BC6CCEA2BD81B85_gshared)(__this, method);
}
// System.Void PriorityQueue::percDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_percDown_m9B8488C754B747E720A58A92A7A6E8914D4B94B7 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,TileScript>::get_Count()
inline int32_t Dictionary_2_get_Count_m9A23ADCB03F86D01E40E69C9C097C2A0CEED71CA (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 *, const RuntimeMethod*))Dictionary_2_get_Count_m353F78F810C11FF53B6F16BCAF9C0477C2571805_gshared)(__this, method);
}
// System.Int32 PriorityQueue::minChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PriorityQueue_minChild_m3D0D1B7E5FE54C7A0C59EEE6FC4F97C86AFB905E (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, int32_t ___i0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>::get_Item(System.Int32)
inline ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  (*) (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * __this, int32_t ___index0, ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 *, int32_t, ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6 , const RuntimeMethod*))List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mC8351AD00084C9AEC3409B78A79E019B37E12180 (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_mC8351AD00084C9AEC3409B78A79E019B37E12180_gshared)(__this, ___index0, method);
}
// System.Void PriorityQueue::percUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_percUp_m8339827E88C853EF76DAE3088905CBAC0A11569E (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Single,UnityEngine.Vector3Int>>::.ctor()
inline void List_1__ctor_m8E42011BCD7853639127DFB481489DEA580A3305 (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 *, const RuntimeMethod*))List_1__ctor_m8E42011BCD7853639127DFB481489DEA580A3305_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void MapManager::setStart(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_setStart_m112B67345B9082E2C1F56893A9B2B3A9C34C9F3F (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___coords0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3Int>::.ctor()
inline void List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *, const RuntimeMethod*))List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_gshared)(__this, method);
}
// System.Void PriorityQueue::buildHeap(System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,TileScript>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_buildHeap_mD33DCC3817E8DB51F27C6DB7CA746F0379803075 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * ___dict0, const RuntimeMethod* method);
// UnityEngine.Vector3Int PriorityQueue::delMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  PriorityQueue_delMin_m8DE01AD4FEC63677031B43ECD4DFAEF1516AA3A7 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector3Int>::GetEnumerator()
inline Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  (*) (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *, const RuntimeMethod*))List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::get_Current()
inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_inline (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method)
{
	return ((  Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  (*) (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *, const RuntimeMethod*))Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_gshared_inline)(__this, method);
}
// System.Void PriorityQueue::decreaseKey(UnityEngine.Vector3Int,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_decreaseKey_m048C75FBF235E25D2CDE8E397FDEFE4FA9D719A9 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___val0, float ___amt1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::MoveNext()
inline bool Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2 (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *, const RuntimeMethod*))Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3Int>::Dispose()
inline void Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *, const RuntimeMethod*))Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_gshared)(__this, method);
}
// System.Boolean PriorityQueue::isEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PriorityQueue_isEmpty_m2CA6C937FA1E7C6A03EA69EEDBFAC00DBA301170 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void ButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_Start_m667412D1B935EA027E49D2C8A4E3EA28C236D54C (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	{
		// dijkstra.speed = 30;
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_0 = __this->get_dijkstra_6();
		L_0->set_speed_6((30.0f));
		// }
		return;
	}
}
// System.Void ButtonScript::wallSelectButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_wallSelectButton_mB7043D098AB037FE973F987433129DD5619DB1DB (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C902504D3B71DE57ED2DC2422E12B512328ED13);
		s_Il2CppMethodInitialized = true;
	}
	{
		// erase = false;
		__this->set_erase_11((bool)0);
		// turnWall = !turnWall;
		bool L_0 = __this->get_turnWall_9();
		__this->set_turnWall_9((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// Debug.Log($"Can turn tiles to walls: {turnWall}");
		bool L_1 = __this->get_turnWall_9();
		bool L_2 = L_1;
		RuntimeObject * L_3 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral5C902504D3B71DE57ED2DC2422E12B512328ED13, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// } // wallSelectButton()
		return;
	}
}
// System.Void ButtonScript::eraseButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_eraseButton_m74CBAB2B553C05C64D1D2B7D670FCA9F71B45167 (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral171C4980CEDD496590EA02D7A9FA3D5825D2797B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// turnWall = false;
		__this->set_turnWall_9((bool)0);
		// erase = !erase;
		bool L_0 = __this->get_erase_11();
		__this->set_erase_11((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// Debug.Log($"Can erase walls: {erase}");
		bool L_1 = __this->get_erase_11();
		bool L_2 = L_1;
		RuntimeObject * L_3 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral171C4980CEDD496590EA02D7A9FA3D5825D2797B, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// } // eraseButton()
		return;
	}
}
// System.Void ButtonScript::moveSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_moveSlider_m0551CCEAE66C24AA9F13BD623C4730B2393B7108 (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE090C20B19D850ABD64F22A177D7A290F3FC082D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// text.text = "Speed: " + slider.value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_7();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_1 = __this->get_slider_8();
		float L_2;
		L_2 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE090C20B19D850ABD64F22A177D7A290F3FC082D, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// dijkstra.speed = slider.value*30;
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_5 = __this->get_dijkstra_6();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_6 = __this->get_slider_8();
		float L_7;
		L_7 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_6);
		L_5->set_speed_6(((float)il2cpp_codegen_multiply((float)L_7, (float)(30.0f))));
		// } // moveSlider()
		return;
	}
}
// System.Void ButtonScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_Update_m97527E784DB58C2B6A49C08FFE8F8E728643417B (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(Input.GetMouseButton(0) && turnWall){
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		bool L_1 = __this->get_turnWall_9();
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// Vector3 coords = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// changeToWall(Vector3Int.RoundToInt(coords + new Vector3(-0.5f, -0.5f, 1))); // new Vector3() is to get it to Round to correct tile
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (-0.5f), (-0.5f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_8;
		L_8 = Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline(L_7, /*hidden argument*/NULL);
		ButtonScript_changeToWall_m9CEAC6713DCCBFF8297475F0AD2F0F99304F7010(__this, L_8, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// if(Input.GetMouseButton(0) && erase){
		bool L_9;
		L_9 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		bool L_10 = __this->get_erase_11();
		if (!L_10)
		{
			goto IL_008a;
		}
	}
	{
		// Vector3 coords = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11;
		L_11 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// eraseWall(Vector3Int.RoundToInt(coords + new Vector3(-0.5f, -0.5f, 1))); // new Vector3() is to get it to Round to correct tile
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (-0.5f), (-0.5f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_14, L_15, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_17;
		L_17 = Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline(L_16, /*hidden argument*/NULL);
		ButtonScript_eraseWall_mA245774ECD40BD301E82AE6A03077D3BA674EE30(__this, L_17, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// } // void Update()
		return;
	}
}
// System.Void ButtonScript::eraseWall(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_eraseWall_mA245774ECD40BD301E82AE6A03077D3BA674EE30 (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___coords0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mapManager.tiles[coords].isWall = false;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_0 = __this->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_1 = L_0->get_tiles_6();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_2 = ___coords0;
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_3;
		L_3 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		L_3->set_isWall_4((bool)0);
		// mapManager.tiles[coords].weight = 1f;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_4 = __this->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_5 = L_4->get_tiles_6();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_6 = ___coords0;
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_7;
		L_7 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		L_7->set_weight_2((1.0f));
		// map.SetTileFlags(coords, TileFlags.None); // allowing coords tile to be change color
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_8 = __this->get_map_5();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_9 = ___coords0;
		Tilemap_SetTileFlags_mC88DE5654C5FAB5CFBDD0CAD7ED500AD0B1033C2(L_8, L_9, 0, /*hidden argument*/NULL);
		// map.SetColor(coords, new Color(1, 1, 1, 1)); // changing color to white
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_10 = __this->get_map_5();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_11 = ___coords0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_12), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Tilemap_SetColor_mC78B3CC9FFA5C5EB63D061FBBD047D24C13BEA81(L_10, L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonScript::changeToWall(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_changeToWall_m9CEAC6713DCCBFF8297475F0AD2F0F99304F7010 (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___coords0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mapManager.tiles[coords].isWall = true;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_0 = __this->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_1 = L_0->get_tiles_6();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_2 = ___coords0;
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_3;
		L_3 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		L_3->set_isWall_4((bool)1);
		// mapManager.tiles[coords].weight = float.PositiveInfinity; // changing it so you can't pass through wall
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_4 = __this->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_5 = L_4->get_tiles_6();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_6 = ___coords0;
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_7;
		L_7 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		L_7->set_weight_2((std::numeric_limits<float>::infinity()));
		// map.SetTileFlags(coords, TileFlags.None); // allowing coords tile to be change color
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_8 = __this->get_map_5();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_9 = ___coords0;
		Tilemap_SetTileFlags_mC88DE5654C5FAB5CFBDD0CAD7ED500AD0B1033C2(L_8, L_9, 0, /*hidden argument*/NULL);
		// map.SetColor(coords, new Color(0.2f, 0.2f, 0.2f, 1)); // changing color to gray
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_10 = __this->get_map_5();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_11 = ___coords0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_12), (0.200000003f), (0.200000003f), (0.200000003f), (1.0f), /*hidden argument*/NULL);
		Tilemap_SetColor_mC78B3CC9FFA5C5EB63D061FBBD047D24C13BEA81(L_10, L_11, L_12, /*hidden argument*/NULL);
		// } // changeToWall()
		return;
	}
}
// System.Void ButtonScript::resetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_resetButton_m98C2784FBE7F9017C223B9DD544BC6D327BFCD36 (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m1744EB032A163FDB4A690EA6D59F63B1DE1F092C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23F73B815D52415BA49378576D444624B7259D92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m94C833B421A86958F78EF25421F27E5334A3A10C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBE7E52D5DCAFA92CF5677546C14BED6BAD8CF800_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m8DBDB4B1CAFCA90E9F183EE44FACEB76D3B3F6A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(Vector3Int coords in mapManager.tiles.Keys){
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_0 = __this->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_1 = L_0->get_tiles_6();
		KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3 * L_2;
		L_2 = Dictionary_2_get_Keys_m1744EB032A163FDB4A690EA6D59F63B1DE1F092C(L_1, /*hidden argument*/Dictionary_2_get_Keys_m1744EB032A163FDB4A690EA6D59F63B1DE1F092C_RuntimeMethod_var);
		Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5  L_3;
		L_3 = KeyCollection_GetEnumerator_m8DBDB4B1CAFCA90E9F183EE44FACEB76D3B3F6A2(L_2, /*hidden argument*/KeyCollection_GetEnumerator_m8DBDB4B1CAFCA90E9F183EE44FACEB76D3B3F6A2_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00df;
		}

IL_001b:
		{
			// foreach(Vector3Int coords in mapManager.tiles.Keys){
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4;
			L_4 = Enumerator_get_Current_mBE7E52D5DCAFA92CF5677546C14BED6BAD8CF800_inline((Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mBE7E52D5DCAFA92CF5677546C14BED6BAD8CF800_RuntimeMethod_var);
			V_1 = L_4;
			// mapManager.tiles[coords].isWall = false;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_5 = __this->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_6 = L_5->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7 = V_1;
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_8;
			L_8 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			L_8->set_isWall_4((bool)0);
			// mapManager.tiles[coords].isPath = false;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_9 = __this->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_10 = L_9->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_11 = V_1;
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_12;
			L_12 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			L_12->set_isPath_6((bool)0);
			// mapManager.tiles[coords].weight = 1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_13 = __this->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_14 = L_13->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_15 = V_1;
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_16;
			L_16 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			L_16->set_weight_2((1.0f));
			// mapManager.tiles[coords].distance = float.PositiveInfinity;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_17 = __this->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_18 = L_17->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_19 = V_1;
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_20;
			L_20 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_18, L_19, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			L_20->set_distance_3((std::numeric_limits<float>::infinity()));
			// if(coords != mapManager.start && coords != mapManager.finish){ // keeping start and finish the color they should be
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_21 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_22 = __this->get_mapManager_4();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_23 = L_22->get_start_7();
			bool L_24;
			L_24 = Vector3Int_op_Inequality_mA54738AF377CBBA523CAEF47398C32F0338BF8E7_inline(L_21, L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00df;
			}
		}

IL_009a:
		{
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_25 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_26 = __this->get_mapManager_4();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_27 = L_26->get_finish_8();
			bool L_28;
			L_28 = Vector3Int_op_Inequality_mA54738AF377CBBA523CAEF47398C32F0338BF8E7_inline(L_25, L_27, /*hidden argument*/NULL);
			if (!L_28)
			{
				goto IL_00df;
			}
		}

IL_00ad:
		{
			// map.SetTileFlags(coords, TileFlags.None);
			Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_29 = __this->get_map_5();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_30 = V_1;
			Tilemap_SetTileFlags_mC88DE5654C5FAB5CFBDD0CAD7ED500AD0B1033C2(L_29, L_30, 0, /*hidden argument*/NULL);
			// map.SetColor(coords, new Color(1, 1, 1, 1));
			Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_31 = __this->get_map_5();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_32 = V_1;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
			memset((&L_33), 0, sizeof(L_33));
			Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_33), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
			Tilemap_SetColor_mC78B3CC9FFA5C5EB63D061FBBD047D24C13BEA81(L_31, L_32, L_33, /*hidden argument*/NULL);
		}

IL_00df:
		{
			// foreach(Vector3Int coords in mapManager.tiles.Keys){
			bool L_34;
			L_34 = Enumerator_MoveNext_m94C833B421A86958F78EF25421F27E5334A3A10C((Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m94C833B421A86958F78EF25421F27E5334A3A10C_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_001b;
			}
		}

IL_00eb:
		{
			IL2CPP_LEAVE(0xFB, FINALLY_00ed);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ed;
	}

FINALLY_00ed:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m23F73B815D52415BA49378576D444624B7259D92((Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m23F73B815D52415BA49378576D444624B7259D92_RuntimeMethod_var);
		IL2CPP_END_FINALLY(237)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(237)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xFB, IL_00fb)
	}

IL_00fb:
	{
		// hasReset = true;
		__this->set_hasReset_10((bool)1);
		// } // resetButton()
		return;
	}
}
// System.Void ButtonScript::playButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript_playButton_m28DC3ECE8FB69B4C23048A1F48A133EB63352493 (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	{
		// if(hasReset){
		bool L_0 = __this->get_hasReset_10();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// StartCoroutine(dijkstra.startAlgorithm());
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_1 = __this->get_dijkstra_6();
		RuntimeObject* L_2;
		L_2 = Dijkstra_startAlgorithm_m0ACEFEDDAD6BC2B13DD92FF9B5762D5B3A8DB680(L_1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// hasReset = false;
		__this->set_hasReset_10((bool)0);
	}

IL_0021:
	{
		// } // playButton()
		return;
	}
}
// System.Void ButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonScript__ctor_mF4A9BCC4E47661F057F9B2A7770B635E63C8EC6B (ButtonScript_t70FEA91E13EC09A7DC9E25D1B821D76CBB2895E7 * __this, const RuntimeMethod* method)
{
	{
		// private bool hasReset = true;
		__this->set_hasReset_10((bool)1);
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
// System.Void CameraMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Awake_mDBB2CD783EFFABEBC1567DE2F32359A5D52825F1 (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mapManager = FindObjectOfType<MapManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_0;
		L_0 = Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94(/*hidden argument*/Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94_RuntimeMethod_var);
		__this->set_mapManager_4(L_0);
		// }
		return;
	}
}
// System.Void CameraMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Update_m02A5D16421ED8C060C06A72144FEA9250C55CE2B (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method)
{
	{
		// leftClick();
		CameraMovement_leftClick_m213DF60DF46389E3695BAFC8A83E017016FE4E7C(__this, /*hidden argument*/NULL);
		// rightClick();
		CameraMovement_rightClick_m29053183E4A56BD0C7A11F430C3A521806E373C7(__this, /*hidden argument*/NULL);
		// zoom();
		CameraMovement_zoom_mDC34C499BE79C9A26957F27D333E689AB272C96D(__this, /*hidden argument*/NULL);
		// }// void Update
		return;
	}
}
// System.Void CameraMovement::zoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_zoom_mDC34C499BE79C9A26957F27D333E689AB272C96D (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float zoom = GetComponent<Camera>().orthographicSize;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		float L_1;
		L_1 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// zoom += -Input.GetAxis("Mouse ScrollWheel")*sensitivity; // negative as I want scroll down to zoom out
		float L_2 = V_0;
		float L_3;
		L_3 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, /*hidden argument*/NULL);
		float L_4 = __this->get_sensitivity_9();
		V_0 = ((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)((-L_3)), (float)L_4))));
		// zoom = Mathf.Clamp(zoom, 3f, 50f);
		float L_5 = V_0;
		float L_6;
		L_6 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_5, (3.0f), (50.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		// GetComponent<Camera>().orthographicSize = zoom;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7;
		L_7 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		float L_8 = V_0;
		Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraMovement::rightClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_rightClick_m29053183E4A56BD0C7A11F430C3A521806E373C7 (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method)
{
	{
		// if(Input.GetMouseButtonDown(1)) { // getting initial mouse point
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(1, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// initPosR = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_1, L_2, /*hidden argument*/NULL);
		__this->set_initPosR_5(L_3);
	}

IL_001d:
	{
		// if(Input.GetMouseButton(1)){ // getting new mouse point
		bool L_4;
		L_4 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		// newPosR = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_5, L_6, /*hidden argument*/NULL);
		__this->set_newPosR_6(L_7);
		// transform.position += initPosR - newPosR; // moving camera amount mouse has moved
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = L_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_initPosR_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_newPosR_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_14, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// if(Input.GetMouseButtonUp(1)){ // make it stop after user stops holding down
		bool L_15;
		L_15 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(1, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009d;
		}
	}
	{
		// initPosR = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_initPosR_5(L_16);
		// newPosR = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_newPosR_6(L_17);
	}

IL_009d:
	{
		// } // rightClick
		return;
	}
}
// System.Void CameraMovement::leftClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_leftClick_m213DF60DF46389E3695BAFC8A83E017016FE4E7C (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AC9E039324DDB82B6801B1846C1987DF1F4AFCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetMouseButtonDown(0)){
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_009f;
		}
	}
	{
		// if(Vector3Int.RoundToInt(Camera.main.ScreenToWorldPoint(Input.mousePosition) - new Vector3(0.5f, 0.5f, -1))
		//      == mapManager.start){
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.5f), (0.5f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_6;
		L_6 = Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline(L_5, /*hidden argument*/NULL);
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_7 = __this->get_mapManager_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_8 = L_7->get_start_7();
		bool L_9;
		L_9 = Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7_inline(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		// func = "start";
		__this->set_func_12(_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
	}

IL_0055:
	{
		// if(Vector3Int.RoundToInt(Camera.main.ScreenToWorldPoint(Input.mousePosition) - new Vector3(0.5f, 0.5f, -1))
		//      == mapManager.finish){
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10;
		L_10 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_10, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (0.5f), (0.5f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_15;
		L_15 = Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline(L_14, /*hidden argument*/NULL);
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_16 = __this->get_mapManager_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_17 = L_16->get_finish_8();
		bool L_18;
		L_18 = Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7_inline(L_15, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_009f;
		}
	}
	{
		// func = "finish";
		__this->set_func_12(_stringLiteral5AC9E039324DDB82B6801B1846C1987DF1F4AFCC);
	}

IL_009f:
	{
		// if(Input.GetMouseButton(0)){
		bool L_19;
		L_19 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0141;
		}
	}
	{
		// newPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20;
		L_20 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_20, L_21, /*hidden argument*/NULL);
		__this->set_newPos_8(L_22);
		// if(func == "finish"){
		String_t* L_23 = __this->get_func_12();
		bool L_24;
		L_24 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_23, _stringLiteral5AC9E039324DDB82B6801B1846C1987DF1F4AFCC, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0100;
		}
	}
	{
		// finish.GetComponent<Transform>().position = newPos + new Vector3(0, 0, 1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_finish_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_25, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = __this->get_newPos_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_28, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_29, /*hidden argument*/NULL);
	}

IL_0100:
	{
		// if(func == "start"){
		String_t* L_30 = __this->get_func_12();
		bool L_31;
		L_31 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_30, _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		// start.GetComponent<Transform>().position = newPos + new Vector3(0, 0, 1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_start_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_32, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_newPos_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_35), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_34, L_35, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_33, L_36, /*hidden argument*/NULL);
	}

IL_0141:
	{
		// if(!Input.GetMouseButton(0)){
		bool L_37;
		L_37 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0184;
		}
	}
	{
		// initPos = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_38), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_initPos_7(L_38);
		// newPos = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_39), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_newPos_8(L_39);
		// func = null;
		__this->set_func_12((String_t*)NULL);
	}

IL_0184:
	{
		// } // leftClick
		return;
	}
}
// System.Void CameraMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement__ctor_mD0F05084B2475AA8C0A35AFB6E4C88D0D6ACEAAA (CameraMovement_t0177164EDAE233E0E1B1A163202CCA98852C2F35 * __this, const RuntimeMethod* method)
{
	{
		// private float sensitivity = 10f;
		__this->set_sensitivity_9((10.0f));
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
// System.Void Dijkstra::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dijkstra_Awake_m07B88DACB24E0A8ACE43CCE2736ADE373C9DCF23 (Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mapManager = FindObjectOfType<MapManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_0;
		L_0 = Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94(/*hidden argument*/Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94_RuntimeMethod_var);
		__this->set_mapManager_4(L_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator Dijkstra::startAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dijkstra_startAlgorithm_m0ACEFEDDAD6BC2B13DD92FF9B5762D5B3A8DB680 (Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2 * L_0 = (U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2 *)il2cpp_codegen_object_new(U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2_il2cpp_TypeInfo_var);
		U3CstartAlgorithmU3Ed__5__ctor_m47EABC9332857F8BADCBE41ACEE381F5537C27D0(L_0, 0, /*hidden argument*/NULL);
		U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Dijkstra::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dijkstra__ctor_m8550E02BEC892CA8564F853F0A2790F93C8F7EC6 (Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private PriorityQueue pq = new PriorityQueue();
		PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * L_0 = (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F *)il2cpp_codegen_object_new(PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F_il2cpp_TypeInfo_var);
		PriorityQueue__ctor_m09E4E30DCFBC64660D7CF8731551788CE2D4CB74(L_0, /*hidden argument*/NULL);
		__this->set_pq_5(L_0);
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
// System.Void FinishScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript_Awake_m3B56A3346CC5286E4DAEB4DD33DCC5C18E06CCDA (FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mapManager = FindObjectOfType<MapManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_0;
		L_0 = Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94(/*hidden argument*/Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94_RuntimeMethod_var);
		__this->set_mapManager_4(L_0);
		// }
		return;
	}
}
// System.Void FinishScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript_Update_mBF88E4AA75C195CED365CB19113E0AEBA7C4C8C8 (FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 coords = GetComponent<Transform>().position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// mapManager.setFinish(Vector3Int.RoundToInt(coords - new Vector3(0.5f, 0.5f, 0)));
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_2 = __this->get_mapManager_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_6;
		L_6 = Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline(L_5, /*hidden argument*/NULL);
		MapManager_setFinish_mC7228DB3C20E1A411EC38D84D67BC344099C55A1(L_2, L_6, /*hidden argument*/NULL);
		// if (Input.GetMouseButtonUp(0)){ // snapping function
		bool L_7;
		L_7 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0086;
		}
	}
	{
		// GetComponent<Transform>().position = Vector3Int.RoundToInt(coords - new Vector3(0.5f, 0.5f, 0)) + new Vector3(0.5f, 0.5f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_12;
		L_12 = Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3Int_op_Implicit_mD812DEDBDE886508E86FB3222BB9DDB4949B4475_inline(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_14, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_15, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void FinishScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript__ctor_m76216732D45283E3478483F77A4D6D6F912549CB (FinishScript_t3EB1E810F13F49F750F73C34F10DF3D20010C98C * __this, const RuntimeMethod* method)
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
// System.Void InitializeGrid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializeGrid_Start_m50EF3EA3484479064B4DD43E9867BF1EBF0C9843 (InitializeGrid_t0411CA9413327B7591CD30FF6D448E7C3DA60212 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// for (int i = 0; i < 6; i++){
		V_0 = 0;
		goto IL_007b;
	}

IL_0004:
	{
		// for (int j = 0; j <6; j++){
		V_1 = 0;
		goto IL_0073;
	}

IL_0008:
	{
		// float boxdist = 1f;
		V_2 = (1.0f);
		// Vector2 pos = new Vector2(j*boxdist, i*boxdist);
		int32_t L_0 = V_1;
		float L_1 = V_2;
		int32_t L_2 = V_0;
		float L_3 = V_2;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), ((float)il2cpp_codegen_multiply((float)((float)((float)L_0)), (float)L_1)), ((float)il2cpp_codegen_multiply((float)((float)((float)L_2)), (float)L_3)), /*hidden argument*/NULL);
		// var obj = Instantiate(tile, pos, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_tile_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_6, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// obj.name = "(" + j.ToString() + ", " + i.ToString() + ")"; // changing the name for easy callbacks
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_11;
		ArrayElementTypeCheck (L_13, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_14;
		ArrayElementTypeCheck (L_16, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_17;
		L_17 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_16, /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_8, L_17, /*hidden argument*/NULL);
		// for (int j = 0; j <6; j++){
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0073:
	{
		// for (int j = 0; j <6; j++){
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) < ((int32_t)6)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int i = 0; i < 6; i++){
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007b:
	{
		// for (int i = 0; i < 6; i++){
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) < ((int32_t)6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void InitializeGrid::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializeGrid_Update_mD6C8BAF9B8415DAE585364CE3A1F6A824BEE15B4 (InitializeGrid_t0411CA9413327B7591CD30FF6D448E7C3DA60212 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void InitializeGrid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializeGrid__ctor_m7D483410995F58BD4FEF4B3DF00C6E4A69E119B4 (InitializeGrid_t0411CA9413327B7591CD30FF6D448E7C3DA60212 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject[][] arr = new GameObject[100][];
		GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C* L_0 = (GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C*)(GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C*)SZArrayNew(GameObjectU5BU5DU5BU5D_tF99B4EF4C59945280EF92FE345FBC495DF98237C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		__this->set_arr_5(L_0);
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
// System.Void InteractTiles::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractTiles_Awake_mA857AB8208CC1F9E547E256BC876F4A7569AE0E1 (InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boxCollider2d = transform.GetComponent<BoxCollider2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(L_0, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		__this->set_boxCollider2d_10(L_1);
		// }
		return;
	}
}
// System.Void InteractTiles::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractTiles_Start_m0AE724636C8C9DEB21EC493B2333C4FDC0251F84 (InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628 * __this, const RuntimeMethod* method)
{
	{
		// hasConnection();
		InteractTiles_hasConnection_mDC9B505F1515E62EAC2C14DB2C932576D6B9F4C9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InteractTiles::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractTiles_Update_m5F8C72E8CF71C73F33811342AAA92058D8DC5BED (InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void InteractTiles::hasConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractTiles_hasConnection_mDC9B505F1515E62EAC2C14DB2C932576D6B9F4C9 (InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8EA1ACBF8FE9A73519A1309E6CBC1C4A836B5EDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* V_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// Collider2D[] connections = Physics2D.OverlapCircleAll(boxCollider2d.bounds.center, boxCollider2d.bounds.extents.y*1.3f);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_0 = __this->get_boxCollider2d_10();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_1;
		L_1 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_2), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_4 = __this->get_boxCollider2d_10();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_5;
		L_5 = Collider2D_get_bounds_mAC9477EF790D42A796B09CD1E946129B3054ACA8(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_2), /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_8;
		L_8 = Physics2D_OverlapCircleAll_m9D7CF119EA9F260FBAD101EA8A6916A643551C0D(L_3, ((float)il2cpp_codegen_multiply((float)L_7, (float)(1.29999995f))), /*hidden argument*/NULL);
		V_0 = L_8;
		// List<string> names = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_9, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_1 = L_9;
		// for (int i = 1; i < connections.Length; i++){
		V_3 = 1;
		goto IL_00f7;
	}

IL_0049:
	{
		// if (connections[i].name != "Start" && connections[i].name != this.name){
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_10 = V_0;
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_14, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0080;
		}
	}
	{
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_16 = V_0;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20;
		L_20 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		bool L_22;
		L_22 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0080;
		}
	}
	{
		// colliders.Add(connections[i]);  // creating new colliders Collider2D[], adding all connections after starting Tile
		List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998 * L_23 = __this->get_colliders_9();
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_24 = V_0;
		int32_t L_25 = V_3;
		int32_t L_26 = L_25;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		List_1_Add_m8EA1ACBF8FE9A73519A1309E6CBC1C4A836B5EDF(L_23, L_27, /*hidden argument*/List_1_Add_m8EA1ACBF8FE9A73519A1309E6CBC1C4A836B5EDF_RuntimeMethod_var);
	}

IL_0080:
	{
		// names.Add(connections[i].name);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_28 = V_1;
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31 = L_30;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		String_t* L_33;
		L_33 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_32, /*hidden argument*/NULL);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_28, L_33, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// if(names.Contains("Start")){
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_34 = V_1;
		bool L_35;
		L_35 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_34, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		if (!L_35)
		{
			goto IL_00c8;
		}
	}
	{
		// isStart = true;
		__this->set_isStart_4((bool)1);
		// GetComponent<SpriteRenderer>().color = new Color(1, 0, 0, 1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_36;
		L_36 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_37), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_36, L_37, /*hidden argument*/NULL);
		// }
		goto IL_00f3;
	}

IL_00c8:
	{
		// isStart = false;
		__this->set_isStart_4((bool)0);
		// GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_38;
		L_38 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_39), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_38, L_39, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		// for (int i = 1; i < connections.Length; i++){
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00f7:
	{
		// for (int i = 1; i < connections.Length; i++){
		int32_t L_41 = V_3;
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		// }
		return;
	}
}
// System.Void InteractTiles::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractTiles__ctor_mE0D9F2C9C9F36EDA01EDF2B849DACC488D7F5636 (InteractTiles_t09280726E12EC84B6CDD0164777F8EA3E16B4628 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m37D844C561014FDD2C6E1AEE127A5A087F9ADC88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float weight = 1;
		__this->set_weight_8((1.0f));
		// public List<Collider2D> colliders = new List<Collider2D>();
		List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998 * L_0 = (List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998 *)il2cpp_codegen_object_new(List_1_t103D91044D260C2ED8E0166A083D8989CD4AD998_il2cpp_TypeInfo_var);
		List_1__ctor_m37D844C561014FDD2C6E1AEE127A5A087F9ADC88(L_0, /*hidden argument*/List_1__ctor_m37D844C561014FDD2C6E1AEE127A5A087F9ADC88_RuntimeMethod_var);
		__this->set_colliders_9(L_0);
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
// System.Void MapManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_Start_mA27B094422AB1088E149155BD3CF33867269516D (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m51D56D65424EF4D398ED807D537506F0BDE8492C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileScript_t6E723D639E7213BAEA1F8346F405265665193642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * V_4 = NULL;
	{
		// for (int x = (int) map.localBounds.min.x; x < map.localBounds.max.x; x++){
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_0 = __this->get_map_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_1;
		L_1 = Tilemap_get_localBounds_m9C56553C51B3B97DEEA4D33F1842D68FB4D0F24E(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
		goto IL_015c;
	}

IL_001f:
	{
		// for (int y = (int) map.localBounds.min.y; y < map.localBounds.max.y; y++){
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_4 = __this->get_map_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_5;
		L_5 = Tilemap_get_localBounds_m9C56553C51B3B97DEEA4D33F1842D68FB4D0F24E(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_7);
		goto IL_0139;
	}

IL_003e:
	{
		// Vector3Int t = new Vector3Int(x, y, 0);
		int32_t L_8 = V_0;
		int32_t L_9 = V_2;
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&V_3), L_8, L_9, 0, /*hidden argument*/NULL);
		// TileScript temp = new TileScript(); // creating new TileScript to hold all info necessary for Dijkstra
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_10 = (TileScript_t6E723D639E7213BAEA1F8346F405265665193642 *)il2cpp_codegen_object_new(TileScript_t6E723D639E7213BAEA1F8346F405265665193642_il2cpp_TypeInfo_var);
		TileScript__ctor_m40C007E48A65267B60C98794FD21E0CF2D17CC6C(L_10, /*hidden argument*/NULL);
		V_4 = L_10;
		// temp.coords = t;
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_11 = V_4;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_12 = V_3;
		L_11->set_coords_7(L_12);
		// if (x-1 >= (int) map.localBounds.min.x){
		int32_t L_13 = V_0;
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_14 = __this->get_map_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_15;
		L_15 = Tilemap_get_localBounds_m9C56553C51B3B97DEEA4D33F1842D68FB4D0F24E(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1))) < ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_17))))
		{
			goto IL_008b;
		}
	}
	{
		// temp.neighbors.Add(new Vector3Int(x-1, y, 0));
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_18 = V_4;
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_19 = L_18->get_neighbors_1();
		int32_t L_20 = V_0;
		int32_t L_21 = V_2;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_22), ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)), L_21, 0, /*hidden argument*/NULL);
		List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A(L_19, L_22, /*hidden argument*/List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
	}

IL_008b:
	{
		// if (x+1 < (int) map.localBounds.max.x){
		int32_t L_23 = V_0;
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_24 = __this->get_map_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_25;
		L_25 = Tilemap_get_localBounds_m9C56553C51B3B97DEEA4D33F1842D68FB4D0F24E(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_27 = L_26.get_x_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1))) >= ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_27))))
		{
			goto IL_00bf;
		}
	}
	{
		// temp.neighbors.Add(new Vector3Int(x+1, y, 0));
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_28 = V_4;
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_29 = L_28->get_neighbors_1();
		int32_t L_30 = V_0;
		int32_t L_31 = V_2;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_32), ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)), L_31, 0, /*hidden argument*/NULL);
		List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A(L_29, L_32, /*hidden argument*/List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
	}

IL_00bf:
	{
		// if (y-1 >= (int) map.localBounds.min.y){
		int32_t L_33 = V_2;
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_34 = __this->get_map_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_35;
		L_35 = Tilemap_get_localBounds_m9C56553C51B3B97DEEA4D33F1842D68FB4D0F24E(L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_37 = L_36.get_y_3();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1))) < ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_37))))
		{
			goto IL_00f3;
		}
	}
	{
		// temp.neighbors.Add(new Vector3Int(x, y-1, 0));
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_38 = V_4;
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_39 = L_38->get_neighbors_1();
		int32_t L_40 = V_0;
		int32_t L_41 = V_2;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_42), L_40, ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)), 0, /*hidden argument*/NULL);
		List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A(L_39, L_42, /*hidden argument*/List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
	}

IL_00f3:
	{
		// if (y+1 < (int) map.localBounds.max.y){
		int32_t L_43 = V_2;
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_44 = __this->get_map_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_45;
		L_45 = Tilemap_get_localBounds_m9C56553C51B3B97DEEA4D33F1842D68FB4D0F24E(L_44, /*hidden argument*/NULL);
		V_1 = L_45;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_47 = L_46.get_y_3();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1))) >= ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_47))))
		{
			goto IL_0127;
		}
	}
	{
		// temp.neighbors.Add(new Vector3Int(x, y+1, 0));
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_48 = V_4;
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_49 = L_48->get_neighbors_1();
		int32_t L_50 = V_0;
		int32_t L_51 = V_2;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_52), L_50, ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1)), 0, /*hidden argument*/NULL);
		List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A(L_49, L_52, /*hidden argument*/List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
	}

IL_0127:
	{
		// tiles.Add(t,temp);
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_53 = __this->get_tiles_6();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_54 = V_3;
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_55 = V_4;
		Dictionary_2_Add_m51D56D65424EF4D398ED807D537506F0BDE8492C(L_53, L_54, L_55, /*hidden argument*/Dictionary_2_Add_m51D56D65424EF4D398ED807D537506F0BDE8492C_RuntimeMethod_var);
		// for (int y = (int) map.localBounds.min.y; y < map.localBounds.max.y; y++){
		int32_t L_56 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0139:
	{
		// for (int y = (int) map.localBounds.min.y; y < map.localBounds.max.y; y++){
		int32_t L_57 = V_2;
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_58 = __this->get_map_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_59;
		L_59 = Tilemap_get_localBounds_m9C56553C51B3B97DEEA4D33F1842D68FB4D0F24E(L_58, /*hidden argument*/NULL);
		V_1 = L_59;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_61 = L_60.get_y_3();
		if ((((float)((float)((float)L_57))) < ((float)L_61)))
		{
			goto IL_003e;
		}
	}
	{
		// for (int x = (int) map.localBounds.min.x; x < map.localBounds.max.x; x++){
		int32_t L_62 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_015c:
	{
		// for (int x = (int) map.localBounds.min.x; x < map.localBounds.max.x; x++){
		int32_t L_63 = V_0;
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_64 = __this->get_map_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_65;
		L_65 = Tilemap_get_localBounds_m9C56553C51B3B97DEEA4D33F1842D68FB4D0F24E(L_64, /*hidden argument*/NULL);
		V_1 = L_65;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_1), /*hidden argument*/NULL);
		float L_67 = L_66.get_x_2();
		if ((((float)((float)((float)L_63))) < ((float)L_67)))
		{
			goto IL_001f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MapManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_Update_mCE99C1503C25CE9891A703B4419CD389DA042386 (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(Input.GetMouseButtonDown(0)){
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		// Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_1, L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Vector3Int gridPos = map.WorldToCell(mousePosition);
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_5 = __this->get_map_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_6, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_8;
		L_8 = GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// TileBase clickedTile = map.GetTile(gridPos);
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_9 = __this->get_map_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_10 = V_1;
		TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052 * L_11;
		L_11 = Tilemap_GetTile_m611C89C47D6FE68099998192BA57344FCE782B19(L_9, L_10, /*hidden argument*/NULL);
		// Debug.Log(gridPos);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_12 = V_1;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_13 = L_12;
		RuntimeObject * L_14 = Box(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var, &L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void MapManager::setStart(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_setStart_m112B67345B9082E2C1F56893A9B2B3A9C34C9F3F (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___coords0, const RuntimeMethod* method)
{
	{
		// if (coords != start){ // setting new start as start GameObject is moved by user
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___coords0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = __this->get_start_7();
		bool L_2;
		L_2 = Vector3Int_op_Inequality_mA54738AF377CBBA523CAEF47398C32F0338BF8E7_inline(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// map.SetColor(start, new Color(1, 1, 1, 1));
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_3 = __this->get_map_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4 = __this->get_start_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_5), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Tilemap_SetColor_mC78B3CC9FFA5C5EB63D061FBBD047D24C13BEA81(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// map.SetTileFlags(coords, TileFlags.None); // allowing coords tile to be change color
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_6 = __this->get_map_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7 = ___coords0;
		Tilemap_SetTileFlags_mC88DE5654C5FAB5CFBDD0CAD7ED500AD0B1033C2(L_6, L_7, 0, /*hidden argument*/NULL);
		// map.SetColor(coords, new Color (1, 0, 0, 1)); // changing color to red
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_8 = __this->get_map_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_9 = ___coords0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_10), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Tilemap_SetColor_mC78B3CC9FFA5C5EB63D061FBBD047D24C13BEA81(L_8, L_9, L_10, /*hidden argument*/NULL);
		// start = coords;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_11 = ___coords0;
		__this->set_start_7(L_11);
		// }
		return;
	}
}
// System.Void MapManager::setFinish(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_setFinish_mC7228DB3C20E1A411EC38D84D67BC344099C55A1 (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___coords0, const RuntimeMethod* method)
{
	{
		// if (coords != finish){ // setting new start as start GameObject is moved by user
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___coords0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = __this->get_finish_8();
		bool L_2;
		L_2 = Vector3Int_op_Inequality_mA54738AF377CBBA523CAEF47398C32F0338BF8E7_inline(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// map.SetColor(finish, new Color(1, 1, 1, 1));
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_3 = __this->get_map_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4 = __this->get_finish_8();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_5), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Tilemap_SetColor_mC78B3CC9FFA5C5EB63D061FBBD047D24C13BEA81(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// map.SetTileFlags(coords, TileFlags.None); // allowing coords tile to be change color
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_6 = __this->get_map_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7 = ___coords0;
		Tilemap_SetTileFlags_mC88DE5654C5FAB5CFBDD0CAD7ED500AD0B1033C2(L_6, L_7, 0, /*hidden argument*/NULL);
		// map.SetColor(coords, new Color (0, 1, 0, 1)); // changing color to red
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_8 = __this->get_map_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_9 = ___coords0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_10), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Tilemap_SetColor_mC78B3CC9FFA5C5EB63D061FBBD047D24C13BEA81(L_8, L_9, L_10, /*hidden argument*/NULL);
		// finish = coords;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_11 = ___coords0;
		__this->set_finish_8(L_11);
		// }
		return;
	}
}
// System.Void MapManager::isFound(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager_isFound_m070445EC4C4D1B8EBFEE2B20066465D6042B0C5B (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___coords0, const RuntimeMethod* method)
{
	{
		// map.SetColor(coords, new Color(0, 0, 1, 1));
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_0 = __this->get_map_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = ___coords0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Tilemap_SetColor_mC78B3CC9FFA5C5EB63D061FBBD047D24C13BEA81(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MapManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManager__ctor_m7DC7045E64B59C29C225D27DAA89BE7BAAA89DE4 (MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m39CB0B597F4E98552F1A70DC3CC5A89598CA343A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Dictionary<Vector3Int,TileScript> tiles = new Dictionary<Vector3Int,TileScript>();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_0 = (Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 *)il2cpp_codegen_object_new(Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m39CB0B597F4E98552F1A70DC3CC5A89598CA343A(L_0, /*hidden argument*/Dictionary_2__ctor_m39CB0B597F4E98552F1A70DC3CC5A89598CA343A_RuntimeMethod_var);
		__this->set_tiles_6(L_0);
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
// System.Void PriorityQueue::buildHeap(System.Collections.Generic.Dictionary`2<UnityEngine.Vector3Int,TileScript>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_buildHeap_mD33DCC3817E8DB51F27C6DB7CA746F0379803075 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * ___dict0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mCE51D191DC98BB3F87C1A1B2892DDCDDDC951AA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m9A23ADCB03F86D01E40E69C9C097C2A0CEED71CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE383366DA9347FCDD39AEEAE012470CD47206BB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m27D297DD08E8092CBD8F3FAE983F542EC9DE0243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA5C395E41F4BD985AE156D3E79106A66EC41DC27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m29959ADC02B9A9B8031480672B98D23AF5DFC33E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m988EA6B6A8FE1DF3EB5AA5D82A5177029C8BA2A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7CA657ADF1C3EB3A89EBCAB2E113127669E7ADEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m88A2D2A1748B3823E485FE8E274EE526556A0EAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var item in dict){
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_0 = ___dict0;
		Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871  L_1;
		L_1 = Dictionary_2_GetEnumerator_mCE51D191DC98BB3F87C1A1B2892DDCDDDC951AA1(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_mCE51D191DC98BB3F87C1A1B2892DDCDDDC951AA1_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0034;
		}

IL_0009:
		{
			// foreach (var item in dict){
			KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0  L_2;
			L_2 = Enumerator_get_Current_mA5C395E41F4BD985AE156D3E79106A66EC41DC27_inline((Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mA5C395E41F4BD985AE156D3E79106A66EC41DC27_RuntimeMethod_var);
			V_2 = L_2;
			// heapList.Add((item.Value.distance, item.Key));
			List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_3 = __this->get_heapList_0();
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_4;
			L_4 = KeyValuePair_2_get_Value_m988EA6B6A8FE1DF3EB5AA5D82A5177029C8BA2A8_inline((KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m988EA6B6A8FE1DF3EB5AA5D82A5177029C8BA2A8_RuntimeMethod_var);
			float L_5 = L_4->get_distance_3();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_6;
			L_6 = KeyValuePair_2_get_Key_m29959ADC02B9A9B8031480672B98D23AF5DFC33E_inline((KeyValuePair_2_tC8D03F5158CB758908BF5F8938DF78650DAD1DC0 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m29959ADC02B9A9B8031480672B98D23AF5DFC33E_RuntimeMethod_var);
			ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_7;
			memset((&L_7), 0, sizeof(L_7));
			ValueTuple_2__ctor_m88A2D2A1748B3823E485FE8E274EE526556A0EAC((&L_7), L_5, L_6, /*hidden argument*/ValueTuple_2__ctor_m88A2D2A1748B3823E485FE8E274EE526556A0EAC_RuntimeMethod_var);
			List_1_Add_m7CA657ADF1C3EB3A89EBCAB2E113127669E7ADEF(L_3, L_7, /*hidden argument*/List_1_Add_m7CA657ADF1C3EB3A89EBCAB2E113127669E7ADEF_RuntimeMethod_var);
		}

IL_0034:
		{
			// foreach (var item in dict){
			bool L_8;
			L_8 = Enumerator_MoveNext_m27D297DD08E8092CBD8F3FAE983F542EC9DE0243((Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m27D297DD08E8092CBD8F3FAE983F542EC9DE0243_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0009;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE383366DA9347FCDD39AEEAE012470CD47206BB7((Enumerator_tA31F95B86E49082DEAC45C8C6800AE21F55DA871 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mE383366DA9347FCDD39AEEAE012470CD47206BB7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
	}

IL_004d:
	{
		// int i = (int) (currentSize / 2) - 1;
		int32_t L_9 = __this->get_currentSize_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_9/(int32_t)2)), (int32_t)1));
		goto IL_0065;
	}

IL_005a:
	{
		// percDown(i);
		int32_t L_10 = V_0;
		PriorityQueue_percDown_m9B8488C754B747E720A58A92A7A6E8914D4B94B7(__this, L_10, /*hidden argument*/NULL);
		// i = i - 1;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
	}

IL_0065:
	{
		// while (i > 0){
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		// currentSize = dict.Count;
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_13 = ___dict0;
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m9A23ADCB03F86D01E40E69C9C097C2A0CEED71CA(L_13, /*hidden argument*/Dictionary_2_get_Count_m9A23ADCB03F86D01E40E69C9C097C2A0CEED71CA_RuntimeMethod_var);
		__this->set_currentSize_1(L_14);
		// } // buildHeap()
		return;
	}
}
// System.Void PriorityQueue::percDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_percDown_m9B8488C754B747E720A58A92A7A6E8914D4B94B7 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_0063;
	}

IL_0002:
	{
		// int mc = minChild(i);
		int32_t L_0 = ___i0;
		int32_t L_1;
		L_1 = PriorityQueue_minChild_m3D0D1B7E5FE54C7A0C59EEE6FC4F97C86AFB905E(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (heapList[i].Item1 > heapList[mc].Item1){
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_2 = __this->get_heapList_0();
		int32_t L_3 = ___i0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_4;
		L_4 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		float L_5 = L_4.get_Item1_0();
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_6 = __this->get_heapList_0();
		int32_t L_7 = V_0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_8;
		L_8 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		float L_9 = L_8.get_Item1_0();
		if ((!(((float)L_5) > ((float)L_9))))
		{
			goto IL_0060;
		}
	}
	{
		// var temp = heapList[i];
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_10 = __this->get_heapList_0();
		int32_t L_11 = ___i0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_12;
		L_12 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		V_1 = L_12;
		// heapList[i] = heapList[mc];
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_13 = __this->get_heapList_0();
		int32_t L_14 = ___i0;
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_15 = __this->get_heapList_0();
		int32_t L_16 = V_0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_17;
		L_17 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A(L_13, L_14, L_17, /*hidden argument*/List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_RuntimeMethod_var);
		// heapList[mc] = temp;
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_18 = __this->get_heapList_0();
		int32_t L_19 = V_0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_20 = V_1;
		List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A(L_18, L_19, L_20, /*hidden argument*/List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_RuntimeMethod_var);
	}

IL_0060:
	{
		// i = mc;
		int32_t L_21 = V_0;
		___i0 = L_21;
	}

IL_0063:
	{
		// while (i*2 <= currentSize){
		int32_t L_22 = ___i0;
		int32_t L_23 = __this->get_currentSize_1();
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)2))) <= ((int32_t)L_23)))
		{
			goto IL_0002;
		}
	}
	{
		// } // percDown()
		return;
	}
}
// System.Void PriorityQueue::percUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_percUp_m8339827E88C853EF76DAE3088905CBAC0A11569E (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0063;
	}

IL_0002:
	{
		// if (heapList[i].Item1 < heapList[(int) i/2].Item1){
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_0 = __this->get_heapList_0();
		int32_t L_1 = ___i0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_2;
		L_2 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		float L_3 = L_2.get_Item1_0();
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_4 = __this->get_heapList_0();
		int32_t L_5 = ___i0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_6;
		L_6 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_4, ((int32_t)((int32_t)L_5/(int32_t)2)), /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		float L_7 = L_6.get_Item1_0();
		if ((!(((float)L_3) < ((float)L_7))))
		{
			goto IL_005e;
		}
	}
	{
		// var temp = heapList[(int) i/2];
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_8 = __this->get_heapList_0();
		int32_t L_9 = ___i0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_10;
		L_10 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_8, ((int32_t)((int32_t)L_9/(int32_t)2)), /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		V_0 = L_10;
		// heapList[(int) i/2] = heapList[i];
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_11 = __this->get_heapList_0();
		int32_t L_12 = ___i0;
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_13 = __this->get_heapList_0();
		int32_t L_14 = ___i0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_15;
		L_15 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A(L_11, ((int32_t)((int32_t)L_12/(int32_t)2)), L_15, /*hidden argument*/List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_RuntimeMethod_var);
		// heapList[i] = temp;
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_16 = __this->get_heapList_0();
		int32_t L_17 = ___i0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_18 = V_0;
		List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A(L_16, L_17, L_18, /*hidden argument*/List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_RuntimeMethod_var);
	}

IL_005e:
	{
		// i = i/2;
		int32_t L_19 = ___i0;
		___i0 = ((int32_t)((int32_t)L_19/(int32_t)2));
	}

IL_0063:
	{
		// while ((int) i/2 > 0){
		int32_t L_20 = ___i0;
		if ((((int32_t)((int32_t)((int32_t)L_20/(int32_t)2))) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 PriorityQueue::minChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PriorityQueue_minChild_m3D0D1B7E5FE54C7A0C59EEE6FC4F97C86AFB905E (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (i*2 > currentSize){
		int32_t L_0 = ___i0;
		int32_t L_1 = __this->get_currentSize_1();
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)2))) <= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000d:
	{
		// if(i*2 + 1 > currentSize){
		int32_t L_2 = ___i0;
		int32_t L_3 = __this->get_currentSize_1();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2)), (int32_t)1))) <= ((int32_t)L_3)))
		{
			goto IL_001e;
		}
	}
	{
		// return i*2;
		int32_t L_4 = ___i0;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2));
	}

IL_001e:
	{
		// if(heapList[i*2].Item1 < heapList[i*2 + 1].Item1){
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_5 = __this->get_heapList_0();
		int32_t L_6 = ___i0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_7;
		L_7 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_5, ((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2)), /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		float L_8 = L_7.get_Item1_0();
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_9 = __this->get_heapList_0();
		int32_t L_10 = ___i0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_11;
		L_11 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_9, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)), (int32_t)1)), /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		float L_12 = L_11.get_Item1_0();
		if ((!(((float)L_8) < ((float)L_12))))
		{
			goto IL_004c;
		}
	}
	{
		// return i*2;
		int32_t L_13 = ___i0;
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)2));
	}

IL_004c:
	{
		// return i*2 + 1;
		int32_t L_14 = ___i0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2)), (int32_t)1));
	}
}
// UnityEngine.Vector3Int PriorityQueue::delMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  PriorityQueue_delMin_m8DE01AD4FEC63677031B43ECD4DFAEF1516AA3A7 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mC8351AD00084C9AEC3409B78A79E019B37E12180_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var retval = heapList[1].Item2;
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_0 = __this->get_heapList_0();
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_1;
		L_1 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_0, 1, /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_2 = L_1.get_Item2_1();
		// heapList[1] = heapList[currentSize];
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_3 = __this->get_heapList_0();
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_4 = __this->get_heapList_0();
		int32_t L_5 = __this->get_currentSize_1();
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_6;
		L_6 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A(L_3, 1, L_6, /*hidden argument*/List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_RuntimeMethod_var);
		// currentSize = currentSize - 1;
		int32_t L_7 = __this->get_currentSize_1();
		__this->set_currentSize_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
		// heapList.RemoveAt(0);
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_8 = __this->get_heapList_0();
		List_1_RemoveAt_mC8351AD00084C9AEC3409B78A79E019B37E12180(L_8, 0, /*hidden argument*/List_1_RemoveAt_mC8351AD00084C9AEC3409B78A79E019B37E12180_RuntimeMethod_var);
		// percDown(1);
		PriorityQueue_percDown_m9B8488C754B747E720A58A92A7A6E8914D4B94B7(__this, 1, /*hidden argument*/NULL);
		// return retval;
		return L_2;
	}
}
// System.Boolean PriorityQueue::isEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PriorityQueue_isEmpty_m2CA6C937FA1E7C6A03EA69EEDBFAC00DBA301170 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, const RuntimeMethod* method)
{
	{
		// if (currentSize == 0){
		int32_t L_0 = __this->get_currentSize_1();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void PriorityQueue::decreaseKey(UnityEngine.Vector3Int,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_decreaseKey_m048C75FBF235E25D2CDE8E397FDEFE4FA9D719A9 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___val0, float ___amt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m88A2D2A1748B3823E485FE8E274EE526556A0EAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// bool done = false;
		V_0 = (bool)0;
		// int i = 1;
		V_1 = 1;
		// int myKey = 0;
		V_2 = 0;
		goto IL_002b;
	}

IL_0008:
	{
		// if (heapList[i].Item2 == val){
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_0 = __this->get_heapList_0();
		int32_t L_1 = V_1;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_2;
		L_2 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_3 = L_2.get_Item2_1();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4 = ___val0;
		bool L_5;
		L_5 = Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7_inline(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// done = true;
		V_0 = (bool)1;
		// myKey = i;
		int32_t L_6 = V_1;
		V_2 = L_6;
		// }
		goto IL_002b;
	}

IL_0027:
	{
		// i += 1;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002b:
	{
		// while (!done && i <= currentSize){
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->get_currentSize_1();
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0008;
		}
	}

IL_0037:
	{
		// if (myKey > 0){
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		// heapList[myKey] = (amt, heapList[myKey].Item2);
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_12 = __this->get_heapList_0();
		int32_t L_13 = V_2;
		float L_14 = ___amt1;
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_15 = __this->get_heapList_0();
		int32_t L_16 = V_2;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_17;
		L_17 = List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_RuntimeMethod_var);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_18 = L_17.get_Item2_1();
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_19;
		memset((&L_19), 0, sizeof(L_19));
		ValueTuple_2__ctor_m88A2D2A1748B3823E485FE8E274EE526556A0EAC((&L_19), L_14, L_18, /*hidden argument*/ValueTuple_2__ctor_m88A2D2A1748B3823E485FE8E274EE526556A0EAC_RuntimeMethod_var);
		List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A(L_12, L_13, L_19, /*hidden argument*/List_1_set_Item_mADA26474DB82D6632FE3DFBD93995482BF2B8F9A_RuntimeMethod_var);
		// percUp(myKey);
		int32_t L_20 = V_2;
		PriorityQueue_percUp_m8339827E88C853EF76DAE3088905CBAC0A11569E(__this, L_20, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// } // decreaseKey()
		return;
	}
}
// System.Void PriorityQueue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue__ctor_m09E4E30DCFBC64660D7CF8731551788CE2D4CB74 (PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E42011BCD7853639127DFB481489DEA580A3305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<(float, Vector3Int)> heapList = new List<(float, Vector3Int)>();
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_0 = (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 *)il2cpp_codegen_object_new(List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4_il2cpp_TypeInfo_var);
		List_1__ctor_m8E42011BCD7853639127DFB481489DEA580A3305(L_0, /*hidden argument*/List_1__ctor_m8E42011BCD7853639127DFB481489DEA580A3305_RuntimeMethod_var);
		__this->set_heapList_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void StartScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartScript_Awake_m98C9AFB53DF9F1ED03A66DD0BA7187D8FFD7C1A5 (StartScript_tCC6B6DE674F70B70F4A3AF1158C54683A6775740 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mapManager = FindObjectOfType<MapManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_0;
		L_0 = Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94(/*hidden argument*/Object_FindObjectOfType_TisMapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225_mF81360E73AC5D0521ECCB18E01B99C55F424FF94_RuntimeMethod_var);
		__this->set_mapManager_4(L_0);
		// }
		return;
	}
}
// System.Void StartScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartScript_Update_m6726E5C6C750FF59F47E1025D83DD19FF553303D (StartScript_tCC6B6DE674F70B70F4A3AF1158C54683A6775740 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 coords = GetComponent<Transform>().position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// mapManager.setStart(Vector3Int.RoundToInt(coords - new Vector3(0.5f, 0.5f, 0)));
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_2 = __this->get_mapManager_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_6;
		L_6 = Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline(L_5, /*hidden argument*/NULL);
		MapManager_setStart_m112B67345B9082E2C1F56893A9B2B3A9C34C9F3F(L_2, L_6, /*hidden argument*/NULL);
		// if (Input.GetMouseButtonUp(0)){ // snapping function
		bool L_7;
		L_7 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0086;
		}
	}
	{
		// GetComponent<Transform>().position = Vector3Int.RoundToInt(coords - new Vector3(0.5f, 0.5f, 0)) + new Vector3(0.5f, 0.5f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213(__this, /*hidden argument*/Component_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mE2EA0E48C8C0EAFA09C6FAD2003105EACAC85213_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_12;
		L_12 = Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3Int_op_Implicit_mD812DEDBDE886508E86FB3222BB9DDB4949B4475_inline(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_14, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_15, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void StartScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartScript__ctor_mDF141128AA36862055F7C221E2E2CD97B7C5756B (StartScript_tCC6B6DE674F70B70F4A3AF1158C54683A6775740 * __this, const RuntimeMethod* method)
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
// System.Void TileScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileScript__ctor_m40C007E48A65267B60C98794FD21E0CF2D17CC6C (TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Vector3Int> neighbors = new List<Vector3Int>();
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_0 = (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *)il2cpp_codegen_object_new(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var);
		List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E(L_0, /*hidden argument*/List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var);
		__this->set_neighbors_1(L_0);
		// public float weight = 1;
		__this->set_weight_2((1.0f));
		// public float distance = float.PositiveInfinity;
		__this->set_distance_3((std::numeric_limits<float>::infinity()));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Dijkstra/<startAlgorithm>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartAlgorithmU3Ed__5__ctor_m47EABC9332857F8BADCBE41ACEE381F5537C27D0 (U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Dijkstra/<startAlgorithm>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartAlgorithmU3Ed__5_System_IDisposable_Dispose_m11DD41B3670EB4B8FC8B4C2B3822CC95A7102066 (U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Dijkstra/<startAlgorithm>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CstartAlgorithmU3Ed__5_MoveNext_m204A7F3F35BA95329B64AF7A8F2CE877F4F8DED8 (U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m1744EB032A163FDB4A690EA6D59F63B1DE1F092C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m23F73B815D52415BA49378576D444624B7259D92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m94C833B421A86958F78EF25421F27E5334A3A10C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBE7E52D5DCAFA92CF5677546C14BED6BAD8CF800_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m8DBDB4B1CAFCA90E9F183EE44FACEB76D3B3F6A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E42011BCD7853639127DFB481489DEA580A3305_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7721A47648B53D1891F250EA273B37FCC74C117);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * V_1 = NULL;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * V_3 = NULL;
	Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0119;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// mapManager.tiles[mapManager.start].distance = 0;
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_4 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_5 = L_4->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_6 = L_5->get_tiles_6();
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_7 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_8 = L_7->get_mapManager_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_9 = L_8->get_start_7();
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_10;
		L_10 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_6, L_9, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		L_10->set_distance_3((0.0f));
		// float dist = mapManager.tiles[mapManager.start].distance;
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_11 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_12 = L_11->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_13 = L_12->get_tiles_6();
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_14 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_15 = L_14->get_mapManager_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_16 = L_15->get_start_7();
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_17;
		L_17 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_13, L_16, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		float L_18 = L_17->get_distance_3();
		__this->set_U3CdistU3E5__2_3(L_18);
		// pq.buildHeap(mapManager.tiles);
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_19 = V_1;
		PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * L_20 = L_19->get_pq_5();
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_21 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_22 = L_21->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_23 = L_22->get_tiles_6();
		PriorityQueue_buildHeap_mD33DCC3817E8DB51F27C6DB7CA746F0379803075(L_20, L_23, /*hidden argument*/NULL);
		// pq.buildHeap(mapManager.tiles); // doubling stops error from having to press play button twice? hopefully will find better fix later
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_24 = V_1;
		PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * L_25 = L_24->get_pq_5();
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_26 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_27 = L_26->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_28 = L_27->get_tiles_6();
		PriorityQueue_buildHeap_mD33DCC3817E8DB51F27C6DB7CA746F0379803075(L_25, L_28, /*hidden argument*/NULL);
		// bool breakFlag = false; // function exits when either pq is empty or when finish has been found
		__this->set_U3CbreakFlagU3E5__3_4((bool)0);
		goto IL_02b7;
	}

IL_00a4:
	{
		// Vector3Int currentVert = pq.delMin();
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_29 = V_1;
		PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * L_30 = L_29->get_pq_5();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_31;
		L_31 = PriorityQueue_delMin_m8DE01AD4FEC63677031B43ECD4DFAEF1516AA3A7(L_30, /*hidden argument*/NULL);
		__this->set_U3CcurrentVertU3E5__4_5(L_31);
		// if (mapManager.tiles[currentVert].distance != dist){ // better system of pausing Dijkstra
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_32 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_33 = L_32->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_34 = L_33->get_tiles_6();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_35 = __this->get_U3CcurrentVertU3E5__4_5();
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_36;
		L_36 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_34, L_35, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		float L_37 = L_36->get_distance_3();
		float L_38 = __this->get_U3CdistU3E5__2_3();
		if ((((float)L_37) == ((float)L_38)))
		{
			goto IL_0120;
		}
	}
	{
		// dist = mapManager.tiles[currentVert].distance;
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_39 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_40 = L_39->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_41 = L_40->get_tiles_6();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_42 = __this->get_U3CcurrentVertU3E5__4_5();
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_43;
		L_43 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_41, L_42, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		float L_44 = L_43->get_distance_3();
		__this->set_U3CdistU3E5__2_3(L_44);
		// yield return new WaitForSeconds(1/speed);
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_45 = V_1;
		float L_46 = L_45->get_speed_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_47 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_47, ((float)((float)(1.0f)/(float)L_46)), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_47);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0119:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0120:
	{
		// foreach (Vector3Int nextVert in mapManager.tiles[currentVert].neighbors){
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_48 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_49 = L_48->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_50 = L_49->get_tiles_6();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_51 = __this->get_U3CcurrentVertU3E5__4_5();
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_52;
		L_52 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_50, L_51, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_53 = L_52->get_neighbors_1();
		Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B  L_54;
		L_54 = List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F(L_53, /*hidden argument*/List_1_GetEnumerator_mB4EDF9760C2C10E4C55BF9DDF88581A9C632B08F_RuntimeMethod_var);
		V_4 = L_54;
	}

IL_0142:
	try
	{ // begin try (depth: 1)
		{
			goto IL_028f;
		}

IL_0147:
		{
			// foreach (Vector3Int nextVert in mapManager.tiles[currentVert].neighbors){
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_55;
			L_55 = Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_inline((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_4), /*hidden argument*/Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_RuntimeMethod_var);
			V_5 = L_55;
			// float newDist = mapManager.tiles[currentVert].distance + mapManager.tiles[currentVert].weight; // finding new distance
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_56 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_57 = L_56->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_58 = L_57->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_59 = __this->get_U3CcurrentVertU3E5__4_5();
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_60;
			L_60 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_58, L_59, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			float L_61 = L_60->get_distance_3();
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_62 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_63 = L_62->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_64 = L_63->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_65 = __this->get_U3CcurrentVertU3E5__4_5();
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_66;
			L_66 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_64, L_65, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			float L_67 = L_66->get_weight_2();
			V_6 = ((float)il2cpp_codegen_add((float)L_61, (float)L_67));
			// if (newDist < mapManager.tiles[nextVert].distance){ // if new distance is less than old distance
			float L_68 = V_6;
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_69 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_70 = L_69->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_71 = L_70->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_72 = V_5;
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_73;
			L_73 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_71, L_72, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			float L_74 = L_73->get_distance_3();
			if ((!(((float)L_68) < ((float)L_74))))
			{
				goto IL_028f;
			}
		}

IL_01a7:
		{
			// if (!mapManager.tiles[nextVert].isWall){ // keeps color of walls gray
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_75 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_76 = L_75->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_77 = L_76->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_78 = V_5;
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_79;
			L_79 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_77, L_78, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			bool L_80 = L_79->get_isWall_4();
			if (L_80)
			{
				goto IL_01f4;
			}
		}

IL_01c0:
		{
			// map.SetTileFlags(nextVert,TileFlags.None); // turns color of tile blue
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_81 = V_1;
			Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_82 = L_81->get_map_7();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_83 = V_5;
			Tilemap_SetTileFlags_mC88DE5654C5FAB5CFBDD0CAD7ED500AD0B1033C2(L_82, L_83, 0, /*hidden argument*/NULL);
			// map.SetColor(nextVert, new Color(0, 0, 1, 1));
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_84 = V_1;
			Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_85 = L_84->get_map_7();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_86 = V_5;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_87;
			memset((&L_87), 0, sizeof(L_87));
			Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_87), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
			Tilemap_SetColor_mC78B3CC9FFA5C5EB63D061FBBD047D24C13BEA81(L_85, L_86, L_87, /*hidden argument*/NULL);
		}

IL_01f4:
		{
			// mapManager.tiles[nextVert].distance = newDist;
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_88 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_89 = L_88->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_90 = L_89->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_91 = V_5;
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_92;
			L_92 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_90, L_91, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			float L_93 = V_6;
			L_92->set_distance_3(L_93);
			// mapManager.tiles[nextVert].pred = currentVert;
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_94 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_95 = L_94->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_96 = L_95->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_97 = V_5;
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_98;
			L_98 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_96, L_97, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_99 = __this->get_U3CcurrentVertU3E5__4_5();
			L_98->set_pred_8(L_99);
			// pq.decreaseKey(nextVert, mapManager.tiles[nextVert].distance); // resetting Priority Queue
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_100 = V_1;
			PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * L_101 = L_100->get_pq_5();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_102 = V_5;
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_103 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_104 = L_103->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_105 = L_104->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_106 = V_5;
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_107;
			L_107 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_105, L_106, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			float L_108 = L_107->get_distance_3();
			PriorityQueue_decreaseKey_m048C75FBF235E25D2CDE8E397FDEFE4FA9D719A9(L_101, L_102, L_108, /*hidden argument*/NULL);
			// if (nextVert == mapManager.finish){ // finish has been found, stop while loop
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_109 = V_5;
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_110 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_111 = L_110->get_mapManager_4();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_112 = L_111->get_finish_8();
			bool L_113;
			L_113 = Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7_inline(L_109, L_112, /*hidden argument*/NULL);
			if (!L_113)
			{
				goto IL_028f;
			}
		}

IL_0262:
		{
			// Debug.Log($"{mapManager.finish} | {nextVert}");
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_114 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_115 = L_114->get_mapManager_4();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_116 = L_115->get_finish_8();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_117 = L_116;
			RuntimeObject * L_118 = Box(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var, &L_117);
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_119 = V_5;
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_120 = L_119;
			RuntimeObject * L_121 = Box(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var, &L_120);
			String_t* L_122;
			L_122 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralE7721A47648B53D1891F250EA273B37FCC74C117, L_118, L_121, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_122, /*hidden argument*/NULL);
			// breakFlag = true;
			__this->set_U3CbreakFlagU3E5__3_4((bool)1);
		}

IL_028f:
		{
			// foreach (Vector3Int nextVert in mapManager.tiles[currentVert].neighbors){
			bool L_123;
			L_123 = Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mFE5E8A6CED2FC95FD8F8ED0AA6E65C301D85E4A2_RuntimeMethod_var);
			if (L_123)
			{
				goto IL_0147;
			}
		}

IL_029b:
		{
			IL2CPP_LEAVE(0x2AB, FINALLY_029d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_029d;
	}

FINALLY_029d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA((Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B *)(&V_4), /*hidden argument*/Enumerator_Dispose_m1A0EF36A04E65634D688ABE2DB81698CCD3692BA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(669)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(669)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2AB, IL_02ab)
	}

IL_02ab:
	{
		// } // while !pq.isEmpty
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * L_124 = __this->get_address_of_U3CcurrentVertU3E5__4_5();
		il2cpp_codegen_initobj(L_124, sizeof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA ));
	}

IL_02b7:
	{
		// while (!breakFlag && !pq.isEmpty()){
		bool L_125 = __this->get_U3CbreakFlagU3E5__3_4();
		if (L_125)
		{
			goto IL_02cf;
		}
	}
	{
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_126 = V_1;
		PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * L_127 = L_126->get_pq_5();
		bool L_128;
		L_128 = PriorityQueue_isEmpty_m2CA6C937FA1E7C6A03EA69EEDBFAC00DBA301170(L_127, /*hidden argument*/NULL);
		if (!L_128)
		{
			goto IL_00a4;
		}
	}

IL_02cf:
	{
		// pq.heapList = new List<(float, Vector3Int)>(); // resetting list
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_129 = V_1;
		PriorityQueue_tE9C3C922E642027E82C73544CC14DA8A0684BC6F * L_130 = L_129->get_pq_5();
		List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * L_131 = (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 *)il2cpp_codegen_object_new(List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4_il2cpp_TypeInfo_var);
		List_1__ctor_m8E42011BCD7853639127DFB481489DEA580A3305(L_131, /*hidden argument*/List_1__ctor_m8E42011BCD7853639127DFB481489DEA580A3305_RuntimeMethod_var);
		L_130->set_heapList_0(L_131);
		// Vector3Int vert = mapManager.finish;
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_132 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_133 = L_132->get_mapManager_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_134 = L_133->get_finish_8();
		V_2 = L_134;
		// List<Vector3Int> predList = new List<Vector3Int>();
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_135 = (List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D *)il2cpp_codegen_object_new(List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D_il2cpp_TypeInfo_var);
		List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E(L_135, /*hidden argument*/List_1__ctor_mFDEAA2F6957949B6925A5BFE84DDC19F3118395E_RuntimeMethod_var);
		V_3 = L_135;
		goto IL_0328;
	}

IL_02f3:
	{
		// predList.Add(vert);
		List_1_tC83E49B6D8D9141EE2259E65D50945953846C57D * L_136 = V_3;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_137 = V_2;
		List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A(L_136, L_137, /*hidden argument*/List_1_Add_m0150ABE51993042C84BCD048641EC93AA056945A_RuntimeMethod_var);
		// mapManager.tiles[vert].isPath = true; // making it so it only takes O(n) time to visualize tilepath
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_138 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_139 = L_138->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_140 = L_139->get_tiles_6();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_141 = V_2;
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_142;
		L_142 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_140, L_141, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		L_142->set_isPath_6((bool)1);
		// vert = mapManager.tiles[vert].pred;
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_143 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_144 = L_143->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_145 = L_144->get_tiles_6();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_146 = V_2;
		TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_147;
		L_147 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_145, L_146, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_148 = L_147->get_pred_8();
		V_2 = L_148;
	}

IL_0328:
	{
		// while(vert != mapManager.start){
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_149 = V_2;
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_150 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_151 = L_150->get_mapManager_4();
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_152 = L_151->get_start_7();
		bool L_153;
		L_153 = Vector3Int_op_Inequality_mA54738AF377CBBA523CAEF47398C32F0338BF8E7_inline(L_149, L_152, /*hidden argument*/NULL);
		if (L_153)
		{
			goto IL_02f3;
		}
	}
	{
		// foreach(Vector3Int coords in mapManager.tiles.Keys){
		Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_154 = V_1;
		MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_155 = L_154->get_mapManager_4();
		Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_156 = L_155->get_tiles_6();
		KeyCollection_t79A7609EE0FE51E33FB7BB7FBC82D33F000CF0B3 * L_157;
		L_157 = Dictionary_2_get_Keys_m1744EB032A163FDB4A690EA6D59F63B1DE1F092C(L_156, /*hidden argument*/Dictionary_2_get_Keys_m1744EB032A163FDB4A690EA6D59F63B1DE1F092C_RuntimeMethod_var);
		Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5  L_158;
		L_158 = KeyCollection_GetEnumerator_m8DBDB4B1CAFCA90E9F183EE44FACEB76D3B3F6A2(L_157, /*hidden argument*/KeyCollection_GetEnumerator_m8DBDB4B1CAFCA90E9F183EE44FACEB76D3B3F6A2_RuntimeMethod_var);
		V_7 = L_158;
	}

IL_0352:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03c3;
		}

IL_0354:
		{
			// foreach(Vector3Int coords in mapManager.tiles.Keys){
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_159;
			L_159 = Enumerator_get_Current_mBE7E52D5DCAFA92CF5677546C14BED6BAD8CF800_inline((Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 *)(&V_7), /*hidden argument*/Enumerator_get_Current_mBE7E52D5DCAFA92CF5677546C14BED6BAD8CF800_RuntimeMethod_var);
			V_8 = L_159;
			// if (!mapManager.tiles[coords].isPath && !mapManager.tiles[coords].isWall){
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_160 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_161 = L_160->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_162 = L_161->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_163 = V_8;
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_164;
			L_164 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_162, L_163, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			bool L_165 = L_164->get_isPath_6();
			if (L_165)
			{
				goto IL_03c3;
			}
		}

IL_0376:
		{
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_166 = V_1;
			MapManager_t4589A236B4CE205CE81E79FECBCD6B3F3F99F225 * L_167 = L_166->get_mapManager_4();
			Dictionary_2_t245E9FE36D93681DBF00922FDE124397B10C5B96 * L_168 = L_167->get_tiles_6();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_169 = V_8;
			TileScript_t6E723D639E7213BAEA1F8346F405265665193642 * L_170;
			L_170 = Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730(L_168, L_169, /*hidden argument*/Dictionary_2_get_Item_mE363511C92A9A3D9742DDF72B542806FCCA52730_RuntimeMethod_var);
			bool L_171 = L_170->get_isWall_4();
			if (L_171)
			{
				goto IL_03c3;
			}
		}

IL_038f:
		{
			// map.SetTileFlags(coords, TileFlags.None);
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_172 = V_1;
			Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_173 = L_172->get_map_7();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_174 = V_8;
			Tilemap_SetTileFlags_mC88DE5654C5FAB5CFBDD0CAD7ED500AD0B1033C2(L_173, L_174, 0, /*hidden argument*/NULL);
			// map.SetColor(coords, new Color(1, 1, 1, 1));
			Dijkstra_tA9804A39572A0E3EE1DCDD489B16C15AFF294817 * L_175 = V_1;
			Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_176 = L_175->get_map_7();
			Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_177 = V_8;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_178;
			memset((&L_178), 0, sizeof(L_178));
			Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_178), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
			Tilemap_SetColor_mC78B3CC9FFA5C5EB63D061FBBD047D24C13BEA81(L_176, L_177, L_178, /*hidden argument*/NULL);
		}

IL_03c3:
		{
			// foreach(Vector3Int coords in mapManager.tiles.Keys){
			bool L_179;
			L_179 = Enumerator_MoveNext_m94C833B421A86958F78EF25421F27E5334A3A10C((Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m94C833B421A86958F78EF25421F27E5334A3A10C_RuntimeMethod_var);
			if (L_179)
			{
				goto IL_0354;
			}
		}

IL_03cc:
		{
			IL2CPP_LEAVE(0x3DC, FINALLY_03ce);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03ce;
	}

FINALLY_03ce:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m23F73B815D52415BA49378576D444624B7259D92((Enumerator_t84D356B317F5DF70D7D1463D82AA8A8D23B2D7C5 *)(&V_7), /*hidden argument*/Enumerator_Dispose_m23F73B815D52415BA49378576D444624B7259D92_RuntimeMethod_var);
		IL2CPP_END_FINALLY(974)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(974)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3DC, IL_03dc)
	}

IL_03dc:
	{
		// } // startAlgorithm()
		return (bool)0;
	}
}
// System.Object Dijkstra/<startAlgorithm>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CstartAlgorithmU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7C8D10301CA6D76289EEFD9B3CD993D2271B4E59 (U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Dijkstra/<startAlgorithm>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CstartAlgorithmU3Ed__5_System_Collections_IEnumerator_Reset_mB4FE6EAB5633A947EE09DFA78D5C1E8888232761 (U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CstartAlgorithmU3Ed__5_System_Collections_IEnumerator_Reset_mB4FE6EAB5633A947EE09DFA78D5C1E8888232761_RuntimeMethod_var)));
	}
}
// System.Object Dijkstra/<startAlgorithm>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CstartAlgorithmU3Ed__5_System_Collections_IEnumerator_get_Current_mF1D29D5B180D8CD04C950443073D87642D2CD70B (U3CstartAlgorithmU3Ed__5_tA988FA419BD3EA9C1693404B990310D054E2CBC2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Vector3Int_RoundToInt_m5C5E7AF335B7F80B9CE6207319D5849CC6E2D80C_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		int32_t L_2;
		L_2 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___v0;
		float L_4 = L_3.get_y_3();
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___v0;
		float L_7 = L_6.get_z_4();
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_7, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_002a;
	}

IL_002a:
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Inequality_mA54738AF377CBBA523CAEF47398C32F0338BF8E7_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___lhs0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = ___lhs0;
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
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
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___lhs0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___rhs1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___rhs1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___rhs1), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3Int_op_Implicit_mD812DEDBDE886508E86FB3222BB9DDB4949B4475_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___v0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___v0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___v0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), ((float)((float)L_0)), ((float)((float)L_1)), ((float)((float)L_2)), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		int32_t L_2 = ___z2;
		__this->set_m_Z_2(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Enumerator_get_Current_mDCBD0C39CA8B32D579BFBECDCA9987C1BCBF288D_gshared_inline (Enumerator_tCAEEE187D2E58B4D61A5C099EE6D6C4E40D59BA5 * __this, const RuntimeMethod* method)
{
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA )__this->get_currentKey_3();
		return (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  Enumerator_get_Current_mDFFB7974DE64CBA005418096447D17DBD07B9E88_gshared_inline (Enumerator_t48ADF0681F7C8D4332C428FC59A8A2CA9D2968BE * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE  L_0 = (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE )__this->get_current_3();
		return (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mD547C1FD8A32EAD3DA92B371F436FB362F2B058C_gshared_inline (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  KeyValuePair_2_get_Key_mCC04ED20A66A66A4926D26D920DB3A9BAA935EA2_gshared_inline (KeyValuePair_2_t0A2B129F7CB0CBEF945F9A0BD16B6D40BDEF98CE * __this, const RuntimeMethod* method)
{
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA )__this->get_key_0();
		return (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  List_1_get_Item_mD5828939B165A35D0327DAE95CBEAC19D382F7E8_gshared_inline (List_1_t59C54DBEBC137F5FFB1F0208C5FAF59D2B84DDB4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816* L_2 = (ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ValueTuple_2U5BU5D_t4EBFD87533CC8C59E9E3E227FA3048BC40098816*)L_2, (int32_t)L_3);
		return (ValueTuple_2_tD442FCAB1F444164E6FAD2D26C30A5D06A7DE7D6 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  Enumerator_get_Current_m99042ADCE04C7F19E46770E3A81699BE449DF93F_gshared_inline (Enumerator_t8C533528A604C56BF7D1A679D261973E9F97DB6B * __this, const RuntimeMethod* method)
{
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA )__this->get_current_3();
		return (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA )L_0;
	}
}
