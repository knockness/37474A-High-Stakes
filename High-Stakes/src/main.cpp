#include "main.h"

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() 
{
	pros::lcd::initialize();
	
//Initializes Motor Paramaters.
	//Drivetrian motors
	//Front-left drivetrain motor
	frontLeft_Drive_Motor.set_gearing(pros::E_MOTOR_GEARSET_06);
	frontLeft_Drive_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	frontLeft_Drive_Motor.set_encoder_units(pros::E_MOTOR_ENCODER_COUNTS);
	frontLeft_Drive_Motor.set_reversed(true);

	//Upper-left drivetrain motor
	upperLeft_Drive_Motor.set_gearing(pros::E_MOTOR_GEARSET_06);
	upperLeft_Drive_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	upperLeft_Drive_Motor.set_encoder_units(pros::E_MOTOR_ENCODER_COUNTS);

	//Back-left drivetrain motor
	backLeft_Drive_Motor.set_gearing(pros::E_MOTOR_GEARSET_06);
	backLeft_Drive_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	backLeft_Drive_Motor.set_encoder_units(pros::E_MOTOR_ENCODER_COUNTS);
	backLeft_Drive_Motor.set_reversed(true);

	//Front-right drivetrain motor
	frontRight_Drive_Motor.set_gearing(pros::E_MOTOR_GEARSET_06);
	frontRight_Drive_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	frontRight_Drive_Motor.set_encoder_units(pros::E_MOTOR_ENCODER_COUNTS);

	//Upper-right drivetrain motor
	upperRight_Drive_Motor.set_gearing(pros::E_MOTOR_GEARSET_06);
	upperRight_Drive_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	upperRight_Drive_Motor.set_encoder_units(pros::E_MOTOR_ENCODER_COUNTS);
	upperRight_Drive_Motor.set_reversed(true);

	//Back-right drivetrain motor
	backRight_Drive_Motor.set_gearing(pros::E_MOTOR_GEARSET_06);
	backRight_Drive_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_COAST);
	backRight_Drive_Motor.set_encoder_units(pros::E_MOTOR_ENCODER_COUNTS);

	//Intake Motors
	//Intake motor
	intake_Motor.set_gearing(pros::E_MOTOR_GEARSET_06);
	intake_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
	intake_Motor.set_encoder_units(pros::E_MOTOR_ENCODER_COUNTS);

	//Intake Lift Motor
	Intake_Lift_Motor.set_gearing(pros::E_MOTOR_GEARSET_36);
	Intake_Lift_Motor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
	Intake_Lift_Motor.set_encoder_units(pros::E_MOTOR_ENCODER_DEGREES);

	//Set Default Pneumatic Actuations
	left_Actuator.set_value(true);
	right_Actuator.set_value(true);
	clawClamp.set_value(true);
	pickup_WristJoint.set_value(true);
	scoring_WristJoint.set_value(true);
}

/*
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() 
{

}

/*
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() 
{

}

/*
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() 
{

}

/* Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol()
{
	while(true)
	{
		getAnalogueDirection();
		assignMotorDirections();

		clampToggle();
//Motors update values (like speed and rotations) every 10 miliseconds, this delay is to make sure that we don't set any of those values too early or late.
		pros::delay(10);
	}
}