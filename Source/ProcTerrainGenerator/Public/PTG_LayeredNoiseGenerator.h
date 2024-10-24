// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PTG_StructsLib.h"
#include "GameFramework/Actor.h"
#include "PTG_LayeredNoiseGenerator.generated.h"


class UFastNoiseWrapper;

UCLASS()
class PROCTERRAINGENERATOR_API APTG_LayeredNoiseGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APTG_LayeredNoiseGenerator();
	TArray<FPTG_NoiseWrapperConfig> NoiseGeneratorConfigArray;

private:
	TArray<UFastNoiseWrapper*> NoiseGeneratorWrapperArray;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
