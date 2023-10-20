// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame001/Public/Widgets/WidgetHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetHUD() {}
// Cross Module References
	UNREALGAME001_API UClass* Z_Construct_UClass_UWidgetHUD_NoRegister();
	UNREALGAME001_API UClass* Z_Construct_UClass_UWidgetHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UnrealGame001();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UWidgetHUD::StaticRegisterNativesUWidgetHUD()
	{
	}
	UClass* Z_Construct_UClass_UWidgetHUD_NoRegister()
	{
		return UWidgetHUD::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Crosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Crosshair;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame001,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/WidgetHUD.h" },
		{ "ModuleRelativePath", "Public/Widgets/WidgetHUD.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetHUD_Statics::NewProp_Health_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/WidgetHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetHUD_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetHUD, Health), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetHUD_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetHUD_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetHUD_Statics::NewProp_Crosshair_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/WidgetHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetHUD_Statics::NewProp_Crosshair = { "Crosshair", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetHUD, Crosshair), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetHUD_Statics::NewProp_Crosshair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetHUD_Statics::NewProp_Crosshair_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetHUD_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetHUD_Statics::NewProp_Crosshair,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetHUD_Statics::ClassParams = {
		&UWidgetHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetHUD, 776541401);
	template<> UNREALGAME001_API UClass* StaticClass<UWidgetHUD>()
	{
		return UWidgetHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetHUD(Z_Construct_UClass_UWidgetHUD, &UWidgetHUD::StaticClass, TEXT("/Script/UnrealGame001"), TEXT("UWidgetHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
