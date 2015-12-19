#pragma config(Sensor, dgtl1,  leftEnc,        sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  rightEnc,       sensorQuadEncoder)
#pragma config(Motor,  port2,           shooter2,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           left1,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           intake2,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           intake1,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           shooter1,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           right1,        tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!
#include "Init.h"
#include "Functions.h"
#include "Drive.h"
#include "Accessory.h"
#include "MotionProfiling.h"
#include "Auton.h"
#include "Output.h"
#include "Init.c"
#include "Functions.c"
#include "Drive.c"
#include "Accessory.c"
#include "MotionProfiling.c"
#include "Auton.c"
#include "Output.c"


/////////////////////////////////////////////////////////////////////////////////////////
//
//                          Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
  // Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
	init();
	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Autonomous Task
//
// This task is used to control your robot during the autonomous phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task autonomous()
{
  // .....................................................................................
  // Insert user code here.
  // .....................................................................................
	auton();
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 User Control Task
//
// This task is used to control your robot during the user control phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task usercontrol()
{
	// User control code here, inside the loop

	while (true)
	{
	  cheesyDrive();
	  collector(vexRT[Btn5U], vexRT[Btn5D]);
	  shooter(vexRT[Btn8D], vexRT[Btn8U], vexRT[Btn8R], vexRT[Btn8L]);

	  out();

	  wait1Msec(25);
	}
}
