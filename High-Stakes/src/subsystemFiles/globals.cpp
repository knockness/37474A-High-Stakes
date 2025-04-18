#include "main.h"

//Initializes controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);

//For now, all ports of every device are temporary and will change based on how the bots build changes.

//Initializes motors and sets their ports.
//Drive Train Motors
pros::Motor frontLeft_Drive_Motor(1); //Front Left
pros::Motor upperLeft_Drive_Motor(2); //Upper Left
pros::Motor backLeft_Drive_Motor(3); //Back Left

pros::Motor frontRight_Drive_Motor(4); //Front Right
pros::Motor upperRight_Drive_Motor(5); //Upper right
pros::Motor backRight_Drive_Motor(6); //Back Right

//Intake Motor
pros::Motor intake_Motor(7);

//Intake Optical Sensor
pros::Optical intake_Optical(8);

//Intake Lift Motor
pros::Motor Intake_Lift_Motor(9); //Left

//Intake Lift Rotation Sensor
pros::Rotation intake_Lift_Rotation(10);

//Tracking wheels
pros::Rotation parrallel(11); //Tracking wheel that is parrallel to the drive train.
pros::Rotation perpendicular(12); //Tracking wheel that is perpendicular to the drive train.

//Pneumatics
//Mogo Mech
pros::ADIDigitalOut left_Actuator('A');
pros::ADIDigitalOut right_Actuator('B');

//Claw
pros::ADIDigitalOut clawClamp('C'); //Claw Clamp
pros::ADIDigitalOut pickup_WristJoint('D'); //Left Wrist Joint (Pickup Joint, Gold fitting is on the is on the bottom of the piston)
pros::ADIDigitalOut scoring_WristJoint('E'); //Right Wrist Joint (Scoring Joint, Gold fitting is on the top of the piston)