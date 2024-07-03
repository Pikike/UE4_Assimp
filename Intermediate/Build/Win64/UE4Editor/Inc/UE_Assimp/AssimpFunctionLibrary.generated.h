// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIScene;
class AActor;
struct FAIBone;
struct FAIVertexWeight;
struct FTransform;
class UTexture2D;
class UObject;
#ifdef UE_ASSIMP_AssimpFunctionLibrary_generated_h
#error "AssimpFunctionLibrary.generated.h already included, missing '#pragma once' in AssimpFunctionLibrary.h"
#endif
#define UE_ASSIMP_AssimpFunctionLibrary_generated_h

#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_22_DELEGATE \
struct _Script_UE_Assimp_eventOnImportSceneComplete_Parms \
{ \
	TArray<UAIScene*> ImportedScenes; \
}; \
static inline void FOnImportSceneComplete_DelegateWrapper(const FScriptDelegate& OnImportSceneComplete, TArray<UAIScene*> const& ImportedScenes) \
{ \
	_Script_UE_Assimp_eventOnImportSceneComplete_Parms Parms; \
	Parms.ImportedScenes=ImportedScenes; \
	OnImportSceneComplete.ProcessDelegate<UObject>(&Parms); \
}


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_20_DELEGATE \
struct _Script_UE_Assimp_eventOnProgressUpdated_Parms \
{ \
	float NormalPercentage; \
	UAIScene* ImportedScene; \
}; \
static inline void FOnProgressUpdated_DelegateWrapper(const FScriptDelegate& OnProgressUpdated, float NormalPercentage, UAIScene* ImportedScene) \
{ \
	_Script_UE_Assimp_eventOnProgressUpdated_Parms Parms; \
	Parms.NormalPercentage=NormalPercentage; \
	Parms.ImportedScene=ImportedScene; \
	OnProgressUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_SPARSE_DATA
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetActorNameDebug); \
	DECLARE_FUNCTION(execProcessPreset_TargetRealtime_MaxQuality); \
	DECLARE_FUNCTION(execProcessPreset_TargetRealtime_Quality); \
	DECLARE_FUNCTION(execProcessPreset_TargetRealtime_Fast); \
	DECLARE_FUNCTION(execProcess_ConvertToLeftHanded); \
	DECLARE_FUNCTION(execPostProcess_GenBoundingBoxes); \
	DECLARE_FUNCTION(execPostProcess_DropNormals); \
	DECLARE_FUNCTION(execPostProcess_ForceGenNormals); \
	DECLARE_FUNCTION(execPostProcess_EmbedTextures); \
	DECLARE_FUNCTION(execPostProcess_GlobalScale); \
	DECLARE_FUNCTION(execPostProcess_Debone); \
	DECLARE_FUNCTION(execPostProcess_SplitByBoneCount); \
	DECLARE_FUNCTION(execPostProcess_FlipWindingOrder); \
	DECLARE_FUNCTION(execPostProcess_FlipUVs); \
	DECLARE_FUNCTION(execPostProcess_OptimizeGraph); \
	DECLARE_FUNCTION(execPostProcess_OptimizeMeshes); \
	DECLARE_FUNCTION(execPostProcess_FindInstances); \
	DECLARE_FUNCTION(execPostProcess_TransformUVCoords); \
	DECLARE_FUNCTION(execPostProcess_GenUVCoords); \
	DECLARE_FUNCTION(execPostProcess_FindInvalidData); \
	DECLARE_FUNCTION(execPostProcess_FindDegenerates); \
	DECLARE_FUNCTION(execPostProcess_SortByPType); \
	DECLARE_FUNCTION(execPostProcess_PopulateArmatureData); \
	DECLARE_FUNCTION(execPostProcess_FixInfacingNormals); \
	DECLARE_FUNCTION(execPostProcess_RemoveRedundantMaterials); \
	DECLARE_FUNCTION(execPostProcess_ImproveCacheLocality); \
	DECLARE_FUNCTION(execPostProcess_ValidateDataStructure); \
	DECLARE_FUNCTION(execPostProcess_LimitBoneWeights); \
	DECLARE_FUNCTION(execPostProcess_PreTransformVertices); \
	DECLARE_FUNCTION(execPostProcess_GenSmoothNormals); \
	DECLARE_FUNCTION(execAiPostProcess_GenNormals); \
	DECLARE_FUNCTION(execPostProcess_RemoveComponent); \
	DECLARE_FUNCTION(execPostProcess_Triangulate); \
	DECLARE_FUNCTION(execPostProcess_MakeLeftHanded); \
	DECLARE_FUNCTION(execPostProcess_JoinIdenticalVertices); \
	DECLARE_FUNCTION(execPostProcess_CalcTangentSpace); \
	DECLARE_FUNCTION(execGetBoneWeights); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execGetNumOfWeights); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execApplyNormalMapSettingsToTexture); \
	DECLARE_FUNCTION(execImportScenesAsync); \
	DECLARE_FUNCTION(execImportScene); \
	DECLARE_FUNCTION(execImportScenes); \
	DECLARE_FUNCTION(execOpenFileDialogue);


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActorNameDebug); \
	DECLARE_FUNCTION(execProcessPreset_TargetRealtime_MaxQuality); \
	DECLARE_FUNCTION(execProcessPreset_TargetRealtime_Quality); \
	DECLARE_FUNCTION(execProcessPreset_TargetRealtime_Fast); \
	DECLARE_FUNCTION(execProcess_ConvertToLeftHanded); \
	DECLARE_FUNCTION(execPostProcess_GenBoundingBoxes); \
	DECLARE_FUNCTION(execPostProcess_DropNormals); \
	DECLARE_FUNCTION(execPostProcess_ForceGenNormals); \
	DECLARE_FUNCTION(execPostProcess_EmbedTextures); \
	DECLARE_FUNCTION(execPostProcess_GlobalScale); \
	DECLARE_FUNCTION(execPostProcess_Debone); \
	DECLARE_FUNCTION(execPostProcess_SplitByBoneCount); \
	DECLARE_FUNCTION(execPostProcess_FlipWindingOrder); \
	DECLARE_FUNCTION(execPostProcess_FlipUVs); \
	DECLARE_FUNCTION(execPostProcess_OptimizeGraph); \
	DECLARE_FUNCTION(execPostProcess_OptimizeMeshes); \
	DECLARE_FUNCTION(execPostProcess_FindInstances); \
	DECLARE_FUNCTION(execPostProcess_TransformUVCoords); \
	DECLARE_FUNCTION(execPostProcess_GenUVCoords); \
	DECLARE_FUNCTION(execPostProcess_FindInvalidData); \
	DECLARE_FUNCTION(execPostProcess_FindDegenerates); \
	DECLARE_FUNCTION(execPostProcess_SortByPType); \
	DECLARE_FUNCTION(execPostProcess_PopulateArmatureData); \
	DECLARE_FUNCTION(execPostProcess_FixInfacingNormals); \
	DECLARE_FUNCTION(execPostProcess_RemoveRedundantMaterials); \
	DECLARE_FUNCTION(execPostProcess_ImproveCacheLocality); \
	DECLARE_FUNCTION(execPostProcess_ValidateDataStructure); \
	DECLARE_FUNCTION(execPostProcess_LimitBoneWeights); \
	DECLARE_FUNCTION(execPostProcess_PreTransformVertices); \
	DECLARE_FUNCTION(execPostProcess_GenSmoothNormals); \
	DECLARE_FUNCTION(execAiPostProcess_GenNormals); \
	DECLARE_FUNCTION(execPostProcess_RemoveComponent); \
	DECLARE_FUNCTION(execPostProcess_Triangulate); \
	DECLARE_FUNCTION(execPostProcess_MakeLeftHanded); \
	DECLARE_FUNCTION(execPostProcess_JoinIdenticalVertices); \
	DECLARE_FUNCTION(execPostProcess_CalcTangentSpace); \
	DECLARE_FUNCTION(execGetBoneWeights); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execGetNumOfWeights); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execApplyNormalMapSettingsToTexture); \
	DECLARE_FUNCTION(execImportScenesAsync); \
	DECLARE_FUNCTION(execImportScene); \
	DECLARE_FUNCTION(execImportScenes); \
	DECLARE_FUNCTION(execOpenFileDialogue);


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssimpFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAssimpFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAssimpFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAssimpFunctionLibrary)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAssimpFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAssimpFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAssimpFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAssimpFunctionLibrary)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssimpFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssimpFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssimpFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssimpFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssimpFunctionLibrary(UAssimpFunctionLibrary&&); \
	NO_API UAssimpFunctionLibrary(const UAssimpFunctionLibrary&); \
public:


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssimpFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssimpFunctionLibrary(UAssimpFunctionLibrary&&); \
	NO_API UAssimpFunctionLibrary(const UAssimpFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssimpFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssimpFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssimpFunctionLibrary)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_25_PROLOG
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_SPARSE_DATA \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_RPC_WRAPPERS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_INCLASS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_SPARSE_DATA \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_INCLASS_NO_PURE_DECLS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAssimpFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
