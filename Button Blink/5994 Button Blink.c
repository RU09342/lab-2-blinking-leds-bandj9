#include <msp430fr5994.h>

 //Button Blink
void main(void)
{
    WDTCTL = WDTPW + WDTHOLD; //watchdog timer control
    PM5CTL0 &= ~LOCKLPM5; // Disable the GPIO power-on default high-impedance mode to activate configured port settings
    P1DIR = BIT0; //make P1.0 the output pin
    P5REN = BIT6; //internal resistor is enabled, P5.6 connects to either Vcc (3.3V) or ground
    P5OUT = BIT6; //P5.6 is an input pin

    while(1) //loop
    {
        //if button is pressed, then P1IN = 0; it is 1 by default

        if((P5IN & BIT6)!=BIT6) //logic AND. P5IN and BIT6 must be 1 for output to be 1
        {
            __delay_cycles(50000);
            P1OUT ^= BIT0;
        }
    }
}
