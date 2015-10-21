/*
 * File:   main.c
 *
 * Created on 8 October 2015, 19:29
 *
 * Microcontroller: PIC16F877A
 */

#include "globals.h"
#include "bithandler.h"
#include "i2c_driver.h"
#include "led_driver.h"
#include <xc.h>

/* Constants and Macros: */

/* Hall sensor data: */
#define HALL_PIN 3

/* Timers: */
#define timer0_restart() INTCONbits.T0IF = 0; TMR0 = 0;
#define timer0_start() INTCONbits.T0IE = 1;

void interrupt isr() {
	timer0_restart();
}

void timer0_init(void) {
	OPTION_REGbits.PSA = 0;
	OPTION_REGbits.PS = 0b111;
	OPTION_REGbits.T0CS = 0;
	timer0_restart();
	timer0_start();
	INTCONbits.GIE = 1;
}

void hall_init(void) {
	/* TODO: We might have to intialize something else here later */
	bit_set(TRISD, HALL_PIN);
}

void init_all(void) {
	/* Initialize everything */
	i2c_master_init();
	led_driver_init();
	timer0_init();
	hall_init();
}

void main(void) {
	init_all();
	
	led_set(0, 5, 10, 15);
	
	while(1) led_update();
}
