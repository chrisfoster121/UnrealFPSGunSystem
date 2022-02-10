// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "Curves/CurveFloat.h"
#include "Gun.generated.h"

UCLASS()
class GUNSYSTEM_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Fire(float DeltaTime);
	virtual void Reload();

	void SpawnRound(FActorSpawnParameters spawnParams);

	FVector RaycastFromBarrel();
	void LogFVector(FVector vector) { UE_LOG(LogTemp, Warning, TEXT("X: %f  Y: %f  Z: %f"), vector.X, vector.Y, vector.Z); };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ammoCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float reloadTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float bulletSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int RPM;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ProjectileClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float minRaycastDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxRaycastDistance;


	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (MakeEditWidget = true))
	float MuzzleLocation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool firing = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int ammoRemaining;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool reloading = false;
	float elapsedTime = 0;
	FActorSpawnParameters* spawnParams;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* horizontalSpread;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* verticalSpread;


	/*Burst Fire Variables*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool burstMode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool burstComplete;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int burstSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int currentBurstCount;

	float spreadValue = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float spreadIncreaseRate = 0.03;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float spreadDecreaseRate = 0.01;





	
	bool GetKeyState(FKey key);
	UPROPERTY(BlueprintReadWrite)
	bool LeftHanded;

	UPROPERTY(EditAnywhere, Category = "Right Controls")
	FKey RightFireKey;
	UPROPERTY(EditAnywhere, Category = "Right Controls")
	FKey RightReloadKey;
	UPROPERTY(EditAnywhere, Category = "Right Controls")
	FKey RightOptionOneKey;
	UPROPERTY(EditAnywhere, Category = "Right Controls")
	FKey RightOptionTwoKey;


	UPROPERTY(EditAnywhere, Category = "Left Controls")
	FKey LeftFireKey;
	UPROPERTY(EditAnywhere, Category = "Left Controls")
	FKey LeftReloadKey;
	UPROPERTY(EditAnywhere, Category = "Left Controls")
	FKey LeftOptionOneKey;
	UPROPERTY(EditAnywhere, Category = "Left Controls")
	FKey LeftOptionTwoKey;

};
