// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GE_Calculations.generated.h"

/**
 * 
 */
UCLASS()
class GAMEOFF2023PROJECT_API UGE_Calculations : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:
	UGE_Calculations();

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
};
