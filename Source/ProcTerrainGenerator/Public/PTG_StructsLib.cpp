#include "PTG_StructsLib.h"

// Sets default values
APTG_StructsLib::APTG_StructsLib()
{
	// Set this empty to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APTG_StructsLib::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APTG_StructsLib::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APTG_StructsLib::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
