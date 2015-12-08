#ifndef DRIVE_H

#define DRIVE_H

#define QUICKSENS 40	//40 of 127 across, enable quickturn
#define QUICKVAL 2.2	//Speed up turning by a factor of 2.2
#define SPEEDVAL 0.8	//Slow turning by a factor of .8


int leftSide;
int rightSide;


int limit_motor(int value);

void cheesyDrive();

#endif
