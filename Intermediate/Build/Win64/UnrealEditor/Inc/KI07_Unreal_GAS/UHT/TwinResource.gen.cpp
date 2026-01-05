// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KI07_Unreal_GAS/Public/Interface/TwinResource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinResource() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_UTwinResource();
KI07_UNREAL_GAS_API UClass* Z_Construct_UClass_UTwinResource_NoRegister();
UPackage* Z_Construct_UPackage__Script_KI07_Unreal_GAS();
// End Cross Module References

// Begin Interface UTwinResource Function UpdateCurrentHealth
struct TwinResource_eventUpdateCurrentHealth_Parms
{
	float InValue;
};
void ITwinResource::UpdateCurrentHealth(float InValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateCurrentHealth instead.");
}
static FName NAME_UTwinResource_UpdateCurrentHealth = FName(TEXT("UpdateCurrentHealth"));
void ITwinResource::Execute_UpdateCurrentHealth(UObject* O, float InValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTwinResource::StaticClass()));
	TwinResource_eventUpdateCurrentHealth_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTwinResource_UpdateCurrentHealth);
	if (Func)
	{
		Parms.InValue=InValue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITwinResource*)(O->GetNativeInterfaceAddress(UTwinResource::StaticClass())))
	{
		I->UpdateCurrentHealth_Implementation(InValue);
	}
}
struct Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/Interface/TwinResource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinResource_eventUpdateCurrentHealth_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinResource, nullptr, "UpdateCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth_Statics::PropPointers), sizeof(TwinResource_eventUpdateCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(TwinResource_eventUpdateCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITwinResource::execUpdateCurrentHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCurrentHealth_Implementation(Z_Param_InValue);
	P_NATIVE_END;
}
// End Interface UTwinResource Function UpdateCurrentHealth

// Begin Interface UTwinResource Function UpdateCurrentMana
struct TwinResource_eventUpdateCurrentMana_Parms
{
	float InValue;
};
void ITwinResource::UpdateCurrentMana(float InValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateCurrentMana instead.");
}
static FName NAME_UTwinResource_UpdateCurrentMana = FName(TEXT("UpdateCurrentMana"));
void ITwinResource::Execute_UpdateCurrentMana(UObject* O, float InValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTwinResource::StaticClass()));
	TwinResource_eventUpdateCurrentMana_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTwinResource_UpdateCurrentMana);
	if (Func)
	{
		Parms.InValue=InValue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITwinResource*)(O->GetNativeInterfaceAddress(UTwinResource::StaticClass())))
	{
		I->UpdateCurrentMana_Implementation(InValue);
	}
}
struct Z_Construct_UFunction_UTwinResource_UpdateCurrentMana_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/Interface/TwinResource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTwinResource_UpdateCurrentMana_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinResource_eventUpdateCurrentMana_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinResource_UpdateCurrentMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinResource_UpdateCurrentMana_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateCurrentMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinResource_UpdateCurrentMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinResource, nullptr, "UpdateCurrentMana", nullptr, nullptr, Z_Construct_UFunction_UTwinResource_UpdateCurrentMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateCurrentMana_Statics::PropPointers), sizeof(TwinResource_eventUpdateCurrentMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateCurrentMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinResource_UpdateCurrentMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(TwinResource_eventUpdateCurrentMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinResource_UpdateCurrentMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinResource_UpdateCurrentMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITwinResource::execUpdateCurrentMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCurrentMana_Implementation(Z_Param_InValue);
	P_NATIVE_END;
}
// End Interface UTwinResource Function UpdateCurrentMana

// Begin Interface UTwinResource Function UpdateMaxHealth
struct TwinResource_eventUpdateMaxHealth_Parms
{
	float InValue;
};
void ITwinResource::UpdateMaxHealth(float InValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateMaxHealth instead.");
}
static FName NAME_UTwinResource_UpdateMaxHealth = FName(TEXT("UpdateMaxHealth"));
void ITwinResource::Execute_UpdateMaxHealth(UObject* O, float InValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTwinResource::StaticClass()));
	TwinResource_eventUpdateMaxHealth_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTwinResource_UpdateMaxHealth);
	if (Func)
	{
		Parms.InValue=InValue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITwinResource*)(O->GetNativeInterfaceAddress(UTwinResource::StaticClass())))
	{
		I->UpdateMaxHealth_Implementation(InValue);
	}
}
struct Z_Construct_UFunction_UTwinResource_UpdateMaxHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/Interface/TwinResource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTwinResource_UpdateMaxHealth_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinResource_eventUpdateMaxHealth_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinResource_UpdateMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinResource_UpdateMaxHealth_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinResource_UpdateMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinResource, nullptr, "UpdateMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UTwinResource_UpdateMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateMaxHealth_Statics::PropPointers), sizeof(TwinResource_eventUpdateMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinResource_UpdateMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(TwinResource_eventUpdateMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinResource_UpdateMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinResource_UpdateMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITwinResource::execUpdateMaxHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMaxHealth_Implementation(Z_Param_InValue);
	P_NATIVE_END;
}
// End Interface UTwinResource Function UpdateMaxHealth

// Begin Interface UTwinResource Function UpdateMaxMana
struct TwinResource_eventUpdateMaxMana_Parms
{
	float InValue;
};
void ITwinResource::UpdateMaxMana(float InValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateMaxMana instead.");
}
static FName NAME_UTwinResource_UpdateMaxMana = FName(TEXT("UpdateMaxMana"));
void ITwinResource::Execute_UpdateMaxMana(UObject* O, float InValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTwinResource::StaticClass()));
	TwinResource_eventUpdateMaxMana_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTwinResource_UpdateMaxMana);
	if (Func)
	{
		Parms.InValue=InValue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITwinResource*)(O->GetNativeInterfaceAddress(UTwinResource::StaticClass())))
	{
		I->UpdateMaxMana_Implementation(InValue);
	}
}
struct Z_Construct_UFunction_UTwinResource_UpdateMaxMana_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/Interface/TwinResource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTwinResource_UpdateMaxMana_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TwinResource_eventUpdateMaxMana_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinResource_UpdateMaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinResource_UpdateMaxMana_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateMaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinResource_UpdateMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinResource, nullptr, "UpdateMaxMana", nullptr, nullptr, Z_Construct_UFunction_UTwinResource_UpdateMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateMaxMana_Statics::PropPointers), sizeof(TwinResource_eventUpdateMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinResource_UpdateMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTwinResource_UpdateMaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(TwinResource_eventUpdateMaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinResource_UpdateMaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwinResource_UpdateMaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITwinResource::execUpdateMaxMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMaxMana_Implementation(Z_Param_InValue);
	P_NATIVE_END;
}
// End Interface UTwinResource Function UpdateMaxMana

// Begin Interface UTwinResource
void UTwinResource::StaticRegisterNativesUTwinResource()
{
	UClass* Class = UTwinResource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateCurrentHealth", &ITwinResource::execUpdateCurrentHealth },
		{ "UpdateCurrentMana", &ITwinResource::execUpdateCurrentMana },
		{ "UpdateMaxHealth", &ITwinResource::execUpdateMaxHealth },
		{ "UpdateMaxMana", &ITwinResource::execUpdateMaxMana },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTwinResource);
UClass* Z_Construct_UClass_UTwinResource_NoRegister()
{
	return UTwinResource::StaticClass();
}
struct Z_Construct_UClass_UTwinResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/TwinResource.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinResource_UpdateCurrentHealth, "UpdateCurrentHealth" }, // 2563249155
		{ &Z_Construct_UFunction_UTwinResource_UpdateCurrentMana, "UpdateCurrentMana" }, // 1359676432
		{ &Z_Construct_UFunction_UTwinResource_UpdateMaxHealth, "UpdateMaxHealth" }, // 2328178274
		{ &Z_Construct_UFunction_UTwinResource_UpdateMaxMana, "UpdateMaxMana" }, // 4016067581
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITwinResource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTwinResource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_KI07_Unreal_GAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTwinResource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTwinResource_Statics::ClassParams = {
	&UTwinResource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTwinResource_Statics::Class_MetaDataParams), Z_Construct_UClass_UTwinResource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTwinResource()
{
	if (!Z_Registration_Info_UClass_UTwinResource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinResource.OuterSingleton, Z_Construct_UClass_UTwinResource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinResource.OuterSingleton;
}
template<> KI07_UNREAL_GAS_API UClass* StaticClass<UTwinResource>()
{
	return UTwinResource::StaticClass();
}
UTwinResource::UTwinResource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinResource);
UTwinResource::~UTwinResource() {}
// End Interface UTwinResource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_TwinResource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTwinResource, UTwinResource::StaticClass, TEXT("UTwinResource"), &Z_Registration_Info_UClass_UTwinResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinResource), 2795489771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_TwinResource_h_626614527(TEXT("/Script/KI07_Unreal_GAS"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_TwinResource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_GAS_Tutorial_Source_KI07_Unreal_GAS_Public_Interface_TwinResource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
