// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EClaimState : uint8;
#ifdef OURPROJECT_BaseNode_generated_h
#error "BaseNode.generated.h already included, missing '#pragma once' in BaseNode.h"
#endif
#define OURPROJECT_BaseNode_generated_h

#define OurProject_Source_OurProject_BaseNode_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execflipControlledState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->flipControlledState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisSameState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->isSameState(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setState(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execaddUnit) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attacker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->addUnit(Z_Param_attacker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(exectakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->takeDamage(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisCaptured) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->isCaptured(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execnodeClaimed) \
	{ \
		P_GET_ENUM(EClaimState,Z_Param_botTeam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->nodeClaimed(EClaimState(Z_Param_botTeam)); \
		P_NATIVE_END; \
	}


#define OurProject_Source_OurProject_BaseNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execflipControlledState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->flipControlledState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisSameState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->isSameState(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setState(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execaddUnit) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_attacker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->addUnit(Z_Param_attacker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(exectakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->takeDamage(Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisCaptured) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->isCaptured(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execnodeClaimed) \
	{ \
		P_GET_ENUM(EClaimState,Z_Param_botTeam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->nodeClaimed(EClaimState(Z_Param_botTeam)); \
		P_NATIVE_END; \
	}


#define OurProject_Source_OurProject_BaseNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseNode(); \
	friend struct Z_Construct_UClass_ABaseNode_Statics; \
public: \
	DECLARE_CLASS(ABaseNode, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OurProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseNode)


#define OurProject_Source_OurProject_BaseNode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABaseNode(); \
	friend struct Z_Construct_UClass_ABaseNode_Statics; \
public: \
	DECLARE_CLASS(ABaseNode, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OurProject"), NO_API) \
	DECLARE_SERIALIZER(ABaseNode)


#define OurProject_Source_OurProject_BaseNode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseNode(ABaseNode&&); \
	NO_API ABaseNode(const ABaseNode&); \
public:


#define OurProject_Source_OurProject_BaseNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseNode(ABaseNode&&); \
	NO_API ABaseNode(const ABaseNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseNode)


#define OurProject_Source_OurProject_BaseNode_h_16_PRIVATE_PROPERTY_OFFSET
#define OurProject_Source_OurProject_BaseNode_h_13_PROLOG
#define OurProject_Source_OurProject_BaseNode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OurProject_Source_OurProject_BaseNode_h_16_PRIVATE_PROPERTY_OFFSET \
	OurProject_Source_OurProject_BaseNode_h_16_RPC_WRAPPERS \
	OurProject_Source_OurProject_BaseNode_h_16_INCLASS \
	OurProject_Source_OurProject_BaseNode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OurProject_Source_OurProject_BaseNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OurProject_Source_OurProject_BaseNode_h_16_PRIVATE_PROPERTY_OFFSET \
	OurProject_Source_OurProject_BaseNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	OurProject_Source_OurProject_BaseNode_h_16_INCLASS_NO_PURE_DECLS \
	OurProject_Source_OurProject_BaseNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OURPROJECT_API UClass* StaticClass<class ABaseNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OurProject_Source_OurProject_BaseNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
