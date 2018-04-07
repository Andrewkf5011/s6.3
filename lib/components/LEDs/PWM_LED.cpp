#include <mbed.h>
#include "PWM_LED.h"

PWM_LED::PWM_LED(PinName pinName) : pwmOut(pinName)
{
    PWM_LED::pinName = pinName;
}

PinName PWM_LED::getPinName()
{
    return pinName;
}

void PWM_LED::on()
{
    pwmOut.write(0);
}

void PWM_LED::on(float brightness)
{
    pwmOut.write(brightness);
}

void PWM_LED::off()
{
    pwmOut.write(1);
}
