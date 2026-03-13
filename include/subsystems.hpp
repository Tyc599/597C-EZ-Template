#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::MotorGroup score({-18, 14});  // Negative port will reverse the motor
inline pros::Motor intake(18); 
inline pros::MotorGroup out({18, -14});
inline ez::Piston descore('A');
inline ez::Piston MatchLoad('B');
inline ez::Piston MidScore('C');
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');