// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIMesh;
#ifdef UE_ASSIMP_AssimpMesh_generated_h
#error "AssimpMesh.generated.h already included, missing '#pragma once' in AssimpMesh.h"
#endif
#define UE_ASSIMP_AssimpMesh_generated_h

#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_SPARSE_DATA
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupMesh);


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupMesh);


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssimpMesh(); \
	friend struct Z_Construct_UClass_UAssimpMesh_Statics; \
public: \
	DECLARE_CLASS(UAssimpMesh, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAssimpMesh)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAssimpMesh(); \
	friend struct Z_Construct_UClass_UAssimpMesh_Statics; \
public: \
	DECLARE_CLASS(UAssimpMesh, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAssimpMesh)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssimpMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssimpMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssimpMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssimpMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssimpMesh(UAssimpMesh&&); \
	NO_API UAssimpMesh(const UAssimpMesh&); \
public:


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssimpMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssimpMesh(UAssimpMesh&&); \
	NO_API UAssimpMesh(const UAssimpMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssimpMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssimpMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssimpMesh)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshData() { return STRUCT_OFFSET(UAssimpMesh, MeshData); }


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_15_PROLOG
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_PRIVATE_PROPERTY_OFFSET \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_SPARSE_DATA \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_RPC_WRAPPERS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_INCLASS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_PRIVATE_PROPERTY_OFFSET \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_SPARSE_DATA \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_INCLASS_NO_PURE_DECLS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAssimpMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AssimpMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
