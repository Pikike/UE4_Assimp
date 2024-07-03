// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AINode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAINode() {}
// Cross Module References
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAINode_NoRegister();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAINode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UE_Assimp();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAIScene_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAINode::execGetScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAIScene**)Z_Param__Result=P_THIS->GetScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAINode::execGetNodeMeshes)
	{
		P_GET_TARRAY_REF(UAIMesh*,Z_Param_Out_Meshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNodeMeshes(Z_Param_Out_Meshes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAINode::execGetRootTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRootTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAINode::execGetNodeTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNodeTransform(Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAINode::execGetChildNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAINode*>*)Z_Param__Result=P_THIS->GetChildNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAINode::execGetParentNode)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAINode**)Z_Param__Result=P_THIS->GetParentNode(Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAINode::execGetNodeName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNodeName();
		P_NATIVE_END;
	}
	void UAINode::StaticRegisterNativesUAINode()
	{
		UClass* Class = UAINode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChildNodes", &UAINode::execGetChildNodes },
			{ "GetNodeMeshes", &UAINode::execGetNodeMeshes },
			{ "GetNodeName", &UAINode::execGetNodeName },
			{ "GetNodeTransform", &UAINode::execGetNodeTransform },
			{ "GetParentNode", &UAINode::execGetParentNode },
			{ "GetRootTransform", &UAINode::execGetRootTransform },
			{ "GetScene", &UAINode::execGetScene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAINode_GetChildNodes_Statics
	{
		struct AINode_eventGetChildNodes_Parms
		{
			TArray<UAINode*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAINode_GetChildNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAINode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAINode_GetChildNodes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAINode_GetChildNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AINode_eventGetChildNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAINode_GetChildNodes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetChildNodes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetChildNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetChildNodes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetChildNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAINode_GetChildNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
		{ "Comment", "/** The child nodes of this node. */" },
		{ "ModuleRelativePath", "Public/AINode.h" },
		{ "ToolTip", "The child nodes of this node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetChildNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetChildNodes", nullptr, nullptr, sizeof(AINode_eventGetChildNodes_Parms), Z_Construct_UFunction_UAINode_GetChildNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetChildNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAINode_GetChildNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetChildNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAINode_GetChildNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAINode_GetChildNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics
	{
		struct AINode_eventGetNodeMeshes_Parms
		{
			TArray<UAIMesh*> Meshes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AINode_eventGetNodeMeshes_Parms, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AINode_eventGetNodeMeshes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AINode_eventGetNodeMeshes_Parms), &Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_Meshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_Meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
		{ "Comment", "//false if empty\n" },
		{ "ModuleRelativePath", "Public/AINode.h" },
		{ "ToolTip", "false if empty" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetNodeMeshes", nullptr, nullptr, sizeof(AINode_eventGetNodeMeshes_Parms), Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAINode_GetNodeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAINode_GetNodeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAINode_GetNodeName_Statics
	{
		struct AINode_eventGetNodeName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAINode_GetNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AINode_eventGetNodeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetNodeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetNodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAINode_GetNodeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
		{ "Comment", "/** The name of the node.\n\x09*\n\x09* The name might be empty (length of zero) but all nodes which\n\x09* need to be referenced by either bones or animations are named.\n\x09* Multiple nodes may have the same name, except for nodes which are referenced\n\x09* by bones (see #aiBone and #aiMesh::mBones). Their names *must* be unique.\n\x09*\n\x09* Cameras and lights reference a specific node by name - if there\n\x09* are multiple nodes with this name, they are assigned to each of them.\n\x09* <br>\n\x09* There are no limitations with regard to the characters contained in\n\x09* the name string as it is usually taken directly from the source file.\n\x09*\n\x09* Implementations should be able to handle tokens such as whitespace, tabs,\n\x09* line feeds, quotation marks, ampersands etc.\n\x09*\n\x09* Sometimes assimp introduces new nodes not present in the source file\n\x09* into the hierarchy (usually out of necessity because sometimes the\n\x09* source hierarchy format is simply not compatible). Their names are\n\x09* surrounded by @verbatim <> @endverbatim e.g.\n\x09*  @verbatim<DummyRootNode> @endverbatim.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AINode.h" },
		{ "ToolTip", "The name of the node.\n\nThe name might be empty (length of zero) but all nodes which\nneed to be referenced by either bones or animations are named.\nMultiple nodes may have the same name, except for nodes which are referenced\nby bones (see #aiBone and #aiMesh::mBones). Their names *must* be unique.\n\nCameras and lights reference a specific node by name - if there\nare multiple nodes with this name, they are assigned to each of them.\n<br>\nThere are no limitations with regard to the characters contained in\nthe name string as it is usually taken directly from the source file.\n\nImplementations should be able to handle tokens such as whitespace, tabs,\nline feeds, quotation marks, ampersands etc.\n\nSometimes assimp introduces new nodes not present in the source file\ninto the hierarchy (usually out of necessity because sometimes the\nsource hierarchy format is simply not compatible). Their names are\nsurrounded by @verbatim <> @endverbatim e.g.\n@verbatim<DummyRootNode> @endverbatim." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetNodeName", nullptr, nullptr, sizeof(AINode_eventGetNodeName_Parms), Z_Construct_UFunction_UAINode_GetNodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAINode_GetNodeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAINode_GetNodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAINode_GetNodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAINode_GetNodeTransform_Statics
	{
		struct AINode_eventGetNodeTransform_Parms
		{
			FTransform Transform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AINode_eventGetNodeTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
		{ "Comment", "/** The transformation relative to the node's parent. */" },
		{ "ModuleRelativePath", "Public/AINode.h" },
		{ "ToolTip", "The transformation relative to the node's parent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetNodeTransform", nullptr, nullptr, sizeof(AINode_eventGetNodeTransform_Parms), Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAINode_GetNodeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAINode_GetNodeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAINode_GetParentNode_Statics
	{
		struct AINode_eventGetParentNode_Parms
		{
			bool Success;
			UAINode* ReturnValue;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((AINode_eventGetParentNode_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AINode_eventGetParentNode_Parms), &Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AINode_eventGetParentNode_Parms, ReturnValue), Z_Construct_UClass_UAINode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetParentNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetParentNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAINode_GetParentNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
		{ "Comment", "/** Parent node. nullptr if this node is the root node. */" },
		{ "ModuleRelativePath", "Public/AINode.h" },
		{ "ToolTip", "Parent node. nullptr if this node is the root node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetParentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetParentNode", nullptr, nullptr, sizeof(AINode_eventGetParentNode_Parms), Z_Construct_UFunction_UAINode_GetParentNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetParentNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAINode_GetParentNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetParentNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAINode_GetParentNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAINode_GetParentNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAINode_GetRootTransform_Statics
	{
		struct AINode_eventGetRootTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAINode_GetRootTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AINode_eventGetRootTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetRootTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetRootTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAINode_GetRootTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
		{ "Comment", "/** The transformation relative to Root */" },
		{ "ModuleRelativePath", "Public/AINode.h" },
		{ "ToolTip", "The transformation relative to Root" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetRootTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetRootTransform", nullptr, nullptr, sizeof(AINode_eventGetRootTransform_Parms), Z_Construct_UFunction_UAINode_GetRootTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetRootTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAINode_GetRootTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetRootTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAINode_GetRootTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAINode_GetRootTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAINode_GetScene_Statics
	{
		struct AINode_eventGetScene_Parms
		{
			UAIScene* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAINode_GetScene_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAINode_GetScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AINode_eventGetScene_Parms, ReturnValue), Z_Construct_UClass_UAIScene_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAINode_GetScene_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetScene_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAINode_GetScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAINode_GetScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAINode_GetScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Node" },
		{ "ModuleRelativePath", "Public/AINode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAINode_GetScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAINode, nullptr, "GetScene", nullptr, nullptr, sizeof(AINode_eventGetScene_Parms), Z_Construct_UFunction_UAINode_GetScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAINode_GetScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAINode_GetScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAINode_GetScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAINode_GetScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAINode_NoRegister()
	{
		return UAINode::StaticClass();
	}
	struct Z_Construct_UClass_UAINode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAINode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAINode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAINode_GetChildNodes, "GetChildNodes" }, // 1995502049
		{ &Z_Construct_UFunction_UAINode_GetNodeMeshes, "GetNodeMeshes" }, // 1599672056
		{ &Z_Construct_UFunction_UAINode_GetNodeName, "GetNodeName" }, // 11641331
		{ &Z_Construct_UFunction_UAINode_GetNodeTransform, "GetNodeTransform" }, // 3814290075
		{ &Z_Construct_UFunction_UAINode_GetParentNode, "GetParentNode" }, // 525381055
		{ &Z_Construct_UFunction_UAINode_GetRootTransform, "GetRootTransform" }, // 1741121947
		{ &Z_Construct_UFunction_UAINode_GetScene, "GetScene" }, // 1783919717
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAINode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AINode.h" },
		{ "ModuleRelativePath", "Public/AINode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAINode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAINode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAINode_Statics::ClassParams = {
		&UAINode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAINode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAINode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAINode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAINode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAINode, 787695382);
	template<> UE_ASSIMP_API UClass* StaticClass<UAINode>()
	{
		return UAINode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAINode(Z_Construct_UClass_UAINode, &UAINode::StaticClass, TEXT("/Script/UE_Assimp"), TEXT("UAINode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAINode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
