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

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = "Days")
	int32 DayInSec = 10;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = "Tree")
	int32 AgeInSec = 30;
};
