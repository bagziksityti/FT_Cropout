// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_CO_GameModeBase.h"

AActor* ACPP_CO_GameModeBase::CGetSpawnRef()
{
    TArray<AActor*> Found;
    // This searches the world for your Spawner class
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AC_spawner::StaticClass(), Found);

    UE_LOG(LogTemp, Warning, TEXT("Found %d spawners"), Found.Num());

    if (Found.Num() > 0)
    {
        return Found[0]; // Returns the first spawner found
    }
    return nullptr;
}