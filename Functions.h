#ifndef FUNCTIONS_H

#define FUNCTIONS_H


#define DISPEEDRATIO 1.5

int PID(int current, int desired, int pGain, int iGain, int dGain, int safety);

int disToSpeed(int distance);


#endif
