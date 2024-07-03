// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AIBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBone() {}
// Cross Module References
	UE_ASSIMP_API UScriptStruct* Z_Construct_UScriptStruct_FAIVertexWeight();
	UPackage* Z_Construct_UPackage__Script_UE_Assimp();
	UE_ASSIMP_API UScriptStruct* Z_Construct_UScriptStruct_FAIBone();
// End Cross Module References
class UScriptStruct* FAIVertexWeight::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UE_ASSIMP_API uint32 Get_Z_Construct_UScriptStruct_FAIVertexWeight_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIVertexWeight, Z_Construct_UPackage__Script_UE_Assimp(), TEXT("AIVertexWeight"), sizeof(FAIVertexWeight), Get_Z_Construct_UScriptStruct_FAIVertexWeight_Hash());
	}
	return Singleton;
}
template<> UE_ASSIMP_API UScriptStruct* StaticStruct<FAIVertexWeight>()
{
	return FAIVertexWeight::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIVertexWeight(FAIVertexWeight::StaticStruct, TEXT("/Script/UE_Assimp"), TEXT("AIVertexWeight"), false, nullptr, nullptr);
static struct FScriptStruct_UE_Assimp_StaticRegisterNativesFAIVertexWeight
{
	FScriptStruct_UE_Assimp_StaticRegisterNativesFAIVertexWeight()
	{
		UScriptStruct::DeferCppStructOps<FAIVertexWeight>(FName(TEXT("AIVertexWeight")));
	}
} ScriptStruct_UE_Assimp_StaticRegisterNativesFAIVertexWeight;
	struct Z_Construct_UScriptStruct_FAIVertexWeight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VertexID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVertexWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIVertexWeight>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_VertexID_MetaData[] = {
		{ "Category", "AIVertexWeight" },
		{ "ModuleRelativePath", "Public/AIBone.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVertexWeight, VertexID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_VertexID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_VertexID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "AIVertexWeight" },
		{ "ModuleRelativePath", "Public/AIBone.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVertexWeight, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIVertexWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_VertexID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVertexWeight_Statics::NewProp_Weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIVertexWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
		nullptr,
		&NewStructOps,
		"AIVertexWeight",
		sizeof(FAIVertexWeight),
		alignof(FAIVertexWeight),
		Z_Construct_UScriptStruct_FAIVertexWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVertexWeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVertexWeight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVertexWeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIVertexWeight()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIVertexWeight_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UE_Assimp();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIVertexWeight"), sizeof(FAIVertexWeight), Get_Z_Construct_UScriptStruct_FAIVertexWeight_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIVertexWeight_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIVertexWeight_Hash() { return 2758552900U; }
class UScriptStruct* FAIBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UE_ASSIMP_API uint32 Get_Z_Construct_UScriptStruct_FAIBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIBone, Z_Construct_UPackage__Script_UE_Assimp(), TEXT("AIBone"), sizeof(FAIBone), Get_Z_Construct_UScriptStruct_FAIBone_Hash());
	}
	return Singleton;
}
template<> UE_ASSIMP_API UScriptStruct* StaticStruct<FAIBone>()
{
	return FAIBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIBone(FAIBone::StaticStruct, TEXT("/Script/UE_Assimp"), TEXT("AIBone"), false, nullptr, nullptr);
static struct FScriptStruct_UE_Assimp_StaticRegisterNativesFAIBone
{
	FScriptStruct_UE_Assimp_StaticRegisterNativesFAIBone()
	{
		UScriptStruct::DeferCppStructOps<FAIBone>(FName(TEXT("AIBone")));
	}
} ScriptStruct_UE_Assimp_StaticRegisterNativesFAIBone;
	struct Z_Construct_UScriptStruct_FAIBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIBone>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
		nullptr,
		&NewStructOps,
		"AIBone",
		sizeof(FAIBone),
		alignof(FAIBone),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UE_Assimp();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIBone"), sizeof(FAIBone), Get_Z_Construct_UScriptStruct_FAIBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIBone_Hash() { return 1040807011U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
