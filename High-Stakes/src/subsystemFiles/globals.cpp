#include "main.h"

//Initializes controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);

//For now, all ports of every device are temporary and will change based on how the bots build changes.

//Initializes motors and sets their ports.
//Drive Train Motors
pros::Motor frontLeft_Drive_Motor(1); //Front Left
pros::Motor backLeft_Drive_Motor(2); //Back Left
pros::Motor frontRight_Drive_Motor(3); //Front Right
pros::Motor backRight_Drive_Motor(4); //Back Right

//Intake Motor
pros::Motor intake_Motor(5);

//Intake Lift Motors
pros::Motor left_Intake_Lift(6); //Left
pros::Motor right_Intake_Lift(7); //Right