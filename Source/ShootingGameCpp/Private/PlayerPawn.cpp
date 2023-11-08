// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/BoxComponent.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Tick�Լ��� ��� ȣ���� ������ ���� - ���¸� �ʿ��� ��� false ó���Ͽ� ���� ���
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
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// �÷��̾� �̵�, P = P0 + vt
	FVector P0 = GetActorLocation();
	FVector Dir(0, h, v); // ���κ��� + ���κ���
	Dir.Normalize();
	SetActorLocation(P0 + Dir * Speed * DeltaTime);
}

// �Է� ����, ������ �� �ѹ�
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	// �Է��� �߻��� �� ȣ��� �Լ��� ���

	// TEXT(�𸮾󿡼� ������ �̸�), ���ϴ� ��ü, �Լ� �ּ�
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

