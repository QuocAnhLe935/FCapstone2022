// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

class UStaticMeshComponent;
//create an enum class to define tile - UNUSED
UENUM()
enum class TileType : uint8
{
	INVALID,
	GRASS,
	WATER,
	MAX UMETA(Hidden)
};

UCLASS()
class FCAPSTONE2022_API ATile : public AActor
{
	GENERATED_BODY()
protected:
	//UPROPERTY to expose to the editor
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tile")
		TileType tileType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Tile")
		UStaticMeshComponent* tileMesh;
public:	
	// Sets default values for this actor's properties
	ATile();

};
