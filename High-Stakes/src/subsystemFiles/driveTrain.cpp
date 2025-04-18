#include "main.h"

void getAnalogueDirection()
{
    //Get the analogue values of each joystick.
    int leftJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightJoystick = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);

    //Set the deadzone for the joysticks to account for slight drift.
    if(abs(leftJoystick < 10))
    leftJoystick = 0;

    if(abs(rightJoystick < 10))
    rightJoystick = 0;

    //Pass the joystick values to the assignMotorDirections function.
    assignMotorDirections(leftJoystick, rightJoystick);
}

void assignMotorDirections(int leftPower, int rightPower)
{
    //Assign the power values to the motors using the values of the joystick that have been passed in on line 17.
    frontLeft_Drive_Motor.move(leftPower);
    upperLeft_Drive_Motor.move(leftPower);
    backLeft_Drive_Motor.move(leftPower);

    frontRight_Drive_Motor.move(rightPower);
    upperRight_Drive_Motor.move(rightPower);
    backRight_Drive_Motor.move(rightPower);
}