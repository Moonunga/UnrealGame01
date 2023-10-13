// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealGame001_init() {}
	UNREALGAME001_API UFunction* Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature();
	UNREALGAME001_API UFunction* Z_Construct_UDelegateFunction_UnrealGame001_HealthDelegate__DelegateSignature();
	UNREALGAME001_API UFunction* Z_Construct_UDelegateFunction_UnrealGame001_AnimDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealGame001()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealGame001_RifleDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealGame001_HealthDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealGame001_AnimDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealGame001",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9DE1E06E,
				0xE0DFA856,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
