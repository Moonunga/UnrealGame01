// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame001/Public/Actors/DamagePickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamagePickup() {}
// Cross Module References
	UNREALGAME001_API UClass* Z_Construct_UClass_ADamagePickup_NoRegister();
	UNREALGAME001_API UClass* Z_Construct_UClass_ADamagePickup();
	UNREALGAME001_API UClass* Z_Construct_UClass_ABasePickup();
	UPackage* Z_Construct_UPackage__Script_UnrealGame001();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void ADamagePickup::StaticRegisterNativesADamagePickup()
	{
	}
	UClass* Z_Construct_UClass_ADamagePickup_NoRegister()
	{
		return ADamagePickup::StaticClass();
	}
	struct Z_Construct_UClass_ADamagePickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamagePickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasePickup,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame001,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamagePickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actors/DamagePickup.h" },
		{ "ModuleRelativePath", "Public/Actors/DamagePickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamagePickup_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "DamagePickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/DamagePickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADamagePickup_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamagePickup, ParticleSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADamagePickup_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamagePickup_Statics::NewProp_ParticleSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADamagePickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamagePickup_Statics::NewProp_ParticleSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamagePickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamagePickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADamagePickup_Statics::ClassParams = {
		&ADamagePickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADamagePickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADamagePickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADamagePickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADamagePickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADamagePickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADamagePickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADamagePickup, 802881208);
	template<> UNREALGAME001_API UClass* StaticClass<ADamagePickup>()
	{
		return ADamagePickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADamagePickup(Z_Construct_UClass_ADamagePickup, &ADamagePickup::StaticClass, TEXT("/Script/UnrealGame001"), TEXT("ADamagePickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamagePickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
