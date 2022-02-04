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
struct FVector;
struct FHitResult;
#ifdef GUNSYSTEM_GunSystemProjectile_generated_h
#error "GunSystemProjectile.generated.h already included, missing '#pragma once' in GunSystemProjectile.h"
#endif
#define GUNSYSTEM_GunSystemProjectile_generated_h

#define GunSystem_Source_GunSystem_GunSystemProjectile_h_15_SPARSE_DATA
#define GunSystem_Source_GunSystem_GunSystemProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GunSystem_Source_GunSystem_GunSystemProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GunSystem_Source_GunSystem_GunSystemProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunSystemProjectile(); \
	friend struct Z_Construct_UClass_AGunSystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AGunSystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunSystem"), NO_API) \
	DECLARE_SERIALIZER(AGunSystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GunSystem_Source_GunSystem_GunSystemProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGunSystemProjectile(); \
	friend struct Z_Construct_UClass_AGunSystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AGunSystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunSystem"), NO_API) \
	DECLARE_SERIALIZER(AGunSystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GunSystem_Source_GunSystem_GunSystemProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGunSystemProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGunSystemProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunSystemProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunSystemProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunSystemProjectile(AGunSystemProjectile&&); \
	NO_API AGunSystemProjectile(const AGunSystemProjectile&); \
public:


#define GunSystem_Source_GunSystem_GunSystemProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunSystemProjectile(AGunSystemProjectile&&); \
	NO_API AGunSystemProjectile(const AGunSystemProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunSystemProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunSystemProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunSystemProjectile)


#define GunSystem_Source_GunSystem_GunSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGunSystemProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGunSystemProjectile, ProjectileMovement); }


#define GunSystem_Source_GunSystem_GunSystemProjectile_h_12_PROLOG
#define GunSystem_Source_GunSystem_GunSystemProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunSystem_Source_GunSystem_GunSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GunSystem_Source_GunSystem_GunSystemProjectile_h_15_SPARSE_DATA \
	GunSystem_Source_GunSystem_GunSystemProjectile_h_15_RPC_WRAPPERS \
	GunSystem_Source_GunSystem_GunSystemProjectile_h_15_INCLASS \
	GunSystem_Source_GunSystem_GunSystemProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GunSystem_Source_GunSystem_GunSystemProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunSystem_Source_GunSystem_GunSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	GunSystem_Source_GunSystem_GunSystemProjectile_h_15_SPARSE_DATA \
	GunSystem_Source_GunSystem_GunSystemProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GunSystem_Source_GunSystem_GunSystemProjectile_h_15_INCLASS_NO_PURE_DECLS \
	GunSystem_Source_GunSystem_GunSystemProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNSYSTEM_API UClass* StaticClass<class AGunSystemProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GunSystem_Source_GunSystem_GunSystemProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
