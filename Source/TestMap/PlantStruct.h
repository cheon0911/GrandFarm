#pragma once

#include "CoreMinimal.h"
#include "PlantStruct.generated.h"

USTRUCT(BlueprintType)
struct FPlantGrowthData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;               // �Ĺ� �̸�

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 GrowthStage = 0;      // 0: ����, 1: ����, 2: ����, 3: ����

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 PlantedDay = 0;       // ���� ��

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bReadyToHarvest = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bWatered = false;
};