// Fill out your copyright notice in the Description page of Project Settings.


#include "TailActor.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATailActor::ATailActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// box 모양 만들기
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	// box를 RootComponent로 사용
	SetRootComponent(Box);

	// 외관 만들기, TEXT는 구분자
	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	// 외관을 Root에 붙인다
	Cube->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ATailActor::BeginPlay()
{
	Super::BeginPlay();

	// Target이 nullptr이라면 Target에 플레이어폰을 찾아서 넣기
}

// Called every frame
void ATailActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Target - me로 방향 만들기

	// 그 방향으로 이동
}

