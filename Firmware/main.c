/*
 * File:   main.c
 *
 * Created on 8 October 2015, 19:29
 *
 * Microcontroller: PIC16F877A
 */

#define _XTAL_FREQ 20000000

#include <xc.h>
#include "shiftpwm_pic.h"

#define timer0_restart() INTCONbits.T0IF = 0; \
						 TMR0 = 0;
#define timer0_start() INTCONbits.T0IE = 1;

int channel = 0;
int channel_hz[] = {5,10,40};
int flip = 0;
void interrupt isr() {
	timer0_restart();
	if(!flip) {
		bit_set(PORTD, 7);
		flip = 1;
	} else {
		bit_clear(PORTD, 7);
		flip = 0;
	}
	
	pwm_f(channel_hz[channel], 1000, channel);
	if(channel++ >= 2) channel = 0;
}

void timer0_init() {
	OPTION_REGbits.PSA = 0;
	OPTION_REGbits.PS = 0b111;
	OPTION_REGbits.T0CS = 0;
	timer0_restart();
	timer0_start();
	INTCONbits.GIE = 1;
}

void init() {
	timer0_init();
	shiftpwm_init();
	bit_set(TRISD, 3);
}

void main(void) {
	init();
	while(1);
}
