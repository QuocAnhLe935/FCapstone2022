// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <FCapstone2022/Tile.h>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridManager.generated.h"


UCLASS()
class FCAPSTONE2022_API AGridManager : public AActor
{
	GENERATED_BODY()
	
protected:
	TArray<TArray<ATile*>> Grid2DArray;

	UPROPERTY(EditAnywhere, Category = "Grid|Layout")
		int32 GridWidth;

	UPROPERTY(EditAnywhere, Category = "Grid|Layout")
		int32 GridHeight;

	UPROPERTY(EditAnywhere, Category = "Grid|Layout")
		float TileRowOffSet;

	UPROPERTY(EditAnywhere, Category = "Grid|Layout")
		float TileColOffSet;
	//set a member varible, which BP_tile to use
	UPROPERTY(EditAnywhere, Category = "Grid|Layout")
		TSubclassOf<ATile> NormalTile;
public:	
	// Sets default values for this actor's properties
	AGridManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	

};
