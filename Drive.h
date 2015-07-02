#ifndef DRIVE_H

#define DRIVE_H

#define LEFT_SIDE(value) motor(left1) = motor(left2) = (value)
#define RIGHT_SIDE(value) motor(right1) = motor(right2) = (value)

#define QUICKSENS 40
#define QUICKVAL 2.2
#define SPEEDVAL 0.8

int limit_motor(int value);

bool checkForQuick(int value);

void cheesyDrive();

int limit_motor(int value){
	if(value > 127){
		value = 127;
	}
	if(value < -127){
		value = -127;
	}
	return value;
}

bool checkForQuick(int value){
	if(abs(value) > QUICKSENS){
		return true;
	}else{
		return false;
	}
}

#endif
