// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimTexture2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimTexture2D;
#ifdef ANIMTEXTURE_AnimTexture2D_generated_h
#error "AnimTexture2D.generated.h already included, missing '#pragma once' in AnimTexture2D.h"
#endif
#define ANIMTEXTURE_AnimTexture2D_generated_h

#define FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_18_DELEGATE \
ANIMTEXTURE_API void FOnAnimTextureLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAnimTextureLoadedDelegate, UAnimTexture2D* AnimTexture);


#define FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_19_DELEGATE \
ANIMTEXTURE_API void FOnAnimTextureErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAnimTextureErrorDelegate);


#define FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_SPARSE_DATA
#define FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimDuration); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay);


#define FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_ACCESSORS
#define FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimTexture2D(); \
	friend struct Z_Construct_UClass_UAnimTexture2D_Statics; \
public: \
	DECLARE_CLASS(UAnimTexture2D, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimTexture"), NO_API) \
	DECLARE_SERIALIZER(UAnimTexture2D)


#define FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimTexture2D(UAnimTexture2D&&); \
	NO_API UAnimTexture2D(const UAnimTexture2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimTexture2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimTexture2D) \
	NO_API virtual ~UAnimTexture2D();


#define FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_26_PROLOG
#define FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_SPARSE_DATA \
	FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_ACCESSORS \
	FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMTEXTURE_API UClass* StaticClass<class UAnimTexture2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_AnimTexturePro_Source_AnimTexture_Public_AnimTexture2D_h


#define FOREACH_ENUM_EANIMDECODERTYPE(op) \
	op(EAnimDecoderType::None) \
	op(EAnimDecoderType::Gif) \
	op(EAnimDecoderType::Webp) 

enum class EAnimDecoderType : uint8;
template<> struct TIsUEnumClass<EAnimDecoderType> { enum { Value = true }; };
template<> ANIMTEXTURE_API UEnum* StaticEnum<EAnimDecoderType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
