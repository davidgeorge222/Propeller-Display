/* 
 * File:   led_driver.h
 * Author: Miguel
 *
 * Created on 14 October 2015, 22:42
 */

#ifndef LED_DRIVER_H
#define	LED_DRIVER_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "globals.h"
   
extern void led_driver_init(void);
extern void led_set(int rgb_index, uint8_t r, uint8_t g, uint8_t b);
    
#ifdef	__cplusplus
}
#endif

#endif	/* LED_DRIVER_H */

