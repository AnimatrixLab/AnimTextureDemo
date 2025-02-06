// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimTexture/Public/AnimTexture2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimTexture2D() {}
// Cross Module References
	ANIMTEXTURE_API UClass* Z_Construct_UClass_UAnimTexture2D();
	ANIMTEXTURE_API UClass* Z_Construct_UClass_UAnimTexture2D_NoRegister();
	ANIMTEXTURE_API UEnum* Z_Construct_UEnum_AnimTexture_EAnimDecoderType();
	ANIMTEXTURE_API UFunction* Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature();
	ANIMTEXTURE_API UFunction* Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	UPackage* Z_Construct_UPackage__Script_AnimTexture();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimDecoderType;
	static UEnum* EAnimDecoderType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimDecoderType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimDecoderType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimTexture_EAnimDecoderType, (UObject*)Z_Construct_UPackage__Script_AnimTexture(), TEXT("EAnimDecoderType"));
		}
		return Z_Registration_Info_UEnum_EAnimDecoderType.OuterSingleton;
	}
	template<> ANIMTEXTURE_API UEnum* StaticEnum<EAnimDecoderType>()
	{
		return EAnimDecoderType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimTexture_EAnimDecoderType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimTexture_EAnimDecoderType_Statics::Enumerators[] = {
		{ "EAnimDecoderType::None", (int64)EAnimDecoderType::None },
		{ "EAnimDecoderType::Gif", (int64)EAnimDecoderType::Gif },
		{ "EAnimDecoderType::Webp", (int64)EAnimDecoderType::Webp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimTexture_EAnimDecoderType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gif.Name", "EAnimDecoderType::Gif" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
		{ "None.Name", "EAnimDecoderType::None" },
		{ "Webp.Name", "EAnimDecoderType::Webp" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimTexture_EAnimDecoderType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimTexture,
		nullptr,
		"EAnimDecoderType",
		"EAnimDecoderType",
		Z_Construct_UEnum_AnimTexture_EAnimDecoderType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimTexture_EAnimDecoderType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimTexture_EAnimDecoderType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimTexture_EAnimDecoderType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AnimTexture_EAnimDecoderType()
	{
		if (!Z_Registration_Info_UEnum_EAnimDecoderType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimDecoderType.InnerSingleton, Z_Construct_UEnum_AnimTexture_EAnimDecoderType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimDecoderType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics
	{
		struct _Script_AnimTexture_eventOnAnimTextureLoadedDelegate_Parms
		{
			UAnimTexture2D* AnimTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::NewProp_AnimTexture = { "AnimTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AnimTexture_eventOnAnimTextureLoadedDelegate_Parms, AnimTexture), Z_Construct_UClass_UAnimTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::NewProp_AnimTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnimTexture, nullptr, "OnAnimTextureLoadedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::_Script_AnimTexture_eventOnAnimTextureLoadedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::_Script_AnimTexture_eventOnAnimTextureLoadedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureLoadedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAnimTextureLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAnimTextureLoadedDelegate, UAnimTexture2D* AnimTexture)
{
	struct _Script_AnimTexture_eventOnAnimTextureLoadedDelegate_Parms
	{
		UAnimTexture2D* AnimTexture;
	};
	_Script_AnimTexture_eventOnAnimTextureLoadedDelegate_Parms Parms;
	Parms.AnimTexture=AnimTexture;
	OnAnimTextureLoadedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnimTexture, nullptr, "OnAnimTextureErrorDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnimTexture_OnAnimTextureErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAnimTextureErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAnimTextureErrorDelegate)
{
	OnAnimTextureErrorDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAnimTexture2D::execGetAnimDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimTexture2D::execGetPlayRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimTexture2D::execSetPlayRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_NewRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimTexture2D::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimTexture2D::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_bNewLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLooping(Z_Param_bNewLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimTexture2D::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimTexture2D::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimTexture2D::execPlayFromStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFromStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimTexture2D::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	void UAnimTexture2D::StaticRegisterNativesUAnimTexture2D()
	{
		UClass* Class = UAnimTexture2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimDuration", &UAnimTexture2D::execGetAnimDuration },
			{ "GetPlayRate", &UAnimTexture2D::execGetPlayRate },
			{ "IsLooping", &UAnimTexture2D::execIsLooping },
			{ "IsPlaying", &UAnimTexture2D::execIsPlaying },
			{ "Play", &UAnimTexture2D::execPlay },
			{ "PlayFromStart", &UAnimTexture2D::execPlayFromStart },
			{ "SetLooping", &UAnimTexture2D::execSetLooping },
			{ "SetPlayRate", &UAnimTexture2D::execSetPlayRate },
			{ "Stop", &UAnimTexture2D::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics
	{
		struct AnimTexture2D_eventGetAnimDuration_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimTexture2D_eventGetAnimDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimTexture2D, nullptr, "GetAnimDuration", nullptr, nullptr, Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::AnimTexture2D_eventGetAnimDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::AnimTexture2D_eventGetAnimDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics
	{
		struct AnimTexture2D_eventGetPlayRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimTexture2D_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimTexture2D, nullptr, "GetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::AnimTexture2D_eventGetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::AnimTexture2D_eventGetPlayRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimTexture2D_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimTexture2D_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics
	{
		struct AnimTexture2D_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimTexture2D_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimTexture2D_eventIsLooping_Parms), &Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimTexture2D, nullptr, "IsLooping", nullptr, nullptr, Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::AnimTexture2D_eventIsLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::AnimTexture2D_eventIsLooping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimTexture2D_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimTexture2D_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics
	{
		struct AnimTexture2D_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimTexture2D_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimTexture2D_eventIsPlaying_Parms), &Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimTexture2D, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::AnimTexture2D_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::AnimTexture2D_eventIsPlaying_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimTexture2D_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimTexture2D_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimTexture2D_Play_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimTexture2D_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimTexture2D_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimTexture2D, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimTexture2D_Play_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimTexture2D_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimTexture2D_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimTexture2D_PlayFromStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimTexture2D_PlayFromStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimTexture2D_PlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimTexture2D, nullptr, "PlayFromStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_PlayFromStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimTexture2D_PlayFromStart_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimTexture2D_PlayFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimTexture2D_PlayFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics
	{
		struct AnimTexture2D_eventSetLooping_Parms
		{
			bool bNewLooping;
		};
		static void NewProp_bNewLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::NewProp_bNewLooping_SetBit(void* Obj)
	{
		((AnimTexture2D_eventSetLooping_Parms*)Obj)->bNewLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::NewProp_bNewLooping = { "bNewLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimTexture2D_eventSetLooping_Parms), &Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::NewProp_bNewLooping_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::NewProp_bNewLooping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimTexture2D, nullptr, "SetLooping", nullptr, nullptr, Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::AnimTexture2D_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::AnimTexture2D_eventSetLooping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimTexture2D_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimTexture2D_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics
	{
		struct AnimTexture2D_eventSetPlayRate_Parms
		{
			float NewRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimTexture2D_eventSetPlayRate_Parms, NewRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::NewProp_NewRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimTexture2D, nullptr, "SetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::AnimTexture2D_eventSetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::AnimTexture2D_eventSetPlayRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimTexture2D_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimTexture2D_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimTexture2D_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimTexture2D_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimTexture2D_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimTexture2D, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimTexture2D_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimTexture2D_Stop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimTexture2D_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimTexture2D_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimTexture2D);
	UClass* Z_Construct_UClass_UAnimTexture2D_NoRegister()
	{
		return UAnimTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_UAnimTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportsTransparency_MetaData[];
#endif
		static void NewProp_SupportsTransparency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportsTransparency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFrameDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFrameDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FileBlob_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileBlob_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FileBlob;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimTexture,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimTexture2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimTexture2D_GetAnimDuration, "GetAnimDuration" }, // 1840538078
		{ &Z_Construct_UFunction_UAnimTexture2D_GetPlayRate, "GetPlayRate" }, // 1855721686
		{ &Z_Construct_UFunction_UAnimTexture2D_IsLooping, "IsLooping" }, // 18566935
		{ &Z_Construct_UFunction_UAnimTexture2D_IsPlaying, "IsPlaying" }, // 2776789020
		{ &Z_Construct_UFunction_UAnimTexture2D_Play, "Play" }, // 603873550
		{ &Z_Construct_UFunction_UAnimTexture2D_PlayFromStart, "PlayFromStart" }, // 4011772145
		{ &Z_Construct_UFunction_UAnimTexture2D_SetLooping, "SetLooping" }, // 727420094
		{ &Z_Construct_UFunction_UAnimTexture2D_SetPlayRate, "SetPlayRate" }, // 2711009260
		{ &Z_Construct_UFunction_UAnimTexture2D_Stop, "Stop" }, // 3429041514
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTexture2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AnimTexture" },
		{ "Comment", "/**\n * Animated Texture\n * @see class UTexture2D\n */" },
		{ "IncludePath", "AnimTexture2D.h" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
		{ "ToolTip", "Animated Texture\n@see class UTexture2D" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "AnimTexture" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimTexture2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_AddressX_MetaData), Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_AddressX_MetaData) }; // 2845966638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "AnimTexture" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimTexture2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_AddressY_MetaData), Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_AddressY_MetaData) }; // 2845966638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_SupportsTransparency_MetaData[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	void Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_SupportsTransparency_SetBit(void* Obj)
	{
		((UAnimTexture2D*)Obj)->SupportsTransparency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_SupportsTransparency = { "SupportsTransparency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimTexture2D), &Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_SupportsTransparency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_SupportsTransparency_MetaData), Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_SupportsTransparency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_DefaultFrameDelay_MetaData[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_DefaultFrameDelay = { "DefaultFrameDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimTexture2D, DefaultFrameDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_DefaultFrameDelay_MetaData), Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_DefaultFrameDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "AnimTexture" },
		{ "Comment", "// used while Frame.Delay==0\n" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
		{ "ToolTip", "used while Frame.Delay==0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimTexture2D, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_PlayRate_MetaData), Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "AnimTexture" },
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	void Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UAnimTexture2D*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimTexture2D), &Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_bLooping_MetaData), Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_bLooping_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimTexture2D, FileType), Z_Construct_UEnum_AnimTexture_EAnimDecoderType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileType_MetaData), Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileType_MetaData) }; // 1827956683
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileBlob_Inner = { "FileBlob", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileBlob_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimTexture2D.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileBlob = { "FileBlob", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimTexture2D, FileBlob), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileBlob_MetaData), Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileBlob_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_AddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_AddressY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_SupportsTransparency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_DefaultFrameDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileBlob_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimTexture2D_Statics::NewProp_FileBlob,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimTexture2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimTexture2D_Statics::ClassParams = {
		&UAnimTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimTexture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimTexture2D_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimTexture2D_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimTexture2D()
	{
		if (!Z_Registration_Info_UClass_UAnimTexture2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimTexture2D.OuterSingleton, Z_Construct_UClass_UAnimTexture2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimTexture2D.OuterSingleton;
	}
	template<> ANIMTEXTURE_API UClass* StaticClass<UAnimTexture2D>()
	{
		return UAnimTexture2D::StaticClass();
	}
	UAnimTexture2D::UAnimTexture2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimTexture2D);
	UAnimTexture2D::~UAnimTexture2D() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_Statics::EnumInfo[] = {
		{ EAnimDecoderType_StaticEnum, TEXT("EAnimDecoderType"), &Z_Registration_Info_UEnum_EAnimDecoderType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1827956683U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimTexture2D, UAnimTexture2D::StaticClass, TEXT("UAnimTexture2D"), &Z_Registration_Info_UClass_UAnimTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimTexture2D), 1880933226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_784627949(TEXT("/Script/AnimTexture"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
