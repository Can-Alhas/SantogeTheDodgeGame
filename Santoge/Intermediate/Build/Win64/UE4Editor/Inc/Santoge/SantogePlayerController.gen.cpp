// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Santoge/SantogePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSantogePlayerController() {}
// Cross Module References
	SANTOGE_API UClass* Z_Construct_UClass_ASantogePlayerController_NoRegister();
	SANTOGE_API UClass* Z_Construct_UClass_ASantogePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Santoge();
// End Cross Module References
	void ASantogePlayerController::StaticRegisterNativesASantogePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASantogePlayerController_NoRegister()
	{
		return ASantogePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASantogePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASantogePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Santoge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASantogePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SantogePlayerController.h" },
		{ "ModuleRelativePath", "SantogePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASantogePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASantogePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASantogePlayerController_Statics::ClassParams = {
		&ASantogePlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASantogePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASantogePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASantogePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASantogePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASantogePlayerController, 2406934441);
	template<> SANTOGE_API UClass* StaticClass<ASantogePlayerController>()
	{
		return ASantogePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASantogePlayerController(Z_Construct_UClass_ASantogePlayerController, &ASantogePlayerController::StaticClass, TEXT("/Script/Santoge"), TEXT("ASantogePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASantogePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
