#define _XTAL_FREQ 20000000

#include <xc.h>
#include <pic16f877a.h>
#include <string.h>
#include "shiftpwm_pic.h"

#define SHCP_PIN 0
#define DS_PIN 1
#define STCP_PIN 2			

int pwm_channels_preload[REGS_BIT_SIZE];

void shiftpwm_init() {
	TRISD = PORTD = 0;
	memset(regs, 0, REGS_BIT_SIZE);
	memset(pwm_channels_preload, 0, REGS_BIT_SIZE);
}

void write_regs(char * regs) {
	bit_write(0, PORTD, STCP_PIN);
	for(int i = REGS_BIT_SIZE - 1; i >= 0; i--) {
		bit_write(0, PORTD, SHCP_PIN);
		bit_write((regs[i] ? 1 : 0), PORTD, DS_PIN);
		bit_write(1, PORTD, SHCP_PIN);
	}
	bit_write(1, PORTD, STCP_PIN);
}

void pwm(int pulse_width, int period, int channel) {
	/* Period: */
	if(pulse_width && pwm_channels_preload[channel] <= period * -1) {
		pwm_channels_preload[channel] = pulse_width;
		regs[channel] = HIGH;
		write_regs(regs);
	}

	/* Pulse width: */
	if(!(pwm_channels_preload[channel]--)) {
		regs[channel] = LOW;
		write_regs(regs);
	}
}