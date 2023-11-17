// Fill out your copyright notice in the Description page of Project Settings.


#include "GASAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"
#include "Containers/UnrealString.h"
UGASAttributeSet::UGASAttributeSet()
{
}

void UGASAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME_CONDITION_NOTIFY(UGASAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGASAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGASAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGASAttributeSet, MaxStamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGASAttributeSet, Armor, COND_None, REPNOTIFY_Always);
}


//This might be useful in the future but not for our current clamping

/*
void UGASAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));
	//FString atr = Attribute.GetName();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, atr);
	//FString ouratr = GetStaminaAttribute().GetName();
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, ouratr);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = (FMath::Clamp(NewValue, 0.0f, GetMaxHealth()));
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("HP1"));
	}
	else if (Attribute == GetStaminaAttribute())
	{   
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OldValue"));
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::SanitizeFloat(NewValue));
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::SanitizeFloat(GetMaxStamina()));
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxStamina()); //This just doesn't work...
	}

}
*/

void UGASAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message2!"));

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("HP2"));
	} 
	else if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
	{
		SetStamina(FMath::Clamp(GetStamina(), 0.0f, GetMaxStamina()));
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Stam2"));
	}

}

void UGASAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGASAttributeSet, Stamina, OldStamina);
}

void UGASAttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGASAttributeSet, MaxStamina, OldMaxStamina);
}

void UGASAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGASAttributeSet, Health, OldHealth);
}

void UGASAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGASAttributeSet, MaxHealth, OldMaxHealth);
}

void UGASAttributeSet::OnRep_Armor(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGASAttributeSet, Armor, OldHealth);
}