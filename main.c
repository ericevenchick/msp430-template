/*
 * Example main.c file for MSP430
 * Blinks red LED on the MSP430 launchpad
 */

#include <msp430.h>

int main() {
    // halt watchdog
    WDTCTL = WDTPW + WDTHOLD;
    // make all port 1 pins outputs
    P1DIR = 0xFF;
    for (;;) {
        P1OUT ^= 0x1;
        __delay_cycles(100000);
    }
}
