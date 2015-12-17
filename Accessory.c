void collector(bool suck, bool blow){	//If I'm sucking, suck, else if I'm blowing, blow, else
	if(suck) collectorSpeed = 127;			//if I'm doing nothing, do nothing
	else if(blow) collectorSpeed = -127;
	else collectorSpeed = 0;
}

void shooter(bool full, bool offF, bool half){
	int speed;				//If I push full speed, go to full speed, if I press off, go to off, else I push nothing, do what
	if(full) speed = 2;//It was already doing
	else if(offF) speed = 1;
	else if(half) speed = 3;
	else speed = 0;
	switch(speed){	//Utilize a switch statement so I can add different speeds in future if need be
		case 1 :
			shooterSpeed = 0;
			break;
		case 2 :
			shooterSpeed = 127;
			break;
		case 3 :
			shooterSpeed = 67;
			break;
		case 0 :
			shooterSpeed = shooterSpeed;
			break;
	}
}
