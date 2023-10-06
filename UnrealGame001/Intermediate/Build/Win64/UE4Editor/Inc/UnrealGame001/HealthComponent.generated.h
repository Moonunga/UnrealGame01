// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef UNREALGAME001_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define UNREALGAME001_HealthComponent_generated_h

#define UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_SPARSE_DATA
#define UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage);


#define UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage);


#define UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(UHealthComponent, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(UHealthComponent, MaxHealth); }


#define UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_10_PROLOG
#define UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_RPC_WRAPPERS \
	UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_INCLASS \
	UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME001_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealGame001_Source_UnrealGame001_Public_Components_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
