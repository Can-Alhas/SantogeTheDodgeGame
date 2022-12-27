// Fill out your copyright notice in the Description page of Project Settings.


#include "Gift.h"
#include "DrawDebugHelpers.h"
#include <Components/SphereComponent.h>



// Sets default values
AGift::AGift()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereRadius = 50.0f;

	MyCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("My Sphere Component"));

	MyCollisionSphere->InitSphereRadius(SphereRadius);
	MyCollisionSphere->SetCollisionProfileName("Trigger");

	RootComponent = MyCollisionSphere;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MY MESH"));
	MyMesh->SetupAttachment(RootComponent);

	MyCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AGift::OnOverlapBegin);
	
}

// Called when the game starts or when spawned
void AGift::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGift::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawDebugSphere(GetWorld(), GetActorLocation(), SphereRadius, 20, FColor::Green, false, -1, 0, 1);

}

void AGift::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		Destroy();
	}
}
