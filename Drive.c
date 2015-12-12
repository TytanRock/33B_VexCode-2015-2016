int limit_motor(int value){
	if(value > 127){
		value = 127;
	}
	if(value < -127){
		value = -127;
	}
	return value;
}

void cheesyDrive(){
	int wheel;
	int throttle;
	bool quickTurn = false;
	wheel = vexRT(Ch1);		//set right axis on joystick equal to wheel
	throttle = vexRT(Ch3);//set left axis on joystick equal to throttle
	if(abs(wheel) > QUICKSENS) quickTurn = true;	//if I'm beyond a certain point on my axis, enable quickturn
	if(quickTurn) wheel *= QUICKVAL;	//If i'm in quickturn, turn a lot faster than normal
	else{
		float newThrottle = throttle / 127;		//If I'm not in quickturn turn a little bit slower for control
		wheel = newThrottle * SPEEDVAL * wheel;
	}

	leftSide = throttle + wheel;	//Enable arcade drive with the new values of wheel and throttle
	rightSide = throttle - wheel;

	leftSide = limit_motor(leftSide);	//Limit both motors in case they're beyond 127
	rightSide = limit_motor(rightSide);
}
