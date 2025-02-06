// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimTextureEditor/Public/AnimTextureThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimTextureThumbnailRenderer() {}
// Cross Module References
	ANIMTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimTextureThumbnailRenderer();
	ANIMTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimTextureThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_AnimTextureEditor();
// End Cross Module References
	void UAnimTextureThumbnailRenderer::StaticRegisterNativesUAnimTextureThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimTextureThumbnailRenderer);
	UClass* Z_Construct_UClass_UAnimTextureThumbnailRenderer_NoRegister()
	{
		return UAnimTextureThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UAnimTextureThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimTextureThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimTextureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTextureThumbnailRenderer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTextureThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTextureThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/AnimTextureThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimTextureThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimTextureThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimTextureThumbnailRenderer_Statics::ClassParams = {
		&UAnimTextureThumbnailRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTextureThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimTextureThumbnailRenderer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimTextureThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UAnimTextureThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimTextureThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UAnimTextureThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimTextureThumbnailRenderer.OuterSingleton;
	}
	template<> ANIMTEXTUREEDITOR_API UClass* StaticClass<UAnimTextureThumbnailRenderer>()
	{
		return UAnimTextureThumbnailRenderer::StaticClass();
	}
	UAnimTextureThumbnailRenderer::UAnimTextureThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimTextureThumbnailRenderer);
	UAnimTextureThumbnailRenderer::~UAnimTextureThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTextureEditor_Public_AnimTextureThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTextureEditor_Public_AnimTextureThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimTextureThumbnailRenderer, UAnimTextureThumbnailRenderer::StaticClass, TEXT("UAnimTextureThumbnailRenderer"), &Z_Registration_Info_UClass_UAnimTextureThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimTextureThumbnailRenderer), 1524853637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTextureEditor_Public_AnimTextureThumbnailRenderer_h_1969576566(TEXT("/Script/AnimTextureEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTextureEditor_Public_AnimTextureThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTextureEditor_Public_AnimTextureThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
