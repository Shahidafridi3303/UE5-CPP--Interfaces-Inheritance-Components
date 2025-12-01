// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeComponent.h"

// Sets default values for this component's properties
UAttributeComponent::UAttributeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAttributeComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UAttributeComponent::ReceiveDamage(float Damage)
{

}

void UAttributeComponent::AddHealth(float HealthToAdd)
{
}

//void UAttributeComponent::Stamina(float StaminaCost)
//{
//}

float UAttributeComponent::GethealthPercent()
{
	return 0.0f;
}

float UAttributeComponent::StaminaPercent()
{
	return 0.0f;
}

void UAttributeComponent::AddSouls(int SoulsToAdd)
{
}

void UAttributeComponent::AddGold(int GoldToAdd)
{
}


// Called every frame
void UAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

