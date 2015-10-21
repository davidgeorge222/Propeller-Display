/* 
 * File:   globals.h
 *
 * Created on 14 October 2015, 21:10
 */

#ifndef GLOBALS_H
#define	GLOBALS_H

#ifdef	__cplusplus
extern "C" {
#endif

#define _XTAL_FREQ 20000000 /* 20 MHz */
    
/* Direction constants */
#define DIR_INPUT 1
#define DIR_OUTPUT 0

typedef unsigned char uint8_t;
typedef char int8_t;
typedef char bool;
    
#ifdef	__cplusplus
}
#endif

#endif	/* GLOBALS_H */

