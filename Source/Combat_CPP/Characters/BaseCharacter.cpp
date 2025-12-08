// Fill out your copyright notice in the Description page of Project Settings.

#include "Combat_CPP/Characters/BaseCharacter.h"
#include "Combat_CPP/Components/AttributeComponent.h"
#include "Combat_CPP/Item/Weapon.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Attributes = CreateDefaultSubobject<UAttributeComponent>(TEXT("Attributes"));
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	EquippedWeapon = GetWorld()->SpawnActor<AWeapon>(SpawnWeapon, GetActorLocation(), GetActorRotation());

}

void ABaseCharacter::GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter)
{

}

void ABaseCharacter::Attack()
{

}

void ABaseCharacter::Die()
{
}

void ABaseCharacter::HandleDamage(float DamageAmount)
{
}

void ABaseCharacter::AddHealth()
{
}

void ABaseCharacter::PlayHitSound(const FVector& ImpactPoint)
{
}

void ABaseCharacter::SpawnHitParticles(const FVector& ImpactPoint)
{
}

void ABaseCharacter::DisableCapsule()
{
}

void ABaseCharacter::CanAttack()
{
}

bool ABaseCharacter::IsAlive()
{
	return false;
}

void ABaseCharacter::DisableMeshCollision()
{
}

void ABaseCharacter::PlayHitReactMontage(const FName& SectionName)
{
}

int ABaseCharacter::PlayAttackMontage()
{
	PlayAnimMontage(AttackMontage);
	return 0;
}

int ABaseCharacter::PlayDeathMontage()
{
	return 0;
}

void ABaseCharacter::StopAttackMontage()
{
}

void ABaseCharacter::PlayDodgeMontage()
{
	PlayAnimMontage(DodgeMontage);
	//PlayMontageSection(DodgeMontage,);
}

void ABaseCharacter::PlayMontageSection(UAnimMontage* Montage, const FName& SectionName)
{
}

void ABaseCharacter::PlayRandomMontageSection(UAnimMontage* Montage, const TArray<FName>& SectionNames)
{
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

