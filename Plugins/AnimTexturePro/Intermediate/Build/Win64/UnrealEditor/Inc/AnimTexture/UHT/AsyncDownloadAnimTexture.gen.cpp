// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimTexture/Public/AsyncDownloadAnimTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncDownloadAnimTexture() {}
// Cross Module References
	ANIMTEXTURE_API UClass* Z_Construct_UClass_UAsyncDownloadAnimTexture();
	ANIMTEXTURE_API UClass* Z_Construct_UClass_UAsyncDownloadAnimTexture_NoRegister();
	ANIMTEXTURE_API UFunction* Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature();
	ANIMTEXTURE_API UFunction* Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_AnimTexture();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncDownloadAnimTexture::execAsyncDownloadAnimTexture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncDownloadAnimTexture**)Z_Param__Result=UAsyncDownloadAnimTexture::AsyncDownloadAnimTexture(Z_Param_URL);
		P_NATIVE_END;
	}
	void UAsyncDownloadAnimTexture::StaticRegisterNativesUAsyncDownloadAnimTexture()
	{
		UClass* Class = UAsyncDownloadAnimTexture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncDownloadAnimTexture", &UAsyncDownloadAnimTexture::execAsyncDownloadAnimTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics
	{
		struct AsyncDownloadAnimTexture_eventAsyncDownloadAnimTexture_Parms
		{
			FString URL;
			UAsyncDownloadAnimTexture* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDownloadAnimTexture_eventAsyncDownloadAnimTexture_Parms, URL), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDownloadAnimTexture_eventAsyncDownloadAnimTexture_Parms, ReturnValue), Z_Construct_UClass_UAsyncDownloadAnimTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AsyncDownloadAnimTexture.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncDownloadAnimTexture, nullptr, "AsyncDownloadAnimTexture", nullptr, nullptr, Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::AsyncDownloadAnimTexture_eventAsyncDownloadAnimTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::AsyncDownloadAnimTexture_eventAsyncDownloadAnimTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncDownloadAnimTexture);
	UClass* Z_Construct_UClass_UAsyncDownloadAnimTexture_NoRegister()
	{
		return UAsyncDownloadAnimTexture::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics
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
	UObject* (*const Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimTexture,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncDownloadAnimTexture_AsyncDownloadAnimTexture, "AsyncDownloadAnimTexture" }, // 3241156622
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncDownloadAnimTexture.h" },
		{ "ModuleRelativePath", "Public/AsyncDownloadAnimTexture.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::NewProp_OnLoaded_MetaData[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AsyncDownloadAnimTexture.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::NewProp_OnLoaded = { "OnLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadAnimTexture, OnLoaded), Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::NewProp_OnLoaded_MetaData), Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::NewProp_OnLoaded_MetaData) }; // 2942224290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::NewProp_OnError_MetaData[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AsyncDownloadAnimTexture.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadAnimTexture, OnError), Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::NewProp_OnError_MetaData), Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::NewProp_OnError_MetaData) }; // 1412307374
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::NewProp_OnLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::NewProp_OnError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncDownloadAnimTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::ClassParams = {
		&UAsyncDownloadAnimTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAsyncDownloadAnimTexture()
	{
		if (!Z_Registration_Info_UClass_UAsyncDownloadAnimTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncDownloadAnimTexture.OuterSingleton, Z_Construct_UClass_UAsyncDownloadAnimTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncDownloadAnimTexture.OuterSingleton;
	}
	template<> ANIMTEXTURE_API UClass* StaticClass<UAsyncDownloadAnimTexture>()
	{
		return UAsyncDownloadAnimTexture::StaticClass();
	}
	UAsyncDownloadAnimTexture::UAsyncDownloadAnimTexture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncDownloadAnimTexture);
	UAsyncDownloadAnimTexture::~UAsyncDownloadAnimTexture() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AsyncDownloadAnimTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AsyncDownloadAnimTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncDownloadAnimTexture, UAsyncDownloadAnimTexture::StaticClass, TEXT("UAsyncDownloadAnimTexture"), &Z_Registration_Info_UClass_UAsyncDownloadAnimTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncDownloadAnimTexture), 3358302913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AsyncDownloadAnimTexture_h_2906613500(TEXT("/Script/AnimTexture"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AsyncDownloadAnimTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AsyncDownloadAnimTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
