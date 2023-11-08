// Fill out your copyright notice in the Description page of Project Settings.


#include "TailActor.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATailActor::ATailActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// box ��� �����
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	// box�� RootComponent�� ���
	SetRootComponent(Box);

	// �ܰ� �����, TEXT�� ������
	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	// �ܰ��� Root�� ���δ�
	Cube->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ATailActor::BeginPlay()
{
	Super::BeginPlay();

	// Target�� nullptr�̶�� Target�� �÷��̾����� ã�Ƽ� �ֱ�
}

// Called every frame
void ATailActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Target - me�� ���� �����

	// �� �������� �̵�
}

