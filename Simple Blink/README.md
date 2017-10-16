# Simple Blink

## Summary
1. Disable Watchdog timer
2. Initialize appropriate registers
3. Create a delay
4. Flip the status of LED
5. Rinse and Repeat

## Description
The output latch is cleared for a certain pin to define a power-on state.  The output direction is set and the GPIO power-on default high-impedance mode to activate previously configured port settings.  The output pin is set to toggle using an exclsive-or.

All of the boards had similar code to run the button blink program. There were three processors (5994, 2311, and 6989) that required one extra piece of code. For those boards the high-impedance mode pin is enabled by default. In order for the program to run this pin has to be disabled. The line that had to be added to these boards to disable this pin is as followed: PM5CTL0 &= ~LOCKLPM5

## Project Demonstration
The board that is demonstrated for the simple blink project is the MSP430G2553.  The LED is blinking at a constant rate.

![](https://media.giphy.com/media/3o7aCRGTgV3GxhlJcs/giphy.gif)
