// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunSystem/GunSystemGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunSystemGameMode() {}
// Cross Module References
	GUNSYSTEM_API UClass* Z_Construct_UClass_AGunSystemGameMode_NoRegister();
	GUNSYSTEM_API UClass* Z_Construct_UClass_AGunSystemGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GunSystem();
// End Cross Module References
	void AGunSystemGameMode::StaticRegisterNativesAGunSystemGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGunSystemGameMode_NoRegister()
	{
		return AGunSystemGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGunSystemGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunSystemGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GunSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunSystemGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GunSystemGameMode.h" },
		{ "ModuleRelativePath", "GunSystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunSystemGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunSystemGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunSystemGameMode_Statics::ClassParams = {
		&AGunSystemGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGunSystemGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunSystemGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunSystemGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunSystemGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunSystemGameMode, 3573509576);
	template<> GUNSYSTEM_API UClass* StaticClass<AGunSystemGameMode>()
	{
		return AGunSystemGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunSystemGameMode(Z_Construct_UClass_AGunSystemGameMode, &AGunSystemGameMode::StaticClass, TEXT("/Script/GunSystem"), TEXT("AGunSystemGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunSystemGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
