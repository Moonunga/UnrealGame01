// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGAME001_PickupInterface_generated_h
#error "PickupInterface.generated.h already included, missing '#pragma once' in PickupInterface.h"
#endif
#define UNREALGAME001_PickupInterface_generated_h

#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_SPARSE_DATA
#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPickupHealth);


#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickupHealth);


#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALGAME001_API UPickupInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALGAME001_API, UPickupInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALGAME001_API UPickupInterface(UPickupInterface&&); \
	UNREALGAME001_API UPickupInterface(const UPickupInterface&); \
public:


#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALGAME001_API UPickupInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALGAME001_API UPickupInterface(UPickupInterface&&); \
	UNREALGAME001_API UPickupInterface(const UPickupInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALGAME001_API, UPickupInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupInterface)


#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPickupInterface(); \
	friend struct Z_Construct_UClass_UPickupInterface_Statics; \
public: \
	DECLARE_CLASS(UPickupInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnrealGame001"), UNREALGAME001_API) \
	DECLARE_SERIALIZER(UPickupInterface)


#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_GENERATED_UINTERFACE_BODY() \
	UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_GENERATED_UINTERFACE_BODY() \
	UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickupInterface() {} \
public: \
	typedef UPickupInterface UClassType; \
	typedef IPickupInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPickupInterface() {} \
public: \
	typedef UPickupInterface UClassType; \
	typedef IPickupInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_10_PROLOG
#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_RPC_WRAPPERS \
	UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME001_API UClass* StaticClass<class UPickupInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealGame001_Source_UnrealGame001_Public_Interfaces_PickupInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
