// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame001/Public/FireAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireAnimNotify() {}
// Cross Module References
	UNREALGAME001_API UClass* Z_Construct_UClass_UFireAnimNotify_NoRegister();
	UNREALGAME001_API UClass* Z_Construct_UClass_UFireAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_UnrealGame001();
// End Cross Module References
	void UFireAnimNotify::StaticRegisterNativesUFireAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UFireAnimNotify_NoRegister()
	{
		return UFireAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UFireAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame001,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FireAnimNotify.h" },
		{ "ModuleRelativePath", "Public/FireAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireAnimNotify_Statics::ClassParams = {
		&UFireAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFireAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireAnimNotify, 1058237675);
	template<> UNREALGAME001_API UClass* StaticClass<UFireAnimNotify>()
	{
		return UFireAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireAnimNotify(Z_Construct_UClass_UFireAnimNotify, &UFireAnimNotify::StaticClass, TEXT("/Script/UnrealGame001"), TEXT("UFireAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
