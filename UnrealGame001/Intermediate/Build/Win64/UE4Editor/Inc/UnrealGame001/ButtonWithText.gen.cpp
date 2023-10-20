// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame001/Public/Widgets/ButtonWithText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonWithText() {}
// Cross Module References
	UNREALGAME001_API UFunction* Z_Construct_UDelegateFunction_UnrealGame001_ButtonDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealGame001();
	UNREALGAME001_API UClass* Z_Construct_UClass_UButtonWithText_NoRegister();
	UNREALGAME001_API UClass* Z_Construct_UClass_UButtonWithText();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnrealGame001_ButtonDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealGame001_ButtonDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWithText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealGame001_ButtonDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealGame001, nullptr, "ButtonDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealGame001_ButtonDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGame001_ButtonDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnrealGame001_ButtonDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UnrealGame001_ButtonDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UButtonWithText::execbroadcast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->broadcast();
		P_NATIVE_END;
	}
	void UButtonWithText::StaticRegisterNativesUButtonWithText()
	{
		UClass* Class = UButtonWithText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "broadcast", &UButtonWithText::execbroadcast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UButtonWithText_broadcast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UButtonWithText_broadcast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/ButtonWithText.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UButtonWithText_broadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UButtonWithText, nullptr, "broadcast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UButtonWithText_broadcast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UButtonWithText_broadcast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UButtonWithText_broadcast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UButtonWithText_broadcast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UButtonWithText_NoRegister()
	{
		return UButtonWithText::StaticClass();
	}
	struct Z_Construct_UClass_UButtonWithText_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_setText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_setText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Information_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Information;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackGroundButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackGroundButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UButtonWithText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame001,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UButtonWithText_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UButtonWithText_broadcast, "broadcast" }, // 474313011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWithText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/ButtonWithText.h" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWithText.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWithText_Statics::NewProp_setText_MetaData[] = {
		{ "Category", "ButtonWithText" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWithText.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UButtonWithText_Statics::NewProp_setText = { "setText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonWithText, setText), METADATA_PARAMS(Z_Construct_UClass_UButtonWithText_Statics::NewProp_setText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWithText_Statics::NewProp_setText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWithText_Statics::NewProp_Information_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ButtonWithText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWithText.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UButtonWithText_Statics::NewProp_Information = { "Information", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonWithText, Information), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UButtonWithText_Statics::NewProp_Information_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWithText_Statics::NewProp_Information_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWithText_Statics::NewProp_BackGroundButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ButtonWithText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/ButtonWithText.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UButtonWithText_Statics::NewProp_BackGroundButton = { "BackGroundButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonWithText, BackGroundButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UButtonWithText_Statics::NewProp_BackGroundButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWithText_Statics::NewProp_BackGroundButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWithText_Statics::NewProp_OnButtonClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/ButtonWithText.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UButtonWithText_Statics::NewProp_OnButtonClicked = { "OnButtonClicked", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonWithText, OnButtonClicked), Z_Construct_UDelegateFunction_UnrealGame001_ButtonDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UButtonWithText_Statics::NewProp_OnButtonClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWithText_Statics::NewProp_OnButtonClicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonWithText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWithText_Statics::NewProp_setText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWithText_Statics::NewProp_Information,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWithText_Statics::NewProp_BackGroundButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWithText_Statics::NewProp_OnButtonClicked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UButtonWithText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonWithText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UButtonWithText_Statics::ClassParams = {
		&UButtonWithText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UButtonWithText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWithText_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UButtonWithText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWithText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UButtonWithText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UButtonWithText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UButtonWithText, 2025817474);
	template<> UNREALGAME001_API UClass* StaticClass<UButtonWithText>()
	{
		return UButtonWithText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UButtonWithText(Z_Construct_UClass_UButtonWithText, &UButtonWithText::StaticClass, TEXT("/Script/UnrealGame001"), TEXT("UButtonWithText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonWithText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
