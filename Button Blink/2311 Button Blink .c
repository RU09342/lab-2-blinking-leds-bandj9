#include <msp430fr2311.h>

 //Button Blink
void main(void)
{
    WDTCTL = WDTPW + WDTHOLD; //watchdog timer control
    PM5CTL0 &= ~LOCKLPM5; // Disable the GPIO power-on default high-impedance mode to activate configured port settings
    P1DIR = BIT0; //make P1.0 the output pin
    P1REN = BIT1; //internal resistor is enabled, P5.6 connects to either Vcc (3.3V) or ground
    P1OUT = BIT1; //P1.1 is an input pin

    while(1) //loop
    {
        //if button is pressed, then P1IN = 0; it is 1 by default

        if((P1IN & BIT1)!=BIT1) //logic AND. P1IN and BIT1 must be 1 for output to be 1
        {
            __delay_cycles(50000);
            P1OUT ^= BIT0;
        }
    }
}
