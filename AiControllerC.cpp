// Fill out your copyright notice in the Description page of Project Settings.

#include "AiControllerC.h"

EState AAiControllerC::Idle()
{
	UE_LOG(LogTemp, Error,TEXT("Idle"));
	return CurrentState = EState::State_Patrol;
}

EState AAiControllerC::Patrol()
{
	UE_LOG(LogTemp, Error, TEXT("Patrol"));
	return CurrentState = EState::State_Chase;
}

EState AAiControllerC::Chase()
{
	UE_LOG(LogTemp, Error, TEXT("Chase"));
	return CurrentState = EState::State_Idle;
}

void AAiControllerC::Tick(float DeltaTime)
{
	switch (CurrentState)
	{
	case EState::State_Idle:
		Idle();
		break;

	case EState::State_Patrol:
		Patrol();
		break;

	case EState::State_Chase:
		Chase();
		break;
	}
}
