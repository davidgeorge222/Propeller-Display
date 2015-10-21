# Propeller-Display
A group project to develop a propeller display with Wifi capabilities and high performance display of images

**Second** version of the **proposed** schematic:
![Second PROPOSED version](http://oi59.tinypic.com/55fc00.jpg)

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
> - PIC16F877A (x1);
> - Capacitor 33pf (x2); 
> - Crystal 20MHz (x1);
> - SDCard adapter (x1) (**To determine part's model**);
> - Bluetooth module HC-06 (x1);
> - Resistor 10K (x1);
> - Hall effect sensor (?) (**To determine part's model**);
> - Led driver STP16DP05MTR (x6)  ([Link](http://uk.rs-online.com/web/p/led-display-drivers/6864838/?searchTerm=STP16DP05MTR&relevancy-data=636F3D3226696E3D4931384E4B6E6F776E41734D504E266C753D656E266D6D3D6D61746368616C6C7061727469616C26706D3D5E5B5C707B4C7D5C707B4E647D2D2C2F255C2E5D2B2426706F3D313326736E3D592673743D4D414E5F504152545F4E554D4245522677633D424F5448267573743D5354503136445030354D545226));
> - RGB Led (x32 * 3 = 96 single LEDs. 96 / 16 per led driver = 6 drivers) ([Link](http://uk.rs-online.com/web/p/visible-leds/8305079/));
> - Voltage regulator (x1) (**To determine part's model**);
> - Motor (x1) ([Link](http://www.moonsindustries.com/Products/Steppermotor/RotarySteppermotor/Hybrid_Stepper_motor/Standard_HB_Stepper_motor/HB2P_14HY/));
> - Stepper Motor Driver LV8549MC-AH (x1) ([Link](http://uk.rs-online.com/web/p/motor-driver-ics/7693949/?searchTerm=LV8549MC-AH&relevancy-data=636F3D3226696E3D4931384E4B6E6F776E41734D504E266C753D656E266D6D3D6D61746368616C6C7061727469616C26706D3D5E5B5C707B4C7D5C707B4E647D2D2C2F255C2E5D2B2426706F3D313326736E3D592673743D4D414E5F504152545F4E554D4245522677633D424F5448267573743D4C56383534394D432D414826))

> **Propeller structure's components** -
> - ... (To determine)

(LAST UPDATED: 14/10/2015 13:52)