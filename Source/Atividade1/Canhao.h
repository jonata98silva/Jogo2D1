// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Canhao.generated.h"

UCLASS()
class ATIVIDADE1_API ACanhao : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACanhao();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditAnywhere, Category = "Mesh")
		UStaticMeshComponent* MeshComp;

	FTimerHandle TimerShoot;

	void Shoot();
	
};
