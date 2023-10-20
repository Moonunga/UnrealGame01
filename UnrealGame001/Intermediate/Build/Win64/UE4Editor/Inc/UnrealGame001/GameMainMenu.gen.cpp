// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame001/Public/Widgets/GameMainMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMainMenu() {}
// Cross Module References
	UNREALGAME001_API UClass* Z_Construct_UClass_UGameMainMenu_NoRegister();
	UNREALGAME001_API UClass* Z_Construct_UClass_UGameMainMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UnrealGame001();
	UNREALGAME001_API UClass* Z_Construct_UClass_UButtonWithText_NoRegister();
// End Cross Module References
	void UGameMainMenu::StaticRegisterNativesUGameMainMenu()
	{
	}
	UClass* Z_Construct_UClass_UGameMainMenu_NoRegister()
	{
		return UGameMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UGameMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_quitButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame001,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMainMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/GameMainMenu.h" },
		{ "ModuleRelativePath", "Public/Widgets/GameMainMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMainMenu_Statics::NewProp_playButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameMainMenu_Statics::NewProp_playButton = { "playButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMainMenu, playButton), Z_Construct_UClass_UButtonWithText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameMainMenu_Statics::NewProp_playButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameMainMenu_Statics::NewProp_playButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMainMenu_Statics::NewProp_quitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GameMainMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameMainMenu_Statics::NewProp_quitButton = { "quitButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMainMenu, quitButton), Z_Construct_UClass_UButtonWithText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameMainMenu_Statics::NewProp_quitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameMainMenu_Statics::NewProp_quitButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMainMenu_Statics::NewProp_playButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMainMenu_Statics::NewProp_quitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameMainMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameMainMenu_Statics::ClassParams = {
		&UGameMainMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameMainMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameMainMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameMainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameMainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameMainMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameMainMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameMainMenu, 515866491);
	template<> UNREALGAME001_API UClass* StaticClass<UGameMainMenu>()
	{
		return UGameMainMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameMainMenu(Z_Construct_UClass_UGameMainMenu, &UGameMainMenu::StaticClass, TEXT("/Script/UnrealGame001"), TEXT("UGameMainMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameMainMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
