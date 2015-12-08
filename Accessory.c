void otherFunctions(bool suck, bool blow, bool shoot){
	if(suck) INTAKE(127);
	if(blow) INTAKE(-127);
	if(shoot) LAUNCHER(127);
}
