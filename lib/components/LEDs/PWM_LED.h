#include<mbed.h>

#ifndef PWM_LED_H
#define PWM_LED_H

/**
 * @brief Describes an LED component that is controlled using pulse width
 *        modualtion.
 *
 * Version: 1.0
 * Date: 07/04/2018
 * Originally Created: 25/03/2018
 */
class PWM_LED
{
    private:
        //[pinName] This is the name of the pin that the LED is wired to.
        PinName pinName;

    public:
        //[pwmOut] Refers to the pulse width modulation output from the LED.
        PwmOut pwmOut;

        /**
         * @brief Constructor for the PWM_LED class.
         * @param This is the name of the pin that the LED is wired to.
         */
        PWM_LED(PinName pinName);

        /**
         * @return Returns the name of the pin that the LED is wired to.
         */
        PinName getPinName();

        /**
         * @brief Turns the LED on.
         */
        void on();

        /**
         * @brief Turns the LED on at a given brightness.
         * @param brightness This is how bright the LED should be.
         */
        void on(float brightness);

        /**
         * @brief Turns the LED off.
         */
        void off();

        /**
         * @brief Toggles the state of the LED.
         */
        void toggle();
};

#endif // PWM_LED_H
