// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject\ObjectMacros.h"
#include "AIController.h"
#include "AiControllerC.generated.h"

UENUM()
enum class EState : uint8
{
	State_Idle,
	State_Patrol,
	State_Chase
};

UCLASS()
class HOMEWORK_API AAiControllerC : public AAIController
{
	GENERATED_BODY()
	
	UPROPERTY()
	EState CurrentState = EState::State_Idle;

public:
	EState Idle();
	EState Patrol();
	EState Chase();

	virtual void Tick(float DeltaTime) override;
};
