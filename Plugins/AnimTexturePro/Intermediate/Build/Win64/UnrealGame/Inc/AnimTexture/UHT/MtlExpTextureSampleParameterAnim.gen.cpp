// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimTexture/Public/MtlExpTextureSampleParameterAnim.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMtlExpTextureSampleParameterAnim() {}
// Cross Module References
	ANIMTEXTURE_API UClass* Z_Construct_UClass_UMtlExpTextureSampleParameterAnim();
	ANIMTEXTURE_API UClass* Z_Construct_UClass_UMtlExpTextureSampleParameterAnim_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
	UPackage* Z_Construct_UPackage__Script_AnimTexture();
// End Cross Module References
	void UMtlExpTextureSampleParameterAnim::StaticRegisterNativesUMtlExpTextureSampleParameterAnim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMtlExpTextureSampleParameterAnim);
	UClass* Z_Construct_UClass_UMtlExpTextureSampleParameterAnim_NoRegister()
	{
		return UMtlExpTextureSampleParameterAnim::StaticClass();
	}
	struct Z_Construct_UClass_UMtlExpTextureSampleParameterAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMtlExpTextureSampleParameterAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimTexture,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMtlExpTextureSampleParameterAnim_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMtlExpTextureSampleParameterAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "MtlExpTextureSampleParameterAnim.h" },
		{ "ModuleRelativePath", "Public/MtlExpTextureSampleParameterAnim.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMtlExpTextureSampleParameterAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMtlExpTextureSampleParameterAnim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMtlExpTextureSampleParameterAnim_Statics::ClassParams = {
		&UMtlExpTextureSampleParameterAnim::StaticClass,
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
		0x001020B0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMtlExpTextureSampleParameterAnim_Statics::Class_MetaDataParams), Z_Construct_UClass_UMtlExpTextureSampleParameterAnim_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMtlExpTextureSampleParameterAnim()
	{
		if (!Z_Registration_Info_UClass_UMtlExpTextureSampleParameterAnim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMtlExpTextureSampleParameterAnim.OuterSingleton, Z_Construct_UClass_UMtlExpTextureSampleParameterAnim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMtlExpTextureSampleParameterAnim.OuterSingleton;
	}
	template<> ANIMTEXTURE_API UClass* StaticClass<UMtlExpTextureSampleParameterAnim>()
	{
		return UMtlExpTextureSampleParameterAnim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMtlExpTextureSampleParameterAnim);
	UMtlExpTextureSampleParameterAnim::~UMtlExpTextureSampleParameterAnim() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_MtlExpTextureSampleParameterAnim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_MtlExpTextureSampleParameterAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMtlExpTextureSampleParameterAnim, UMtlExpTextureSampleParameterAnim::StaticClass, TEXT("UMtlExpTextureSampleParameterAnim"), &Z_Registration_Info_UClass_UMtlExpTextureSampleParameterAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMtlExpTextureSampleParameterAnim), 3200321870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_MtlExpTextureSampleParameterAnim_h_3189126166(TEXT("/Script/AnimTexture"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_MtlExpTextureSampleParameterAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_MtlExpTextureSampleParameterAnim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
