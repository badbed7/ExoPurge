// Fill out your copyright notice in the Description page of Project Settings.


#include "codingtest.h"

// Sets default values
Acodingtest::Acodingtest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Acodingtest::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello World"));
}

// Called every frame
void Acodingtest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
