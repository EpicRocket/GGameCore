// Copyright (c) 2025 Team EpicRocket. All rights reserved.

#pragma once

#include "Core/Component/GGameCoreComponent.h"

#include "GGameStateComponent.generated.h"

class AGameStateBase;

UCLASS(Abstract, Blueprintable, BlueprintType, HideCategories = (Trigger, PhysicsVolume))
class GGAMECORE_API UGGameStateComponent : public UGGameCoreComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	AGameStateBase* GetGameState() const;

};
