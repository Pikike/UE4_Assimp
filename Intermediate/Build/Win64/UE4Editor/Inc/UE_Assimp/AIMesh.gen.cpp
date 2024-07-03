// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AIMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMesh() {}
// Cross Module References
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMesh_NoRegister();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMesh();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UE_Assimp();
	UE_ASSIMP_API UScriptStruct* Z_Construct_UScriptStruct_FAIBone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	STATICMESHDESCRIPTION_API UClass* Z_Construct_UClass_UStaticMeshDescription_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAIMesh::execGetMaterialIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMesh::execGetMeshName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMeshName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMesh::execGetAllBones)
	{
		P_GET_TARRAY_REF(FAIBone,Z_Param_Out_Bones);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllBones(Z_Param_Out_Bones);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMesh::execGetNumVertices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVertices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMesh::execGetStaticMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->GetStaticMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMesh::execGetMeshDataForProceduralMesh)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMeshDataForProceduralMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMesh::execGetMeshNormals)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMeshNormals(Z_Param_Out_Normals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMesh::execGetMeshVertices)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMeshVertices(Z_Param_Out_Vertices);
		P_NATIVE_END;
	}
	void UAIMesh::StaticRegisterNativesUAIMesh()
	{
		UClass* Class = UAIMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllBones", &UAIMesh::execGetAllBones },
			{ "GetMaterialIndex", &UAIMesh::execGetMaterialIndex },
			{ "GetMeshDataForProceduralMesh", &UAIMesh::execGetMeshDataForProceduralMesh },
			{ "GetMeshName", &UAIMesh::execGetMeshName },
			{ "GetMeshNormals", &UAIMesh::execGetMeshNormals },
			{ "GetMeshVertices", &UAIMesh::execGetMeshVertices },
			{ "GetNumVertices", &UAIMesh::execGetNumVertices },
			{ "GetStaticMesh", &UAIMesh::execGetStaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIMesh_GetAllBones_Statics
	{
		struct AIMesh_eventGetAllBones_Parms
		{
			TArray<FAIBone> Bones;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetAllBones_Parms, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::NewProp_Bones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::NewProp_Bones,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** The bones of this mesh.\n  * A bone consists of a name by which it can be found in the\n  * frame hierarchy and a set of vertex weights.\n  */" },
		{ "ModuleRelativePath", "Public/AIMesh.h" },
		{ "ToolTip", "The bones of this mesh.\nA bone consists of a name by which it can be found in the\nframe hierarchy and a set of vertex weights." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetAllBones", nullptr, nullptr, sizeof(AIMesh_eventGetAllBones_Parms), Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMesh_GetAllBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMesh_GetAllBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics
	{
		struct AIMesh_eventGetMaterialIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Get material for this mesh . use get materials in scene object with this index to get its material.\n\x09 *Materials are property of scene because many meshes can share a single material .\n\x09 **/" },
		{ "ModuleRelativePath", "Public/AIMesh.h" },
		{ "ToolTip", "Get material for this mesh . use get materials in scene object with this index to get its material.\n        *Materials are property of scene because many meshes can share a single material ." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetMaterialIndex", nullptr, nullptr, sizeof(AIMesh_eventGetMaterialIndex_Parms), Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMesh_GetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMesh_GetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics
	{
		struct AIMesh_eventGetMeshDataForProceduralMesh_Parms
		{
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UV0;
			TArray<FProcMeshTangent> Tangents;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetMeshDataForProceduralMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetMeshDataForProceduralMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetMeshDataForProceduralMesh_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetMeshDataForProceduralMesh_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetMeshDataForProceduralMesh_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_UV0_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_UV0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::NewProp_Tangents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get All data needed to create a mesh section in Unreal engine\n" },
		{ "ModuleRelativePath", "Public/AIMesh.h" },
		{ "ToolTip", "Get All data needed to create a mesh section in Unreal engine" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetMeshDataForProceduralMesh", nullptr, nullptr, sizeof(AIMesh_eventGetMeshDataForProceduralMesh_Parms), Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMesh_GetMeshName_Statics
	{
		struct AIMesh_eventGetMeshName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetMeshName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Name of the mesh. Meshes can be named, but this is not a\n   *  requirement and leaving this field empty is totally fine.\n   *  There are mainly three uses for mesh names:\n   *   - some formats name nodes and meshes independently.\n   *   - importers tend to split meshes up to meet the\n   *      one-material-per-mesh requirement. Assigning\n   *      the same (dummy) name to each of the result meshes\n   *      aids the caller at recovering the original mesh\n   *      partitioning.\n   *   - Vertex animations refer to meshes by their names.\n   **/" },
		{ "ModuleRelativePath", "Public/AIMesh.h" },
		{ "ToolTip", "Name of the mesh. Meshes can be named, but this is not a\nrequirement and leaving this field empty is totally fine.\nThere are mainly three uses for mesh names:\n - some formats name nodes and meshes independently.\n - importers tend to split meshes up to meet the\n    one-material-per-mesh requirement. Assigning\n    the same (dummy) name to each of the result meshes\n    aids the caller at recovering the original mesh\n    partitioning.\n - Vertex animations refer to meshes by their names." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetMeshName", nullptr, nullptr, sizeof(AIMesh_eventGetMeshName_Parms), Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMesh_GetMeshName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMesh_GetMeshName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics
	{
		struct AIMesh_eventGetMeshNormals_Parms
		{
			TArray<FVector> Normals;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetMeshNormals_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::NewProp_Normals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Vertex normals.\n\x09* The array contains normalized vectors, nullptr if not present.*/" },
		{ "ModuleRelativePath", "Public/AIMesh.h" },
		{ "ToolTip", "Vertex normals.\nThe array contains normalized vectors, nullptr if not present." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetMeshNormals", nullptr, nullptr, sizeof(AIMesh_eventGetMeshNormals_Parms), Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMesh_GetMeshNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMesh_GetMeshNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics
	{
		struct AIMesh_eventGetMeshVertices_Parms
		{
			TArray<FVector> Vertices;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetMeshVertices_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::NewProp_Vertices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** The number of vertices in this mesh.\n  * This is also the size of all of the per-vertex data arrays.\n  * The maximum value for this member is #AI_MAX_VERTICES.\n  */" },
		{ "ModuleRelativePath", "Public/AIMesh.h" },
		{ "ToolTip", "The number of vertices in this mesh.\nThis is also the size of all of the per-vertex data arrays.\nThe maximum value for this member is #AI_MAX_VERTICES." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetMeshVertices", nullptr, nullptr, sizeof(AIMesh_eventGetMeshVertices_Parms), Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMesh_GetMeshVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMesh_GetMeshVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics
	{
		struct AIMesh_eventGetNumVertices_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetNumVertices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Num of vertices array\n" },
		{ "ModuleRelativePath", "Public/AIMesh.h" },
		{ "ToolTip", "Num of vertices array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetNumVertices", nullptr, nullptr, sizeof(AIMesh_eventGetNumVertices_Parms), Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMesh_GetNumVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMesh_GetNumVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics
	{
		struct AIMesh_eventGetStaticMesh_Parms
		{
			UStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMesh_eventGetStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMesh, nullptr, "GetStaticMesh", nullptr, nullptr, sizeof(AIMesh_eventGetStaticMesh_Parms), Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMesh_GetStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMesh_GetStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIMesh_NoRegister()
	{
		return UAIMesh::StaticClass();
	}
	struct Z_Construct_UClass_UAIMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIMesh_GetAllBones, "GetAllBones" }, // 1340494577
		{ &Z_Construct_UFunction_UAIMesh_GetMaterialIndex, "GetMaterialIndex" }, // 3302952456
		{ &Z_Construct_UFunction_UAIMesh_GetMeshDataForProceduralMesh, "GetMeshDataForProceduralMesh" }, // 3257305909
		{ &Z_Construct_UFunction_UAIMesh_GetMeshName, "GetMeshName" }, // 3295699832
		{ &Z_Construct_UFunction_UAIMesh_GetMeshNormals, "GetMeshNormals" }, // 1067745026
		{ &Z_Construct_UFunction_UAIMesh_GetMeshVertices, "GetMeshVertices" }, // 896263011
		{ &Z_Construct_UFunction_UAIMesh_GetNumVertices, "GetNumVertices" }, // 4013455330
		{ &Z_Construct_UFunction_UAIMesh_GetStaticMesh, "GetStaticMesh" }, // 2187352037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n *///wrapper for assimp mesh \n" },
		{ "IncludePath", "AIMesh.h" },
		{ "ModuleRelativePath", "Public/AIMesh.h" },
		{ "ToolTip", "//wrapper for assimp mesh" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMesh_Statics::NewProp_MeshDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIMesh_Statics::NewProp_MeshDescription = { "MeshDescription", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIMesh, MeshDescription), Z_Construct_UClass_UStaticMeshDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIMesh_Statics::NewProp_MeshDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMesh_Statics::NewProp_MeshDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMesh_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIMesh_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMesh_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMesh_Statics::NewProp_MeshDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMesh_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIMesh_Statics::ClassParams = {
		&UAIMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIMesh_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIMesh, 94589418);
	template<> UE_ASSIMP_API UClass* StaticClass<UAIMesh>()
	{
		return UAIMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIMesh(Z_Construct_UClass_UAIMesh, &UAIMesh::StaticClass, TEXT("/Script/UE_Assimp"), TEXT("UAIMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
