// PlantManager.h
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlantActor.h"
#include "PlantManager.generated.h"

UCLASS()
class TESTMAP_API APlantManager : public AActor
{
    GENERATED_BODY()

public:
    APlantManager();

    // Spawn�� PlantActor Class
    UPROPERTY(EditAnywhere, Category = "Plant")
    TSubclassOf<APlantActor> PlantClass;

    // �ɾ��� ��� PlantActor ����
    UPROPERTY()
    TArray<APlantActor*> PlantedPlants;

    // �÷��̾ Ŭ���� ��ġ�� �Ĺ� �ɱ�
    UFUNCTION(BlueprintCallable, Category = "Plant")
    void PlantSeed(FVector Location);
};
