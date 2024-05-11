// Fill out your copyright notice in the Description page of Project Settings.


#include "Grenade.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
AGrenade::AGrenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
	GrenadeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Grenade Mesh"));//creates mesh component
	SetRootComponent(GrenadeMesh);//sets mesh as root component 
	GrenadeMesh->SetSimulatePhysics(true);//uses physics 
	GrenadeMesh->SetNotifyRigidBodyCollision(true);//checks for collisions

	GrenadeMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Grenade Movement"));//sets up the movment component
	GrenadeMovement->MaxSpeed = GrenadeMovementSpeed;//sets the max speed 
	GrenadeMovement->InitialSpeed = GrenadeMovementSpeed;//sets the initial speed

	InitialLifeSpan = lifeSpan;//sets th elifespan

	ForceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("Force Component"));//creates the force component 
	ForceComp->SetupAttachment(GrenadeMesh);//attaches force component to mesh

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));//creates collison box
	CollisionBox->SetBoxExtent(BoxExtentSize);//sets box size
	CollisionBox->SetRelativeLocation(BoxLocation);//sets location to origin
	CollisionBox->SetupAttachment(GrenadeMesh);//attaches box to mesh
	CollisionBox->SetCollisionProfileName("Trigger");
}

// Called when the game starts or when spawned
void AGrenade::BeginPlay()
{
	Super::BeginPlay();
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AGrenade::OnOverLapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &AGrenade::OnOverLapEnd);

	StartCountdown();//starts countdown
}

// Called every frame
void AGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGrenade::OnOverLapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ActorToDamage = OtherActor;//sets the actor in area to be damaged 
	InArea = true;
}

void AGrenade::OnOverLapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	InArea = false;
	ActorToDamage = nullptr;
}

void AGrenade::GrenadeDetonate()
{
	UE_LOG(LogTemp, Warning, TEXT("bang"));
	ForceComp->FireImpulse();//create an impulse
	AActor* TraceOwner = GetOwner();//gets the owner of the projectile


	if (TraceOwner == nullptr)//if no owner returns 
	{
		UE_LOG(LogTemp, Warning, TEXT("null"));
		return;
	}
	if (ActorToDamage == nullptr)//checks if theres an actor to damage
	{
		UE_LOG(LogTemp, Warning, TEXT("null"));

	}
	UGameplayStatics::ApplyDamage(ActorToDamage, //actor that will be damaged
		GrenadeDamage, //the base damage to apply
		TraceOwner->GetInstigatorController(), //controller that caused the damage
		this, //Actor that actually caused the damage
		UDamageType::StaticClass()); //class that describes the damage that was done


	Destroy();//destroys the grenade
}

void AGrenade::StartCountdown()
{
	GetWorld()->GetTimerManager().SetTimer(GrenadeTimer, this, &AGrenade::GrenadeDetonate, TimerLength, false);
}

