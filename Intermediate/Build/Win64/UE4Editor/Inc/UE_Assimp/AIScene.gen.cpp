// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AIScene.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIScene() {}
// Cross Module References
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAIScene_NoRegister();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAIScene();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UE_Assimp();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAICamera_NoRegister();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAILight_NoRegister();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMaterial_NoRegister();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAINode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAIScene::execGetSceneScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSceneScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIScene::execGetEmbeddedTexture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_UBOOL(Z_Param_bIsNormalMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetEmbeddedTexture(Z_Param_FilePath,Z_Param_bIsNormalMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIScene::execGetUnitScaleFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUnitScaleFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIScene::execGetAllLights)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAILight*>*)Z_Param__Result=P_THIS->GetAllLights();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIScene::execGetAllCameras)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAICamera*>*)Z_Param__Result=P_THIS->GetAllCameras();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIScene::execGetMeshAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAIMesh**)Z_Param__Result=P_THIS->GetMeshAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIScene::execGetRootNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAINode**)Z_Param__Result=P_THIS->GetRootNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIScene::execGetAllMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAIMaterial*>*)Z_Param__Result=P_THIS->GetAllMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIScene::execGetAllMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAIMesh*>*)Z_Param__Result=P_THIS->GetAllMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIScene::execSpawnAllMeshes)
	{
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_OBJECT(UClass,Z_Param_ClassToSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMeshComponent*>*)Z_Param__Result=P_THIS->SpawnAllMeshes(Z_Param_Transform,Z_Param_ClassToSpawn);
		P_NATIVE_END;
	}
	void UAIScene::StaticRegisterNativesUAIScene()
	{
		UClass* Class = UAIScene::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllCameras", &UAIScene::execGetAllCameras },
			{ "GetAllLights", &UAIScene::execGetAllLights },
			{ "GetAllMaterials", &UAIScene::execGetAllMaterials },
			{ "GetAllMeshes", &UAIScene::execGetAllMeshes },
			{ "GetEmbeddedTexture", &UAIScene::execGetEmbeddedTexture },
			{ "GetMeshAtIndex", &UAIScene::execGetMeshAtIndex },
			{ "GetRootNode", &UAIScene::execGetRootNode },
			{ "GetSceneScale", &UAIScene::execGetSceneScale },
			{ "GetUnitScaleFactor", &UAIScene::execGetUnitScaleFactor },
			{ "SpawnAllMeshes", &UAIScene::execSpawnAllMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIScene_GetAllCameras_Statics
	{
		struct AIScene_eventGetAllCameras_Parms
		{
			TArray<UAICamera*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAICamera_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventGetAllCameras_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetAllCameras", nullptr, nullptr, sizeof(AIScene_eventGetAllCameras_Parms), Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIScene_GetAllCameras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIScene_GetAllCameras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIScene_GetAllLights_Statics
	{
		struct AIScene_eventGetAllLights_Parms
		{
			TArray<UAILight*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetAllLights_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAILight_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetAllLights_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIScene_GetAllLights_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventGetAllLights_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetAllLights_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllLights_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetAllLights_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllLights_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllLights_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetAllLights_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetAllLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetAllLights", nullptr, nullptr, sizeof(AIScene_eventGetAllLights_Parms), Z_Construct_UFunction_UAIScene_GetAllLights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllLights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetAllLights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllLights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIScene_GetAllLights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIScene_GetAllLights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics
	{
		struct AIScene_eventGetAllMaterials_Parms
		{
			TArray<UAIMaterial*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAIMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventGetAllMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetAllMaterials", nullptr, nullptr, sizeof(AIScene_eventGetAllMaterials_Parms), Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIScene_GetAllMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIScene_GetAllMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics
	{
		struct AIScene_eventGetAllMeshes_Parms
		{
			TArray<UAIMesh*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventGetAllMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "Comment", "/*Get All meshes stored in this scene\n\x09* note that each material section is considered a  separate mesh \n\x09*/" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
		{ "ToolTip", "Get All meshes stored in this scene\n       * note that each material section is considered a  separate mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetAllMeshes", nullptr, nullptr, sizeof(AIScene_eventGetAllMeshes_Parms), Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIScene_GetAllMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIScene_GetAllMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics
	{
		struct AIScene_eventGetEmbeddedTexture_Parms
		{
			FString FilePath;
			bool bIsNormalMap;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_bIsNormalMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNormalMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventGetEmbeddedTexture_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_bIsNormalMap_SetBit(void* Obj)
	{
		((AIScene_eventGetEmbeddedTexture_Parms*)Obj)->bIsNormalMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_bIsNormalMap = { "bIsNormalMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIScene_eventGetEmbeddedTexture_Parms), &Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_bIsNormalMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventGetEmbeddedTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_bIsNormalMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "Comment", "//Texture\n//! Returns an embedded texture. if null then check path or texture is not embedded and must be imported using unreal default import texture function\n" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
		{ "ToolTip", "Texture\n! Returns an embedded texture. if null then check path or texture is not embedded and must be imported using unreal default import texture function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetEmbeddedTexture", nullptr, nullptr, sizeof(AIScene_eventGetEmbeddedTexture_Parms), Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIScene_GetEmbeddedTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIScene_GetEmbeddedTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics
	{
		struct AIScene_eventGetMeshAtIndex_Parms
		{
			int32 Index;
			UAIMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventGetMeshAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventGetMeshAtIndex_Parms, ReturnValue), Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetMeshAtIndex", nullptr, nullptr, sizeof(AIScene_eventGetMeshAtIndex_Parms), Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIScene_GetMeshAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIScene_GetMeshAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIScene_GetRootNode_Statics
	{
		struct AIScene_eventGetRootNode_Parms
		{
			UAINode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_GetRootNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventGetRootNode_Parms, ReturnValue), Z_Construct_UClass_UAINode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetRootNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetRootNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetRootNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "Comment", "/** The root node of the hierarchy.\n\x09*\n\x09* There will always be at least the root node if the import\n\x09* was successful (and no special flags have been set).\n\x09* Presence of further nodes depends on the format and content\n\x09* of the imported file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
		{ "ToolTip", "The root node of the hierarchy.\n\nThere will always be at least the root node if the import\nwas successful (and no special flags have been set).\nPresence of further nodes depends on the format and content\nof the imported file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetRootNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetRootNode", nullptr, nullptr, sizeof(AIScene_eventGetRootNode_Parms), Z_Construct_UFunction_UAIScene_GetRootNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetRootNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetRootNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetRootNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIScene_GetRootNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIScene_GetRootNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIScene_GetSceneScale_Statics
	{
		struct AIScene_eventGetSceneScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventGetSceneScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetSceneScale", nullptr, nullptr, sizeof(AIScene_eventGetSceneScale_Parms), Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIScene_GetSceneScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIScene_GetSceneScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics
	{
		struct AIScene_eventGetUnitScaleFactor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventGetUnitScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "GetUnitScaleFactor", nullptr, nullptr, sizeof(AIScene_eventGetUnitScaleFactor_Parms), Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIScene_GetUnitScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIScene_GetUnitScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics
	{
		struct AIScene_eventSpawnAllMeshes_Parms
		{
			FTransform Transform;
			TSubclassOf<AActor>  ClassToSpawn;
			TArray<UMeshComponent*> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToSpawn;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventSpawnAllMeshes_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ClassToSpawn = { "ClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventSpawnAllMeshes_Parms, ClassToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIScene_eventSpawnAllMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ClassToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Scene" },
		{ "Comment", "/*WIP Function:\n\x09WIll spawn all meshes in most optimised fashion \n\x09*/" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
		{ "ToolTip", "WIP Function:\n       WIll spawn all meshes in most optimised fashion" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIScene, nullptr, "SpawnAllMeshes", nullptr, nullptr, sizeof(AIScene_eventSpawnAllMeshes_Parms), Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIScene_SpawnAllMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIScene_SpawnAllMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIScene_NoRegister()
	{
		return UAIScene::StaticClass();
	}
	struct Z_Construct_UClass_UAIScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnedMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwnedMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedRootNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnedRootNode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnedCameras_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedCameras_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwnedCameras;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnedLights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwnedLights;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnedMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OwnedMaterials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIScene_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIScene_GetAllCameras, "GetAllCameras" }, // 2370519757
		{ &Z_Construct_UFunction_UAIScene_GetAllLights, "GetAllLights" }, // 3140712639
		{ &Z_Construct_UFunction_UAIScene_GetAllMaterials, "GetAllMaterials" }, // 1404835887
		{ &Z_Construct_UFunction_UAIScene_GetAllMeshes, "GetAllMeshes" }, // 2618305621
		{ &Z_Construct_UFunction_UAIScene_GetEmbeddedTexture, "GetEmbeddedTexture" }, // 1818993989
		{ &Z_Construct_UFunction_UAIScene_GetMeshAtIndex, "GetMeshAtIndex" }, // 2715946629
		{ &Z_Construct_UFunction_UAIScene_GetRootNode, "GetRootNode" }, // 3397624900
		{ &Z_Construct_UFunction_UAIScene_GetSceneScale, "GetSceneScale" }, // 762382266
		{ &Z_Construct_UFunction_UAIScene_GetUnitScaleFactor, "GetUnitScaleFactor" }, // 4227913251
		{ &Z_Construct_UFunction_UAIScene_SpawnAllMeshes, "SpawnAllMeshes" }, // 2455070773
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIScene_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//wrapper for scene\n" },
		{ "IncludePath", "AIScene.h" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
		{ "ToolTip", "wrapper for scene" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIScene_Statics::NewProp_FullFilePath_MetaData[] = {
		{ "Category", "AIScene" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIScene, FullFilePath), METADATA_PARAMS(Z_Construct_UClass_UAIScene_Statics::NewProp_FullFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::NewProp_FullFilePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMeshes_Inner = { "OwnedMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMeshes_MetaData[] = {
		{ "Comment", "//For Object Creation\n" },
		{ "ModuleRelativePath", "Public/AIScene.h" },
		{ "ToolTip", "For Object Creation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMeshes = { "OwnedMeshes", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIScene, OwnedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedRootNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedRootNode = { "OwnedRootNode", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIScene, OwnedRootNode), Z_Construct_UClass_UAINode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedRootNode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedCameras_Inner = { "OwnedCameras", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAICamera_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedCameras_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedCameras = { "OwnedCameras", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIScene, OwnedCameras), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedCameras_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedLights_Inner = { "OwnedLights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAILight_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedLights_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedLights = { "OwnedLights", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIScene, OwnedLights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedLights_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMaterials_Inner = { "OwnedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAIMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIScene.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMaterials = { "OwnedMaterials", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIScene, OwnedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMaterials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_FullFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedRootNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedCameras_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedCameras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedLights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIScene_Statics::NewProp_OwnedMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIScene>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIScene_Statics::ClassParams = {
		&UAIScene::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIScene_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIScene_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIScene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIScene_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIScene, 3373366153);
	template<> UE_ASSIMP_API UClass* StaticClass<UAIScene>()
	{
		return UAIScene::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIScene(Z_Construct_UClass_UAIScene, &UAIScene::StaticClass, TEXT("/Script/UE_Assimp"), TEXT("UAIScene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIScene);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
