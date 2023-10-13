// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame001/Public/Actors/BaseAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAI() {}
// Cross Module References
	UNREALGAME001_API UClass* Z_Construct_UClass_ABaseAI_NoRegister();
	UNREALGAME001_API UClass* Z_Construct_UClass_ABaseAI();
	UNREALGAME001_API UClass* Z_Construct_UClass_ABaseCharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealGame001();
// End Cross Module References
	void ABaseAI::StaticRegisterNativesABaseAI()
	{
	}
	UClass* Z_Construct_UClass_ABaseAI_NoRegister()
	{
		return ABaseAI::StaticClass();
	}
	struct Z_Construct_UClass_ABaseAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame001,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/BaseAI.h" },
		{ "ModuleRelativePath", "Public/Actors/BaseAI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseAI_Statics::ClassParams = {
		&ABaseAI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseAI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseAI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseAI, 2063828458);
	template<> UNREALGAME001_API UClass* StaticClass<ABaseAI>()
	{
		return ABaseAI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseAI(Z_Construct_UClass_ABaseAI, &ABaseAI::StaticClass, TEXT("/Script/UnrealGame001"), TEXT("ABaseAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
