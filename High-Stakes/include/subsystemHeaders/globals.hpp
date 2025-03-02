#include "main.h"

//Declares Controller as Globally accesable
pros::Controller controller;

//Anything with a "left" or "right" lable on it assumes you are looking at the robot from the back.

//Declares motors as globally accesable.
//Drive Train Motors
extern pros::Motor frontLeft_Drive_Motor; //Front Left
extern pros::Motor backLeft_Drive_Motor; //Back Left
extern pros::Motor frontRight_Drive_Motor; //Front Right
extern pros::Motor backRight_Drive_Motor; //Back Right

//Intake Motor
extern pros::Motor intake_Motor;

//Intake Lift Motors
extern pros::Motor left_Intake_Lift; //Left
extern pros::Motor right_Intake_Lift; //Right