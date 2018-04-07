#include<mbed.h>
#include <FXOS8700Q.h>

#ifndef MAGNETOMETER_H
#define MAGNETOMETER_H

/**
 * @brief Describes a magnetometer component.
 *
 * Version: 1.0
 * Date: 06/04/2018
 * Originally Created: 06/04/2018
 */
class Magnetometer
{
    private:
        //[magnetometer] Refers to the magnetometer itself.
        FXOS8700QMagnetometer magnetometer;

        //[magnetometerData] Used to get data from the magnetometer.
        motion_data_units_t magnetometerData;

    public:
        /**
         * @brief Constructor for the magnetometer class.
         * @param i2c This is the I2C used by the magnetometer.
         */
        Magnetometer(I2C *i2c);

        /**
         * @brief Updates the magnetometer.
         */
        void update();

        /**
         * @brief Activates the magnetometer.
         */
        void enable();

        /**
         * @brief Deactivates the magnetometer.
         */
        void disable();

        /**
         * @return Returns the 'X' of the magnetometer.
         */
        float getX();

        /**
         * @return Returns the 'Y' value of the magnetometer.
         */
        float getY();

        /**
         * @return Returns the 'Z' value of the magnetometer.
         */
        float getZ();

};

#endif // MAGNETOMETER_H
