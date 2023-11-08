// Fill out your copyright notice in the Description page of Project Settings.

#include "CodingActor.h"

// Sets default values
ACodingActor::ACodingActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACodingActor::BeginPlay()
{
	Super::BeginPlay();

	// UE_LOG(LogTemp, Warning, TEXT("Hello World!"));
	// UE_LOG(LogTemp, Warning, TEXT("%d"), number);
	// UE_LOG(LogTemp, Warning, TEXT("%f"), fNumber);

	// int size = sizeof(bReady);
	// UE_LOG(LogTemp, Warning, TEXT("bool is false %d"), false);
	// UE_LOG(LogTemp, Warning, TEXT("bool is true %d"), true);

	// UE_LOG(LogTemp, Warning, TEXT("%s"), *myName);


	// 조건문
	// myName이 HJM이라면 본인입니다, 아니라면 타인입니다
	//if (myName.Equals(TEXT("HJM")))
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("본인입니다"));
	//}
	//else if (myName.Equals(TEXT("SCW")))
	//{
	// 	UE_LOG(LogTemp, Warning, TEXT("친구입니다"));
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("타인입니다"));
	//}


	// 반복문
	//for (int i = 0; i <= 100; i++) {
	//	if (i % 2 == 0) {
	//		UE_LOG(LogTemp, Warning, TEXT("%d"), i);
	//	}
	//}


	// 배열
	//TArray<int32> array;
	//array.Add(1);
	//array.Add(2);
	//array.Add(3); // array에 순차적 대입

	//array.Remove(1); // 해당 값을 삭제
	//array.RemoveAt(0); // 인덱스 번호를 삭제
	//
	//array.Insert(10, 1); // 인덱스 1에 10값 추가

	//int32 temp = array[0]; // 변수에 array[0] 대입

	//// 2가 포함되어 있지 않다면 2추가
	//if (!array.Contains<int32>(2)) {
	//	array.Add(2);
	//}

	//TMap<FString, int32> map;
	//// AGE라는 키가 없으면 추가하고 있으면 20을 그곳에 대입
	//if (!map.Contains(TEXT("AGE"))) {
	//	map.Add(TEXT("AGE"), 20);
	//}
	//else {
	//	map[TEXT("AGE")] = 20;
	//}
	//int varAge = map[TEXT("AGE")]; // AGE키에 담긴 값을 대입
	//map.Remove(TEXT("AGE")); // AGE키 삭제
	
	
	// 배열에 10개 항목을 넣는데 1이상 2이하값을 랜덤으로 누적해서 대입
	//float sum = 0;
	//for (int i = 0; i < 10; i++) {
	//	sum += FMath::RandRange(1.0f, 2.0f);
	//	notes.Add(sum);
	//	//UE_LOG(LogTemp, Warning, TEXT("%.2f"), sum);
	//}

	UE_LOG(LogTemp, Warning, TEXT("%d"), MyAdd(10, 20));
}

// Called every frame
void ACodingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//// 1. Tick에서 시간이 흐르다가
	//currentTime += DeltaTime;
	//// 2. noteInex가 배열 크기보다 작고 배열의 현재 인덱스 항목의 시간만큼 시간이 흘렸다면
	//if (noteIndex < notes.Num() && currentTime >= notes[noteIndex]) {
	//	// 3. 배열의 인덱스 값을 출력하고 인덱스 값 1증가
	//	UE_LOG(LogTemp, Warning, TEXT("index : %d, time : %.2f"), noteIndex, notes[noteIndex]);
	//	noteIndex++;
	//}
}

// 함수의 정의/구현
int ACodingActor::MyAdd(int a, int b)
{
	return a + b;
}

int ACodingActor::MyAdd2(int a, int b)
{
	return a + b;
}

