#include<mbed.h>

#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H

/**
 * @brief Describes a potentiometer component.
 *
 * Version: 1.0
 * Date: 24/03/2018
 * Originally Created: 24/03/2018
 */
class Potentiometer
{
    private:
        //[pinName] This is the name of the pin that the Potentiometer
        //is wired to.
        PinName pinName;

    public:
        //[analogIn] Refers to the input from the potentiometer.
        AnalogIn analogIn;

        /**
         * @brief This is the constructor for the potentiometer class.
         * @param pinName This is the name of the pin that the potentiometer
         *                is wired to.
         */
        Potentiometer(PinName pinName);

        /**
         * @retun Returns the name of the pin that the potentiometer
         *        is wired to.
         */
        PinName getPinName();

        /**
         * @return Reads the value of the potentiometer and returns it.
         */
        float read();
};

#endif // POTENTIOMETER_H
