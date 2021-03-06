// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UOneTwoTreeDeveloperSettings.generated.h"

/**
 * 
 */
UCLASS(Config = Game, defaultconfig, meta = (DisplayName = "OneTwoTree Settings"))
class ONETWOTREE_API UUOneTwoTreeDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	static UUOneTwoTreeDeveloperSettings* Get() { return CastChecked<UUOneTwoTreeDeveloperSettings>(StaticClass()->GetDefaultObject()); }

	UFUNCTION(BlueprintPure)
	static UUOneTwoTreeDeveloperSettings* GetOneTwoTreeSettings() { return Get(); }

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Days")
		int32 DayAndNightInSec = 10;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Tree")
		int32 AgeInSec = 30;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Tree")
		int32 GrowthInSec = 10;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Tree")
		int32 FirstRankOffsetInSec = 6;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Tree")
		int32 OtherRanksOffsetInSec = 2;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Tree")
		int32 TimeBeforeRemovingDeadTreeInSec = 5;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Tree", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
		float RandomMeshScaleReducerMin = 0.0;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Tree", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
		float RandomMeshScaleReducerMax = 0.0;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Weather")
		int32 SunRayCastDistanceInMeter = 100;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Weather")
		float IsSunnyRaycastTimerInSec = 1.0;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Generation", meta=(DisplayName="Activate"))
		bool ActivateGenerationManager = true;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Generation")
		int32 TreeCount = 20;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Generation")
		int32 SpawnRadiusInMeter = 1000;

	UPROPERTY(Config, EditAnywhere, BluePrintReadOnly, Category = "Generation", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
		float MutationRatio = 0.1;
};
