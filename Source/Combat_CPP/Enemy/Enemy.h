// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Combat_CPP/Characters/BaseCharacter.h"
#include "Combat_CPP/Characters/CharacterTypes.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_CPP_API AEnemy : public ABaseCharacter
{
	GENERATED_BODY()

public:
	AEnemy();
	
	class UStaticMeshComponent* Shield;

	EEnemyState EnemyState = EEnemyState::EES_NoState;

public:
	FORCEINLINE EEnemyState GetEnemyState() const { return EnemyState; }
};
