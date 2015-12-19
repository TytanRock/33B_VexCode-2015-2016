void autonRobot(){
	LEFT_SIDE(-127);
	RIGHT_SIDE(-127);
	wait1Msec(8000);
	LEFT_SIDE(0);
	RIGHT_SIDE(0);
	clearTimer(T1);
	while(time1[T1] < 5000){
		LAUNCHER(shooterRamp(127));
		INTAKE(-127);
	}
	clearTimer(T1);
	while(time1[T1} < 2000){
		LAUNCHER(shooterRamp(0));
	}
}
