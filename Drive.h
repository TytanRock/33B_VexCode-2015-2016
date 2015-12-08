#ifndef DRIVE_H

#define DRIVE_H

#define LEFT_SIDE(value) motor(left) = (value)
#define RIGHT_SIDE(value) motor(right) = (value)

#define QUICKSENS 40
#define QUICKVAL 2.2
#define SPEEDVAL 0.8


int wheel;
int throttle;
int leftSide;
int rightSide;
bool quickTurn = false;


int limit_motor(int value);

bool checkForQuick(int value);

void cheesyDrive();


bool checkForQuick(int value){
	if(abs(value) > QUICKSENS){
		return true;
	}else{
		return false;
	}
}

#endif
