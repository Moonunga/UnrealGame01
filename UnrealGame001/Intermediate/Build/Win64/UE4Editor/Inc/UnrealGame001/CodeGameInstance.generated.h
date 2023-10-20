// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGAME001_CodeGameInstance_generated_h
#error "CodeGameInstance.generated.h already included, missing '#pragma once' in CodeGameInstance.h"
#endif
#define UNREALGAME001_CodeGameInstance_generated_h

#define UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_SPARSE_DATA
#define UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execLoadFirstLevel);


#define UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execLoadFirstLevel);


#define UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCodeGameInstance(); \
	friend struct Z_Construct_UClass_UCodeGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCodeGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(UCodeGameInstance)


#define UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCodeGameInstance(); \
	friend struct Z_Construct_UClass_UCodeGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCodeGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(UCodeGameInstance)


#define UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCodeGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCodeGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCodeGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCodeGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCodeGameInstance(UCodeGameInstance&&); \
	NO_API UCodeGameInstance(const UCodeGameInstance&); \
public:


#define UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCodeGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCodeGameInstance(UCodeGameInstance&&); \
	NO_API UCodeGameInstance(const UCodeGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCodeGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCodeGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCodeGameInstance)


#define UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_12_PROLOG
#define UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_RPC_WRAPPERS \
	UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_INCLASS \
	UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME001_API UClass* StaticClass<class UCodeGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealGame001_Source_UnrealGame001_Public_CodeGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
