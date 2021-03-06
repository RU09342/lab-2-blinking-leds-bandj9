# Button Blink

## Summary
1. Disable Watchdog Timer
2. Initialize Registers (1 LED and 1 button)
3. Hold button down (polling)to turn LED on.  When button is not held down turn LED off.

## Description
In this lab the output pin is enabled as well as an internal resistor which connects to either Vcc or ground.  An input also has to be set. A while loop is created which states if the button is pressed then the output pin is set to 0.  The input pin is toggled when the button that is hooked up to is pressed.

## Board Differences
All of the boards had similar code to run the button blink program.  There were three processors (5994, 2311, and 6989) that required one extra piece of code.  For those boards the high-impedance mode pin is enabled by default.  In order for the program to run this pin has to be disabled.  The line that had to be added to these boards to disable this pin is as followed: PM5CTL0 &= ~LOCKLPM5

## Project Demonstration
The board that is demonstrated for the button blink project is the MSP430G2553.  When the button is pressed the LED turns on and when the button is let go the LED turns off.  The button has a bouncing issues and it looks as though when the button is being pressed multiple times, although the button is only being pressed once.

![](https://media.giphy.com/media/3ov9jNnrnQELIPDgze/giphy.gif)

## Extra Work
It was very simple to add another button to toggle a different LED, this was created on an MSP430G2553.
