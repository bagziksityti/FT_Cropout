// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_CO_MyGameModeBase.h"

AActor* ACPP_CO_MyGameModeBase::CGetSpawnRef()
{
	TArray<AActor*> Found;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AC_Spawner::StaticClass(), Found);
	UE_LOG(LogTemp, Warning, TEXT("Found %d spawners"), Found.Num());
	if (Found.Num() > 0)
	{
		return Found[0];
	}
	return nullptr;
}