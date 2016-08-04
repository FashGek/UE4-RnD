// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Base/RnDPlayerChar.h"
#include "WavePlayer.generated.h"

UCLASS()
class RND_API AWavePlayer : public ARnDPlayerChar
{
	GENERATED_BODY()
public:
	UFUNCTION(Client, Reliable)
	void UpdateHUD();

	UFUNCTION(BlueprintImplementableEvent, Category="HUD")
	void BP_UpdateHUD();
};
