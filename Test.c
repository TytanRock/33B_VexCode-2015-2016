#pragma config(Motor,  port1,           left1,         tmotorVex393, openLoop)
#pragma config(Motor,  port2,           left2,         tmotorVex393, openLoop)
#pragma config(Motor,  port3,           intake1,       tmotorVex393, openLoop)
#pragma config(Motor,  port4,           intake2,       tmotorVex393, openLoop)
#pragma config(Motor,  port5,           shooter,       tmotorVex393, openLoop)
#pragma config(Motor,  port9,           right2,        tmotorVex393, openLoop)
#pragma config(Motor,  port10,          right1,        tmotorVex393, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "Main.c"

task main(){
	while(1){
		mainDrive();
	}
}