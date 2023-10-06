// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGAME001_BaseRifle_generated_h
#error "BaseRifle.generated.h already included, missing '#pragma once' in BaseRifle.h"
#endif
#define UNREALGAME001_BaseRifle_generated_h

#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_SPARSE_DATA
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttack);


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttack);


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseRifle(); \
	friend struct Z_Construct_UClass_ABaseRifle_Statics; \
public: \
	DECLARE_CLASS(ABaseRifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(ABaseRifle)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseRifle(); \
	friend struct Z_Construct_UClass_ABaseRifle_Statics; \
public: \
	DECLARE_CLASS(ABaseRifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(ABaseRifle)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseRifle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseRifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseRifle(ABaseRifle&&); \
	NO_API ABaseRifle(const ABaseRifle&); \
public:


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseRifle(ABaseRifle&&); \
	NO_API ABaseRifle(const ABaseRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseRifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseRifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseRifle)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ABaseRifle, Mesh); } \
	FORCEINLINE static uint32 __PPO__BulletClass() { return STRUCT_OFFSET(ABaseRifle, BulletClass); } \
	FORCEINLINE static uint32 __PPO__SocketName() { return STRUCT_OFFSET(ABaseRifle, SocketName); }


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_10_PROLOG
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_RPC_WRAPPERS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_INCLASS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_INCLASS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME001_API UClass* StaticClass<class ABaseRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealGame001_Source_UnrealGame001_Public_Actors_BaseRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
