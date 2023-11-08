// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/BoxComponent.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Tick함수를 계속 호출할 것인지 결정 - 형태만 필요할 경우 false 처리하여 성능 향상
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
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// 플레이어 이동, P = P0 + vt
	FVector P0 = GetActorLocation();
	FVector Dir(0, h, v); // 가로벡터 + 세로벡터
	Dir.Normalize();
	SetActorLocation(P0 + Dir * Speed * DeltaTime);
}

// 입력 제어, 시작할 때 한번
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	// 입력이 발생할 때 호출될 함수를 등록

	// TEXT(언리얼에서 설정한 이름), 원하는 객체, 함수 주소
	PlayerInputComponent->BindAxis(TEXT("Horizontal"), this, &APlayerPawn::AxisHorizontal);
	PlayerInputComponent->BindAxis(TEXT("Vertical"), this, &APlayerPawn::AxisVertical);
}

void APlayerPawn::AxisHorizontal(float value)
{
	h = value;
}

void APlayerPawn::AxisVertical(float value)
{
	v = value;
}

