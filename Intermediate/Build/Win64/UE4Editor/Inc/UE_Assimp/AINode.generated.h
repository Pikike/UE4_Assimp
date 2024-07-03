// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAIScene;
class UAIMesh;
struct FTransform;
class UAINode;
#ifdef UE_ASSIMP_AINode_generated_h
#error "AINode.generated.h already included, missing '#pragma once' in AINode.h"
#endif
#define UE_ASSIMP_AINode_generated_h

#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_SPARSE_DATA
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScene); \
	DECLARE_FUNCTION(execGetNodeMeshes); \
	DECLARE_FUNCTION(execGetRootTransform); \
	DECLARE_FUNCTION(execGetNodeTransform); \
	DECLARE_FUNCTION(execGetChildNodes); \
	DECLARE_FUNCTION(execGetParentNode); \
	DECLARE_FUNCTION(execGetNodeName);


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScene); \
	DECLARE_FUNCTION(execGetNodeMeshes); \
	DECLARE_FUNCTION(execGetRootTransform); \
	DECLARE_FUNCTION(execGetNodeTransform); \
	DECLARE_FUNCTION(execGetChildNodes); \
	DECLARE_FUNCTION(execGetParentNode); \
	DECLARE_FUNCTION(execGetNodeName);


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAINode(); \
	friend struct Z_Construct_UClass_UAINode_Statics; \
public: \
	DECLARE_CLASS(UAINode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAINode)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAINode(); \
	friend struct Z_Construct_UClass_UAINode_Statics; \
public: \
	DECLARE_CLASS(UAINode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAINode)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAINode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAINode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAINode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAINode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAINode(UAINode&&); \
	NO_API UAINode(const UAINode&); \
public:


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAINode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAINode(UAINode&&); \
	NO_API UAINode(const UAINode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAINode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAINode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAINode)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_PRIVATE_PROPERTY_OFFSET
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_21_PROLOG
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_PRIVATE_PROPERTY_OFFSET \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_SPARSE_DATA \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_RPC_WRAPPERS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_INCLASS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_PRIVATE_PROPERTY_OFFSET \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_SPARSE_DATA \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_INCLASS_NO_PURE_DECLS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAINode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AINode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
