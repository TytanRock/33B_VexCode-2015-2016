#include "Functions.h"


int PID(int current, int desired, int pGain, int iGain, int dGain, int safety){
	int pCurrent;
	int iCurrent;
	int dCurrent;

	if(iGain == 0){
		iCurrent = 0;
	}

	static int last = current;

	int error = desired - current;

	pCurrent = error * pGain;//Finding P

	if(abs(error) > safety){
		iCurrent = iCurrent + (error * iGain); //Finding I
	}

	dCurrent = (current - last) * dGain; //Finding D

	last = current;

	return pCurrent + iCurrent + dCurrent;
}

//Possible use for automatic shooting
int disToSpeed(int distance){
	return distance * DISPEEDRATIO;
}
