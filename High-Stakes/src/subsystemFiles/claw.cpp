#include "main.h"

void clampToggle()
{
    bool clampToggle = false;

    if(controller.get_digital(pros::E_CONTROLLER_DIGITAL_A))
    {
        clampToggle = !clampToggle;
    }

    if(clampToggle) //Retracted State
    {
        clawClamp.set_value(false);
        pros::delay(130);
        pickup_WristJoint.set_value(false);
        scoring_WristJoint.set_value(false);
    } else if(!clampToggle) //Extended State
    {
        pickup_WristJoint.set_value(true);
        scoring_WristJoint.set_value(true);
        pros::delay(400);
        clawClamp.set_value(true);
    }
}