#ifndef FUNCTIONS_H

#define FUNCTIONS_H


#define DISPEEDRATIO 1.5

#define STEP 1

int PID(int current, int desired, float pGain, float iGain, float dGain, float safety);

int disToSpeed(int distance);

int shooterRamp(int power);

float current = 0;

#endif
