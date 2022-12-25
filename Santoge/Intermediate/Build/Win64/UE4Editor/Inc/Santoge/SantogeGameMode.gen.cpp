// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Santoge/SantogeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSantogeGameMode() {}
// Cross Module References
	SANTOGE_API UClass* Z_Construct_UClass_ASantogeGameMode_NoRegister();
	SANTOGE_API UClass* Z_Construct_UClass_ASantogeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Santoge();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SANTOGE_API UClass* Z_Construct_UClass_AGift_NoRegister();
// End Cross Module References
	void ASantogeGameMode::StaticRegisterNativesASantogeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASantogeGameMode_NoRegister()
	{
		return ASantogeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASantogeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GiftBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GiftBlueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASantogeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Santoge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASantogeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SantogeGameMode.h" },
		{ "ModuleRelativePath", "SantogeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASantogeGameMode_Statics::NewProp_GiftBlueprint_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "SantogeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASantogeGameMode_Statics::NewProp_GiftBlueprint = { "GiftBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASantogeGameMode, GiftBlueprint), Z_Construct_UClass_AGift_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASantogeGameMode_Statics::NewProp_GiftBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASantogeGameMode_Statics::NewProp_GiftBlueprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASantogeGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASantogeGameMode_Statics::NewProp_GiftBlueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASantogeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASantogeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASantogeGameMode_Statics::ClassParams = {
		&ASantogeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASantogeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASantogeGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASantogeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASantogeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASantogeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASantogeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASantogeGameMode, 1110896153);
	template<> SANTOGE_API UClass* StaticClass<ASantogeGameMode>()
	{
		return ASantogeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASantogeGameMode(Z_Construct_UClass_ASantogeGameMode, &ASantogeGameMode::StaticClass, TEXT("/Script/Santoge"), TEXT("ASantogeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASantogeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
