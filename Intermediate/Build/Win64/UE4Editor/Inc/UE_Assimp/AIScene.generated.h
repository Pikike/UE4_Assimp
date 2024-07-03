// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UAILight;
class UAICamera;
class UAIMesh;
class UAINode;
class UAIMaterial;
struct FTransform;
class AActor;
class UMeshComponent;
#ifdef UE_ASSIMP_AIScene_generated_h
#error "AIScene.generated.h already included, missing '#pragma once' in AIScene.h"
#endif
#define UE_ASSIMP_AIScene_generated_h

#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_SPARSE_DATA
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSceneScale); \
	DECLARE_FUNCTION(execGetEmbeddedTexture); \
	DECLARE_FUNCTION(execGetUnitScaleFactor); \
	DECLARE_FUNCTION(execGetAllLights); \
	DECLARE_FUNCTION(execGetAllCameras); \
	DECLARE_FUNCTION(execGetMeshAtIndex); \
	DECLARE_FUNCTION(execGetRootNode); \
	DECLARE_FUNCTION(execGetAllMaterials); \
	DECLARE_FUNCTION(execGetAllMeshes); \
	DECLARE_FUNCTION(execSpawnAllMeshes);


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSceneScale); \
	DECLARE_FUNCTION(execGetEmbeddedTexture); \
	DECLARE_FUNCTION(execGetUnitScaleFactor); \
	DECLARE_FUNCTION(execGetAllLights); \
	DECLARE_FUNCTION(execGetAllCameras); \
	DECLARE_FUNCTION(execGetMeshAtIndex); \
	DECLARE_FUNCTION(execGetRootNode); \
	DECLARE_FUNCTION(execGetAllMaterials); \
	DECLARE_FUNCTION(execGetAllMeshes); \
	DECLARE_FUNCTION(execSpawnAllMeshes);


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIScene(); \
	friend struct Z_Construct_UClass_UAIScene_Statics; \
public: \
	DECLARE_CLASS(UAIScene, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAIScene)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAIScene(); \
	friend struct Z_Construct_UClass_UAIScene_Statics; \
public: \
	DECLARE_CLASS(UAIScene, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAIScene)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIScene) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIScene); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIScene(UAIScene&&); \
	NO_API UAIScene(const UAIScene&); \
public:


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIScene(UAIScene&&); \
	NO_API UAIScene(const UAIScene&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIScene); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIScene)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnedMeshes() { return STRUCT_OFFSET(UAIScene, OwnedMeshes); } \
	FORCEINLINE static uint32 __PPO__OwnedRootNode() { return STRUCT_OFFSET(UAIScene, OwnedRootNode); } \
	FORCEINLINE static uint32 __PPO__OwnedCameras() { return STRUCT_OFFSET(UAIScene, OwnedCameras); } \
	FORCEINLINE static uint32 __PPO__OwnedLights() { return STRUCT_OFFSET(UAIScene, OwnedLights); } \
	FORCEINLINE static uint32 __PPO__OwnedMaterials() { return STRUCT_OFFSET(UAIScene, OwnedMaterials); }


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_20_PROLOG
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_PRIVATE_PROPERTY_OFFSET \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_SPARSE_DATA \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_RPC_WRAPPERS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_INCLASS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_PRIVATE_PROPERTY_OFFSET \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_SPARSE_DATA \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_INCLASS_NO_PURE_DECLS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAIScene>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIScene_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
