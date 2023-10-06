// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGAME001_BaseCharacterEventGraph_generated_h
#error "BaseCharacterEventGraph.generated.h already included, missing '#pragma once' in BaseCharacterEventGraph.h"
#endif
#define UNREALGAME001_BaseCharacterEventGraph_generated_h

#define UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_SPARSE_DATA
#define UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireAnimation); \
	DECLARE_FUNCTION(execPersonaUpdate);


#define UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireAnimation); \
	DECLARE_FUNCTION(execPersonaUpdate);


#define UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseCharacterEventGraph(); \
	friend struct Z_Construct_UClass_UBaseCharacterEventGraph_Statics; \
public: \
	DECLARE_CLASS(UBaseCharacterEventGraph, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(UBaseCharacterEventGraph)


#define UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBaseCharacterEventGraph(); \
	friend struct Z_Construct_UClass_UBaseCharacterEventGraph_Statics; \
public: \
	DECLARE_CLASS(UBaseCharacterEventGraph, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(UBaseCharacterEventGraph)


#define UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseCharacterEventGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseCharacterEventGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseCharacterEventGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCharacterEventGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseCharacterEventGraph(UBaseCharacterEventGraph&&); \
	NO_API UBaseCharacterEventGraph(const UBaseCharacterEventGraph&); \
public:


#define UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseCharacterEventGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseCharacterEventGraph(UBaseCharacterEventGraph&&); \
	NO_API UBaseCharacterEventGraph(const UBaseCharacterEventGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseCharacterEventGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCharacterEventGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseCharacterEventGraph)


#define UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UBaseCharacterEventGraph, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UBaseCharacterEventGraph, Direction); } \
	FORCEINLINE static uint32 __PPO__DebugFire() { return STRUCT_OFFSET(UBaseCharacterEventGraph, DebugFire); } \
	FORCEINLINE static uint32 __PPO__ActionSlotName() { return STRUCT_OFFSET(UBaseCharacterEventGraph, ActionSlotName); } \
	FORCEINLINE static uint32 __PPO__FireAsset() { return STRUCT_OFFSET(UBaseCharacterEventGraph, FireAsset); }


#define UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_12_PROLOG
#define UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_RPC_WRAPPERS \
	UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_INCLASS \
	UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_INCLASS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME001_API UClass* StaticClass<class UBaseCharacterEventGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealGame001_Source_UnrealGame001_Public_Core_BaseCharacterEventGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
