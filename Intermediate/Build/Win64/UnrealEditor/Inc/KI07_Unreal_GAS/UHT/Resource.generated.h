// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/Resource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KI07_UNREAL_GAS_Resource_generated_h
#error "Resource.generated.h already included, missing '#pragma once' in Resource.h"
#endif
#define KI07_UNREAL_GAS_Resource_generated_h

#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateMax_Implementation(float InValue) {}; \
	virtual void UpdateCurrent_Implementation(float InValue) {}; \
	DECLARE_FUNCTION(execUpdateMax); \
	DECLARE_FUNCTION(execUpdateCurrent);


#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_13_CALLBACK_WRAPPERS
#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KI07_UNREAL_GAS_API UResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UResource(UResource&&); \
	UResource(const UResource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KI07_UNREAL_GAS_API, UResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResource) \
	KI07_UNREAL_GAS_API virtual ~UResource();


#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUResource(); \
	friend struct Z_Construct_UClass_UResource_Statics; \
public: \
	DECLARE_CLASS(UResource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/KI07_Unreal_GAS"), KI07_UNREAL_GAS_API) \
	DECLARE_SERIALIZER(UResource)


#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IResource() {} \
public: \
	typedef UResource UClassType; \
	typedef IResource ThisClass; \
	static void Execute_UpdateCurrent(UObject* O, float InValue); \
	static void Execute_UpdateMax(UObject* O, float InValue); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_10_PROLOG
#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_13_CALLBACK_WRAPPERS \
	FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KI07_UNREAL_GAS_API UClass* StaticClass<class UResource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_Resource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
