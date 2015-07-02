#ifndef OTHERFUNCTIONS_H

#define OTHERFUNCTIONS_H


#define LAUNCHER(value) motor(shooter) = (value)
#define INTAKE(value) motor(intake1) = motor(intake2) = (value)


void otherFunctions(bool suck, bool blow, bool shoot);


#endif
