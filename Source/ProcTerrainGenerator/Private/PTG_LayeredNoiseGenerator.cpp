// Fill out your copyright notice in the Description page of Project Settings.


#include "PTG_LayeredNoiseGenerator.h"
#include "FastNoiseGenerator.h"

// Sets default values
APTG_LayeredNoiseGenerator::APTG_LayeredNoiseGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/* Initialize noise wrappers on construction. */
	for (FPTG_NoiseWrapperConfig config : NoiseGeneratorConfigArray) {
		UFastNoiseWrapper* newNoiseWrapper = nullptr;
		
		newNoiseWrapper = CreateDefaultSubobject<UFastNoiseWrapper>(TEXT("FastNoiseWrapper"));

		//newNoiseWrapper->SetupFastNoise(
		//
		//);
		NoiseGeneratorWrapperArray.Add(newNoiseWrapper);
	}
}


