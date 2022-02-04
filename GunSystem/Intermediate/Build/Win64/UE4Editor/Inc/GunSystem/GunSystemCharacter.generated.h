// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GUNSYSTEM_GunSystemCharacter_generated_h
#error "GunSystemCharacter.generated.h already included, missing '#pragma once' in GunSystemCharacter.h"
#endif
#define GUNSYSTEM_GunSystemCharacter_generated_h

#define GunSystem_Source_GunSystem_GunSystemCharacter_h_20_SPARSE_DATA
#define GunSystem_Source_GunSystem_GunSystemCharacter_h_20_RPC_WRAPPERS
#define GunSystem_Source_GunSystem_GunSystemCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define GunSystem_Source_GunSystem_GunSystemCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunSystemCharacter(); \
	friend struct Z_Construct_UClass_AGunSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AGunSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunSystem"), NO_API) \
	DECLARE_SERIALIZER(AGunSystemCharacter)


#define GunSystem_Source_GunSystem_GunSystemCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAGunSystemCharacter(); \
	friend struct Z_Construct_UClass_AGunSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AGunSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunSystem"), NO_API) \
	DECLARE_SERIALIZER(AGunSystemCharacter)


#define GunSystem_Source_GunSystem_GunSystemCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGunSystemCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGunSystemCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunSystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunSystemCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunSystemCharacter(AGunSystemCharacter&&); \
	NO_API AGunSystemCharacter(const AGunSystemCharacter&); \
public:


#define GunSystem_Source_GunSystem_GunSystemCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunSystemCharacter(AGunSystemCharacter&&); \
	NO_API AGunSystemCharacter(const AGunSystemCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunSystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunSystemCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunSystemCharacter)


#define GunSystem_Source_GunSystem_GunSystemCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AGunSystemCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AGunSystemCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AGunSystemCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AGunSystemCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AGunSystemCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGunSystemCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AGunSystemCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AGunSystemCharacter, L_MotionController); }


#define GunSystem_Source_GunSystem_GunSystemCharacter_h_17_PROLOG
#define GunSystem_Source_GunSystem_GunSystemCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunSystem_Source_GunSystem_GunSystemCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	GunSystem_Source_GunSystem_GunSystemCharacter_h_20_SPARSE_DATA \
	GunSystem_Source_GunSystem_GunSystemCharacter_h_20_RPC_WRAPPERS \
	GunSystem_Source_GunSystem_GunSystemCharacter_h_20_INCLASS \
	GunSystem_Source_GunSystem_GunSystemCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GunSystem_Source_GunSystem_GunSystemCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GunSystem_Source_GunSystem_GunSystemCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	GunSystem_Source_GunSystem_GunSystemCharacter_h_20_SPARSE_DATA \
	GunSystem_Source_GunSystem_GunSystemCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	GunSystem_Source_GunSystem_GunSystemCharacter_h_20_INCLASS_NO_PURE_DECLS \
	GunSystem_Source_GunSystem_GunSystemCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNSYSTEM_API UClass* StaticClass<class AGunSystemCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GunSystem_Source_GunSystem_GunSystemCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
