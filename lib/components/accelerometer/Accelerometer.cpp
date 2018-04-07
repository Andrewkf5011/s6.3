#include <mbed.h>
#include <FXOS8700Q.h>
#include "Accelerometer.h"

Accelerometer::Accelerometer(I2C *i2c) : accelerometer(*i2c, FXOS8700CQ_SLAVE_ADDR1)
{

}

void Accelerometer::update()
{
    accelerometer.getAxis(accelerometerData);
}

void Accelerometer::enable()
{
    accelerometer.enable();
}

void Accelerometer::disable()
{
    accelerometer.disable();
}

float Accelerometer::getX()
{
    return accelerometerData.x;
}

float Accelerometer::getY()
{
    return accelerometerData.y;
}

float Accelerometer::getZ()
{
    return accelerometerData.z;
}
