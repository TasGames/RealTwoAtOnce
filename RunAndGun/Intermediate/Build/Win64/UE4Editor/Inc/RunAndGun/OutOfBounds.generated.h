// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
#ifdef RUNANDGUN_OutOfBounds_generated_h
#error "OutOfBounds.generated.h already included, missing '#pragma once' in OutOfBounds.h"
#endif
#define RUNANDGUN_OutOfBounds_generated_h

#define RunAndGun_Source_RunAndGun_OutOfBounds_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define RunAndGun_Source_RunAndGun_OutOfBounds_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define RunAndGun_Source_RunAndGun_OutOfBounds_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOutOfBounds(); \
	friend struct Z_Construct_UClass_AOutOfBounds_Statics; \
public: \
	DECLARE_CLASS(AOutOfBounds, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RunAndGun"), NO_API) \
	DECLARE_SERIALIZER(AOutOfBounds)


#define RunAndGun_Source_RunAndGun_OutOfBounds_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOutOfBounds(); \
	friend struct Z_Construct_UClass_AOutOfBounds_Statics; \
public: \
	DECLARE_CLASS(AOutOfBounds, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RunAndGun"), NO_API) \
	DECLARE_SERIALIZER(AOutOfBounds)


#define RunAndGun_Source_RunAndGun_OutOfBounds_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOutOfBounds(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOutOfBounds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOutOfBounds); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOutOfBounds); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOutOfBounds(AOutOfBounds&&); \
	NO_API AOutOfBounds(const AOutOfBounds&); \
public:


#define RunAndGun_Source_RunAndGun_OutOfBounds_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOutOfBounds(AOutOfBounds&&); \
	NO_API AOutOfBounds(const AOutOfBounds&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOutOfBounds); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOutOfBounds); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOutOfBounds)


#define RunAndGun_Source_RunAndGun_OutOfBounds_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(AOutOfBounds, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__SpawnLocation() { return STRUCT_OFFSET(AOutOfBounds, SpawnLocation); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AOutOfBounds, Damage); }


#define RunAndGun_Source_RunAndGun_OutOfBounds_h_9_PROLOG
#define RunAndGun_Source_RunAndGun_OutOfBounds_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunAndGun_Source_RunAndGun_OutOfBounds_h_12_PRIVATE_PROPERTY_OFFSET \
	RunAndGun_Source_RunAndGun_OutOfBounds_h_12_RPC_WRAPPERS \
	RunAndGun_Source_RunAndGun_OutOfBounds_h_12_INCLASS \
	RunAndGun_Source_RunAndGun_OutOfBounds_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RunAndGun_Source_RunAndGun_OutOfBounds_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunAndGun_Source_RunAndGun_OutOfBounds_h_12_PRIVATE_PROPERTY_OFFSET \
	RunAndGun_Source_RunAndGun_OutOfBounds_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RunAndGun_Source_RunAndGun_OutOfBounds_h_12_INCLASS_NO_PURE_DECLS \
	RunAndGun_Source_RunAndGun_OutOfBounds_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RunAndGun_Source_RunAndGun_OutOfBounds_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
