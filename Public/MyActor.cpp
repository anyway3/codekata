// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Math/UnrealMathUtility.h"
// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CurrentPosition=FVector2D(0,0);

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	Move();
	MovingCount(FVector2D(0,0),CurrentPosition);
}

int AMyActor::RandomNumber()
{
	return FMath::RandRange(0, 1);
}

float AMyActor::MovingCount(FVector2D first, FVector2D second)
{
	/ㅇㅇ
	float dx = first.X - second.X;
	float dy = first.Y - second.Y;
	float value=FMath::Sqrt(dx*dx +  dy*dy);
	UE_LOG(LogTemp, Warning, TEXT("이동거리: %f"), value);
	return value;
}

void AMyActor::Move()
{
int ct=1;
	for (int i=0;i<10;i++)
	{
		int x = RandomNumber();
		int y = RandomNumber();
		CurrentPosition.X += x;
		CurrentPosition.Y += y;
	UE_LOG(LogTemp, Warning, TEXT("이동 횟수: %d"),ct);
	UE_LOG(LogTemp, Warning, TEXT("랜덤 이동: %f, %f"), CurrentPosition.X, CurrentPosition.Y)
		ct++;
	}
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

