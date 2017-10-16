# Multiple Blink

## Summary
1. Disable Watchdog timer
2. Enable Registers (2 LEDs)
3. Flip the status of LED1
4. Create a delay
5. Flip the status of LED2
6. Rinse and Repeat

## Description
The purpose of this lab was to make multiple LEDs blink.  This was done exactly how the button blink lab was done, but instead of having one output there were two.  

## Board Differences
All of the boards had similar code to run the button blink program. There were three processors (5994, 2311, and 6989) that required one extra piece of code. For those boards the high-impedance mode pin is enabled by default. In order for the program to run this pin has to be disabled. The line that had to be added to these boards to disable this pin is as followed: PM5CTL0 &= ~LOCKLPM5

## Project Demonstration
The board that is demonstrated for the multiple blink project is the MSP430G2553.  As one can see both the green and red LED's are blinking very fast!

![](https://media.giphy.com/media/xT9IgfaegXU3vBCwiA/giphy.gif)
