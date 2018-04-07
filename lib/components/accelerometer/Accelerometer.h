#include<mbed.h>
#include <FXOS8700Q.h>

#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H

/**
 * @brief Describes an accelerometer component.
 *
 * Version: 1.2
 * Date: 06/04/2018
 * Originally Created: 04/04/2018
 */
class Accelerometer
{
    private:
        //[accelerometer] Refers to the accelerometer itself.
        FXOS8700QAccelerometer accelerometer;

        //[accelerometerData] Used to get data from the accelerometer.
        motion_data_units_t accelerometerData;

    public:
        /**
         * @brief Constructor for the accelerometer class.
         * @param i2c This is the I2C used by the accelerometer.
         */
        Accelerometer(I2C *i2c);

        /**
         * @brief Updates the acelerometer.
         */
        void update();

        /**
         * @brief Activates the accelerometer.
         */
        void enable();

        /**
         * @brief Deactivates the accelerometer.
         */
        void disable();

        /**
         * @return Returns the 'X' of the accelerometer.
         */
        float getX();

        /**
         * @return Returns the 'Y' value of the accelerometer.
         */
        float getY();

        /**
         * @return Returns the 'Z' value of the accelerometer.
         */
        float getZ();

};

#endif // ACCELEROMETER_H
