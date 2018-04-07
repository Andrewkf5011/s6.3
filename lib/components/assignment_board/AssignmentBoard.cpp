#include "AssignmentBoard.h"
#include <mbed.h>

//Constant definitions (K64F).

//LEDs
const PinName AssignmentBoard::K64F_RED_LED = PTB22;
const PinName AssignmentBoard::K64F_GREEN_LED = PTE26;
const PinName AssignmentBoard::K64F_BLUE_LED = PTB21;
//Switches
const PinName AssignmentBoard::K64F_SW2 = PTC6;
const PinName AssignmentBoard::K64F_SW3 = PTA4;

//Constant definitions (Application Shield).

//LEDs
const PinName AssignmentBoard::SHIELD_RED_LED = D5;
const PinName AssignmentBoard::SHIELD_GREEN_LED = D9;
const PinName AssignmentBoard::SHIELD_BLUE_LED = D8;
//Switches
const PinName AssignmentBoard::SHIELD_SW_CENTER = D4;
const PinName AssignmentBoard::SHIELD_SW_UP = A2;
const PinName AssignmentBoard::SHIELD_SW_DOWN = A3;
const PinName AssignmentBoard::SHIELD_SW_LEFT = A4;
const PinName AssignmentBoard::SHIELD_SW_RIGHT = A5;
//Potentiometers
const PinName AssignmentBoard::SHIELD_LEFT_POTENTIOMETER = A0;
const PinName AssignmentBoard::SHIELD_RIGHT_POTENTIOMETER = A1;
//speaker
const PinName AssignmentBoard::SHIELD_SPEAKER = D6;
