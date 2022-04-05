// Fill out your copyright notice in the Description page of Project Settings.


#include "GridManager.h"

// Sets default values
AGridManager::AGridManager()
{
	
}

// Called when the game starts or when spawned
void AGridManager::BeginPlay()
{
	Super::BeginPlay();
	
	Grid2DArray.SetNumZeroed(GridWidth);
	for (int32 i = 0; i < Grid2DArray.Num(); ++i) {
		Grid2DArray[i].SetNumZeroed(GridHeight);
	}

	
	//
	for (int32 y = 0; y < GridHeight; ++y)
	{
		for (int32 x = 0; x < GridWidth; ++x)
		{
			const float xPos = x * TileRowOffSet;
			const float yPos = y * TileColOffSet;

			TSubclassOf<ATile> tileToSpawn = NormalTile;

			//Spawn tile
			ATile* newTile = GetWorld()->SpawnActor<ATile>(tileToSpawn, FVector(FIntPoint(xPos, yPos)), FRotator::ZeroRotator);
			newTile->TileIndex = FIntPoint(x, y);
			Grid2DArray[x][y] = newTile;

		}
	}
}



