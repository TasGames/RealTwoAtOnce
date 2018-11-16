// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNANDGUN_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define RUNANDGUN_PlayerCharacter_generated_h

#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_RPC_WRAPPERS \
	virtual void Lose_Implementation(); \
 \
	DECLARE_FUNCTION(execLose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Lose_Implementation(); \
		P_NATIVE_END; \
	}


#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Lose_Implementation(); \
 \
	DECLARE_FUNCTION(execLose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Lose_Implementation(); \
		P_NATIVE_END; \
	}


#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_EVENT_PARMS
#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_CALLBACK_WRAPPERS
#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RunAndGun"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RunAndGun"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(APlayerCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlayerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(APlayerCharacter, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__GunOffset() { return STRUCT_OFFSET(APlayerCharacter, GunOffset); } \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(APlayerCharacter, FireRate); }


#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_9_PROLOG \
	RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_EVENT_PARMS


#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_RPC_WRAPPERS \
	RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_CALLBACK_WRAPPERS \
	RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_INCLASS \
	RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_CALLBACK_WRAPPERS \
	RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	RunAndGun_Source_RunAndGun_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RunAndGun_Source_RunAndGun_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
