#include <msp430g2553.h>

 //Button Blink
void main(void)
{
    WDTCTL = WDTPW + WDTHOLD; //watchdog timer control
    P1DIR = BIT0; //make P1.0 the output pin
    P1REN = BIT3; //internal resistor is enabled, P1.3 connects to either Vcc (3.6V) or ground
    P1OUT = BIT3; //P1.3 is an input pin

    while(1) //loop indefinitely
    {
        //if button is pressed, then P1IN = 0; it is 1 by default

        if((P1IN & BIT3)!=BIT3) //logic AND. P1IN and BIT3 must be 1 for output to be 1
        {
            __delay_cycles(50000);
            P1OUT ^= BIT0;
        }
    }
}
