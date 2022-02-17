// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"
#include <A_Bird_In_The_Hand/A_Bird_In_The_HandCharacter.h>
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>


APickup::APickup() {

    // Set up mesh for the pickup, and set the item name, help text, and item value
    InteractableMesh =
        CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
    InteractableMesh->SetSimulatePhysics(true);

    ItemName = FString("Enter an item name here....");
    InteractableHelpText = FString("Press E to pick item up");
    Value = 0;
}

void APickup::BeginPlay() {

    InteractableHelpText =
        FString::Printf(TEXT("%s: Press E to pick up"), *ItemName);
}

void APickup::Interact_Implementation() {
    AA_Bird_In_The_HandCharacter *Character = Cast<AA_Bird_In_The_HandCharacter>(
        UGameplayStatics::GetPlayerCharacter(this, 0));

    // TODO put code here that places the item in character's inventory

    OnPickedUp();
}

void APickup::Use_Implementation() {
    GLog->Log("Use() - called from the base Pickup class YOU SHOULDNT BE SEEING THIS");
}

void APickup::OnPickedUp() {

    InteractableMesh->SetVisibility(false);
    InteractableMesh->SetSimulatePhysics(false);
    InteractableMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
