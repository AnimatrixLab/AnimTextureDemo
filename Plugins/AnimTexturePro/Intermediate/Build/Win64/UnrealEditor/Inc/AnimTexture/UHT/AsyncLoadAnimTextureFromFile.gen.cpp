// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimTexture/Public/AsyncLoadAnimTextureFromFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncLoadAnimTextureFromFile() {}
// Cross Module References
	ANIMTEXTURE_API UClass* Z_Construct_UClass_UAsyncLoadAnimTextureFromFile();
	ANIMTEXTURE_API UClass* Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_NoRegister();
	ANIMTEXTURE_API UFunction* Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature();
	ANIMTEXTURE_API UFunction* Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_AnimTexture();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncLoadAnimTextureFromFile::execAsyncLoadAnimTextureFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncLoadAnimTextureFromFile**)Z_Param__Result=UAsyncLoadAnimTextureFromFile::AsyncLoadAnimTextureFromFile(Z_Param_Path);
		P_NATIVE_END;
	}
	void UAsyncLoadAnimTextureFromFile::StaticRegisterNativesUAsyncLoadAnimTextureFromFile()
	{
		UClass* Class = UAsyncLoadAnimTextureFromFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadAnimTextureFromFile", &UAsyncLoadAnimTextureFromFile::execAsyncLoadAnimTextureFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics
	{
		struct AsyncLoadAnimTextureFromFile_eventAsyncLoadAnimTextureFromFile_Parms
		{
			FString Path;
			UAsyncLoadAnimTextureFromFile* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadAnimTextureFromFile_eventAsyncLoadAnimTextureFromFile_Parms, Path), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLoadAnimTextureFromFile_eventAsyncLoadAnimTextureFromFile_Parms, ReturnValue), Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AsyncLoadAnimTextureFromFile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncLoadAnimTextureFromFile, nullptr, "AsyncLoadAnimTextureFromFile", nullptr, nullptr, Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::AsyncLoadAnimTextureFromFile_eventAsyncLoadAnimTextureFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::AsyncLoadAnimTextureFromFile_eventAsyncLoadAnimTextureFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncLoadAnimTextureFromFile);
	UClass* Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_NoRegister()
	{
		return UAsyncLoadAnimTextureFromFile::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimTexture,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLoadAnimTextureFromFile_AsyncLoadAnimTextureFromFile, "AsyncLoadAnimTextureFromFile" }, // 4134417136
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncLoadAnimTextureFromFile.h" },
		{ "ModuleRelativePath", "Public/AsyncLoadAnimTextureFromFile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::NewProp_OnLoaded_MetaData[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AsyncLoadAnimTextureFromFile.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::NewProp_OnLoaded = { "OnLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadAnimTextureFromFile, OnLoaded), Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::NewProp_OnLoaded_MetaData), Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::NewProp_OnLoaded_MetaData) }; // 2942224290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::NewProp_OnError_MetaData[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AsyncLoadAnimTextureFromFile.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLoadAnimTextureFromFile, OnError), Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::NewProp_OnError_MetaData), Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::NewProp_OnError_MetaData) }; // 1412307374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::NewProp_OnLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLoadAnimTextureFromFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::ClassParams = {
		&UAsyncLoadAnimTextureFromFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAsyncLoadAnimTextureFromFile()
	{
		if (!Z_Registration_Info_UClass_UAsyncLoadAnimTextureFromFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncLoadAnimTextureFromFile.OuterSingleton, Z_Construct_UClass_UAsyncLoadAnimTextureFromFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncLoadAnimTextureFromFile.OuterSingleton;
	}
	template<> ANIMTEXTURE_API UClass* StaticClass<UAsyncLoadAnimTextureFromFile>()
	{
		return UAsyncLoadAnimTextureFromFile::StaticClass();
	}
	UAsyncLoadAnimTextureFromFile::UAsyncLoadAnimTextureFromFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLoadAnimTextureFromFile);
	UAsyncLoadAnimTextureFromFile::~UAsyncLoadAnimTextureFromFile() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AsyncLoadAnimTextureFromFile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AsyncLoadAnimTextureFromFile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncLoadAnimTextureFromFile, UAsyncLoadAnimTextureFromFile::StaticClass, TEXT("UAsyncLoadAnimTextureFromFile"), &Z_Registration_Info_UClass_UAsyncLoadAnimTextureFromFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncLoadAnimTextureFromFile), 3183918036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AsyncLoadAnimTextureFromFile_h_290351169(TEXT("/Script/AnimTexture"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AsyncLoadAnimTextureFromFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AsyncLoadAnimTextureFromFile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
