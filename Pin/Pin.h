#ifndef PIN_H
#define PIN_H

#include "Arduino.h"

class Pin{

	public:
		int pinNumber;

	Pin(int pinIN){
		pinNumber = pinIN;
		pinMode(pinNumber, OUTPUT);
	};//..
	
	void off(){
		digitalWrite(pinNumber, LOW);
	};
	
	void on(){
		digitalWrite(pinNumber, HIGH);
	};		
	
	int getPinNumber(){
		return pinNumber;
	};
	
	void setPinMode(int mode){
		pinMode(pinNumber, mode);
	};
	
	void pwm(int val){
		analogWrite(pinNumber, val);
	};
	
	void startTone(int val){
		tone(pinNumber, val);
	};
	
	void stopTone(){
		noTone(pinNumber);
	};
};// end LED

#endif
