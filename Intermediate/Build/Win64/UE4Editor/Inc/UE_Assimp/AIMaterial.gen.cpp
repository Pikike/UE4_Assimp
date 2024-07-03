// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_Assimp/Public/AIMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMaterial() {}
// Cross Module References
	UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAiShadingMode();
	UPackage* Z_Construct_UPackage__Script_UE_Assimp();
	UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureType();
	UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureMapping();
	UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode();
	UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureOp();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMaterial_NoRegister();
	UE_ASSIMP_API UClass* Z_Construct_UClass_UAIMaterial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UE_ASSIMP_API UEnum* Z_Construct_UEnum_UE_Assimp_EAssimpReturn();
// End Cross Module References
	static UEnum* EAiShadingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAiShadingMode, Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAiShadingMode"));
		}
		return Singleton;
	}
	template<> UE_ASSIMP_API UEnum* StaticEnum<EAiShadingMode>()
	{
		return EAiShadingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAiShadingMode(EAiShadingMode_StaticEnum, TEXT("/Script/UE_Assimp"), TEXT("EAiShadingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_Assimp_EAiShadingMode_Hash() { return 1623677482U; }
	UEnum* Z_Construct_UEnum_UE_Assimp_EAiShadingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_Assimp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAiShadingMode"), 0, Get_Z_Construct_UEnum_UE_Assimp_EAiShadingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Null", (int64)Null },
				{ "AiShadingMode_Flat", (int64)AiShadingMode_Flat },
				{ "AiShadingMode_Gouraud", (int64)AiShadingMode_Gouraud },
				{ "AiShadingMode_Phong", (int64)AiShadingMode_Phong },
				{ "AiShadingMode_Blinn", (int64)AiShadingMode_Blinn },
				{ "AiShadingMode_Toon", (int64)AiShadingMode_Toon },
				{ "AiShadingMode_OrenNayar", (int64)AiShadingMode_OrenNayar },
				{ "AiShadingMode_Minnaert", (int64)AiShadingMode_Minnaert },
				{ "AiShadingMode_CookTorrance", (int64)AiShadingMode_CookTorrance },
				{ "AiShadingMode_NoShading", (int64)AiShadingMode_NoShading },
				{ "AiShadingMode_Unlit", (int64)AiShadingMode_Unlit },
				{ "AiShadingMode_Fresnel", (int64)AiShadingMode_Fresnel },
				{ "AiShadingMode_PBR_BRDF", (int64)AiShadingMode_PBR_BRDF },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AiShadingMode_Blinn.Comment", "/** Phong-Blinn-Shading\n\x09 */" },
				{ "AiShadingMode_Blinn.Name", "AiShadingMode_Blinn" },
				{ "AiShadingMode_Blinn.ToolTip", "Phong-Blinn-Shading" },
				{ "AiShadingMode_CookTorrance.Comment", "/** CookTorrance-Shading per pixel\n\x09 *\n\x09 *  Special shader for metallic surfaces.\n\x09 */" },
				{ "AiShadingMode_CookTorrance.Name", "AiShadingMode_CookTorrance" },
				{ "AiShadingMode_CookTorrance.ToolTip", "CookTorrance-Shading per pixel\n\nSpecial shader for metallic surfaces." },
				{ "AiShadingMode_Flat.Comment", "/** Flat shading. Shading is done on per-face base,\n\x09 *  diffuse only. Also known as 'faceted shading'.\n\x09 */" },
				{ "AiShadingMode_Flat.Name", "AiShadingMode_Flat" },
				{ "AiShadingMode_Flat.ToolTip", "Flat shading. Shading is done on per-face base,\ndiffuse only. Also known as 'faceted shading'." },
				{ "AiShadingMode_Fresnel.Comment", "/** Fresnel shading\n\x09 */" },
				{ "AiShadingMode_Fresnel.Name", "AiShadingMode_Fresnel" },
				{ "AiShadingMode_Fresnel.ToolTip", "Fresnel shading" },
				{ "AiShadingMode_Gouraud.Comment", "/** Simple Gouraud shading.\n\x09 */" },
				{ "AiShadingMode_Gouraud.Name", "AiShadingMode_Gouraud" },
				{ "AiShadingMode_Gouraud.ToolTip", "Simple Gouraud shading." },
				{ "AiShadingMode_Minnaert.Comment", "/** Minnaert-Shading per pixel\n\x09 *\n\x09 *  Extension to standard Lambertian shading, taking the\n\x09 *  \"darkness\" of the material into account\n\x09 */" },
				{ "AiShadingMode_Minnaert.Name", "AiShadingMode_Minnaert" },
				{ "AiShadingMode_Minnaert.ToolTip", "Minnaert-Shading per pixel\n\nExtension to standard Lambertian shading, taking the\n\"darkness\" of the material into account" },
				{ "AiShadingMode_NoShading.Comment", "/** No shading at all. Constant light influence of 1.0.\n\x09* Also known as \"Unlit\"\n\x09*/" },
				{ "AiShadingMode_NoShading.Name", "AiShadingMode_NoShading" },
				{ "AiShadingMode_NoShading.ToolTip", "No shading at all. Constant light influence of 1.0.\nAlso known as \"Unlit\"" },
				{ "AiShadingMode_OrenNayar.Comment", "/** OrenNayar-Shading per pixel\n\x09 *\n\x09 *  Extension to standard Lambertian shading, taking the\n\x09 *  roughness of the material into account\n\x09 */" },
				{ "AiShadingMode_OrenNayar.Name", "AiShadingMode_OrenNayar" },
				{ "AiShadingMode_OrenNayar.ToolTip", "OrenNayar-Shading per pixel\n\nExtension to standard Lambertian shading, taking the\nroughness of the material into account" },
				{ "AiShadingMode_PBR_BRDF.Comment", "/** Physically-Based Rendering (PBR) shading using\n\x09* Bidirectional scattering/reflectance distribution function (BSDF/BRDF)\n\x09* There are multiple methods under this banner, and model files may provide\n\x09* data for more than one PBR-BRDF method.\n\x09* Applications should use the set of provided properties to determine which\n\x09* of their preferred PBR rendering methods are likely to be available\n\x09* eg:\n\x09* - If AI_MATKEY_METALLIC_FACTOR is set, then a Metallic/Roughness is available\n\x09* - If AI_MATKEY_GLOSSINESS_FACTOR is set, then a Specular/Glossiness is available\n\x09* Note that some PBR methods allow layering of techniques\n\x09*/" },
				{ "AiShadingMode_PBR_BRDF.Name", "AiShadingMode_PBR_BRDF" },
				{ "AiShadingMode_PBR_BRDF.ToolTip", "Physically-Based Rendering (PBR) shading using\nBidirectional scattering/reflectance distribution function (BSDF/BRDF)\nThere are multiple methods under this banner, and model files may provide\ndata for more than one PBR-BRDF method.\nApplications should use the set of provided properties to determine which\nof their preferred PBR rendering methods are likely to be available\neg:\n- If AI_MATKEY_METALLIC_FACTOR is set, then a Metallic/Roughness is available\n- If AI_MATKEY_GLOSSINESS_FACTOR is set, then a Specular/Glossiness is available\nNote that some PBR methods allow layering of techniques" },
				{ "AiShadingMode_Phong.Comment", "/** Phong-Shading -\n\x09 */" },
				{ "AiShadingMode_Phong.Name", "AiShadingMode_Phong" },
				{ "AiShadingMode_Phong.ToolTip", "Phong-Shading -" },
				{ "AiShadingMode_Toon.Comment", "/** Toon-Shading per pixel\n\x09 *\n\x09 *  Also known as 'comic' shader.\n\x09 */" },
				{ "AiShadingMode_Toon.Name", "AiShadingMode_Toon" },
				{ "AiShadingMode_Toon.ToolTip", "Toon-Shading per pixel\n\nAlso known as 'comic' shader." },
				{ "AiShadingMode_Unlit.Name", "AiShadingMode_Unlit" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Defines all shading models supported by the library\n *\n *  Property: #AI_MATKEY_SHADING_MODEL\n *\n *  The list of shading modes has been taken from Blender.\n *  See Blender documentation for more information. The API does\n *  not distinguish between \"specular\" and \"diffuse\" shaders (thus the\n *  specular term for diffuse shading models like Oren-Nayar remains\n *  undefined). <br>\n *  Again, this value is just a hint. Assimp tries to select the shader whose\n *  most common implementation matches the original rendering results of the\n *  3D modeler which wrote a particular model as closely as possible.\n *\n */" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AIMaterial.h" },
				{ "Null.Name", "Null" },
				{ "ToolTip", "@brief Defines all shading models supported by the library\n\nProperty: #AI_MATKEY_SHADING_MODEL\n\nThe list of shading modes has been taken from Blender.\nSee Blender documentation for more information. The API does\nnot distinguish between \"specular\" and \"diffuse\" shaders (thus the\nspecular term for diffuse shading models like Oren-Nayar remains\nundefined). <br>\nAgain, this value is just a hint. Assimp tries to select the shader whose\nmost common implementation matches the original rendering results of the\n3D modeler which wrote a particular model as closely as possible." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
				nullptr,
				"EAiShadingMode",
				"EAiShadingMode",
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
	static UEnum* EAiTextureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAiTextureType, Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAiTextureType"));
		}
		return Singleton;
	}
	template<> UE_ASSIMP_API UEnum* StaticEnum<EAiTextureType>()
	{
		return EAiTextureType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAiTextureType(EAiTextureType_StaticEnum, TEXT("/Script/UE_Assimp"), TEXT("EAiTextureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_Assimp_EAiTextureType_Hash() { return 3347481620U; }
	UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_Assimp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAiTextureType"), 0, Get_Z_Construct_UEnum_UE_Assimp_EAiTextureType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AiTextureType_NONE", (int64)AiTextureType_NONE },
				{ "AiTextureType_DIFFUSE", (int64)AiTextureType_DIFFUSE },
				{ "AiTextureType_SPECULAR", (int64)AiTextureType_SPECULAR },
				{ "AiTextureType_AMBIENT", (int64)AiTextureType_AMBIENT },
				{ "AiTextureType_EMISSIVE", (int64)AiTextureType_EMISSIVE },
				{ "AiTextureType_HEIGHT", (int64)AiTextureType_HEIGHT },
				{ "AiTextureType_NORMALS", (int64)AiTextureType_NORMALS },
				{ "AiTextureType_SHININESS", (int64)AiTextureType_SHININESS },
				{ "AiTextureType_OPACITY", (int64)AiTextureType_OPACITY },
				{ "AiTextureType_DISPLACEMENT", (int64)AiTextureType_DISPLACEMENT },
				{ "AiTextureType_LIGHTMAP", (int64)AiTextureType_LIGHTMAP },
				{ "AiTextureType_REFLECTION", (int64)AiTextureType_REFLECTION },
				{ "AiTextureType_BASE_COLOR", (int64)AiTextureType_BASE_COLOR },
				{ "AiTextureType_NORMAL_CAMERA", (int64)AiTextureType_NORMAL_CAMERA },
				{ "AiTextureType_EMISSION_COLOR", (int64)AiTextureType_EMISSION_COLOR },
				{ "AiTextureType_METALNESS", (int64)AiTextureType_METALNESS },
				{ "AiTextureType_DIFFUSE_ROUGHNESS", (int64)AiTextureType_DIFFUSE_ROUGHNESS },
				{ "AiTextureType_AMBIENT_OCCLUSION", (int64)AiTextureType_AMBIENT_OCCLUSION },
				{ "AiTextureType_SHEEN", (int64)AiTextureType_SHEEN },
				{ "AiTextureType_CLEARCOAT", (int64)AiTextureType_CLEARCOAT },
				{ "AiTextureType_TRANSMISSION", (int64)AiTextureType_TRANSMISSION },
				{ "AiTextureType_UNKNOWN", (int64)AiTextureType_UNKNOWN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AiTextureType_AMBIENT.Comment", "/** The texture is combined with the result of the ambient\n\x09 *  lighting equation.\n\x09 */" },
				{ "AiTextureType_AMBIENT.Name", "AiTextureType_AMBIENT" },
				{ "AiTextureType_AMBIENT.ToolTip", "The texture is combined with the result of the ambient\nlighting equation." },
				{ "AiTextureType_AMBIENT_OCCLUSION.Name", "AiTextureType_AMBIENT_OCCLUSION" },
				{ "AiTextureType_BASE_COLOR.Comment", "/** PBR Materials\n\x09 * PBR definitions from maya and other modelling packages now use this standard.\n\x09 * This was originally introduced around 2012.\n\x09 * Support for this is in game engines like Godot, Unreal or Unity3D.\n\x09 * Modelling packages which use this are very common now.\n\x09 */" },
				{ "AiTextureType_BASE_COLOR.Name", "AiTextureType_BASE_COLOR" },
				{ "AiTextureType_BASE_COLOR.ToolTip", "PBR Materials\nPBR definitions from maya and other modelling packages now use this standard.\nThis was originally introduced around 2012.\nSupport for this is in game engines like Godot, Unreal or Unity3D.\nModelling packages which use this are very common now." },
				{ "AiTextureType_CLEARCOAT.Comment", "/** Clearcoat\n\x09* Simulates a layer of 'polish' or 'laquer' layered on top of a PBR substrate\n\x09* https://autodesk.github.io/standard-surface/#closures/coating\n\x09* https://github.com/KhronosGroup/glTF/tree/master/extensions/2.0/Khronos/KHR_materials_clearcoat\n\x09*/" },
				{ "AiTextureType_CLEARCOAT.Name", "AiTextureType_CLEARCOAT" },
				{ "AiTextureType_CLEARCOAT.ToolTip", "Clearcoat\nSimulates a layer of 'polish' or 'laquer' layered on top of a PBR substrate\nhttps://autodesk.github.io/standard-surface/#closures/coating\nhttps://github.com/KhronosGroup/glTF/tree/master/extensions/2.0/Khronos/KHR_materials_clearcoat" },
				{ "AiTextureType_DIFFUSE.Comment", "/** The texture is combined with the result of the diffuse\n\x09 *  lighting equation.\n\x09 *  OR\n\x09 *  PBR Specular/Glossiness\n\x09 */" },
				{ "AiTextureType_DIFFUSE.Name", "AiTextureType_DIFFUSE" },
				{ "AiTextureType_DIFFUSE.ToolTip", "The texture is combined with the result of the diffuse\nlighting equation.\nOR\nPBR Specular/Glossiness" },
				{ "AiTextureType_DIFFUSE_ROUGHNESS.Name", "AiTextureType_DIFFUSE_ROUGHNESS" },
				{ "AiTextureType_DISPLACEMENT.Comment", "/** Displacement texture\n\x09 *\n\x09 *  The exact purpose and format is application-dependent.\n\x09 *  Higher color values stand for higher vertex displacements.\n\x09*/" },
				{ "AiTextureType_DISPLACEMENT.Name", "AiTextureType_DISPLACEMENT" },
				{ "AiTextureType_DISPLACEMENT.ToolTip", "Displacement texture\n\nThe exact purpose and format is application-dependent.\nHigher color values stand for higher vertex displacements." },
				{ "AiTextureType_EMISSION_COLOR.Name", "AiTextureType_EMISSION_COLOR" },
				{ "AiTextureType_EMISSIVE.Comment", "/** The texture is added to the result of the lighting\n\x09 *  calculation. It isn't influenced by incoming light.\n\x09 */" },
				{ "AiTextureType_EMISSIVE.Name", "AiTextureType_EMISSIVE" },
				{ "AiTextureType_EMISSIVE.ToolTip", "The texture is added to the result of the lighting\ncalculation. It isn't influenced by incoming light." },
				{ "AiTextureType_HEIGHT.Comment", "/** The texture is a height map.\n\x09 *\n\x09 *  By convention, higher gray-scale values stand for\n\x09 *  higher elevations from the base height.\n\x09 */" },
				{ "AiTextureType_HEIGHT.Name", "AiTextureType_HEIGHT" },
				{ "AiTextureType_HEIGHT.ToolTip", "The texture is a height map.\n\nBy convention, higher gray-scale values stand for\nhigher elevations from the base height." },
				{ "AiTextureType_LIGHTMAP.Comment", "/** Lightmap texture (aka Ambient Occlusion)\n\x09 *\n\x09 *  Both 'Lightmaps' and dedicated 'ambient occlusion maps' are\n\x09 *  covered by this material property. The texture contains a\n\x09 *  scaling value for the final color value of a pixel. Its\n\x09 *  intensity is not affected by incoming light.\n\x09*/" },
				{ "AiTextureType_LIGHTMAP.Name", "AiTextureType_LIGHTMAP" },
				{ "AiTextureType_LIGHTMAP.ToolTip", "Lightmap texture (aka Ambient Occlusion)\n\nBoth 'Lightmaps' and dedicated 'ambient occlusion maps' are\ncovered by this material property. The texture contains a\nscaling value for the final color value of a pixel. Its\nintensity is not affected by incoming light." },
				{ "AiTextureType_METALNESS.Name", "AiTextureType_METALNESS" },
				{ "AiTextureType_NONE.Comment", "/** Dummy value.\n\x09 *\n\x09 *  No texture, but the value to be used as 'texture semantic'\n\x09 *  (#aiMaterialProperty::mSemantic) for all material properties\n\x09 *  *not* related to textures.\n\x09 */" },
				{ "AiTextureType_NONE.Name", "AiTextureType_NONE" },
				{ "AiTextureType_NONE.ToolTip", "Dummy value.\n\nNo texture, but the value to be used as 'texture semantic'\n(#aiMaterialProperty::mSemantic) for all material properties\n*not* related to textures." },
				{ "AiTextureType_NORMAL_CAMERA.Name", "AiTextureType_NORMAL_CAMERA" },
				{ "AiTextureType_NORMALS.Comment", "/** The texture is a (tangent space) normal-map.\n\x09 *\n\x09 *  Again, there are several conventions for tangent-space\n\x09 *  normal maps. Assimp does (intentionally) not\n\x09 *  distinguish here.\n\x09 */" },
				{ "AiTextureType_NORMALS.Name", "AiTextureType_NORMALS" },
				{ "AiTextureType_NORMALS.ToolTip", "The texture is a (tangent space) normal-map.\n\nAgain, there are several conventions for tangent-space\nnormal maps. Assimp does (intentionally) not\ndistinguish here." },
				{ "AiTextureType_OPACITY.Comment", "/** The texture defines per-pixel opacity.\n\x09 *\n\x09 *  Usually 'white' means opaque and 'black' means\n\x09 *  'transparency'. Or quite the opposite. Have fun.\n\x09*/" },
				{ "AiTextureType_OPACITY.Name", "AiTextureType_OPACITY" },
				{ "AiTextureType_OPACITY.ToolTip", "The texture defines per-pixel opacity.\n\nUsually 'white' means opaque and 'black' means\n'transparency'. Or quite the opposite. Have fun." },
				{ "AiTextureType_REFLECTION.Comment", "/** Reflection texture\n\x09 *\n\x09 * Contains the color of a perfect mirror reflection.\n\x09 * Rarely used, almost never for real-time applications.\n\x09*/" },
				{ "AiTextureType_REFLECTION.Name", "AiTextureType_REFLECTION" },
				{ "AiTextureType_REFLECTION.ToolTip", "Reflection texture\n\nContains the color of a perfect mirror reflection.\nRarely used, almost never for real-time applications." },
				{ "AiTextureType_SHEEN.Comment", "/** Sheen\n\x09* Generally used to simulate textiles that are covered in a layer of microfibers\n\x09* eg velvet\n\x09* https://github.com/KhronosGroup/glTF/tree/master/extensions/2.0/Khronos/KHR_materials_sheen\n\x09*/" },
				{ "AiTextureType_SHEEN.Name", "AiTextureType_SHEEN" },
				{ "AiTextureType_SHEEN.ToolTip", "Sheen\nGenerally used to simulate textiles that are covered in a layer of microfibers\neg velvet\nhttps://github.com/KhronosGroup/glTF/tree/master/extensions/2.0/Khronos/KHR_materials_sheen" },
				{ "AiTextureType_SHININESS.Comment", "/** The texture defines the glossiness of the material.\n\x09 *\n\x09 *  The glossiness is in fact the exponent of the specular\n\x09 *  (phong) lighting equation. Usually there is a conversion\n\x09 *  function defined to map the linear color values in the\n\x09 *  texture to a suitable exponent. Have fun.\n\x09*/" },
				{ "AiTextureType_SHININESS.Name", "AiTextureType_SHININESS" },
				{ "AiTextureType_SHININESS.ToolTip", "The texture defines the glossiness of the material.\n\nThe glossiness is in fact the exponent of the specular\n(phong) lighting equation. Usually there is a conversion\nfunction defined to map the linear color values in the\ntexture to a suitable exponent. Have fun." },
				{ "AiTextureType_SPECULAR.Comment", "/** The texture is combined with the result of the specular\n\x09 *  lighting equation.\n\x09 *  OR\n\x09 *  PBR Specular/Glossiness\n\x09 */" },
				{ "AiTextureType_SPECULAR.Name", "AiTextureType_SPECULAR" },
				{ "AiTextureType_SPECULAR.ToolTip", "The texture is combined with the result of the specular\nlighting equation.\nOR\nPBR Specular/Glossiness" },
				{ "AiTextureType_TRANSMISSION.Comment", "/** Transmission\n\x09* Simulates transmission through the surface\n\x09* May include further information such as wall thickness\n\x09*/" },
				{ "AiTextureType_TRANSMISSION.Name", "AiTextureType_TRANSMISSION" },
				{ "AiTextureType_TRANSMISSION.ToolTip", "Transmission\nSimulates transmission through the surface\nMay include further information such as wall thickness" },
				{ "AiTextureType_UNKNOWN.Comment", "/** Unknown texture\n\x09 *\n\x09 *  A texture reference that does not match any of the definitions\n\x09 *  above is considered to be 'unknown'. It is still imported,\n\x09 *  but is excluded from any further post-processing.\n\x09*/" },
				{ "AiTextureType_UNKNOWN.Name", "AiTextureType_UNKNOWN" },
				{ "AiTextureType_UNKNOWN.ToolTip", "Unknown texture\n\nA texture reference that does not match any of the definitions\nabove is considered to be 'unknown'. It is still imported,\nbut is excluded from any further post-processing." },
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Defines the purpose of a texture\n *\n *  This is a very difficult topic. Different 3D packages support different\n *  kinds of textures. For very common texture types, such as bumpmaps, the\n *  rendering results depend on implementation details in the rendering\n *  pipelines of these applications. Assimp loads all texture references from\n *  the model file and tries to determine which of the predefined texture\n *  types below is the best choice to match the original use of the texture\n *  as closely as possible.<br>\n *\n *  In content pipelines you'll usually define how textures have to be handled,\n *  and the artists working on models have to conform to this specification,\n *  regardless which 3D tool they're using.\n */" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AIMaterial.h" },
				{ "ToolTip", "@brief Defines the purpose of a texture\n\nThis is a very difficult topic. Different 3D packages support different\nkinds of textures. For very common texture types, such as bumpmaps, the\nrendering results depend on implementation details in the rendering\npipelines of these applications. Assimp loads all texture references from\nthe model file and tries to determine which of the predefined texture\ntypes below is the best choice to match the original use of the texture\nas closely as possible.<br>\n\nIn content pipelines you'll usually define how textures have to be handled,\nand the artists working on models have to conform to this specification,\nregardless which 3D tool they're using." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
				nullptr,
				"EAiTextureType",
				"EAiTextureType",
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
	static UEnum* EAiTextureMapping_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAiTextureMapping, Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAiTextureMapping"));
		}
		return Singleton;
	}
	template<> UE_ASSIMP_API UEnum* StaticEnum<EAiTextureMapping>()
	{
		return EAiTextureMapping_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAiTextureMapping(EAiTextureMapping_StaticEnum, TEXT("/Script/UE_Assimp"), TEXT("EAiTextureMapping"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_Assimp_EAiTextureMapping_Hash() { return 3993529234U; }
	UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureMapping()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_Assimp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAiTextureMapping"), 0, Get_Z_Construct_UEnum_UE_Assimp_EAiTextureMapping_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AiTextureMapping_UV", (int64)AiTextureMapping_UV },
				{ "AiTextureMapping_SPHERE", (int64)AiTextureMapping_SPHERE },
				{ "AiTextureMapping_CYLINDER", (int64)AiTextureMapping_CYLINDER },
				{ "AiTextureMapping_BOX", (int64)AiTextureMapping_BOX },
				{ "AiTextureMapping_PLANE", (int64)AiTextureMapping_PLANE },
				{ "AiTextureMapping_OTHER", (int64)AiTextureMapping_OTHER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AiTextureMapping_BOX.Comment", "/** Cubic mapping */" },
				{ "AiTextureMapping_BOX.Name", "AiTextureMapping_BOX" },
				{ "AiTextureMapping_BOX.ToolTip", "Cubic mapping" },
				{ "AiTextureMapping_CYLINDER.Comment", "/** Cylindrical mapping */" },
				{ "AiTextureMapping_CYLINDER.Name", "AiTextureMapping_CYLINDER" },
				{ "AiTextureMapping_CYLINDER.ToolTip", "Cylindrical mapping" },
				{ "AiTextureMapping_OTHER.Comment", "/** Undefined mapping. Have fun. */" },
				{ "AiTextureMapping_OTHER.Name", "AiTextureMapping_OTHER" },
				{ "AiTextureMapping_OTHER.ToolTip", "Undefined mapping. Have fun." },
				{ "AiTextureMapping_PLANE.Comment", "/** Planar mapping */" },
				{ "AiTextureMapping_PLANE.Name", "AiTextureMapping_PLANE" },
				{ "AiTextureMapping_PLANE.ToolTip", "Planar mapping" },
				{ "AiTextureMapping_SPHERE.Comment", "/** Spherical mapping */" },
				{ "AiTextureMapping_SPHERE.Name", "AiTextureMapping_SPHERE" },
				{ "AiTextureMapping_SPHERE.ToolTip", "Spherical mapping" },
				{ "AiTextureMapping_UV.Comment", "/** The mapping coordinates are taken from an UV channel.\n\x09*\n\x09*  #AI_MATKEY_UVWSRC property specifies from which UV channel\n\x09*  the texture coordinates are to be taken from (remember,\n\x09*  meshes can have more than one UV channel).\n\x09*/" },
				{ "AiTextureMapping_UV.Name", "AiTextureMapping_UV" },
				{ "AiTextureMapping_UV.ToolTip", "The mapping coordinates are taken from an UV channel.\n\n#AI_MATKEY_UVWSRC property specifies from which UV channel\nthe texture coordinates are to be taken from (remember,\nmeshes can have more than one UV channel)." },
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Defines how the mapping coords for a texture are generated.\n*\n*  Real-time applications typically require full UV coordinates, so the use of\n*  the aiProcess_GenUVCoords step is highly recommended. It generates proper\n*  UV channels for non-UV mapped objects, as long as an accurate description\n*  how the mapping should look like (e.g spherical) is given.\n*  See the #AI_MATKEY_MAPPING property for more details.\n*/" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AIMaterial.h" },
				{ "ToolTip", "@brief Defines how the mapping coords for a texture are generated.\n\nReal-time applications typically require full UV coordinates, so the use of\nthe aiProcess_GenUVCoords step is highly recommended. It generates proper\nUV channels for non-UV mapped objects, as long as an accurate description\nhow the mapping should look like (e.g spherical) is given.\nSee the #AI_MATKEY_MAPPING property for more details." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
				nullptr,
				"EAiTextureMapping",
				"EAiTextureMapping",
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
	static UEnum* EAiTextureMapMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode, Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAiTextureMapMode"));
		}
		return Singleton;
	}
	template<> UE_ASSIMP_API UEnum* StaticEnum<EAiTextureMapMode>()
	{
		return EAiTextureMapMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAiTextureMapMode(EAiTextureMapMode_StaticEnum, TEXT("/Script/UE_Assimp"), TEXT("EAiTextureMapMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode_Hash() { return 3377083979U; }
	UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_Assimp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAiTextureMapMode"), 0, Get_Z_Construct_UEnum_UE_Assimp_EAiTextureMapMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AiTextureMapMode_Wrap", (int64)AiTextureMapMode_Wrap },
				{ "AiTextureMapMode_Clamp", (int64)AiTextureMapMode_Clamp },
				{ "AiTextureMapMode_Decal", (int64)AiTextureMapMode_Decal },
				{ "AiTextureMapMode_Mirror", (int64)AiTextureMapMode_Mirror },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AiTextureMapMode_Clamp.Comment", "/** Texture coordinates outside [0...1]\n\x09*  are clamped to the nearest valid value.\n\x09*/" },
				{ "AiTextureMapMode_Clamp.Name", "AiTextureMapMode_Clamp" },
				{ "AiTextureMapMode_Clamp.ToolTip", "Texture coordinates outside [0...1]\nare clamped to the nearest valid value." },
				{ "AiTextureMapMode_Decal.Comment", "/** If the texture coordinates for a pixel are outside [0...1]\n\x09*  the texture is not applied to that pixel\n\x09*/" },
				{ "AiTextureMapMode_Decal.Name", "AiTextureMapMode_Decal" },
				{ "AiTextureMapMode_Decal.ToolTip", "If the texture coordinates for a pixel are outside [0...1]\nthe texture is not applied to that pixel" },
				{ "AiTextureMapMode_Mirror.Comment", "/** A texture coordinate u|v becomes u%1|v%1 if (u-(u%1))%2 is zero and\n\x09*  1-(u%1)|1-(v%1) otherwise\n\x09*/" },
				{ "AiTextureMapMode_Mirror.Name", "AiTextureMapMode_Mirror" },
				{ "AiTextureMapMode_Mirror.ToolTip", "A texture coordinate u|v becomes u%1|v%1 if (u-(u%1))%2 is zero and\n1-(u%1)|1-(v%1) otherwise" },
				{ "AiTextureMapMode_Wrap.Comment", "/** A texture coordinate u|v is translated to u%1|v%1\n\x09*/" },
				{ "AiTextureMapMode_Wrap.Name", "AiTextureMapMode_Wrap" },
				{ "AiTextureMapMode_Wrap.ToolTip", "A texture coordinate u|v is translated to u%1|v%1" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Defines how UV coordinates outside the [0...1] range are handled.\n*\n*  Commonly referred to as 'wrapping mode'.\n*/" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AIMaterial.h" },
				{ "ToolTip", "@brief Defines how UV coordinates outside the [0...1] range are handled.\n\nCommonly referred to as 'wrapping mode'." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
				nullptr,
				"EAiTextureMapMode",
				"EAiTextureMapMode",
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
	static UEnum* EAiTextureOp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UE_Assimp_EAiTextureOp, Z_Construct_UPackage__Script_UE_Assimp(), TEXT("EAiTextureOp"));
		}
		return Singleton;
	}
	template<> UE_ASSIMP_API UEnum* StaticEnum<EAiTextureOp>()
	{
		return EAiTextureOp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAiTextureOp(EAiTextureOp_StaticEnum, TEXT("/Script/UE_Assimp"), TEXT("EAiTextureOp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UE_Assimp_EAiTextureOp_Hash() { return 2721443353U; }
	UEnum* Z_Construct_UEnum_UE_Assimp_EAiTextureOp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UE_Assimp();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAiTextureOp"), 0, Get_Z_Construct_UEnum_UE_Assimp_EAiTextureOp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AiTextureOp_Multiply", (int64)AiTextureOp_Multiply },
				{ "AiTextureOp_Add", (int64)AiTextureOp_Add },
				{ "AiTextureOp_Subtract", (int64)AiTextureOp_Subtract },
				{ "AiTextureOp_Divide", (int64)AiTextureOp_Divide },
				{ "AiTextureOp_SmoothAdd", (int64)AiTextureOp_SmoothAdd },
				{ "AiTextureOp_SignedAdd", (int64)AiTextureOp_SignedAdd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AiTextureOp_Add.Comment", "/** T = T1 + T2 */" },
				{ "AiTextureOp_Add.Name", "AiTextureOp_Add" },
				{ "AiTextureOp_Add.ToolTip", "T = T1 + T2" },
				{ "AiTextureOp_Divide.Comment", "/** T = T1 / T2 */" },
				{ "AiTextureOp_Divide.Name", "AiTextureOp_Divide" },
				{ "AiTextureOp_Divide.ToolTip", "T = T1 / T2" },
				{ "AiTextureOp_Multiply.Comment", "/** T = T1 * T2 */" },
				{ "AiTextureOp_Multiply.Name", "AiTextureOp_Multiply" },
				{ "AiTextureOp_Multiply.ToolTip", "T = T1 * T2" },
				{ "AiTextureOp_SignedAdd.Comment", "/** T = T1 + (T2-0.5) */" },
				{ "AiTextureOp_SignedAdd.Name", "AiTextureOp_SignedAdd" },
				{ "AiTextureOp_SignedAdd.ToolTip", "T = T1 + (T2-0.5)" },
				{ "AiTextureOp_SmoothAdd.Comment", "/** T = (T1 + T2) - (T1 * T2) */" },
				{ "AiTextureOp_SmoothAdd.Name", "AiTextureOp_SmoothAdd" },
				{ "AiTextureOp_SmoothAdd.ToolTip", "T = (T1 + T2) - (T1 * T2)" },
				{ "AiTextureOp_Subtract.Comment", "/** T = T1 - T2 */" },
				{ "AiTextureOp_Subtract.Name", "AiTextureOp_Subtract" },
				{ "AiTextureOp_Subtract.ToolTip", "T = T1 - T2" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** @brief Defines how the Nth texture of a specific type is combined with\n*  the result of all previous layers.\n*\n*  Example (left: key, right: value): <br>\n*  @code\n*  DiffColor0     - gray\n*  DiffTextureOp0 - aiTextureOpMultiply\n*  DiffTexture0   - tex1.png\n*  DiffTextureOp0 - aiTextureOpAdd\n*  DiffTexture1   - tex2.png\n*  @endcode\n*  Written as equation, the final diffuse term for a specific pixel would be:\n*  @code\n*  diffFinal = DiffColor0 * sampleTex(DiffTexture0,UV0) +\n*     sampleTex(DiffTexture1,UV0) * diffContrib;\n*  @endcode\n*  where 'diffContrib' is the intensity of the incoming light for that pixel.\n*/" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AIMaterial.h" },
				{ "ToolTip", "@brief Defines how the Nth texture of a specific type is combined with\nthe result of all previous layers.\n\nExample (left: key, right: value): <br>\n@code\nDiffColor0     - gray\nDiffTextureOp0 - aiTextureOpMultiply\nDiffTexture0   - tex1.png\nDiffTextureOp0 - aiTextureOpAdd\nDiffTexture1   - tex2.png\n@endcode\nWritten as equation, the final diffuse term for a specific pixel would be:\n@code\ndiffFinal = DiffColor0 * sampleTex(DiffTexture0,UV0) +\n   sampleTex(DiffTexture1,UV0) * diffContrib;\n@endcode\nwhere 'diffContrib' is the intensity of the incoming light for that pixel." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UE_Assimp,
				nullptr,
				"EAiTextureOp",
				"EAiTextureOp",
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
	DEFINE_FUNCTION(UAIMaterial::execGetMaterialTexture)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Type);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UVScale);
		P_GET_PROPERTY(FByteProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Path);
		P_GET_PROPERTY(FByteProperty,Z_Param_Mapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EAssimpReturn>*)Z_Param__Result=P_THIS->GetMaterialTexture(EAiTextureType(Z_Param_Type),Z_Param_Out_UVScale,Z_Param_Index,Z_Param_Out_Path,EAiTextureMapping(Z_Param_Mapping));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMaterial::execGetMaterialName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMaterialName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMaterial::execGetMaterialOpacity)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Opacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMaterialOpacity(Z_Param_Out_Opacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMaterial::execGetMaterialBaseColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_BaseColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMaterialBaseColor(Z_Param_Out_BaseColor);
		P_NATIVE_END;
	}
	void UAIMaterial::StaticRegisterNativesUAIMaterial()
	{
		UClass* Class = UAIMaterial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialBaseColor", &UAIMaterial::execGetMaterialBaseColor },
			{ "GetMaterialName", &UAIMaterial::execGetMaterialName },
			{ "GetMaterialOpacity", &UAIMaterial::execGetMaterialOpacity },
			{ "GetMaterialTexture", &UAIMaterial::execGetMaterialTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics
	{
		struct AIMaterial_eventGetMaterialBaseColor_Parms
		{
			FLinearColor BaseColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialBaseColor_Parms, BaseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::NewProp_BaseColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Material" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMaterial, nullptr, "GetMaterialBaseColor", nullptr, nullptr, sizeof(AIMaterial_eventGetMaterialBaseColor_Parms), Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics
	{
		struct AIMaterial_eventGetMaterialName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Material" },
		{ "Comment", "// -------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMaterial, nullptr, "GetMaterialName", nullptr, nullptr, sizeof(AIMaterial_eventGetMaterialName_Parms), Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMaterial_GetMaterialName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMaterial_GetMaterialName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics
	{
		struct AIMaterial_eventGetMaterialOpacity_Parms
		{
			float Opacity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Opacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialOpacity_Parms, Opacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::NewProp_Opacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Material" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMaterial, nullptr, "GetMaterialOpacity", nullptr, nullptr, sizeof(AIMaterial_eventGetMaterialOpacity_Parms), Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics
	{
		struct AIMaterial_eventGetMaterialTexture_Parms
		{
			TEnumAsByte<EAiTextureType> Type;
			FVector2D UVScale;
			uint8 Index;
			FString Path;
			TEnumAsByte<EAiTextureMapping> Mapping;
			TEnumAsByte<EAssimpReturn> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVScale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mapping;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, Type), Z_Construct_UEnum_UE_Assimp_EAiTextureType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, UVScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, Index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Mapping = { "Mapping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, Mapping), Z_Construct_UEnum_UE_Assimp_EAiTextureMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMaterial_eventGetMaterialTexture_Parms, ReturnValue), Z_Construct_UEnum_UE_Assimp_EAssimpReturn, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_UVScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_Mapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Assimp|Material" },
		{ "Comment", "// ---------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMaterial, nullptr, "GetMaterialTexture", nullptr, nullptr, sizeof(AIMaterial_eventGetMaterialTexture_Parms), Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMaterial_GetMaterialTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMaterial_GetMaterialTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIMaterial_NoRegister()
	{
		return UAIMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UAIMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_Assimp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIMaterial_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIMaterial_GetMaterialBaseColor, "GetMaterialBaseColor" }, // 3479026391
		{ &Z_Construct_UFunction_UAIMaterial_GetMaterialName, "GetMaterialName" }, // 301508822
		{ &Z_Construct_UFunction_UAIMaterial_GetMaterialOpacity, "GetMaterialOpacity" }, // 1036309368
		{ &Z_Construct_UFunction_UAIMaterial_GetMaterialTexture, "GetMaterialTexture" }, // 3110635964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AIMaterial.h" },
		{ "ModuleRelativePath", "Public/AIMaterial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIMaterial_Statics::ClassParams = {
		&UAIMaterial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAIMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIMaterial, 3802467906);
	template<> UE_ASSIMP_API UClass* StaticClass<UAIMaterial>()
	{
		return UAIMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIMaterial(Z_Construct_UClass_UAIMaterial, &UAIMaterial::StaticClass, TEXT("/Script/UE_Assimp"), TEXT("UAIMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
