#include "Functions.c"
#include "Main.h"
#include "Drive.c"
#include "Accessory.c"

void mainDrive (){
	cheesyDrive();
	otherFunctions(vexRT(Btn5D), vexRT(Btn5U), vexRT(Btn6U));
}
