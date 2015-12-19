#pragma config(Sensor, dgtl1,  leftEnc,        sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  rightEnc,       sensorQuadEncoder)
#pragma config(Motor,  port2,           shooter2,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           left1,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           intake2,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           intake1,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           shooter1,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           right1,        tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "Init.h"
#include "Functions.h"
#include "Drive.h"
#include "Accessory.h"
#include "Auton.h"
#include "Output.h"
#include "Init.c"
#include "Functions.c"
#include "Drive.c"
#include "Accessory.c"
#include "Auton.c"
#include "Output.c"

task main(){
	//initialization
	//makeValues(2000,30,127);
	init();
	autonRobot();
	while(1){
		//HMI
		cheesyDrive();
		collector(vexRT[Btn5U], vexRT[Btn5D]);
		shooter(vexRT[Btn8D], vexRT[Btn8U], vexRT[Btn8R], vexRT[Btn8L]);
		//Control
		//Output
		out();

		//motor[shooter1] = shooterRamp(127);
		wait1Msec(25);
	}
}
