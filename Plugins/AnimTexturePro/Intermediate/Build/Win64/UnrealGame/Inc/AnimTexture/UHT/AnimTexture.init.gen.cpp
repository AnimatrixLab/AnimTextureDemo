// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimTexture_init() {}
	ANIMTEXTURE_API UFunction* Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature();
	ANIMTEXTURE_API UFunction* Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AnimTexture;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AnimTexture()
	{
		if (!Z_Registration_Info_UPackage__Script_AnimTexture.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AnimTexture",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9C48995E,
				0x2224D5C8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AnimTexture.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AnimTexture.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AnimTexture(Z_Construct_UPackage__Script_AnimTexture, TEXT("/Script/AnimTexture"), Z_Registration_Info_UPackage__Script_AnimTexture, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9C48995E, 0x2224D5C8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
