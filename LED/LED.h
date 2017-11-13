#ifndef LED_h
#define LED_h

// #include "Arduino.h"
#include "Pin.h"

class LED{
	public:

		Pin *hot, *gnd;
		boolean ison;

		LED(){};

		LED(int h){
			hot = new Pin(h);
		};

		LED(int h, int g){
			hot = new Pin(h);
			gnd = new Pin(g);
			gnd->setPinMode(OUTPUT);
			gnd->off(OUTPUT);
		};

		void on(){
			hot->on();
			ison = true;
		};

		void off(){
			hot->off();
			ison = false;
		};

		boolean isOn(){
			return ison;
		};
};
#endif
