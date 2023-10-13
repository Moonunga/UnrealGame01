// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame001/Public/Core/BaseCharacterEventGraph.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacterEventGraph() {}
// Cross Module References
	UNREALGAME001_API UFunction* Z_Construct_UDelegateFunction_UnrealGame001_AnimDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealGame001();
	UNREALGAME001_API UClass* Z_Construct_UClass_UBaseCharacterEventGraph_NoRegister();
	UNREALGAME001_API UClass* Z_Construct_UClass_UBaseCharacterEventGraph();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnrealGame001_AnimDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealGame001_AnimDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealGame001_AnimDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealGame001, nullptr, "AnimDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UnrealGame001_AnimDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealGame001_AnimDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UnrealGame001_AnimDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UnrealGame001_AnimDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBaseCharacterEventGraph::execDeathAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_junk);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeathAnimation(Z_Param_junk);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseCharacterEventGraph::execHitAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_junk);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitAnimation(Z_Param_junk);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseCharacterEventGraph::execFireAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_junk);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireAnimation(Z_Param_junk);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseCharacterEventGraph::execPersonaUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PersonaUpdate();
		P_NATIVE_END;
	}
	void UBaseCharacterEventGraph::StaticRegisterNativesUBaseCharacterEventGraph()
	{
		UClass* Class = UBaseCharacterEventGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeathAnimation", &UBaseCharacterEventGraph::execDeathAnimation },
			{ "FireAnimation", &UBaseCharacterEventGraph::execFireAnimation },
			{ "HitAnimation", &UBaseCharacterEventGraph::execHitAnimation },
			{ "PersonaUpdate", &UBaseCharacterEventGraph::execPersonaUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation_Statics
	{
		struct BaseCharacterEventGraph_eventDeathAnimation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation_Statics::NewProp_junk = { "junk", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseCharacterEventGraph_eventDeathAnimation_Parms, junk), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation_Statics::NewProp_junk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseCharacterEventGraph, nullptr, "DeathAnimation", nullptr, nullptr, sizeof(BaseCharacterEventGraph_eventDeathAnimation_Parms), Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation_Statics
	{
		struct BaseCharacterEventGraph_eventFireAnimation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation_Statics::NewProp_junk = { "junk", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseCharacterEventGraph_eventFireAnimation_Parms, junk), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation_Statics::NewProp_junk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseCharacterEventGraph, nullptr, "FireAnimation", nullptr, nullptr, sizeof(BaseCharacterEventGraph_eventFireAnimation_Parms), Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation_Statics
	{
		struct BaseCharacterEventGraph_eventHitAnimation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation_Statics::NewProp_junk = { "junk", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseCharacterEventGraph_eventHitAnimation_Parms, junk), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation_Statics::NewProp_junk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseCharacterEventGraph, nullptr, "HitAnimation", nullptr, nullptr, sizeof(BaseCharacterEventGraph_eventHitAnimation_Parms), Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseCharacterEventGraph_PersonaUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseCharacterEventGraph_PersonaUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseCharacterEventGraph_PersonaUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseCharacterEventGraph, nullptr, "PersonaUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseCharacterEventGraph_PersonaUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseCharacterEventGraph_PersonaUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseCharacterEventGraph_PersonaUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseCharacterEventGraph_PersonaUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseCharacterEventGraph_NoRegister()
	{
		return UBaseCharacterEventGraph::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCharacterEventGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFire_MetaData[];
#endif
		static void NewProp_DebugFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugHit_MetaData[];
#endif
		static void NewProp_DebugHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDeath_MetaData[];
#endif
		static void NewProp_DebugDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentDeath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeathAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCharacterEventGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame001,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseCharacterEventGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseCharacterEventGraph_DeathAnimation, "DeathAnimation" }, // 2992940503
		{ &Z_Construct_UFunction_UBaseCharacterEventGraph_FireAnimation, "FireAnimation" }, // 3346226477
		{ &Z_Construct_UFunction_UBaseCharacterEventGraph_HitAnimation, "HitAnimation" }, // 679365654
		{ &Z_Construct_UFunction_UBaseCharacterEventGraph_PersonaUpdate, "PersonaUpdate" }, // 1428446510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterEventGraph_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Core/BaseCharacterEventGraph.h" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "BaseCharacterEventGraph" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCharacterEventGraph, Speed), METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "BaseCharacterEventGraph" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCharacterEventGraph, Direction), METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugFire_MetaData[] = {
		{ "Category", "BaseCharacterEventGraph" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	void Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugFire_SetBit(void* Obj)
	{
		((UBaseCharacterEventGraph*)Obj)->DebugFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugFire = { "DebugFire", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseCharacterEventGraph), &Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugHit_MetaData[] = {
		{ "Category", "BaseCharacterEventGraph" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	void Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugHit_SetBit(void* Obj)
	{
		((UBaseCharacterEventGraph*)Obj)->DebugHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugHit = { "DebugHit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseCharacterEventGraph), &Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugDeath_MetaData[] = {
		{ "Category", "BaseCharacterEventGraph" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	void Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugDeath_SetBit(void* Obj)
	{
		((UBaseCharacterEventGraph*)Obj)->DebugDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugDeath = { "DebugDeath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseCharacterEventGraph), &Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugDeath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_ActionSlotName_MetaData[] = {
		{ "Category", "BaseCharacterEventGraph" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_ActionSlotName = { "ActionSlotName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCharacterEventGraph, ActionSlotName), METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_ActionSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_ActionSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_FireAsset_MetaData[] = {
		{ "Category", "BaseCharacterEventGraph" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_FireAsset = { "FireAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCharacterEventGraph, FireAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_FireAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_FireAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_HitAsset_MetaData[] = {
		{ "Category", "BaseCharacterEventGraph" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_HitAsset = { "HitAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCharacterEventGraph, HitAsset), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_HitAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_HitAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_CurrentDeath_MetaData[] = {
		{ "Category", "BaseCharacterEventGraph" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_CurrentDeath = { "CurrentDeath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCharacterEventGraph, CurrentDeath), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_CurrentDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_CurrentDeath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DeathAssets_Inner = { "DeathAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DeathAssets_MetaData[] = {
		{ "Category", "BaseCharacterEventGraph" },
		{ "ModuleRelativePath", "Public/Core/BaseCharacterEventGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DeathAssets = { "DeathAssets", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseCharacterEventGraph, DeathAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DeathAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DeathAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCharacterEventGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DebugDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_ActionSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_FireAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_HitAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_CurrentDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DeathAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterEventGraph_Statics::NewProp_DeathAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCharacterEventGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCharacterEventGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseCharacterEventGraph_Statics::ClassParams = {
		&UBaseCharacterEventGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseCharacterEventGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterEventGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCharacterEventGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseCharacterEventGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseCharacterEventGraph, 2998185867);
	template<> UNREALGAME001_API UClass* StaticClass<UBaseCharacterEventGraph>()
	{
		return UBaseCharacterEventGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseCharacterEventGraph(Z_Construct_UClass_UBaseCharacterEventGraph, &UBaseCharacterEventGraph::StaticClass, TEXT("/Script/UnrealGame001"), TEXT("UBaseCharacterEventGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCharacterEventGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
