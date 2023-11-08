// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodingActor.generated.h"
// generated.h�� ���� �������� ��ġ

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
	// (Edit[����] / Visible[�б�]) + (Anywhere / DefaultsOnly / InstanceOnly)
	// �������Ʈ ���� MyBlueprint���� ���̵��� ���� ���� (BlueprintReadWrite, BlueprintReadOnly)
	// �����ڷ� ī�װ� �̸� ���� ���� (= ���ϴ� ī�װ� �̸�)
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//int number = 10; // 4byte ������

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//bool bReady = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//char c = 10; // 1byte ������

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//int ccc = 10; // 2byte ������
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//long aa = 10; // 8byte ������

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//float fNumber = 10.0f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyVar)
	//FString myName = "HJM"; // FText, FName, const char*

	// ��Ʈ �迭 ����� BeginPlay���� ���� ä��� Tick���� �ð��� ���࿡ ���� �迭 �� ���
	//TArray<float> notes;
	//int noteIndex;
	//float currentTime;

	// �Լ� ����
	// shift + alt + q (��ý���Ʈ) // alt + enter(���־� ��Ʃ���)
	UFUNCTION(BlueprintCallable)
	int MyAdd(int a, int b);

	UFUNCTION(BlueprintPure)
	int MyAdd2(int a, int b);
	
	UFUNCTION(BlueprintImplementableEvent) // �𸮾󿡼� �����ؼ� ���
	int MyAdd3(int a, int b);
};
