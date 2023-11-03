// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAGRCharacter.h"
#include "AbilitySystemComponent.h"
#include "GASAttributeSet.h"



AMyAGRCharacter::AMyAGRCharacter()
{
    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComp");
    AbilitySystemComponent->SetIsReplicated(true);
    AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

    Attributes = CreateDefaultSubobject<UGASAttributeSet>("Attributes");
}

UAbilitySystemComponent* AMyAGRCharacter::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}

void AMyAGRCharacter::PossessedBy(AController* NewController)
{
    Super::PossessedBy(NewController);

    if (AbilitySystemComponent)
        AbilitySystemComponent->InitAbilityActorInfo(this, this);

    InitializeAttributes();
    GiveDefaultAbilities();
}

void AMyAGRCharacter::OnRep_PlayerState()
{
    Super::OnRep_PlayerState();

    if (AbilitySystemComponent)
        AbilitySystemComponent->InitAbilityActorInfo(this, this);

    InitializeAttributes();
}

void AMyAGRCharacter::InitializeAttributes()
{
    if (AbilitySystemComponent && DefaultAttributeEffect)
    {
        FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
        EffectContext.AddSourceObject(this);
        FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(DefaultAttributeEffect, 1, EffectContext);

        if (SpecHandle.IsValid())
            FActiveGameplayEffectHandle GEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
    }
}

void AMyAGRCharacter::GiveDefaultAbilities()
{
    if (HasAuthority() && AbilitySystemComponent)
        for (TSubclassOf<UGameplayAbility>& StartupAbility : DefaultAbilities)
            AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(StartupAbility.GetDefaultObject(), 1, 0));
}
