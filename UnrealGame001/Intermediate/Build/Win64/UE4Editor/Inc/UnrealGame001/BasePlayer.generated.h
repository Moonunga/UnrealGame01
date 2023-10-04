// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGAME001_BasePlayer_generated_h
#error "BasePlayer.generated.h already included, missing '#pragma once' in BasePlayer.h"
#endif
#define UNREALGAME001_BasePlayer_generated_h

#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_SPARSE_DATA
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_RPC_WRAPPERS
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public:


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayer)


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ABasePlayer, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ABasePlayer, Camera); }


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_13_PROLOG
#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_RPC_WRAPPERS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_INCLASS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_INCLASS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME001_API UClass* StaticClass<class ABasePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealGame001_Source_UnrealGame001_Public_Actors_BasePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
