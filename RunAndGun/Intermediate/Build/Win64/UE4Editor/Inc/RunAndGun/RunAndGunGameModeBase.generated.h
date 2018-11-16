// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNANDGUN_RunAndGunGameModeBase_generated_h
#error "RunAndGunGameModeBase.generated.h already included, missing '#pragma once' in RunAndGunGameModeBase.h"
#endif
#define RUNANDGUN_RunAndGunGameModeBase_generated_h

#define RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_RPC_WRAPPERS
#define RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunAndGunGameModeBase(); \
	friend struct Z_Construct_UClass_ARunAndGunGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ARunAndGunGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RunAndGun"), NO_API) \
	DECLARE_SERIALIZER(ARunAndGunGameModeBase)


#define RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARunAndGunGameModeBase(); \
	friend struct Z_Construct_UClass_ARunAndGunGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ARunAndGunGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RunAndGun"), NO_API) \
	DECLARE_SERIALIZER(ARunAndGunGameModeBase)


#define RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunAndGunGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunAndGunGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunAndGunGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunAndGunGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunAndGunGameModeBase(ARunAndGunGameModeBase&&); \
	NO_API ARunAndGunGameModeBase(const ARunAndGunGameModeBase&); \
public:


#define RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunAndGunGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunAndGunGameModeBase(ARunAndGunGameModeBase&&); \
	NO_API ARunAndGunGameModeBase(const ARunAndGunGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunAndGunGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunAndGunGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunAndGunGameModeBase)


#define RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerHUDClass() { return STRUCT_OFFSET(ARunAndGunGameModeBase, PlayerHUDClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(ARunAndGunGameModeBase, CurrentWidget); }


#define RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_9_PROLOG
#define RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_PRIVATE_PROPERTY_OFFSET \
	RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_RPC_WRAPPERS \
	RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_INCLASS \
	RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_PRIVATE_PROPERTY_OFFSET \
	RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_INCLASS_NO_PURE_DECLS \
	RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RunAndGun_Source_RunAndGun_RunAndGunGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
