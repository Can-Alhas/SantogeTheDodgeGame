// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SANTOGE_SantogeCharacter_generated_h
#error "SantogeCharacter.generated.h already included, missing '#pragma once' in SantogeCharacter.h"
#endif
#define SANTOGE_SantogeCharacter_generated_h

#define Santoge_Source_Santoge_SantogeCharacter_h_12_SPARSE_DATA
#define Santoge_Source_Santoge_SantogeCharacter_h_12_RPC_WRAPPERS
#define Santoge_Source_Santoge_SantogeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Santoge_Source_Santoge_SantogeCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASantogeCharacter(); \
	friend struct Z_Construct_UClass_ASantogeCharacter_Statics; \
public: \
	DECLARE_CLASS(ASantogeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Santoge"), NO_API) \
	DECLARE_SERIALIZER(ASantogeCharacter)


#define Santoge_Source_Santoge_SantogeCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASantogeCharacter(); \
	friend struct Z_Construct_UClass_ASantogeCharacter_Statics; \
public: \
	DECLARE_CLASS(ASantogeCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Santoge"), NO_API) \
	DECLARE_SERIALIZER(ASantogeCharacter)


#define Santoge_Source_Santoge_SantogeCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASantogeCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASantogeCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASantogeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASantogeCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASantogeCharacter(ASantogeCharacter&&); \
	NO_API ASantogeCharacter(const ASantogeCharacter&); \
public:


#define Santoge_Source_Santoge_SantogeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASantogeCharacter(ASantogeCharacter&&); \
	NO_API ASantogeCharacter(const ASantogeCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASantogeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASantogeCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASantogeCharacter)


#define Santoge_Source_Santoge_SantogeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ASantogeCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASantogeCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ASantogeCharacter, CursorToWorld); }


#define Santoge_Source_Santoge_SantogeCharacter_h_9_PROLOG
#define Santoge_Source_Santoge_SantogeCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Santoge_Source_Santoge_SantogeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Santoge_Source_Santoge_SantogeCharacter_h_12_SPARSE_DATA \
	Santoge_Source_Santoge_SantogeCharacter_h_12_RPC_WRAPPERS \
	Santoge_Source_Santoge_SantogeCharacter_h_12_INCLASS \
	Santoge_Source_Santoge_SantogeCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Santoge_Source_Santoge_SantogeCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Santoge_Source_Santoge_SantogeCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Santoge_Source_Santoge_SantogeCharacter_h_12_SPARSE_DATA \
	Santoge_Source_Santoge_SantogeCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Santoge_Source_Santoge_SantogeCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Santoge_Source_Santoge_SantogeCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANTOGE_API UClass* StaticClass<class ASantogeCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Santoge_Source_Santoge_SantogeCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
