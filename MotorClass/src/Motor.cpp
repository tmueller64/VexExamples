#include "Motor.h"

// Motor constructor
Motor::Motor(int motorId)
{
    this->motorId = motorId;
    targetSpeed = speed = 0;
}

// Motor member functions
void Motor::setTargetSpeed(int targetSpeed)
{
    this->targetSpeed = targetSpeed;
}

void Motor::stop()
{
    targetSpeed = 0;
}

void Motor::updateSpeed()
{
    speed = targetSpeed; // change to call motor control/sensor
}