#include<mbed.h>

#ifndef SPEAKER_H
#define SPEAKER_H

/**
 * @brief Describes a speaker component.
 *
 * Version: 1.0
 * Date: 25/03/2018
 * Originally Created: 25/03/2018
 */
class Speaker
{
    private:
        //[pinName] This is the name of the pin that the speaker is wired to.
        PinName pinName;

    public:
        //[pwmOut] Refers to the pulse width modulation output from the speaker.
        PwmOut pwmOut;

        /**
         * @brief This is the constructor for the speaker class.
         * @param pinName This is the name of the pin that the speaker
         *                is wired to.
         */
        Speaker(PinName pinName);

        /**
         * @return Returns the name of the pin that the speaker is wired to.
         */
        PinName getPinName();

        /**
         * @brief Turns the speaker on.
         */
        void play();

        /**
         * @brief Turns the speaker off.
         */
        void stop();
};

#endif // SPEAKER_H
