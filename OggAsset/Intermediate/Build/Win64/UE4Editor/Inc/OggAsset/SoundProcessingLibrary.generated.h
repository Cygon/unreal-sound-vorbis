// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
#ifdef OGGASSET_SoundProcessingLibrary_generated_h
#error "SoundProcessingLibrary.generated.h already included, missing '#pragma once' in SoundProcessingLibrary.h"
#endif
#define OGGASSET_SoundProcessingLibrary_generated_h

#define Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadOggFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=USoundProcessingLibrary::LoadOggFile(Z_Param_InFilePath); \
		P_NATIVE_END; \
	}


#define Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadOggFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=USoundProcessingLibrary::LoadOggFile(Z_Param_InFilePath); \
		P_NATIVE_END; \
	}


#define Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUSoundProcessingLibrary(); \
	friend OGGASSET_API class UClass* Z_Construct_UClass_USoundProcessingLibrary(); \
	public: \
	DECLARE_CLASS(USoundProcessingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OggAsset"), NO_API) \
	DECLARE_SERIALIZER(USoundProcessingLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_INCLASS \
	private: \
	static void StaticRegisterNativesUSoundProcessingLibrary(); \
	friend OGGASSET_API class UClass* Z_Construct_UClass_USoundProcessingLibrary(); \
	public: \
	DECLARE_CLASS(USoundProcessingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OggAsset"), NO_API) \
	DECLARE_SERIALIZER(USoundProcessingLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundProcessingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundProcessingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundProcessingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundProcessingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundProcessingLibrary(USoundProcessingLibrary&&); \
	NO_API USoundProcessingLibrary(const USoundProcessingLibrary&); \
public:


#define Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundProcessingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundProcessingLibrary(USoundProcessingLibrary&&); \
	NO_API USoundProcessingLibrary(const USoundProcessingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundProcessingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundProcessingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundProcessingLibrary)


#define Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_16_PROLOG
#define Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_RPC_WRAPPERS \
	Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_INCLASS \
	Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_INCLASS_NO_PURE_DECLS \
	Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chrono_Rhythm_Plugins_OggAsset_Source_OggAsset_Public_SoundProcessingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
