#include <msp430.h> 


/**
 * main.c
 */
void main()
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	PM5CTL0 &= ~LOCKLPM5;// Disable the GPIO power-on default high-impedance mode to activate configured port settings
	P1DIR = BIT0 + BIT1; //BIT0 and 6 output
	P1OUT = BIT1+ BIT0; //produces 3.3V to turn on P1.6
	
	while(1){ //loop
	    P1OUT ^= BIT0 + BIT1; //set output of pins
	    _delay_cycles(40000); //delay 40000 cycles
	}
}
