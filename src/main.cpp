#include <mbed.h>
#include <rtos.h>
#include <mbed_events.h>
#include "components.h"

Serial pc(USBTX, USBRX);
Thread worker;
EventQueue queue;

AssignmentBoard board;
LED redLED(board.K64F_RED_LED);
LED greenLED(board.SHIELD_GREEN_LED);

InterruptIn sw(board.K64F_SW2);

void flash(void)
{
    redLED.toggle();
}

void blink(void)
{
    pc.printf("This is not in an ISR so I can do long (time) operations\n");
    greenLED.toggle();
}


int main()
{
    sw.rise(flash); /* executes as an ISR */
    sw.fall(queue.event(blink));
    worker.start(callback(&queue, &EventQueue::dispatch_forever ));
    while(1){}
}
