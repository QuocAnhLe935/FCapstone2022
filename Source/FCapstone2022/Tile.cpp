// Fill out your copyright notice in the Description page of Project Settings.


#include "Tile.h"

// Sets default values
ATile::ATile()
{
	//spawn tile mesh
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	tileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));
	tileMesh->SetupAttachment(RootComponent);

}



