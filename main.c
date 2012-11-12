/*
 * Example main.c file for MSP430
 */

#include <msp430.h>

int main() {
    P1DIR = 0x1;
    P1OUT = 0x1;
    return 0;
}
