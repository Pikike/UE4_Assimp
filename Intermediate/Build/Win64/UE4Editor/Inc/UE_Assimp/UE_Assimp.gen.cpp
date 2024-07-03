// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/UE_Assimp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_Assimp() {}
// Cross Module References
	UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpReturn();
	UPackage* Z_Construct_UPackage__Script_UE_Assimp();
	UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_ETaskResult();
// End Cross Module References
	static UEnum* EAssimpReturn_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAssimpReturn, Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAssimpReturn"));
		}
		return Singleton;
	}
	template<> UE_ASSIMP_API UEnum* StaticEnum<EAssimpReturn>()
	{
		return EAssimpReturn_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAssimpReturn(EAssimpReturn_StaticEnum, TEXT("/Script/UE_Assimp"), TEXT("EAssimpReturn"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_Assimp_EAssimpReturn_Hash() { return 3504211772U; }
	UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpReturn()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_Assimp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAssimpReturn"), 0, Get_Z_Construct_UEnum_UE_Assimp_EAssimpReturn_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ReturnSuccess", (int64)ReturnSuccess },
				{ "ReturnFail", (int64)ReturnFail },
				{ "ReturnOutOfMemory", (int64)ReturnOutOfMemory },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Standard return type for some library functions.\n* Rarely used, and if, mostly in the C API.\n*/" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/UE_Assimp.h" },
				{ "ReturnFail.Comment", "/** Indicates that a function failed */" },
				{ "ReturnFail.Name", "ReturnFail" },
				{ "ReturnFail.ToolTip", "Indicates that a function failed" },
				{ "ReturnOutOfMemory.Comment", "/** Indicates that not enough memory was available\n    * to perform the requested operation\n    */" },
				{ "ReturnOutOfMemory.Name", "ReturnOutOfMemory" },
				{ "ReturnOutOfMemory.ToolTip", "Indicates that not enough memory was available\nto perform the requested operation" },
				{ "ReturnSuccess.Comment", "/** Indicates that a function was successful */" },
				{ "ReturnSuccess.Name", "ReturnSuccess" },
				{ "ReturnSuccess.ToolTip", "Indicates that a function was successful" },
				{ "ToolTip", "Standard return type for some library functions.\nRarely used, and if, mostly in the C API." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
				nullptr,
				"EAssimpReturn",
				"EAssimpReturn",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETaskResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_ETaskResult, Z_Construct_UPackage__Script_UE_Assimp(), TEXT("ETaskResult"));
		}
		return Singleton;
	}
	template<> UE_ASSIMP_API UEnum* StaticEnum<ETaskResult>()
	{
		return ETaskResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskResult(ETaskResult_StaticEnum, TEXT("/Script/UE_Assimp"), TEXT("ETaskResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_Assimp_ETaskResult_Hash() { return 2455369747U; }
	UEnum* Z_Construct_UEnum_UE_Assimp_ETaskResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_Assimp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskResult"), 0, Get_Z_Construct_UEnum_UE_Assimp_ETaskResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Success", (int64)Success },
				{ "Fail", (int64)Fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Fail.Name", "Fail" },
				{ "ModuleRelativePath", "Public/UE_Assimp.h" },
				{ "Success.Name", "Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
				nullptr,
				"ETaskResult",
				"ETaskResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
