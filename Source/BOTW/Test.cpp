// Fill out your copyright notice in the Description page of Project Settings.


#include "Test.h"

// Sets default values
ATest::ATest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AActor* cube;
// Called when the game starts or when spawned
void ATest::BeginPlay()
{
	//je veux faire spawn un cube
	cube = GetWorld()->SpawnActor<AActor>(AActor::StaticClass(), FVector(0, 0, 0), FRotator(0, 0, 0));
	Super::BeginPlay();
	
}
// Called every frame
void ATest::Tick(float DeltaTime)
{
	// je veux faire bouger le cube avec le temps et un lerp
	cube->SetActorLocation(FMath::Lerp(FVector(0, 0, 0), FVector(100, 100, 100), DeltaTime));
	Super::Tick(DeltaTime);

}

