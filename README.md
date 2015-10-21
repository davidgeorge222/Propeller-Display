# Propeller-Display
A group project to develop a propeller display with Wifi capabilities and high performance display of images

**Second** version of the **proposed** schematic:
![Second PROPOSED version](http://i.imgur.com/tEuT2x4.png)

Specifications:
---------------
**Microcontroller** - 
> - PIC16F877A
> - 20MHz CPU Clock (using external crystal)
> - Package: PLCC 11x11 pin
> - [Datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/39582C.pdf)

**Propeller sensing method** -
> - Hall effect sensor for rotation detetion: The MCU considers 1 rotation done if the hall sensor sends 1 digital pulse. Then, the MCU must restart the drawing of the image from the start.

**LED Brightness control method** - 
> - PWM will be used for each LED inside each RGB LED to control the brightness. This will be achieved by performing PWM using the 74HC595 Shift Register.

**Motor** - 
> - Max RPM: 1800.
> - This component will rotate together with the PCB.

**Propeller structure** - 
> - Design:
	**First version** of 3 model ideas:
	![Idea 1](http://i.imgur.com/lAxPdNq.png)
	![Idea 2](http://i.imgur.com/f3Ss4Ii.png)
	![Idea 3](http://i.imgur.com/jm7NUef.png)
	
**Firmware** -
> - IDE: MPLAB
> - Compiler: XC8
> - Algorithm:
	![Firmware algorithm](http://i.imgur.com/M1VnChr.png)
	

Component list:
---------------

> **Schematic's components** -
> - 1 - PIC16F877A (x1) ([Link](http://uk.rs-online.com/web/p/microcontrollers/4671707/));
> - 2 - Capacitor 18pF (x2) ([Link](http://uk.rs-online.com/web/p/ceramic-multilayer-capacitors/6480935/);
> - 3 - Capacitor 10uF (x2) ([Link](http://uk.rs-online.com/web/p/ceramic-multilayer-capacitors/6911199/));
> - 4 - Crystal 20MHz (x1) ([Link](http://uk.rs-online.com/web/p/crystal-units/6720371/));
> - 5 - SDCard adapter (x1) ([Link](http://uk.rs-online.com/web/p/memory-sim-card-connectors/7388809P/));
> - 6 - Bluetooth module HC-06 (x1);
> - 7 - Resistor 10K (x3) ([Link](http://uk.rs-online.com/web/p/surface-mount-fixed-resistors/8326723/));
> - 8 - Hall effect sensor SS41 (x1) ([Link](http://uk.rs-online.com/web/p/hall-effect-sensors/8223771/));
> - 9 - Shift register 74HC595 (x12) ([Link](http://uk.rs-online.com/web/p/counters-shift-registers/6632155/));
> - 10 - RGB Led (x32 * 3 = 96 single LEDs. 96 / 8 per led driver = 12 drivers) ([Link](http://uk.rs-online.com/web/p/visible-leds/8305079/));
> - 11 - Voltage regulator LM7805 (x1) ([Link](http://uk.rs-online.com/web/p/linear-voltage-regulators/8427472/));
> - 12 - Motor (x1) ([Link](http://www.moonsindustries.com/Products/Steppermotor/RotarySteppermotor/Hybrid_Stepper_motor/Standard_HB_Stepper_motor/HB2P_14HY/));
> - 13 - Stepper Motor Driver LV8549MC-AH (x1) ([Link](http://uk.rs-online.com/web/p/motor-driver-ics/7693949/?searchTerm=LV8549MC-AH&relevancy-data=636F3D3226696E3D4931384E4B6E6F776E41734D504E266C753D656E266D6D3D6D61746368616C6C7061727469616C26706D3D5E5B5C707B4C7D5C707B4E647D2D2C2F255C2E5D2B2426706F3D313326736E3D592673743D4D414E5F504152545F4E554D4245522677633D424F5448267573743D4C56383534394D432D414826))

> **Propeller structure's components** -
> - ... (To determine)

(LAST UPDATED: 21/10/2015 22:40)