// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped UMETA(Displayname = "Unequipped"),
	ECS_EquippedOneHandedWeapon UMETA(Displayname = "EQuipped One-handed Weapon"),
	ECS_EquippedTwoHandedWeapon UMETA(Displayname = "EQuipped Two-handed Weapon")
};

UENUM(BlueprintType)
enum class EActionState : uint8
{
	EAS_Unoccupied UMETA(Displayname = "Unoccupied"),
	EAS_HitReaction UMETA(Displayname = "HitReaction"),
	EAS_Attacking UMETA(Displayname = "Attacking"),
	EAS_EquippingWeapon UMETA(Displayname = "Equipping Weapon"),
	EAS_Dodge UMETA(Displayname = "Dodge"),
	EAS_Dead UMETA(Displayname = "Dead")
};

UENUM(BlueprintType)
enum EDeathPose
{
	EDA_Death1 UMETA(Displayname = "Death1"),
	EDA_Death2 UMETA(Displayname = "Death2"),
	EDA_Death3 UMETA(Displayname = "Death3"),
	EDA_Death4 UMETA(Displayname = "Death4"),
	EDA_Death5 UMETA(Displayname = "Death5"),
	EDA_Death6 UMETA(Displayname = "Death6"),

	EDA_MAX UMETA(Displayname = "DefaultMAX")
};

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	EES_NoState UMETA(Displayname = "NoState"),

	EES_Dead UMETA(Displayname = "Dead"),
	EES_Patrolling UMETA(Displayname = "Patrolling"),
	EES_Chasing UMETA(Displayname = "Chasing"),
	EES_Attacking UMETA(Displayname = "Attacking"),
	EES_Engaged UMETA(Displayname = "Engaged")
};

/**
 * 
 */
class COMBAT_CPP_API CharacterTypes
{
public:
	CharacterTypes();
	~CharacterTypes();
};
