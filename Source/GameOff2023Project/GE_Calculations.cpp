// Fill out your copyright notice in the Description page of Project Settings.

#include "GASAttributeSet.h"
#include "GASAbilitySystemComponent.h"
#include "GE_Calculations.h"

struct FDamageStatistics
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Armor);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Health);

	FDamageStatistics()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGASAttributeSet, Armor, Target, false); // Need a U before the GASAttributeSet and I do not know why
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGASAttributeSet, Health, Target, false);
	}

};

static const FDamageStatistics& DamageStatistics()
{
	static FDamageStatistics DamageStatistics;
	return DamageStatistics;
}

UGE_Calculations::UGE_Calculations()
{
	RelevantAttributesToCapture.Add(FDamageStatistics().HealthDef);
	RelevantAttributesToCapture.Add(FDamageStatistics().ArmorDef);
}


void UGE_Calculations::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	UAbilitySystemComponent* TargetAbilitySystemComponent = ExecutionParams.GetTargetAbilitySystemComponent();
	UAbilitySystemComponent* SourceAbilitySystemComponent = ExecutionParams.GetSourceAbilitySystemComponent();

	AActor* SourceActor = SourceAbilitySystemComponent ? SourceAbilitySystemComponent->GetAvatarActor() : nullptr;
	AActor* TargetActor = TargetAbilitySystemComponent ? TargetAbilitySystemComponent->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	// Gather the tags from the source and target as that can affect which buffs should be used
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Damage = ExecutionParams.GetOwningSpec().GetLevel();

	//float Health = FMath::Max<float>(Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("GASAttributeSet.Health")), false, -1.0f), 0.0f);
	//Health is unnecessary for what we're doing currently, may be necessary later
	float Armor = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatistics().ArmorDef, EvaluationParameters, Armor);
	Armor = FMath::Max<float>(Armor, 0.0f);

	float AltDamage = Damage - Armor;
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Health is %f"), Health));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Damage is %f"), Damage));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Armor is %f"), Armor));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("AltDamage is %f"), AltDamage));
	
	if (AltDamage < 0.f)
	{
		AltDamage = 1;
	}
	
	OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(DamageStatistics().HealthProperty, EGameplayModOp::Additive, -AltDamage));
	/*
	float Armor = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().ArmorDef, EvaluationParameters, Armor);
	Armor = FMath::Max<float>(Armor, 0.0f);

	float Damage = 0.0f;
	// Capture optional damage value set on the damage GE as a CalculationModifier under the ExecutionCalculation
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(DamageStatics().DamageDef, EvaluationParameters, Damage);
	// Add SetByCaller damage if it exists
	Damage += FMath::Max<float>(Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.Damage")), false, -1.0f), 0.0f);

	float UnmitigatedDamage = Damage; // Can multiply any damage boosters here

	float MitigatedDamage = (UnmitigatedDamage) * (100 / (100 + Armor));

	if (MitigatedDamage > 0.f)
	{
		// Set the Target's damage meta attribute
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(DamageStatics().DamageProperty, EGameplayModOp::Additive, MitigatedDamage));
	}

	// Broadcast damages to Target ASC
	UGDAbilitySystemComponent* TargetASC = Cast<UGDAbilitySystemComponent>(TargetAbilitySystemComponent);
	if (TargetASC)
	{
		UGDAbilitySystemComponent* SourceASC = Cast<UGDAbilitySystemComponent>(SourceAbilitySystemComponent);
		TargetASC->ReceiveDamage(SourceASC, UnmitigatedDamage, MitigatedDamage);
	}
	*/
}