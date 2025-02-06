// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimTexture/Public/AnimTextureFuncLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimTextureFuncLib() {}
// Cross Module References
	ANIMTEXTURE_API UClass* Z_Construct_UClass_UAnimTexture2D_NoRegister();
	ANIMTEXTURE_API UClass* Z_Construct_UClass_UAnimTextureFuncLib();
	ANIMTEXTURE_API UClass* Z_Construct_UClass_UAnimTextureFuncLib_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AnimTexture();
// End Cross Module References
	DEFINE_FUNCTION(UAnimTextureFuncLib::execLoadAnimTextureFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimTexture2D**)Z_Param__Result=UAnimTextureFuncLib::LoadAnimTextureFromFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	void UAnimTextureFuncLib::StaticRegisterNativesUAnimTextureFuncLib()
	{
		UClass* Class = UAnimTextureFuncLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadAnimTextureFromFile", &UAnimTextureFuncLib::execLoadAnimTextureFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics
	{
		struct AnimTextureFuncLib_eventLoadAnimTextureFromFile_Parms
		{
			FString FilePath;
			UAnimTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimTextureFuncLib_eventLoadAnimTextureFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::NewProp_FilePath_MetaData), Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::NewProp_FilePath_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimTextureFuncLib_eventLoadAnimTextureFromFile_Parms, ReturnValue), Z_Construct_UClass_UAnimTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTextureFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimTextureFuncLib, nullptr, "LoadAnimTextureFromFile", nullptr, nullptr, Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::AnimTextureFuncLib_eventLoadAnimTextureFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::AnimTextureFuncLib_eventLoadAnimTextureFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimTextureFuncLib);
	UClass* Z_Construct_UClass_UAnimTextureFuncLib_NoRegister()
	{
		return UAnimTextureFuncLib::StaticClass();
	}
	struct Z_Construct_UClass_UAnimTextureFuncLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimTextureFuncLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimTexture,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTextureFuncLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimTextureFuncLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimTextureFuncLib_LoadAnimTextureFromFile, "LoadAnimTextureFromFile" }, // 907838625
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTextureFuncLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTextureFuncLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimTextureFuncLib.h" },
		{ "ModuleRelativePath", "Public/AnimTextureFuncLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimTextureFuncLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimTextureFuncLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimTextureFuncLib_Statics::ClassParams = {
		&UAnimTextureFuncLib::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTextureFuncLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimTextureFuncLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimTextureFuncLib()
	{
		if (!Z_Registration_Info_UClass_UAnimTextureFuncLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimTextureFuncLib.OuterSingleton, Z_Construct_UClass_UAnimTextureFuncLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimTextureFuncLib.OuterSingleton;
	}
	template<> ANIMTEXTURE_API UClass* StaticClass<UAnimTextureFuncLib>()
	{
		return UAnimTextureFuncLib::StaticClass();
	}
	UAnimTextureFuncLib::UAnimTextureFuncLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimTextureFuncLib);
	UAnimTextureFuncLib::~UAnimTextureFuncLib() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTextureFuncLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTextureFuncLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimTextureFuncLib, UAnimTextureFuncLib::StaticClass, TEXT("UAnimTextureFuncLib"), &Z_Registration_Info_UClass_UAnimTextureFuncLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimTextureFuncLib), 3915433910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTextureFuncLib_h_1738982672(TEXT("/Script/AnimTexture"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTextureFuncLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTextureFuncLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
