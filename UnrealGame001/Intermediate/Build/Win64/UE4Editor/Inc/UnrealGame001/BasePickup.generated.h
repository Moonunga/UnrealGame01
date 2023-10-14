// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UNREALGAME001_BasePickup_generated_h
#error "BasePickup.generated.h already included, missing '#pragma once' in BasePickup.h"
#endif
#define UNREALGAME001_BasePickup_generated_h

#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_SPARSE_DATA
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap);


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePickup(); \
	friend struct Z_Construct_UClass_ABasePickup_Statics; \
public: \
	DECLARE_CLASS(ABasePickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(ABasePickup)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABasePickup(); \
	friend struct Z_Construct_UClass_ABasePickup_Statics; \
public: \
	DECLARE_CLASS(ABasePickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(ABasePickup)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePickup(ABasePickup&&); \
	NO_API ABasePickup(const ABasePickup&); \
public:


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePickup(ABasePickup&&); \
	NO_API ABasePickup(const ABasePickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePickup)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__boxCollision() { return STRUCT_OFFSET(ABasePickup, boxCollision); }


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_9_PROLOG
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_RPC_WRAPPERS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_INCLASS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_INCLASS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME001_API UClass* StaticClass<class ABasePickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealGame001_Source_UnrealGame001_Public_Actors_BasePickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
