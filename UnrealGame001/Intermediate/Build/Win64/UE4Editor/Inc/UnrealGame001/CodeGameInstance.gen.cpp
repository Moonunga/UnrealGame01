// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame001/Public/CodeGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeGameInstance() {}
// Cross Module References
	UNREALGAME001_API UClass* Z_Construct_UClass_UCodeGameInstance_NoRegister();
	UNREALGAME001_API UClass* Z_Construct_UClass_UCodeGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_UnrealGame001();
// End Cross Module References
	DEFINE_FUNCTION(UCodeGameInstance::execQuitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCodeGameInstance::execLoadFirstLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFirstLevel();
		P_NATIVE_END;
	}
	void UCodeGameInstance::StaticRegisterNativesUCodeGameInstance()
	{
		UClass* Class = UCodeGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFirstLevel", &UCodeGameInstance::execLoadFirstLevel },
			{ "QuitGame", &UCodeGameInstance::execQuitGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCodeGameInstance_LoadFirstLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCodeGameInstance_LoadFirstLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CodeGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCodeGameInstance_LoadFirstLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCodeGameInstance, nullptr, "LoadFirstLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCodeGameInstance_LoadFirstLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCodeGameInstance_LoadFirstLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCodeGameInstance_LoadFirstLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCodeGameInstance_LoadFirstLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCodeGameInstance_QuitGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCodeGameInstance_QuitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CodeGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCodeGameInstance_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCodeGameInstance, nullptr, "QuitGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCodeGameInstance_QuitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCodeGameInstance_QuitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCodeGameInstance_QuitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCodeGameInstance_QuitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCodeGameInstance_NoRegister()
	{
		return UCodeGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCodeGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCodeGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame001,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCodeGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCodeGameInstance_LoadFirstLevel, "LoadFirstLevel" }, // 98083791
		{ &Z_Construct_UFunction_UCodeGameInstance_QuitGame, "QuitGame" }, // 2047463516
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CodeGameInstance.h" },
		{ "ModuleRelativePath", "Public/CodeGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCodeGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCodeGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCodeGameInstance_Statics::ClassParams = {
		&UCodeGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCodeGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCodeGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCodeGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCodeGameInstance, 717830918);
	template<> UNREALGAME001_API UClass* StaticClass<UCodeGameInstance>()
	{
		return UCodeGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCodeGameInstance(Z_Construct_UClass_UCodeGameInstance, &UCodeGameInstance::StaticClass, TEXT("/Script/UnrealGame001"), TEXT("UCodeGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCodeGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
