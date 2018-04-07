#ifndef BUTTON_H
#define BUTTON_H

#include<mbed.h>
#include<stdbool.h>

/**
 * @brief Describes a button component.
 *
 * Version: 1.0
 * Date: 23/03/2018
 * Originally Created: 23/03/2018
 */
class Button
{
    private:
        //[pinName] This is the name of the pin that the button is wired to.
        PinName pinName;
        //[usesPullUpResistor] If true then this button is wired using a pull
        //up resistor.
        bool usesPullUpResistor;

    public:
        //[digitalIn] Refers to the digital input from the button.
        DigitalIn digitalIn;

        /**
         * @brief Constructor for the Button class.
         * @param pinName This is the name of the pin that the button is wired
         *                to.
         * @param usesPullUpResistor If true then this button is wired using a
                                     pull up resistor.
         */
        Button(PinName pinName, bool usesPullUpResistor);

        /**
         * @return Returns the name of the pin that the button is wired to.
         */
        PinName getPinName();

        /**
         * @return Returns true if the button is currently being pressed.
         */
        bool isPressed();

};

#endif //BUTTON_H
