# Propeller-Display
A group project to develop a propeller display with Wifi capabilities and high performance display of images

**First** version of the **proposed** schematic:
![First PROPOSED version](http://i.imgur.com/gKJlont.png)

Specifications:
---------------
**Microcontroller** - 
> - PIC16F877A
> - 20MHz CPU Clock (using external crystal)
> - Package: PLCC 11x11 pin

**Propeller sensing method** -
> TODO

**Motor** - 
> - Max RPM - 1800

**Propeller structure** - 
> TODO

**Firmware** -
> - IDE: MPLAB
> -  Compiler: XC8
> - Algorithm:
	![Firmware algorithm](http://i.imgur.com/M1VnChr.png)
	

Component list:
---------------

> **Schematic's components** -
> - PIC16F877A (x1)
> - Capacitor 33pf (x2) 
> - Crystal 20MHz (x1)
> - SDCard adapter (x1) (**To determine part's model**)
> - Bluetooth module HC-06 (x1)
> - Resistor 10K (x1)
> - Hall effect sensor (?) (**To determine part's model**)
> - Led driver STP16DP05MTR (x6)
> - RGB Led (x32 * 3 = 96 single LEDs. 96 / 16 per led driver = 6 drivers)
> - Voltage regulator (x1) (**To determine part's model**)
> - Motor (x1) (**To determine part's model**)
> - Stepper Motor Driver LV8549MC-AH (x1)

> **Propeller structure's components** -
> - ... (To determine)

(LAST UPDATED: 14/10/2015 13:52)