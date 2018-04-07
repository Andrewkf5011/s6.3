#include <mbed.h>
#include "LED.h"

LED::LED(PinName pinName) : digitalOut(pinName,1)
{
    LED::pinName = pinName;
}

PinName LED::getPinName()
{
    return pinName;
}

void LED::on()
{
    digitalOut.write(0);
}

void LED::off()
{
    digitalOut.write(1);
}

void LED::toggle()
{
    digitalOut = !digitalOut;
}
