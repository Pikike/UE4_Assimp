// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AILight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAILight() {}
// Cross Module References
	UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpLightType();
	UPackage* Z_Construct_UPackage__Script_UE_Assimp();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAILight_NoRegister();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAILight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EAssimpLightType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAssimpLightType, Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAssimpLightType"));
		}
		return Singleton;
	}
	template<> UE_ASSIMP_API UEnum* StaticEnum<EAssimpLightType>()
	{
		return EAssimpLightType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAssimpLightType(EAssimpLightType_StaticEnum, TEXT("/Script/UE_Assimp"), TEXT("EAssimpLightType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_Assimp_EAssimpLightType_Hash() { return 1857408266U; }
	UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpLightType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_Assimp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAssimpLightType"), 0, Get_Z_Construct_UEnum_UE_Assimp_EAssimpLightType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "UNDEFINED", (int64)UNDEFINED },
				{ "Directional", (int64)Directional },
				{ "PointLight", (int64)PointLight },
				{ "Spot", (int64)Spot },
				{ "Ambient", (int64)Ambient },
				{ "Area", (int64)Area },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ambient.Comment", "//! The generic light level of the world, including the bounces\n//! of all other light sources.\n//! Typically, there's at most one ambient light in a scene.\n//! This light type doesn't have a valid position, direction, or\n//! other properties, just a color.\n" },
				{ "Ambient.Name", "Ambient" },
				{ "Ambient.ToolTip", "! The generic light level of the world, including the bounces\n! of all other light sources.\n! Typically, there's at most one ambient light in a scene.\n! This light type doesn't have a valid position, direction, or\n! other properties, just a color." },
				{ "Area.Comment", "//! An area light is a rectangle with predefined size that uniformly\n//! emits light from one of its sides. The position is center of the\n//! rectangle and direction is its normal vector.\n" },
				{ "Area.Name", "Area" },
				{ "Area.ToolTip", "! An area light is a rectangle with predefined size that uniformly\n! emits light from one of its sides. The position is center of the\n! rectangle and direction is its normal vector." },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "Directional.Comment", "/**\n * \n *///! A directional light source has a well-defined direction\n//! but is infinitely far away. That's quite a good\n//! approximation for sun light.\n" },
				{ "Directional.Name", "Directional" },
				{ "Directional.ToolTip", "//! A directional light source has a well-defined direction\n//! but is infinitely far away. That's quite a good\n//! approximation for sun light." },
				{ "ModuleRelativePath", "Public/AILight.h" },
				{ "PointLight.Comment", "//! A point light source has a well-defined position\n//! in space but no direction - it emits light in all\n//! directions. A normal bulb is a point light.\n" },
				{ "PointLight.Name", "PointLight" },
				{ "PointLight.ToolTip", "! A point light source has a well-defined position\n! in space but no direction - it emits light in all\n! directions. A normal bulb is a point light." },
				{ "Spot.Comment", "//! A spot light source emits light in a specific\n//! angle. It has a position and a direction it is pointing to.\n//! A good example for a spot light is a light spot in\n//! sport arenas.\n" },
				{ "Spot.Name", "Spot" },
				{ "Spot.ToolTip", "! A spot light source emits light in a specific\n! angle. It has a position and a direction it is pointing to.\n! A good example for a spot light is a light spot in\n! sport arenas." },
				{ "UNDEFINED.Comment", "/**\n * \n */" },
				{ "UNDEFINED.Name", "UNDEFINED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
				nullptr,
				"EAssimpLightType",
				"EAssimpLightType",
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
	DEFINE_FUNCTION(UAILight::execGetAreaLightSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetAreaLightSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetConeOuterAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetConeOuterAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetConeInnerAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetConeInnerAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetColorAmbient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorAmbient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetColorSpecular)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorSpecular();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetColorDiffuse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorDiffuse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetAttenuationQuadratic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttenuationQuadratic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetAttenuationLinear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttenuationLinear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetAttenuationConstant)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttenuationConstant();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetUpDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetUpDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetLightDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLightDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetLightPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLightPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetLightType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EAssimpLightType>*)Z_Param__Result=P_THIS->GetLightType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAILight::execGetLightName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLightName();
		P_NATIVE_END;
	}
	void UAILight::StaticRegisterNativesUAILight()
	{
		UClass* Class = UAILight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAreaLightSize", &UAILight::execGetAreaLightSize },
			{ "GetAttenuationConstant", &UAILight::execGetAttenuationConstant },
			{ "GetAttenuationLinear", &UAILight::execGetAttenuationLinear },
			{ "GetAttenuationQuadratic", &UAILight::execGetAttenuationQuadratic },
			{ "GetColorAmbient", &UAILight::execGetColorAmbient },
			{ "GetColorDiffuse", &UAILight::execGetColorDiffuse },
			{ "GetColorSpecular", &UAILight::execGetColorSpecular },
			{ "GetConeInnerAngle", &UAILight::execGetConeInnerAngle },
			{ "GetConeOuterAngle", &UAILight::execGetConeOuterAngle },
			{ "GetLightDirection", &UAILight::execGetLightDirection },
			{ "GetLightName", &UAILight::execGetLightName },
			{ "GetLightPosition", &UAILight::execGetLightPosition },
			{ "GetLightType", &UAILight::execGetLightType },
			{ "GetUpDirection", &UAILight::execGetUpDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics
	{
		struct AILight_eventGetAreaLightSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetAreaLightSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Size of area light source.(if its one) */" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Size of area light source.(if its one)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetAreaLightSize", nullptr, nullptr, sizeof(AILight_eventGetAreaLightSize_Parms), Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetAreaLightSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetAreaLightSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics
	{
		struct AILight_eventGetAttenuationConstant_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetAttenuationConstant_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Constant light attenuation factor.\n\x09*\n\x09*  The intensity of the light source at a given distance 'd' from\n\x09*  the light's position is\n\x09*  @code\n\x09*  Atten = 1/( att0 + att1 * d + att2 * d*d)\n\x09*  @endcode\n\x09*  This member corresponds to the att0 variable in the equation.\n\x09*  Naturally undefined for directional lights.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Constant light attenuation factor.\n\nThe intensity of the light source at a given distance 'd' from\nthe light's position is\n@code\nAtten = 1/( att0 + att1 * d + att2 * d*d)\n@endcode\nThis member corresponds to the att0 variable in the equation.\nNaturally undefined for directional lights." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetAttenuationConstant", nullptr, nullptr, sizeof(AILight_eventGetAttenuationConstant_Parms), Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetAttenuationConstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetAttenuationConstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics
	{
		struct AILight_eventGetAttenuationLinear_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetAttenuationLinear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Linear light attenuation factor.\n\x09*\n\x09*  The intensity of the light source at a given distance 'd' from\n\x09*  the light's position is\n\x09*  @code\n\x09*  Atten = 1/( att0 + att1 * d + att2 * d*d)\n\x09*  @endcode\n\x09*  This member corresponds to the att1 variable in the equation.\n\x09*  Naturally undefined for directional lights.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Linear light attenuation factor.\n\nThe intensity of the light source at a given distance 'd' from\nthe light's position is\n@code\nAtten = 1/( att0 + att1 * d + att2 * d*d)\n@endcode\nThis member corresponds to the att1 variable in the equation.\nNaturally undefined for directional lights." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetAttenuationLinear", nullptr, nullptr, sizeof(AILight_eventGetAttenuationLinear_Parms), Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetAttenuationLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetAttenuationLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics
	{
		struct AILight_eventGetAttenuationQuadratic_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetAttenuationQuadratic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Quadratic light attenuation factor.\n\x09*\n\x09*  The intensity of the light source at a given distance 'd' from\n\x09*  the light's position is\n\x09*  @code\n\x09*  Atten = 1/( att0 + att1 * d + att2 * d*d)\n\x09*  @endcode\n\x09*  This member corresponds to the att2 variable in the equation.\n\x09*  Naturally undefined for directional lights.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Quadratic light attenuation factor.\n\nThe intensity of the light source at a given distance 'd' from\nthe light's position is\n@code\nAtten = 1/( att0 + att1 * d + att2 * d*d)\n@endcode\nThis member corresponds to the att2 variable in the equation.\nNaturally undefined for directional lights." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetAttenuationQuadratic", nullptr, nullptr, sizeof(AILight_eventGetAttenuationQuadratic_Parms), Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetAttenuationQuadratic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetAttenuationQuadratic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetColorAmbient_Statics
	{
		struct AILight_eventGetColorAmbient_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetColorAmbient_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Ambient color of the light source\n\x09*\n\x09*  The ambient light color is multiplied with the ambient\n\x09*  material color to obtain the final color that contributes\n\x09*  to the ambient shading term. Most renderers will ignore\n\x09*  this value it, is just a remaining of the fixed-function pipeline\n\x09*  that is still supported by quite many file formats.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Ambient color of the light source\n\nThe ambient light color is multiplied with the ambient\nmaterial color to obtain the final color that contributes\nto the ambient shading term. Most renderers will ignore\nthis value it, is just a remaining of the fixed-function pipeline\nthat is still supported by quite many file formats." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetColorAmbient", nullptr, nullptr, sizeof(AILight_eventGetColorAmbient_Parms), Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetColorAmbient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetColorAmbient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics
	{
		struct AILight_eventGetColorDiffuse_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetColorDiffuse_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Diffuse color of the light source\n\x09*\n\x09*  The diffuse light color is multiplied with the diffuse\n\x09*  material color to obtain the final color that contributes\n\x09*  to the diffuse shading term.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Diffuse color of the light source\n\nThe diffuse light color is multiplied with the diffuse\nmaterial color to obtain the final color that contributes\nto the diffuse shading term." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetColorDiffuse", nullptr, nullptr, sizeof(AILight_eventGetColorDiffuse_Parms), Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetColorDiffuse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetColorDiffuse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetColorSpecular_Statics
	{
		struct AILight_eventGetColorSpecular_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetColorSpecular_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Specular color of the light source\n\x09*\n\x09*  The specular light color is multiplied with the specular\n\x09*  material color to obtain the final color that contributes\n\x09*  to the specular shading term.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Specular color of the light source\n\nThe specular light color is multiplied with the specular\nmaterial color to obtain the final color that contributes\nto the specular shading term." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetColorSpecular", nullptr, nullptr, sizeof(AILight_eventGetColorSpecular_Parms), Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetColorSpecular()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetColorSpecular_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics
	{
		struct AILight_eventGetConeInnerAngle_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetConeInnerAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Inner angle of a spot light's light cone.\n\x09*\n\x09*  The spot light has maximum influence on objects inside this\n\x09*  angle. The angle is given in radians. It is 2PI for point\n\x09*  lights and undefined for directional lights.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Inner angle of a spot light's light cone.\n\nThe spot light has maximum influence on objects inside this\nangle. The angle is given in radians. It is 2PI for point\nlights and undefined for directional lights." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetConeInnerAngle", nullptr, nullptr, sizeof(AILight_eventGetConeInnerAngle_Parms), Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetConeInnerAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetConeInnerAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics
	{
		struct AILight_eventGetConeOuterAngle_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetConeOuterAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Outer angle of a spot light's light cone.\n\x09*\n\x09*  The spot light does not affect objects outside this angle.\n\x09*  The angle is given in radians. It is 2PI for point lights and\n\x09*  undefined for directional lights. The outer angle must be\n\x09*  greater than or equal to the inner angle.\n\x09*  It is assumed that the application uses a smooth\n\x09*  interpolation between the inner and the outer cone of the\n\x09*  spot light.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Outer angle of a spot light's light cone.\n\nThe spot light does not affect objects outside this angle.\nThe angle is given in radians. It is 2PI for point lights and\nundefined for directional lights. The outer angle must be\ngreater than or equal to the inner angle.\nIt is assumed that the application uses a smooth\ninterpolation between the inner and the outer cone of the\nspot light." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetConeOuterAngle", nullptr, nullptr, sizeof(AILight_eventGetConeOuterAngle_Parms), Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetConeOuterAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetConeOuterAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetLightDirection_Statics
	{
		struct AILight_eventGetLightDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetLightDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetLightDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetLightDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetLightDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetLightDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Direction of the light source in space. Relative to the\n\x09*  transformation of the node corresponding to the light.\n\x09*\n\x09*  The direction is undefined for point lights. The vector\n\x09*  may be normalized, but it needn't.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Direction of the light source in space. Relative to the\ntransformation of the node corresponding to the light.\n\nThe direction is undefined for point lights. The vector\nmay be normalized, but it needn't." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetLightDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetLightDirection", nullptr, nullptr, sizeof(AILight_eventGetLightDirection_Parms), Z_Construct_UFunction_UAILight_GetLightDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetLightDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetLightDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetLightDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetLightName_Statics
	{
		struct AILight_eventGetLightName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAILight_GetLightName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetLightName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetLightName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetLightName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetLightName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** The name of the light source.\n\x09*\n\x09*  There must be a node in the scenegraph with the same name.\n\x09*  This node specifies the position of the light in the scene\n\x09*  hierarchy and can be animated.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "The name of the light source.\n\nThere must be a node in the scenegraph with the same name.\nThis node specifies the position of the light in the scene\nhierarchy and can be animated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetLightName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetLightName", nullptr, nullptr, sizeof(AILight_eventGetLightName_Parms), Z_Construct_UFunction_UAILight_GetLightName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetLightName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetLightName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetLightName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetLightPosition_Statics
	{
		struct AILight_eventGetLightPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetLightPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetLightPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetLightPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetLightPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetLightPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Position of the light source in space. Relative to the\n\x09*  transformation of the node corresponding to the light.\n\x09*\n\x09*  The position is undefined for directional lights.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Position of the light source in space. Relative to the\ntransformation of the node corresponding to the light.\n\nThe position is undefined for directional lights." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetLightPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetLightPosition", nullptr, nullptr, sizeof(AILight_eventGetLightPosition_Parms), Z_Construct_UFunction_UAILight_GetLightPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetLightPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetLightPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetLightPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetLightType_Statics
	{
		struct AILight_eventGetLightType_Parms
		{
			TEnumAsByte<EAssimpLightType> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAILight_GetLightType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetLightType_Parms, ReturnValue), Z_Construct_UEnum_UE_Assimp_EAssimpLightType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetLightType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetLightType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetLightType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** The type of the light source.\n\x09*\n\x09* aiLightSource_UNDEFINED is not a valid value for this member.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "The type of the light source.\n\naiLightSource_UNDEFINED is not a valid value for this member." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetLightType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetLightType", nullptr, nullptr, sizeof(AILight_eventGetLightType_Parms), Z_Construct_UFunction_UAILight_GetLightType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetLightType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetLightType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetLightType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetLightType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAILight_GetUpDirection_Statics
	{
		struct AILight_eventGetUpDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAILight_GetUpDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AILight_eventGetUpDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAILight_GetUpDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAILight_GetUpDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAILight_GetUpDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Light" },
		{ "Comment", "/** Up direction of the light source in space. Relative to the\n\x09*  transformation of the node corresponding to the light.\n\x09*\n\x09*  The direction is undefined for point lights. The vector\n\x09*  may be normalized, but it needn't.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AILight.h" },
		{ "ToolTip", "Up direction of the light source in space. Relative to the\ntransformation of the node corresponding to the light.\n\nThe direction is undefined for point lights. The vector\nmay be normalized, but it needn't." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAILight_GetUpDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAILight, nullptr, "GetUpDirection", nullptr, nullptr, sizeof(AILight_eventGetUpDirection_Parms), Z_Construct_UFunction_UAILight_GetUpDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetUpDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAILight_GetUpDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAILight_GetUpDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAILight_GetUpDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAILight_GetUpDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAILight_NoRegister()
	{
		return UAILight::StaticClass();
	}
	struct Z_Construct_UClass_UAILight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAILight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAILight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAILight_GetAreaLightSize, "GetAreaLightSize" }, // 2784600086
		{ &Z_Construct_UFunction_UAILight_GetAttenuationConstant, "GetAttenuationConstant" }, // 2802482530
		{ &Z_Construct_UFunction_UAILight_GetAttenuationLinear, "GetAttenuationLinear" }, // 752443864
		{ &Z_Construct_UFunction_UAILight_GetAttenuationQuadratic, "GetAttenuationQuadratic" }, // 3587389601
		{ &Z_Construct_UFunction_UAILight_GetColorAmbient, "GetColorAmbient" }, // 2793240997
		{ &Z_Construct_UFunction_UAILight_GetColorDiffuse, "GetColorDiffuse" }, // 907321073
		{ &Z_Construct_UFunction_UAILight_GetColorSpecular, "GetColorSpecular" }, // 878104164
		{ &Z_Construct_UFunction_UAILight_GetConeInnerAngle, "GetConeInnerAngle" }, // 1146535184
		{ &Z_Construct_UFunction_UAILight_GetConeOuterAngle, "GetConeOuterAngle" }, // 3648478274
		{ &Z_Construct_UFunction_UAILight_GetLightDirection, "GetLightDirection" }, // 3325884446
		{ &Z_Construct_UFunction_UAILight_GetLightName, "GetLightName" }, // 1705438098
		{ &Z_Construct_UFunction_UAILight_GetLightPosition, "GetLightPosition" }, // 4281076696
		{ &Z_Construct_UFunction_UAILight_GetLightType, "GetLightType" }, // 213642355
		{ &Z_Construct_UFunction_UAILight_GetUpDirection, "GetUpDirection" }, // 98468493
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAILight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AILight.h" },
		{ "ModuleRelativePath", "Public/AILight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAILight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAILight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAILight_Statics::ClassParams = {
		&UAILight::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAILight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAILight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAILight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAILight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAILight, 4059739936);
	template<> UE_ASSIMP_API UClass* StaticClass<UAILight>()
	{
		return UAILight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAILight(Z_Construct_UClass_UAILight, &UAILight::StaticClass, TEXT("/Script/UE_Assimp"), TEXT("UAILight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAILight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
