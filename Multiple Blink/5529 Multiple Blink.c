#include <msp430f5529.h>

//Multiple Blink
void main()
{
    WDTCTL = WDTPW + WDTHOLD; //watchdog timer control, not using
    P1DIR = BIT0; //set P1.0 to be output
    P4DIR = BIT7; //set P4.7 to be output
    P1OUT = BIT0; //turns on P1.0
    P4OUT = BIT7; //turns on P4.7

    while(1) //loop
    {
        P1OUT ^= BIT0; //set the output of the pins. ^ means toggle
        P4OUT ^= BIT7;
        _delay_cycles(50000); //delay for 50000 cycles.
        //default for one cycle = 0.9 microseconds to execute
        //50000 * 0.9us per cycle = 0.045 second delay
    }
}
