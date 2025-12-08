// Fill out your copyright notice in the Description page of Project Settings.


#include "ABP_Enemy.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Enemy.h"
#include "Kismet/KismetMathLibrary.h"

void UABP_Enemy::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Enemy = Cast<AEnemy>(TryGetPawnOwner());
	if (Enemy)
	{
		EnemyCharacterMovement = Enemy->GetCharacterMovement();
	}
}

void UABP_Enemy::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (EnemyCharacterMovement)
	{
		GroundSpeed = UKismetMathLibrary::VSizeXY(EnemyCharacterMovement->Velocity);
		IsFalling = EnemyCharacterMovement->IsFalling();
		EnemyState = Enemy->GetEnemyState();
	}
}
