// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGAME001_ButtonWithText_generated_h
#error "ButtonWithText.generated.h already included, missing '#pragma once' in ButtonWithText.h"
#endif
#define UNREALGAME001_ButtonWithText_generated_h

#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_13_DELEGATE \
static inline void FButtonDelegate_DelegateWrapper(const FMulticastScriptDelegate& ButtonDelegate) \
{ \
	ButtonDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_SPARSE_DATA
#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbroadcast);


#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbroadcast);


#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUButtonWithText(); \
	friend struct Z_Construct_UClass_UButtonWithText_Statics; \
public: \
	DECLARE_CLASS(UButtonWithText, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(UButtonWithText)


#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUButtonWithText(); \
	friend struct Z_Construct_UClass_UButtonWithText_Statics; \
public: \
	DECLARE_CLASS(UButtonWithText, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealGame001"), NO_API) \
	DECLARE_SERIALIZER(UButtonWithText)


#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UButtonWithText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButtonWithText) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UButtonWithText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButtonWithText); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UButtonWithText(UButtonWithText&&); \
	NO_API UButtonWithText(const UButtonWithText&); \
public:


#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UButtonWithText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UButtonWithText(UButtonWithText&&); \
	NO_API UButtonWithText(const UButtonWithText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UButtonWithText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UButtonWithText); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UButtonWithText)


#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__setText() { return STRUCT_OFFSET(UButtonWithText, setText); } \
	FORCEINLINE static uint32 __PPO__Information() { return STRUCT_OFFSET(UButtonWithText, Information); }


#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_15_PROLOG
#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_RPC_WRAPPERS \
	UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_INCLASS \
	UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_SPARSE_DATA \
	UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_INCLASS_NO_PURE_DECLS \
	UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME001_API UClass* StaticClass<class UButtonWithText>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealGame001_Source_UnrealGame001_Public_Widgets_ButtonWithText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
