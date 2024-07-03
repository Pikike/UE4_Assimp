// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AICamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICamera() {}
// Cross Module References
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAICamera_NoRegister();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAICamera();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UE_Assimp();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UAICamera::execGetLookAtVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLookAtVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICamera::execGetUpVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetUpVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICamera::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICamera::execGetAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICamera::execGetClipPlaneFar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetClipPlaneFar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICamera::execGetClipPlaneNear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetClipPlaneNear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICamera::execGetCameraFOV)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCameraFOV();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICamera::execGetCameraName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCameraName();
		P_NATIVE_END;
	}
	void UAICamera::StaticRegisterNativesUAICamera()
	{
		UClass* Class = UAICamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAspectRatio", &UAICamera::execGetAspectRatio },
			{ "GetCameraFOV", &UAICamera::execGetCameraFOV },
			{ "GetCameraName", &UAICamera::execGetCameraName },
			{ "GetClipPlaneFar", &UAICamera::execGetClipPlaneFar },
			{ "GetClipPlaneNear", &UAICamera::execGetClipPlaneNear },
			{ "GetLookAtVector", &UAICamera::execGetLookAtVector },
			{ "GetPosition", &UAICamera::execGetPosition },
			{ "GetUpVector", &UAICamera::execGetUpVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics
	{
		struct AICamera_eventGetAspectRatio_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICamera_eventGetAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
		{ "Comment", "/** Screen aspect ratio.\n\x09*\n\x09* This is the ration between the width and the height of the\n\x09* screen. Typical values are 4/3, 1/2 or 1/1. This value is\n\x09* 0 if the aspect ratio is not defined in the source file.\n\x09* 0 is also the default value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AICamera.h" },
		{ "ToolTip", "Screen aspect ratio.\n\nThis is the ration between the width and the height of the\nscreen. Typical values are 4/3, 1/2 or 1/1. This value is\n0 if the aspect ratio is not defined in the source file.\n0 is also the default value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetAspectRatio", nullptr, nullptr, sizeof(AICamera_eventGetAspectRatio_Parms), Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICamera_GetAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICamera_GetAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics
	{
		struct AICamera_eventGetCameraFOV_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICamera_eventGetCameraFOV_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
		{ "Comment", "/** Half horizontal field of view angle, in radians.\n\x09*\n\x09*  The field of view angle is the angle between the center\n\x09*  line of the screen and the left or right border.\n\x09*  The default value is 1/4PI.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AICamera.h" },
		{ "ToolTip", "Half horizontal field of view angle, in radians.\n\nThe field of view angle is the angle between the center\nline of the screen and the left or right border.\nThe default value is 1/4PI." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetCameraFOV", nullptr, nullptr, sizeof(AICamera_eventGetCameraFOV_Parms), Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICamera_GetCameraFOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICamera_GetCameraFOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICamera_GetCameraName_Statics
	{
		struct AICamera_eventGetCameraName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAICamera_GetCameraName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICamera_eventGetCameraName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetCameraName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetCameraName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICamera_GetCameraName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
		{ "Comment", "/** The name of the camera.\n\x09*\n\x09*  There must be a node in the scenegraph with the same name.\n\x09*  This node specifies the position of the camera in the scene\n\x09*  hierarchy and can be animated.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AICamera.h" },
		{ "ToolTip", "The name of the camera.\n\nThere must be a node in the scenegraph with the same name.\nThis node specifies the position of the camera in the scene\nhierarchy and can be animated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetCameraName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetCameraName", nullptr, nullptr, sizeof(AICamera_eventGetCameraName_Parms), Z_Construct_UFunction_UAICamera_GetCameraName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetCameraName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICamera_GetCameraName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetCameraName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICamera_GetCameraName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICamera_GetCameraName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics
	{
		struct AICamera_eventGetClipPlaneFar_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICamera_eventGetClipPlaneFar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
		{ "Comment", "/** Distance of the far clipping plane from the camera.\n\x09*\n\x09* The far clipping plane must, of course, be further away than the\n\x09* near clipping plane. The default value is 1000.f. The ratio\n\x09* between the near and the far plane should not be too\n\x09* large (between 1000-10000 should be ok) to avoid floating-point\n\x09* inaccuracies which could lead to z-fighting.\n\x09* \n\x09 */" },
		{ "ModuleRelativePath", "Public/AICamera.h" },
		{ "ToolTip", "Distance of the far clipping plane from the camera.\n\nThe far clipping plane must, of course, be further away than the\nnear clipping plane. The default value is 1000.f. The ratio\nbetween the near and the far plane should not be too\nlarge (between 1000-10000 should be ok) to avoid floating-point\ninaccuracies which could lead to z-fighting." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetClipPlaneFar", nullptr, nullptr, sizeof(AICamera_eventGetClipPlaneFar_Parms), Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICamera_GetClipPlaneFar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICamera_GetClipPlaneFar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics
	{
		struct AICamera_eventGetClipPlaneNear_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICamera_eventGetClipPlaneNear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
		{ "Comment", "/** Distance of the near clipping plane from the camera.\n   *\n   * The value may not be 0.f (for arithmetic reasons to prevent\n   * a division through zero). The default value is 0.1f.\n   */" },
		{ "ModuleRelativePath", "Public/AICamera.h" },
		{ "ToolTip", "Distance of the near clipping plane from the camera.\n\nThe value may not be 0.f (for arithmetic reasons to prevent\na division through zero). The default value is 0.1f." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetClipPlaneNear", nullptr, nullptr, sizeof(AICamera_eventGetClipPlaneNear_Parms), Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICamera_GetClipPlaneNear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICamera_GetClipPlaneNear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics
	{
		struct AICamera_eventGetLookAtVector_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICamera_eventGetLookAtVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
		{ "Comment", "/** 'LookAt' - vector of the camera coordinate system relative to\n\x09*  the coordinate space defined by the corresponding node.\n\x09*\n\x09*  This is the viewing direction of the user.\n\x09*  The default value is 0|0|1. The vector\n\x09*  may be normalized, but it needn't.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AICamera.h" },
		{ "ToolTip", "'LookAt' - vector of the camera coordinate system relative to\nthe coordinate space defined by the corresponding node.\n\nThis is the viewing direction of the user.\nThe default value is 0|0|1. The vector\nmay be normalized, but it needn't." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetLookAtVector", nullptr, nullptr, sizeof(AICamera_eventGetLookAtVector_Parms), Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICamera_GetLookAtVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICamera_GetLookAtVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICamera_GetPosition_Statics
	{
		struct AICamera_eventGetPosition_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICamera_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICamera_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICamera_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
		{ "Comment", "/** Position of the camera relative to the coordinate space\n\x09*  defined by the corresponding node.\n\x09*\n\x09*  The default value is 0|0|0.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AICamera.h" },
		{ "ToolTip", "Position of the camera relative to the coordinate space\ndefined by the corresponding node.\n\nThe default value is 0|0|0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetPosition", nullptr, nullptr, sizeof(AICamera_eventGetPosition_Parms), Z_Construct_UFunction_UAICamera_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICamera_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICamera_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICamera_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICamera_GetUpVector_Statics
	{
		struct AICamera_eventGetUpVector_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICamera_GetUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICamera_eventGetUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICamera_GetUpVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICamera_GetUpVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICamera_GetUpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Camera" },
		{ "Comment", "/** 'Up' - vector of the camera coordinate system relative to\n\x09*  the coordinate space defined by the corresponding node.\n\x09*\n\x09*  The 'right' vector of the camera coordinate system is\n\x09*  the cross product of  the up and lookAt vectors.\n\x09*  The default value is 0|1|0. The vector\n\x09*  may be normalized, but it needn't.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AICamera.h" },
		{ "ToolTip", "'Up' - vector of the camera coordinate system relative to\nthe coordinate space defined by the corresponding node.\n\nThe 'right' vector of the camera coordinate system is\nthe cross product of  the up and lookAt vectors.\nThe default value is 0|1|0. The vector\nmay be normalized, but it needn't." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICamera_GetUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICamera, nullptr, "GetUpVector", nullptr, nullptr, sizeof(AICamera_eventGetUpVector_Parms), Z_Construct_UFunction_UAICamera_GetUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetUpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICamera_GetUpVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICamera_GetUpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICamera_GetUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICamera_GetUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICamera_NoRegister()
	{
		return UAICamera::StaticClass();
	}
	struct Z_Construct_UClass_UAICamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICamera_GetAspectRatio, "GetAspectRatio" }, // 2429104126
		{ &Z_Construct_UFunction_UAICamera_GetCameraFOV, "GetCameraFOV" }, // 2490002145
		{ &Z_Construct_UFunction_UAICamera_GetCameraName, "GetCameraName" }, // 2102417375
		{ &Z_Construct_UFunction_UAICamera_GetClipPlaneFar, "GetClipPlaneFar" }, // 3503697293
		{ &Z_Construct_UFunction_UAICamera_GetClipPlaneNear, "GetClipPlaneNear" }, // 1584725382
		{ &Z_Construct_UFunction_UAICamera_GetLookAtVector, "GetLookAtVector" }, // 2631696669
		{ &Z_Construct_UFunction_UAICamera_GetPosition, "GetPosition" }, // 2634048890
		{ &Z_Construct_UFunction_UAICamera_GetUpVector, "GetUpVector" }, // 2176539611
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICamera_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AICamera.h" },
		{ "ModuleRelativePath", "Public/AICamera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICamera_Statics::ClassParams = {
		&UAICamera::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAICamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICamera, 1927233812);
	template<> UE_ASSIMP_API UClass* StaticClass<UAICamera>()
	{
		return UAICamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICamera(Z_Construct_UClass_UAICamera, &UAICamera::StaticClass, TEXT("/Script/UE_Assimp"), TEXT("UAICamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
