// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimTextureEditor/Public/AnimTextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimTextureFactory() {}
// Cross Module References
	ANIMTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimTextureFactory();
	ANIMTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimTextureFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AnimTextureEditor();
// End Cross Module References
	void UAnimTextureFactory::StaticRegisterNativesUAnimTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimTextureFactory);
	UClass* Z_Construct_UClass_UAnimTextureFactory_NoRegister()
	{
		return UAnimTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimTextureEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTextureFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Import & Reimport Animated Texture Source, such as .gif file\n * @see class UTextureFactory\n */" },
		{ "IncludePath", "AnimTextureFactory.h" },
		{ "ModuleRelativePath", "Public/AnimTextureFactory.h" },
		{ "ToolTip", "Import & Reimport Animated Texture Source, such as .gif file\n@see class UTextureFactory" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimTextureFactory_Statics::ClassParams = {
		&UAnimTextureFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTextureFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimTextureFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimTextureFactory()
	{
		if (!Z_Registration_Info_UClass_UAnimTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimTextureFactory.OuterSingleton, Z_Construct_UClass_UAnimTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimTextureFactory.OuterSingleton;
	}
	template<> ANIMTEXTUREEDITOR_API UClass* StaticClass<UAnimTextureFactory>()
	{
		return UAnimTextureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimTextureFactory);
	UAnimTextureFactory::~UAnimTextureFactory() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTextureEditor_Public_AnimTextureFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTextureEditor_Public_AnimTextureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimTextureFactory, UAnimTextureFactory::StaticClass, TEXT("UAnimTextureFactory"), &Z_Registration_Info_UClass_UAnimTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimTextureFactory), 470267071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTextureEditor_Public_AnimTextureFactory_h_907132090(TEXT("/Script/AnimTextureEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTextureEditor_Public_AnimTextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTextureEditor_Public_AnimTextureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
