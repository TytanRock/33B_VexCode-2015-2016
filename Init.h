#ifndef INIT_H
#define INIT_H

#define LAUNCHER(value) motor(shooter1) = motor (shooter2) = (value)//Our shooter, 2 motors
#define INTAKE(value) motor(intake1) = motor(intake2) = (value)			//Our collector, 2 motors
#define LEFT_SIDE(value) motor(left) = (value)											//Our left side, 1 motor
#define RIGHT_SIDE(value) motor(right) = (value)										//Our right side, 1 motor

#endif
