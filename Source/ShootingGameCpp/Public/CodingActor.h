// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodingActor.generated.h"
// generated.h는 가장 마지막에 위치

UCLASS()
class SHOOTINGGAMECPP_API ACodingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACodingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	// (Edit[수정] / Visible[읽기]) + (Anywhere / DefaultsOnly / InstanceOnly)
	// 블루프린트 좌측 MyBlueprint에서 보이도록 설정 가능 (BlueprintReadWrite, BlueprintReadOnly)
	// 지정자로 카테고리 이름 설정 가능 (= 원하는 카테고리 이름)
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//int number = 10; // 4byte 정수형

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//bool bReady = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//char c = 10; // 1byte 정수형

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//int ccc = 10; // 2byte 정수형
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//long aa = 10; // 8byte 정수형

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//float fNumber = 10.0f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//FString myName = "HJM"; // FText, FName, const char*

	// 노트 배열 만들고 BeginPlay에서 값을 채우고 Tick에서 시간의 진행에 따라 배열 값 출력
	//TArray<float> notes;
	//int noteIndex;
	//float currentTime;

	// 함수 선언
	// shift + alt + q (어시스턴트) // alt + enter(비주얼 스튜디오)
	UFUNCTION(BlueprintCallable)
	int MyAdd(int a, int b);

	UFUNCTION(BlueprintPure)
	int MyAdd2(int a, int b);
	
	UFUNCTION(BlueprintImplementableEvent) // 언리얼에서 선언해서 사용
	int MyAdd3(int a, int b);
};
