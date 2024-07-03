// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FLinearColor;
#ifdef UE_ASSIMP_AIMaterial_generated_h
#error "AIMaterial.generated.h already included, missing '#pragma once' in AIMaterial.h"
#endif
#define UE_ASSIMP_AIMaterial_generated_h

#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_SPARSE_DATA
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaterialTexture); \
	DECLARE_FUNCTION(execGetMaterialName); \
	DECLARE_FUNCTION(execGetMaterialOpacity); \
	DECLARE_FUNCTION(execGetMaterialBaseColor);


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaterialTexture); \
	DECLARE_FUNCTION(execGetMaterialName); \
	DECLARE_FUNCTION(execGetMaterialOpacity); \
	DECLARE_FUNCTION(execGetMaterialBaseColor);


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIMaterial(); \
	friend struct Z_Construct_UClass_UAIMaterial_Statics; \
public: \
	DECLARE_CLASS(UAIMaterial, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAIMaterial)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_INCLASS \
private: \
	static void StaticRegisterNativesUAIMaterial(); \
	friend struct Z_Construct_UClass_UAIMaterial_Statics; \
public: \
	DECLARE_CLASS(UAIMaterial, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UE_Assimp"), NO_API) \
	DECLARE_SERIALIZER(UAIMaterial)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIMaterial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMaterial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMaterial(UAIMaterial&&); \
	NO_API UAIMaterial(const UAIMaterial&); \
public:


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMaterial(UAIMaterial&&); \
	NO_API UAIMaterial(const UAIMaterial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMaterial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIMaterial)


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_PRIVATE_PROPERTY_OFFSET
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_395_PROLOG
#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_PRIVATE_PROPERTY_OFFSET \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_SPARSE_DATA \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_RPC_WRAPPERS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_INCLASS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_PRIVATE_PROPERTY_OFFSET \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_SPARSE_DATA \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_RPC_WRAPPERS_NO_PURE_DECLS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_INCLASS_NO_PURE_DECLS \
	AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h_398_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE_ASSIMP_API UClass* StaticClass<class UAIMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AssimpProject_Plugins_UE4_Assimp_Source_UE_Assimp_Public_AIMaterial_h


#define FOREACH_ENUM_EAISHADINGMODE(op) \
	op(Null) \
	op(AiShadingMode_Flat) \
	op(AiShadingMode_Gouraud) \
	op(AiShadingMode_Phong) \
	op(AiShadingMode_Blinn) \
	op(AiShadingMode_Toon) \
	op(AiShadingMode_OrenNayar) \
	op(AiShadingMode_Minnaert) \
	op(AiShadingMode_CookTorrance) \
	op(AiShadingMode_NoShading) \
	op(AiShadingMode_Unlit) \
	op(AiShadingMode_Fresnel) \
	op(AiShadingMode_PBR_BRDF) 
#define FOREACH_ENUM_EAITEXTURETYPE(op) \
	op(AiTextureType_NONE) \
	op(AiTextureType_DIFFUSE) \
	op(AiTextureType_SPECULAR) \
	op(AiTextureType_AMBIENT) \
	op(AiTextureType_EMISSIVE) \
	op(AiTextureType_HEIGHT) \
	op(AiTextureType_NORMALS) \
	op(AiTextureType_SHININESS) \
	op(AiTextureType_OPACITY) \
	op(AiTextureType_DISPLACEMENT) \
	op(AiTextureType_LIGHTMAP) \
	op(AiTextureType_REFLECTION) \
	op(AiTextureType_BASE_COLOR) \
	op(AiTextureType_NORMAL_CAMERA) \
	op(AiTextureType_EMISSION_COLOR) \
	op(AiTextureType_METALNESS) \
	op(AiTextureType_DIFFUSE_ROUGHNESS) \
	op(AiTextureType_AMBIENT_OCCLUSION) \
	op(AiTextureType_SHEEN) \
	op(AiTextureType_CLEARCOAT) \
	op(AiTextureType_TRANSMISSION) \
	op(AiTextureType_UNKNOWN) 
#define FOREACH_ENUM_EAITEXTUREMAPPING(op) \
	op(AiTextureMapping_UV) \
	op(AiTextureMapping_SPHERE) \
	op(AiTextureMapping_CYLINDER) \
	op(AiTextureMapping_BOX) \
	op(AiTextureMapping_PLANE) \
	op(AiTextureMapping_OTHER) 
#define FOREACH_ENUM_EAITEXTUREMAPMODE(op) \
	op(AiTextureMapMode_Wrap) \
	op(AiTextureMapMode_Clamp) \
	op(AiTextureMapMode_Decal) \
	op(AiTextureMapMode_Mirror) 
#define FOREACH_ENUM_EAITEXTUREOP(op) \
	op(AiTextureOp_Multiply) \
	op(AiTextureOp_Add) \
	op(AiTextureOp_Subtract) \
	op(AiTextureOp_Divide) \
	op(AiTextureOp_SmoothAdd) \
	op(AiTextureOp_SignedAdd) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
