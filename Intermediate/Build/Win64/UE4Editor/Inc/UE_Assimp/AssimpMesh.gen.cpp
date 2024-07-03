// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AssimpMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssimpMesh() {}
// Cross Module References
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAssimpMesh_NoRegister();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAssimpMesh();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	UPackage* Z_Construct_UPackage__Script_UE_Assimp();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAssimpMesh::execSetupMesh)
	{
		P_GET_OBJECT(UAIMesh,Z_Param_InMeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupMesh(Z_Param_InMeshData);
		P_NATIVE_END;
	}
	void UAssimpMesh::StaticRegisterNativesUAssimpMesh()
	{
		UClass* Class = UAssimpMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupMesh", &UAssimpMesh::execSetupMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics
	{
		struct AssimpMesh_eventSetupMesh_Parms
		{
			UAIMesh* InMeshData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::NewProp_InMeshData = { "InMeshData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AssimpMesh_eventSetupMesh_Parms, InMeshData), Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::NewProp_InMeshData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssimpMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssimpMesh, nullptr, "SetupMesh", nullptr, nullptr, sizeof(AssimpMesh_eventSetupMesh_Parms), Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssimpMesh_SetupMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAssimpMesh_SetupMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAssimpMesh_NoRegister()
	{
		return UAssimpMesh::StaticClass();
	}
	struct Z_Construct_UClass_UAssimpMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssimpMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssimpMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssimpMesh_SetupMesh, "SetupMesh" }, // 4051912577
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssimpMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "AssimpMesh.h" },
		{ "ModuleRelativePath", "Public/AssimpMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssimpMesh_Statics::NewProp_MeshData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssimpMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssimpMesh_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssimpMesh, MeshData), Z_Construct_UClass_UAIMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAssimpMesh_Statics::NewProp_MeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpMesh_Statics::NewProp_MeshData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssimpMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssimpMesh_Statics::NewProp_MeshData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssimpMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssimpMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssimpMesh_Statics::ClassParams = {
		&UAssimpMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAssimpMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpMesh_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAssimpMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssimpMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssimpMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssimpMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssimpMesh, 15032366);
	template<> UE_ASSIMP_API UClass* StaticClass<UAssimpMesh>()
	{
		return UAssimpMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssimpMesh(Z_Construct_UClass_UAssimpMesh, &UAssimpMesh::StaticClass, TEXT("/Script/UE_Assimp"), TEXT("UAssimpMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssimpMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
