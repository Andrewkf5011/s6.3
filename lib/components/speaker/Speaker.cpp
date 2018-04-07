#include <mbed.h>
#include "Speaker.h"

Speaker::Speaker(PinName pinName) : pwmOut(pinName)
{
    Speaker::pinName = pinName;
}

PinName Speaker::getPinName()
{
    return pinName;
}

void Speaker::play()
{
    pwmOut.write(0.5);
}

void Speaker::stop()
{
    pwmOut.write(0);
}
