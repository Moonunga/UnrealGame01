// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame001/Public/Actors/BaseRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseRifle() {}
// Cross Module References
	UNREALGAME001_API UFunction* Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealGame001();
	UNREALGAME001_API UClass* Z_Construct_UClass_ABaseRifle_NoRegister();
	UNREALGAME001_API UClass* Z_Construct_UClass_ABaseRifle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALGAME001_API UClass* Z_Construct_UClass_ABaseBullet_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature_Statics
	{
		struct _Script_UnrealGame001_eventRifleDelegate_Parms
		{
			float Amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UnrealGame001_eventRifleDelegate_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealGame001, nullptr, "RifleDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_UnrealGame001_eventRifleDelegate_Parms), Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ABaseRifle::execSetDeath)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_junk);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeath(Z_Param_junk);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRifle::execfinishAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->finishAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseRifle::execAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack();
		P_NATIVE_END;
	}
	void ABaseRifle::StaticRegisterNativesABaseRifle()
	{
		UClass* Class = ABaseRifle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &ABaseRifle::execAttack },
			{ "finishAttack", &ABaseRifle::execfinishAttack },
			{ "SetDeath", &ABaseRifle::execSetDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseRifle_Attack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRifle_finishAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_finishAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_finishAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "finishAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_finishAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_finishAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_finishAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_finishAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseRifle_SetDeath_Statics
	{
		struct BaseRifle_eventSetDeath_Parms
		{
			float junk;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_junk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseRifle_SetDeath_Statics::NewProp_junk = { "junk", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseRifle_eventSetDeath_Parms, junk), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseRifle_SetDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseRifle_SetDeath_Statics::NewProp_junk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseRifle_SetDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseRifle_SetDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseRifle, nullptr, "SetDeath", nullptr, nullptr, sizeof(BaseRifle_eventSetDeath_Parms), Z_Construct_UFunction_ABaseRifle_SetDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_SetDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseRifle_SetDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseRifle_SetDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseRifle_SetDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseRifle_SetDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseRifle_NoRegister()
	{
		return ABaseRifle::StaticClass();
	}
	struct Z_Construct_UClass_ABaseRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame001,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseRifle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseRifle_Attack, "Attack" }, // 374397059
		{ &Z_Construct_UFunction_ABaseRifle_finishAttack, "finishAttack" }, // 1285925445
		{ &Z_Construct_UFunction_ABaseRifle_SetDeath, "SetDeath" }, // 3881136892
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/BaseRifle.h" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletClass_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, BulletClass), Z_Construct_UClass_ABaseBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseRifle_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "BaseRifle" },
		{ "ModuleRelativePath", "Public/Actors/BaseRifle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABaseRifle_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseRifle, SocketName), METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::NewProp_SocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseRifle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseRifle_Statics::NewProp_SocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseRifle_Statics::ClassParams = {
		&ABaseRifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseRifle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseRifle, 3471292115);
	template<> UNREALGAME001_API UClass* StaticClass<ABaseRifle>()
	{
		return ABaseRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseRifle(Z_Construct_UClass_ABaseRifle, &ABaseRifle::StaticClass, TEXT("/Script/UnrealGame001"), TEXT("ABaseRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
