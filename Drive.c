#include "Drive.h"

int wheel;
int throttle;
int leftSide;
int rightSide;
bool quickTurn = false;

void cheesyDrive(){
	wheel = vexRT(Ch1);
	throttle = vexRT(Ch3);
	quickTurn = checkForQuick(wheel);
	if(quickTurn) wheel *= QUICKVAL;
	else{
		float newThrottle = throttle / 127;
		wheel = newThrottle * SPEEDVAL * wheel;
	}

	leftSide = throttle - wheel;
	rightSide = throttle + wheel;

	leftSide = limit_motor(leftSide);

	rightSide = limit_motor(rightSide);

	LEFT_SIDE(leftSide);
	RIGHT_SIDE(rightSide);
}
