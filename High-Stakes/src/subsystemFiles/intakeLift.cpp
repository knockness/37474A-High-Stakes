#include "main.h"

void setCurrentLiftMode()
{
    //Switches lift between 0, 1, and 2 mode based on controller input.
    int liftState = 0;
    if(controller.get_digital(pros::E_CONTROLLER_DIGITAL_UP))
    {
        liftState += 1;
        if(liftState > 2)
        {
            liftState = 0;
        }
    }

    assignMotorDegrees(liftState);
}

void assignMotorDegrees(int liftState) //Currently, all degree values are placeholders and will change with testing.
{
    //Sets the lift to the 1 of 3 states based on the liftState inteager: normal (0), alliance wall stake height (1), and neutral wall stake height (2).
    if(liftState == 0)
    {
        left_Intake_Lift.move_absolute(0, 100);
        right_Intake_Lift.move_absolute(0, 100);
    }
    else if(liftState == 1)
    {
        left_Intake_Lift.move_absolute(90, 100);
        right_Intake_Lift.move_absolute(90, 100);
    }
    else if(liftState == 2)
    {
        left_Intake_Lift.move_absolute(180, 100);
        right_Intake_Lift.move_absolute(180, 100);
    }
}