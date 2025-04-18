#include "main.h"

//Declares Controller as Globally accesable
pros::Controller controller;

//Anything with a "left" or "right" lable on it assumes you are looking at the robot from the back.

//Declares motors as globally accesable.
//Drive Train Motors
extern pros::Motor frontLeft_Drive_Motor; //Front Left
extern pros::Motor upperLeft_Drive_Motor; //Upper Left
extern pros::Motor backLeft_Drive_Motor; //Back Left

extern pros::Motor frontRight_Drive_Motor; //Front Right
extern pros::Motor upperRight_Drive_Motor; //Upper right
extern pros::Motor backRight_Drive_Motor; //Back Right

//Intake Motor
extern pros::Motor intake_Motor;

//Intake Optical Sensor
extern pros::Optical intake_Optical;

//Intake Lift Motors
extern pros::Motor Intake_Lift_Motor;

//Intake Lift Rotation Sensor
extern pros::Rotation intake_Lift_Rotation;

//Tracking wheels
extern pros::Rotation parrallel; //Tracking wheel that is parrallel to the drive train.
extern pros::Rotation perpendicular; //Tracking wheel that is perpendicular to the drive train.

//Pneumatics
//Mogo Mech
extern pros::ADIDigitalOut left_Actuator;
extern pros::ADIDigitalOut right_Actuator;

//Claw
extern pros::ADIDigitalOut clawClamp; //Claw Clamp
extern pros::ADIDigitalOut pickup_WristJoint; //Left Wrist Joint (Pickup Joint, Gold fitting is on the is on the bottom of the piston)
extern pros::ADIDigitalOut scoring_WristJoint; //Right Wrist Joint (Scoring Joint, Gold fitting is on the top of the piston)
