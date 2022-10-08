#ifndef MOTOR_H
#define MOTOR_H

class Motor
{
private:
    int speed;
    int targetSpeed;
    int motorId;

public:
    Motor(int motorId);

    void setTargetSpeed(int targetSpeed);
    void stop();
    void updateSpeed();

    int getSpeed() { return speed; }
    
};

#endif
