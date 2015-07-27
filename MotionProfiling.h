#ifndef MOTIONPROFILING.H

#define MOTIONPROFILING.H

int profileV(int target, int accel, int tSpeed);

int returnValue = 0;

bool acceleration, cruise, deceleration = false;

void makeValues(int target, int accel, int tSpeed);

int accelTime;

int cruiseTime;


#endif
