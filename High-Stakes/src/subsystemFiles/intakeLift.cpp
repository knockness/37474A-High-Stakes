#include "main.h"

void setCurrentLiftMode()
{
    //Switches liftState between 0, 1, and 2 mode based on controller input. This value is used later to know what height to set the intake lift to.
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
    if(liftState == 0) //Down Height
    {
        //Stop all current rotaions
        //Gently lower the lift to the down position.
    } 
    else if(liftState == 1) //Alliance Wall Stake Height
    {
        //Stop all current rotaions
        //Gently raise or lower until rotation sensor detects the right degree.
    } 
    else if(liftState == 2) //Neutral Wall Stake Height
    {
        //Stop all current rotaions
        //Gently raise until rotation sensor detects the right degree.
    }
}