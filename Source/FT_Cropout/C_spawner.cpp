// Fill out your copyright notice in the Description page of Project Settings.


#include "C_spawner.h"

// Sets default values
AC_spawner::AC_spawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_spawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_spawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

