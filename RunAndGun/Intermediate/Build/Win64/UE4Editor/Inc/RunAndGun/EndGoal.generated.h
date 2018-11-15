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
#ifdef RUNANDGUN_EndGoal_generated_h
#error "EndGoal.generated.h already included, missing '#pragma once' in EndGoal.h"
#endif
#define RUNANDGUN_EndGoal_generated_h

#define RunAndGun_Source_RunAndGun_EndGoal_h_12_RPC_WRAPPERS \
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


#define RunAndGun_Source_RunAndGun_EndGoal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define RunAndGun_Source_RunAndGun_EndGoal_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEndGoal(); \
	friend struct Z_Construct_UClass_AEndGoal_Statics; \
public: \
	DECLARE_CLASS(AEndGoal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RunAndGun"), NO_API) \
	DECLARE_SERIALIZER(AEndGoal)


#define RunAndGun_Source_RunAndGun_EndGoal_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEndGoal(); \
	friend struct Z_Construct_UClass_AEndGoal_Statics; \
public: \
	DECLARE_CLASS(AEndGoal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RunAndGun"), NO_API) \
	DECLARE_SERIALIZER(AEndGoal)


#define RunAndGun_Source_RunAndGun_EndGoal_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEndGoal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEndGoal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndGoal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndGoal(AEndGoal&&); \
	NO_API AEndGoal(const AEndGoal&); \
public:


#define RunAndGun_Source_RunAndGun_EndGoal_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndGoal(AEndGoal&&); \
	NO_API AEndGoal(const AEndGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndGoal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEndGoal)


#define RunAndGun_Source_RunAndGun_EndGoal_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GoalBox() { return STRUCT_OFFSET(AEndGoal, GoalBox); }


#define RunAndGun_Source_RunAndGun_EndGoal_h_9_PROLOG
#define RunAndGun_Source_RunAndGun_EndGoal_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunAndGun_Source_RunAndGun_EndGoal_h_12_PRIVATE_PROPERTY_OFFSET \
	RunAndGun_Source_RunAndGun_EndGoal_h_12_RPC_WRAPPERS \
	RunAndGun_Source_RunAndGun_EndGoal_h_12_INCLASS \
	RunAndGun_Source_RunAndGun_EndGoal_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RunAndGun_Source_RunAndGun_EndGoal_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RunAndGun_Source_RunAndGun_EndGoal_h_12_PRIVATE_PROPERTY_OFFSET \
	RunAndGun_Source_RunAndGun_EndGoal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RunAndGun_Source_RunAndGun_EndGoal_h_12_INCLASS_NO_PURE_DECLS \
	RunAndGun_Source_RunAndGun_EndGoal_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RunAndGun_Source_RunAndGun_EndGoal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
