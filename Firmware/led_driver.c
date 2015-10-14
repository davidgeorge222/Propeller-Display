#include "led_driver.h"
#include "i2c_driver.h"
#include <xc.h>

#define LEDDRIVER_SLAVE_ADDR 1
    
void led_driver_init(void) {
	/* Configure led driver's address here */
	
}

void led_set(int rgb_index, uint8_t r, uint8_t g, uint8_t b) {
	i2c_begin();
	i2c_address(LEDDRIVER_SLAVE_ADDR, I2C_MODE_WRITE);
	/* Set 'rgb_index'th RGB LED with all 3 values r, g and b for all the 3 leds inside the RGB LED */
	
	i2c_end();
}