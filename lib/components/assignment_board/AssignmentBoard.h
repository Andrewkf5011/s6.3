#ifndef ASSIGNMENTBOARD_H
#define ASSIGNMENTBOARD_H
#include<mbed.h>

/**
 * @brief For use when referencing the different components on the board to be
 *        used in the KF5011 assignment.
 *
 * Version: 1.5
 * Date: 04/04/2018
 * Originally Created: 22/03/2018
 */
class AssignmentBoard
{
    public:
        //Constant declarations (K64F).
        //LEDs
        static const PinName K64F_RED_LED;
        static const PinName K64F_GREEN_LED;
        static const PinName K64F_BLUE_LED;
        //Switches
        static const PinName K64F_SW2; //Uses pull up resistor.
        static const PinName K64F_SW3; //Uses pull up resistor.

        //Constant declarations (Application Shield).
        //LEDs
        static const PinName SHIELD_RED_LED;
        static const PinName SHIELD_GREEN_LED;
        static const PinName SHIELD_BLUE_LED;
        //Switches
        static const PinName SHIELD_SW_CENTER;
        static const PinName SHIELD_SW_UP;
        static const PinName SHIELD_SW_DOWN;
        static const PinName SHIELD_SW_LEFT;
        static const PinName SHIELD_SW_RIGHT;
        //Potentiometers
        static const PinName SHIELD_LEFT_POTENTIOMETER;
        static const PinName SHIELD_RIGHT_POTENTIOMETER;
        //speaker
        static const PinName SHIELD_SPEAKER;
};

#endif // ASSIGNMENTBOARD_H
