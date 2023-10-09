// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGAME001_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define UNREALGAME001_BaseCharacter_generated_h

#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_SPARSE_DATA
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_RPC_WRAPPERS
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponChildActorComponent() { return STRUCT_OFFSET(ABaseCharacter, WeaponChildActorComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponClass() { return STRUCT_OFFSET(ABaseCharacter, WeaponClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(ABaseCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__AnimBP() { return STRUCT_OFFSET(ABaseCharacter, AnimBP); } \
	FORCEINLINE static uint32 __PPO__HealthComponent() { return STRUCT_OFFSET(ABaseCharacter, HealthComponent); }


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_9_PROLOG
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_RPC_WRAPPERS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_INCLASS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME001_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealGame001_Source_UnrealGame001_Public_Actors_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
