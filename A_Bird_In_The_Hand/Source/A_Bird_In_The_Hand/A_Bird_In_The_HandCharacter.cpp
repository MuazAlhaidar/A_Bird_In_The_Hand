// Copyright Epic Games, Inc. All Rights Reserved.

#include "A_Bird_In_The_HandCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/DecalComponent.h"
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Materials/Material.h"
#include "UObject/ConstructorHelpers.h"

AA_Bird_In_The_HandCharacter::AA_Bird_In_The_HandCharacter() {
    // Set size for player capsule
    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

    // Don't rotate character to camera direction
    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    // Configure character movement
    GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
    GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
    GetCharacterMovement()->bConstrainToPlane = true;
    GetCharacterMovement()->bSnapToPlaneAtStart = true;

    // Create a camera boom...
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
    CameraBoom->TargetArmLength = 800.f;
    CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
    CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

    // Create a camera...
    TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
    TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
    TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

    // Create a decal in the world to show the cursor's location
    CursorToWorld = CreateDefaultSubobject<UDecalComponent>("CursorToWorld");
    CursorToWorld->SetupAttachment(RootComponent);
    static ConstructorHelpers::FObjectFinder<UMaterial> DecalMaterialAsset(TEXT("Material'/Game/TopDownCPP/Blueprints/M_Cursor_Decal.M_Cursor_Decal'"));
    if (DecalMaterialAsset.Succeeded()) {
        CursorToWorld->SetDecalMaterial(DecalMaterialAsset.Object);
    }
    CursorToWorld->DecalSize = FVector(16.0f, 32.0f, 32.0f);
    CursorToWorld->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f).Quaternion());

    // Activate ticking in order to update the cursor every frame.
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;


    Reach = 250.0f;

    InputComponent->BindAction("Interact", IE_Pressed, this,
                               &AA_Bird_In_The_HandCharacter::Interact);
    InputComponent->BindAction("ToggleInventory", IE_Pressed, this,
                               &AA_Bird_In_The_HandCharacter::ToggleInventory);
}

void AA_Bird_In_The_HandCharacter::Tick(float DeltaSeconds) {
    Super::Tick(DeltaSeconds);

    if (CursorToWorld != nullptr) {
        if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()) {
            if (UWorld *World = GetWorld()) {
                FHitResult HitResult;
                FCollisionQueryParams Params(NAME_None, FCollisionQueryParams::GetUnknownStatId());
                FVector StartLocation = TopDownCameraComponent->GetComponentLocation();
                FVector EndLocation = TopDownCameraComponent->GetComponentRotation().Vector() * 2000.0f;
                Params.AddIgnoredActor(this);
                World->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, Params);
                FQuat SurfaceRotation = HitResult.ImpactNormal.ToOrientationRotator().Quaternion();
                CursorToWorld->SetWorldLocationAndRotation(HitResult.Location, SurfaceRotation);
            }
        } else if (APlayerController *PC = Cast<APlayerController>(GetController())) {
            FHitResult TraceHitResult;
            PC->GetHitResultUnderCursor(ECC_Visibility, true, TraceHitResult);
            FVector CursorFV = TraceHitResult.ImpactNormal;
            FRotator CursorR = CursorFV.Rotation();
            CursorToWorld->SetWorldLocation(TraceHitResult.Location);
            CursorToWorld->SetWorldRotation(CursorR);
        }
    }

    CheckforInteractables();
}

void AA_Bird_In_The_HandCharacter::ToggleInventory() {
    // TODO create HUD first
    // Code to open inventory goes here
}

void AA_Bird_In_The_HandCharacter::Interact() {
  if (CurrentInteractable != nullptr) {
    CurrentInteractable->Interact_Implementation();
  }
}

void AA_Bird_In_The_HandCharacter::CheckforInteractables() {

    // To linetrace, get start and end traces
    FVector StartTrace = TopDownCameraComponent->GetComponentLocation();
    FVector EndTrace =
        (TopDownCameraComponent->GetForwardVector() * Reach) + StartTrace;

    // Declare a hitrresult to store the raycast hit in
    FHitResult HitResult;

    // Initialize the query params - ignore the actor
    FCollisionQueryParams CQP;
    CQP.AddIgnoredActor(this);

    // Cast the line trace
    GetWorld()->LineTraceSingleByChannel(HitResult, StartTrace, EndTrace,
                                         ECC_WorldDynamic, CQP);

    AInteractable *PotentialInteractable =
        Cast<AInteractable>(HitResult.GetActor());

    if (PotentialInteractable == NULL) {
        HelpText = FString("");
        CurrentInteractable = nullptr;
        return;
    } else {
        CurrentInteractable = PotentialInteractable;
        HelpText = PotentialInteractable->InteractableHelpText;
    }
}
