#include "led_driver.h"
#include "shiftpwm_pic.h"
#include <xc.h>

#define MAX_RGB_COLOR 256

typedef struct {
	uint8_t r;
	uint8_t g;
	uint8_t b;
} rgb_t;

rgb_t rgb_list[SHIFT_REG_COUNT];

void led_driver_init(void) {
	shiftpwm_init();
	for(int i = 0; i < SHIFT_REG_COUNT; i++) {
		rgb_list[i].r = 0;
		rgb_list[i].g = 0;
		rgb_list[i].b  = 0;
	}
}

void led_set(int rgb_index, uint8_t r, uint8_t g, uint8_t b) {
	int rgb_index_off = rgb_index * 3;
	
	rgb_list[rgb_index].r = r;
	rgb_list[rgb_index].g = g;
	rgb_list[rgb_index].b = b;
	
	/* TODO: Calculate frequency from the color values: */
	pwm(MAX_RGB_COLOR - r, r, rgb_index_off);
	pwm(MAX_RGB_COLOR - g, g, rgb_index_off + 1);
	pwm(MAX_RGB_COLOR - b, b, rgb_index_off + 2);
}

void led_update() {
	/* TODO: Calculate frequency from the color values: */
	for(int i = 0; i < SHIFT_REG_COUNT; i += 3) {
		pwm(MAX_RGB_COLOR - rgb_list[i].r, rgb_list[i].r, i);
		pwm(MAX_RGB_COLOR - rgb_list[i].g, rgb_list[i].g, i + 1);
		pwm(MAX_RGB_COLOR - rgb_list[i].b, rgb_list[i].b, i + 2);
	}
}