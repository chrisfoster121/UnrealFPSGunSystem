// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Kismet/GameplayStatics.h"
#include "GunProjectile.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();

	FActorSpawnParameters* SpawnParams = new FActorSpawnParameters;
	SpawnParams->Owner = this;
	SpawnParams->Instigator = GetInstigator();
	SpawnParams->SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	spawnParams = SpawnParams;
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	elapsedTime += DeltaTime;

	UE_LOG(LogTemp, Warning, TEXT("Ammo STATS:"));
	UE_LOG(LogTemp, Warning, TEXT("Current: %d"), ammoRemaining);
	//UE_LOG(LogTemp, Warning, TEXT("Max: %d"), burstSize);
	

	if (!reloading && ammoRemaining != ammoCount)
	{
		reloading = GetKeyState(RightReloadKey);
		if (reloading)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Calling Reload"));
			elapsedTime = 0;
			firing = false;
			Reload();
		}

	}

	if (reloading)
	{
		
		if (elapsedTime >= reloadTime)
		{
			UE_LOG(LogTemp, Warning, TEXT("Reloading"));
			reloading = false;
			elapsedTime = 0;
			ammoRemaining = ammoCount;
			
		}
	}
	else if (GetKeyState(RightFireKey) && ammoRemaining > 0)
	{
		if (burstMode)
		{
			if (!burstComplete)
			{
				//UE_LOG(LogTemp, Warning, TEXT("Calling Fire"));
				Fire(DeltaTime);
			}
			/*UE_LOG(LogTemp, Warning, TEXT("BURST STATS:"));
			UE_LOG(LogTemp, Warning, TEXT("Current: %d"), currentBurstCount);
			UE_LOG(LogTemp, Warning, TEXT("Size: %d"), burstSize);*/
		}
		else
		{
			//UE_LOG(LogTemp, Warning, TEXT("Calling Fire"));
			Fire(DeltaTime);
		}
		
	}
	else if (burstMode)
	{
		if (burstComplete && !GetKeyState(RightFireKey))
		{
			firing = false;
			burstComplete = false;
			currentBurstCount = 0;
		}
		
	}
	else
	{
		firing = false;
		
	}

	if (ammoRemaining <= 0 && !reloading)
	{
		firing = false;
		Reload();
		reloading = true;
	}

}



void AGun::Fire(float DeltaTime)
{
	//elapsedTime += deltaTime;
	firing = false;
	if (burstMode)
	{
		if (elapsedTime >= (60.0 / RPM))
		{

			elapsedTime = 0;
			SpawnRound(*spawnParams);
			firing = true;
			currentBurstCount++;
			
			if (currentBurstCount >= burstSize)
			{
				burstComplete = true;
			}
		}

		UE_LOG(LogTemp, Warning, TEXT("Calling Burst Fire"));
		return;
	}

	if (elapsedTime >= (60.0 / RPM))
	{

		elapsedTime = 0;
		SpawnRound(*spawnParams);

		firing = true;

		UE_LOG(LogTemp, Warning, TEXT("Calling Fire"));
	}
}


void AGun::Reload()
{
	UE_LOG(LogTemp, Warning, TEXT("Calling Base Gun Reload"));
}

bool AGun::GetKeyState(FKey key)
{
	APlayerController* playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	bool keyState;

	if (!LeftHanded)
	{
		keyState = playerController->IsInputKeyDown(key);
	}
	else
	{
		keyState = playerController->IsInputKeyDown(key);
	}



	return keyState;
}

void AGun::SpawnRound(FActorSpawnParameters SpawnParams)
{
	UWorld* World = GetWorld();

	AGunProjectile* bullet = World->SpawnActor<AGunProjectile>(ProjectileClass, (GetActorLocation() + MuzzleLocation * GetActorForwardVector()), GetActorRotation(), SpawnParams);

	if (bullet)
	{
		bullet->SetInitialSpeed(bulletSpeed);

		FVector dir = RaycastFromCamera() - (GetActorLocation());
		//LogFVector(dir);
		dir.Normalize();
		bullet->SetInitialDirection(dir);
	

	//
	}

	ammoRemaining--;

	

}

FVector AGun::RaycastFromCamera()
{
	FVector cameraForward = camera->GetForwardVector();
	FVector cameraLoc = camera->GetComponentLocation();




	UWorld* World = GetWorld();
	FHitResult result;
	FVector start = cameraLoc + cameraForward * minRaycastDistance;
	FCollisionQueryParams CollisionParameters;
	FVector end = cameraLoc + cameraForward * maxRaycastDistance;

	World->LineTraceSingleByChannel(result, start, end, ECollisionChannel::ECC_Visibility);

	if (result.Actor != NULL)
	{
		return result.ImpactPoint;
	}
	else
	{
		return cameraLoc + cameraForward * maxRaycastDistance;
	}


}

