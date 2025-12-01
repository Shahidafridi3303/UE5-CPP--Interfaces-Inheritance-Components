// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COMBAT_CPP_API UAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttributeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Attributes")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Attributes")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Attributes")
	float Stamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Attributes")
	float maxStamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Attributes")
	int Souls = -100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Attributes")
	int Gold;

public:
	void ReceiveDamage(float Damage);
	void AddHealth(float HealthToAdd);
	//void Stamina(float StaminaCost);

	float GethealthPercent();
	float StaminaPercent();

	void AddSouls(int SoulsToAdd);
	void AddGold(int GoldToAdd);

	bool IsAlive();

	FORCEINLINE float GetHealth() { return Health; }
	FORCEINLINE float GetStamina() { return Stamina; }
	FORCEINLINE int GetSouls() { return Souls; }
	FORCEINLINE int GetGold() { return Gold; }
};
