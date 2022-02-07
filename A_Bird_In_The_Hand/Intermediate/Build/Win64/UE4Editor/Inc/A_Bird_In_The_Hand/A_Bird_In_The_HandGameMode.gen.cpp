// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A_Bird_In_The_Hand/A_Bird_In_The_HandGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA_Bird_In_The_HandGameMode() {}
// Cross Module References
	A_BIRD_IN_THE_HAND_API UClass* Z_Construct_UClass_AA_Bird_In_The_HandGameMode_NoRegister();
	A_BIRD_IN_THE_HAND_API UClass* Z_Construct_UClass_AA_Bird_In_The_HandGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_A_Bird_In_The_Hand();
// End Cross Module References
	void AA_Bird_In_The_HandGameMode::StaticRegisterNativesAA_Bird_In_The_HandGameMode()
	{
	}
	UClass* Z_Construct_UClass_AA_Bird_In_The_HandGameMode_NoRegister()
	{
		return AA_Bird_In_The_HandGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AA_Bird_In_The_HandGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA_Bird_In_The_HandGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_A_Bird_In_The_Hand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA_Bird_In_The_HandGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "A_Bird_In_The_HandGameMode.h" },
		{ "ModuleRelativePath", "A_Bird_In_The_HandGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA_Bird_In_The_HandGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA_Bird_In_The_HandGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AA_Bird_In_The_HandGameMode_Statics::ClassParams = {
		&AA_Bird_In_The_HandGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AA_Bird_In_The_HandGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AA_Bird_In_The_HandGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AA_Bird_In_The_HandGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AA_Bird_In_The_HandGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AA_Bird_In_The_HandGameMode, 3164038161);
	template<> A_BIRD_IN_THE_HAND_API UClass* StaticClass<AA_Bird_In_The_HandGameMode>()
	{
		return AA_Bird_In_The_HandGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AA_Bird_In_The_HandGameMode(Z_Construct_UClass_AA_Bird_In_The_HandGameMode, &AA_Bird_In_The_HandGameMode::StaticClass, TEXT("/Script/A_Bird_In_The_Hand"), TEXT("AA_Bird_In_The_HandGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA_Bird_In_The_HandGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
