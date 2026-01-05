// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/TestCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KI07_UNREAL_GAS_TestCharacter_generated_h
#error "TestCharacter.generated.h already included, missing '#pragma once' in TestCharacter.h"
#endif
#define KI07_UNREAL_GAS_TestCharacter_generated_h

#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Character_TestCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestCharacter(); \
	friend struct Z_Construct_UClass_ATestCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KI07_Unreal_GAS"), NO_API) \
	DECLARE_SERIALIZER(ATestCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ATestCharacter*>(this); }


#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Character_TestCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestCharacter(ATestCharacter&&); \
	ATestCharacter(const ATestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestCharacter) \
	NO_API virtual ~ATestCharacter();


#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Character_TestCharacter_h_13_PROLOG
#define FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Character_TestCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Character_TestCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Character_TestCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KI07_UNREAL_GAS_API UClass* StaticClass<class ATestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Character_TestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
