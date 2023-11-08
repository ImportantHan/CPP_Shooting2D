// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

class UBoxComponent; // 전방선언(forward declaration) - 선언 예정

UCLASS()
class SHOOTINGGAMECPP_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(EditAnywhere)
	class UBoxComponent* Box;
	// Components/BoxComponent.h에 포함, 포인터 변수 선언 시 class의 의미는 전방선언

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Cube; // 기본 형태인 CoreMinimal.h에 포함

	// speed 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed = 500.f;

	// 가로축과 세로축 입력받아 처리하는 함수
	float h, v;
	void AxisHorizontal(float value);
	void AxisVertical(float value);
};
