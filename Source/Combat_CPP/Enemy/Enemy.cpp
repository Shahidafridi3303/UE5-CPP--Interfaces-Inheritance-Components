// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Components/StaticMeshComponent.h"

AEnemy::AEnemy()
{
	Shield = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shield"));
	Shield->SetupAttachment(GetMesh());
	Shield->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Shield->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale,
		FName("LeftHandSocket"));
}
