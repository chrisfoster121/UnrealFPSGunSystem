// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunSystem/Public/GunProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunProjectile() {}
// Cross Module References
	GUNSYSTEM_API UClass* Z_Construct_UClass_AGunProjectile_NoRegister();
	GUNSYSTEM_API UClass* Z_Construct_UClass_AGunProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GunSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGunProjectile::execSetInitialSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitialSpeed(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGunProjectile::execSetInitialDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_dir);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitialDirection(Z_Param_dir);
		P_NATIVE_END;
	}
	void AGunProjectile::StaticRegisterNativesAGunProjectile()
	{
		UClass* Class = AGunProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInitialDirection", &AGunProjectile::execSetInitialDirection },
			{ "SetInitialSpeed", &AGunProjectile::execSetInitialSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGunProjectile_SetInitialDirection_Statics
	{
		struct GunProjectile_eventSetInitialDirection_Parms
		{
			FVector dir;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGunProjectile_SetInitialDirection_Statics::NewProp_dir = { "dir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProjectile_eventSetInitialDirection_Parms, dir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunProjectile_SetInitialDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProjectile_SetInitialDirection_Statics::NewProp_dir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProjectile_SetInitialDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GunProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunProjectile_SetInitialDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunProjectile, nullptr, "SetInitialDirection", nullptr, nullptr, sizeof(GunProjectile_eventSetInitialDirection_Parms), Z_Construct_UFunction_AGunProjectile_SetInitialDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProjectile_SetInitialDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunProjectile_SetInitialDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProjectile_SetInitialDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunProjectile_SetInitialDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunProjectile_SetInitialDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGunProjectile_SetInitialSpeed_Statics
	{
		struct GunProjectile_eventSetInitialSpeed_Parms
		{
			float Speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGunProjectile_SetInitialSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GunProjectile_eventSetInitialSpeed_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGunProjectile_SetInitialSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGunProjectile_SetInitialSpeed_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGunProjectile_SetInitialSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GunProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGunProjectile_SetInitialSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGunProjectile, nullptr, "SetInitialSpeed", nullptr, nullptr, sizeof(GunProjectile_eventSetInitialSpeed_Parms), Z_Construct_UFunction_AGunProjectile_SetInitialSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProjectile_SetInitialSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGunProjectile_SetInitialSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGunProjectile_SetInitialSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGunProjectile_SetInitialSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGunProjectile_SetInitialSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGunProjectile_NoRegister()
	{
		return AGunProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AGunProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GunSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGunProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGunProjectile_SetInitialDirection, "SetInitialDirection" }, // 2073644605
		{ &Z_Construct_UFunction_AGunProjectile_SetInitialSpeed, "SetInitialSpeed" }, // 2486238891
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GunProjectile.h" },
		{ "ModuleRelativePath", "Public/GunProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunProjectile_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "// Sphere collision component.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GunProjectile.h" },
		{ "ToolTip", "Sphere collision component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunProjectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunProjectile_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunProjectile_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Projectile movement component.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GunProjectile.h" },
		{ "ToolTip", "Projectile movement component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunProjectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunProjectile_Statics::NewProp_CollisionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunProjectile_Statics::NewProp_ProjectileMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunProjectile_Statics::ClassParams = {
		&AGunProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGunProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGunProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunProjectile, 1446403756);
	template<> GUNSYSTEM_API UClass* StaticClass<AGunProjectile>()
	{
		return AGunProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunProjectile(Z_Construct_UClass_AGunProjectile, &AGunProjectile::StaticClass, TEXT("/Script/GunSystem"), TEXT("AGunProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
