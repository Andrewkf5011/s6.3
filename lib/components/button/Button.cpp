#include<stdbool.h>
#include<mbed.h>
#include "Button.h"

Button::Button(PinName pinName, bool usesPullUpResistor) : digitalIn(pinName)
{
    Button::usesPullUpResistor = usesPullUpResistor;
    Button::pinName = pinName;
}

PinName Button::getPinName()
{
    return pinName;
}

bool Button::isPressed()
{
    //Use a bitwise XOR to work out if the button is being pressed.
    return ((digitalIn.read()) ^ usesPullUpResistor);
}
