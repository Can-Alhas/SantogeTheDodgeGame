// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SANTOGE_Gift_generated_h
#error "Gift.generated.h already included, missing '#pragma once' in Gift.h"
#endif
#define SANTOGE_Gift_generated_h

#define Santoge_Source_Santoge_Gift_h_15_SPARSE_DATA
#define Santoge_Source_Santoge_Gift_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Santoge_Source_Santoge_Gift_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Santoge_Source_Santoge_Gift_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGift(); \
	friend struct Z_Construct_UClass_AGift_Statics; \
public: \
	DECLARE_CLASS(AGift, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Santoge"), NO_API) \
	DECLARE_SERIALIZER(AGift)


#define Santoge_Source_Santoge_Gift_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGift(); \
	friend struct Z_Construct_UClass_AGift_Statics; \
public: \
	DECLARE_CLASS(AGift, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Santoge"), NO_API) \
	DECLARE_SERIALIZER(AGift)


#define Santoge_Source_Santoge_Gift_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGift(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGift) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGift); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGift); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGift(AGift&&); \
	NO_API AGift(const AGift&); \
public:


#define Santoge_Source_Santoge_Gift_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGift(AGift&&); \
	NO_API AGift(const AGift&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGift); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGift); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGift)


#define Santoge_Source_Santoge_Gift_h_15_PRIVATE_PROPERTY_OFFSET
#define Santoge_Source_Santoge_Gift_h_12_PROLOG
#define Santoge_Source_Santoge_Gift_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Santoge_Source_Santoge_Gift_h_15_PRIVATE_PROPERTY_OFFSET \
	Santoge_Source_Santoge_Gift_h_15_SPARSE_DATA \
	Santoge_Source_Santoge_Gift_h_15_RPC_WRAPPERS \
	Santoge_Source_Santoge_Gift_h_15_INCLASS \
	Santoge_Source_Santoge_Gift_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Santoge_Source_Santoge_Gift_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Santoge_Source_Santoge_Gift_h_15_PRIVATE_PROPERTY_OFFSET \
	Santoge_Source_Santoge_Gift_h_15_SPARSE_DATA \
	Santoge_Source_Santoge_Gift_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Santoge_Source_Santoge_Gift_h_15_INCLASS_NO_PURE_DECLS \
	Santoge_Source_Santoge_Gift_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANTOGE_API UClass* StaticClass<class AGift>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Santoge_Source_Santoge_Gift_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
