/* 
 * File:   i2c_driver.h
 *
 * Created on 14 October 2015, 21:08
 */

#ifndef I2C_DRIVER_H
#define	I2C_DRIVER_H

#ifdef	__cplusplus
extern "C" {
#endif

#define I2C_MODE_WRITE 0
#define I2C_MODE_READ 1
    
#define i2c_wait() while(!SSPIF); SSPIF = 0;
#define i2c_begin() SEN = 1; i2c_wait();
#define i2c_end() PEN = 1; i2c_wait();
#define i2c_address(address, access_mode) SSPBUF = (address << 1) + access_mode; i2c_wait();
    
extern void i2c_master_init(void);
extern bool i2c_write(uint8_t data);
extern bool i2c_write_buffer(uint8_t * buffer, int buffer_size);
extern uint8_t i2c_read(void);

#ifdef	__cplusplus
}
#endif

#endif	/* I2C_DRIVER_H */

