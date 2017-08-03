// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ProjectileBoss.generated.h"

UCLASS()
class ATIVIDADE1_API AProjectileBoss : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileBoss();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere)
		USphereComponent* CollisionComp;

	//Objeto respons�vel pela Part�cula
	UPROPERTY(EditAnywhere)
		UParticleSystemComponent* Particle;

	//Temporizador para ativar a part�cula
	FTimerHandle TimerExplosion;
	void TimeToExplode();

	//Temporizador para destruir o objeto ap�s executar a part�cula
	FTimerHandle TimerDestroy;
	void TimeToDestroy();

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
};
