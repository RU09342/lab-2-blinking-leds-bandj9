#include <msp430.h> // Allows us to use "short-cut" names
 // to make our code easier to read
#define RED 0x0001 // Specifies the red LED light for us
#define RED_OFF 0x00FE // Used to turn the red LED off
#define ENABLE_RED 0xFFFE // Used to enable microcontroller's pins

main() // All C programs have a main function
{

 PM5CTL0 = ENABLE_RED; // Enables the pins to the outside world
 P1DIR = RED; // Make a pin an output
 long x = 0; // Will be used to slow down blinking
 while(1) // Continuously repeat everything below
 {
 for(x=0 ; x < 30000 ; x=x+1); // Count from 0 to 30,000 for a delay
 P1OUT = RED; // Turn red LED light on
 for(x=0 ; x < 30000 ; x=x+1); // Count from 0 to 30,000 for a delay
 P1OUT = RED_OFF; // Turn off the red LED light
 }
}
