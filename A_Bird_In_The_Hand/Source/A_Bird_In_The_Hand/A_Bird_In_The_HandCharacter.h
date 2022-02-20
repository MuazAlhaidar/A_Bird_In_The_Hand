// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interactable.h"
#include "Pickup.h"
#include "A_Bird_In_The_HandCharacter.generated.h"

UCLASS(Blueprintable)
class AA_Bird_In_The_HandCharacter : public ACharacter {

	GENERATED_BODY()

 public:
	AA_Bird_In_The_HandCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent *GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent *GetCameraBoom() const { return CameraBoom; }
	/** Returns CursorToWorld subobject **/
	FORCEINLINE class UDecalComponent *GetCursorToWorld() { return CursorToWorld; }

 private:

	// The player's reach
	float Reach;

	// The player's help text
    FString HelpText;

	// The interactable the player is currently looking at
    AInteractable *CurrentInteractable;

	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent *TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent *CameraBoom;

	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UDecalComponent *CursorToWorld;

	// Toggles the player inventory
	void ToggleInventory();

	// Interacts with the currnet Interactable, if there is one
	void Interact();

	// Checks for an Interactable items directly in front of the player using a linetrace, called on a per tick basis
	void CheckforInteractables();
};
