//USE THIS FOR INITIALIZATION///////////////
void makeValues(int target, int accel, int tSpeed){
	int accelDistance = (tSpeed * tSpeed * 2)/(accel);

	if((accelDistance * 2) > target){
		accelDistance = target / 2;
	}

	accelTime = (tSpeed / accel);

	cruiseTime = (target - (accelDistance * 2)) / tSpeed;

}
////////////////////////////////////////////





int profileV(int target, int accel, int tSpeed){

	if(!acceleration && !cruise && !deceleration){
		clearTimer(T1);
		acceleration = true;
	}

	//Acceleration, increase returnValue with acceleration until you're at top speed
	if(time1(T1) < accelTime && acceleration){
		returnValue += accel;

		if(returnValue >= tSpeed){
			returnValue = tSpeed;
			acceleration = false;
			cruise = true;
			clearTimer(T1);
		}

	}else if(acceleration){
		acceleration = false;
		cruise = true;
		clearTimer(T1);
	}

	if(time1(T1) >= cruiseTime && cruise){
		cruise = false;
		deceleration = true;
		clearTimer(T1);
	}

	if(time1(T1) < accelTime && deceleration){
		returnValue -= accel;
	}else if(deceleration){
		returnValue = 0;
	}

	return returnValue;
}
