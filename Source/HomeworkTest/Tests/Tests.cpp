// Fill out your copyright notice in the Description page of Project Settings.


#include "HomeworkTest/Tests/Tests.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Misc/AutomationTest.h"
#include "HomeworkTest/TestActor.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FCustomTransformPositionIsRandom,"HomeworkTests.TestActor.TestActorTransformPosition",EAutomationTestFlags::ApplicationContextMask| EAutomationTestFlags::ProductFilter| EAutomationTestFlags::HighPriority)

bool FCustomTransformPositionIsRandom::RunTest(const FString& Parameters)
{
	const ATestActor* testActor = NewObject<ATestActor>();
	if (!TestNotNull("Actor is exists", testActor)) return false;
	TestTrue("Actor transform position is 0,0,0", testActor->execRandomTransformPosition != 0);
	return true;
}