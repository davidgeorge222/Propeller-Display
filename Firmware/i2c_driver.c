#include "globals.h"
#include "i2c_driver.h"
#include <xc.h>

#define SCL RC3
#define SDA RC4
#define SCL_DIR TRISC3
#define SDA_DIR TRISC4

#define I2C_RATE 100 /* expressed in kbps (kilobyte/second) */
#define I2C_MODE_MASTER 0x28

void i2c_master_init(void) {
	/* Configure I2C as Master for SDCard and all 6 LED drivers */
	
	SDA_DIR = DIR_INPUT;
	SCL_DIR = DIR_INPUT;
	SSPADD = ((_XTAL_FREQ / 4000) / I2C_RATE) - 1;
	SSPSTAT = 0x80;
	SSPCON = I2C_MODE_MASTER;
}

bool i2c_write(uint8_t data) {
	SSPBUF = data;
	i2c_wait();
	return ACKSTAT;
}

uint8_t i2c_read(void) {
	RCEN = 1;
	i2c_wait();
	return SSPBUF;
}

bool i2c_write_buffer(uint8_t * buffer, int buffer_size) {
	bool ret = 1;
	for(int i = 0; i < buffer_size; i++)
		if(!(ret = i2c_write(buffer[i]))) 
			return ret;
	return ret;
}