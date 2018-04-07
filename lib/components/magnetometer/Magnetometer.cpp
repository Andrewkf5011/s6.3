#include <mbed.h>
#include <FXOS8700Q.h>
#include "magnetometer.h"

Magnetometer::Magnetometer(I2C *i2c) : magnetometer(*i2c, FXOS8700CQ_SLAVE_ADDR1)
{

}

void Magnetometer::update()
{
    magnetometer.getAxis(magnetometerData);
}

void Magnetometer::enable()
{
    magnetometer.enable();
}

void Magnetometer::disable()
{
    magnetometer.disable();
}

float Magnetometer::getX()
{
    return magnetometerData.x;
}

float Magnetometer::getY()
{
    return magnetometerData.y;
}

float Magnetometer::getZ()
{
    return magnetometerData.z;
}
