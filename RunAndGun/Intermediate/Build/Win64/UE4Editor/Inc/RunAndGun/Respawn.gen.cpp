// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunAndGun/Respawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawn() {}
// Cross Module References
	RUNANDGUN_API UClass* Z_Construct_UClass_ARespawn_NoRegister();
	RUNANDGUN_API UClass* Z_Construct_UClass_ARespawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RunAndGun();
// End Cross Module References
	void ARespawn::StaticRegisterNativesARespawn()
	{
	}
	UClass* Z_Construct_UClass_ARespawn_NoRegister()
	{
		return ARespawn::StaticClass();
	}
	struct Z_Construct_UClass_ARespawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARespawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RunAndGun,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Respawn.h" },
		{ "ModuleRelativePath", "Respawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARespawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARespawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARespawn_Statics::ClassParams = {
		&ARespawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARespawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARespawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARespawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARespawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARespawn, 978273332);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARespawn(Z_Construct_UClass_ARespawn, &ARespawn::StaticClass, TEXT("/Script/RunAndGun"), TEXT("ARespawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARespawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
