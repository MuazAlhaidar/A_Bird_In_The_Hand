// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A_Bird_In_The_Hand/Interactable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}
// Cross Module References
	A_BIRD_IN_THE_HAND_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	A_BIRD_IN_THE_HAND_API UClass* Z_Construct_UClass_AInteractable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_A_Bird_In_The_Hand();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInteractable::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AInteractable_Interact = FName(TEXT("Interact"));
	void AInteractable::Interact()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractable_Interact),NULL);
	}
	void AInteractable::StaticRegisterNativesAInteractable()
	{
		UClass* Class = AInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &AInteractable::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractable_Interact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractable_NoRegister()
	{
		return AInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableHelpText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractableHelpText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_A_Bird_In_The_Hand,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractable_Interact, "Interact" }, // 4093746660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactable.h" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableMesh_MetaData[] = {
		{ "Category", "Interactable Properties" },
		{ "Comment", "// We assume that all interactables have a static mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactable.h" },
		{ "ToolTip", "We assume that all interactables have a static mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableMesh = { "InteractableMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, InteractableMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableHelpText_MetaData[] = {
		{ "Category", "Interactable Properties" },
		{ "Comment", "// We assume that all interactables will have some help text\n" },
		{ "ModuleRelativePath", "Interactable.h" },
		{ "ToolTip", "We assume that all interactables will have some help text" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableHelpText = { "InteractableHelpText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, InteractableHelpText), METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableHelpText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableHelpText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_InteractableHelpText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractable_Statics::ClassParams = {
		&AInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractable, 708759667);
	template<> A_BIRD_IN_THE_HAND_API UClass* StaticClass<AInteractable>()
	{
		return AInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractable(Z_Construct_UClass_AInteractable, &AInteractable::StaticClass, TEXT("/Script/A_Bird_In_The_Hand"), TEXT("AInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
