// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterTypes.h"
#include "Combat_CPP/Characters/BaseCharacter.h"
#include "GameFramework/Character.h"
#include "SlashCharacter.generated.h"

UCLASS()
class COMBAT_CPP_API ASlashCharacter : public ABaseCharacter
{
	GENERATED_BODY()

private:
	// Components
	UPROPERTY(VisibleAnywhere);
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere);
	class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere);
	class UGroomComponent* Hair;

	UPROPERTY(VisibleAnywhere);
	UGroomComponent* Eyebrows;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void Turn(float Value);
	void LookUp(float Value);
	void Dodge();

	virtual void Jump() override;


public:
	// Sets default values for this character's properties
	ASlashCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void PlayerAttack();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	ECharacterState CharacterState = ECharacterState::ECS_Unequipped;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EActionState ActionState = EActionState::EAS_Unoccupied;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TEnumAsByte<EDeathPose> DeathPose;

public:
	FORCEINLINE ECharacterState GetCharacterState() const { return CharacterState; }
	FORCEINLINE EActionState GetActionState() const { return ActionState; }
	FORCEINLINE TEnumAsByte<EDeathPose> GetDeathPose() const { return DeathPose; }
};
