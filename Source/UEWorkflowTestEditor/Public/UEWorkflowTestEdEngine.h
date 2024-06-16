// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Editor/UnrealEdEngine.h"
#include "UEWorkflowTestEdEngine.generated.h"

/**
 * 
 */
UCLASS()
class UEWORKFLOWTESTEDITOR_API UUEWorkflowTestEdEngine : public UUnrealEdEngine
{
	GENERATED_BODY()

public:
	virtual void Init(IEngineLoop* InEngineLoop) override;
};
