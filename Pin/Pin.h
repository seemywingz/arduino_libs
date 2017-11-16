#ifndef PIN_H
#define PIN_H

#include "Arduino.h"

class Pin{

	public:
		int pinNumber;
		bool isOn = false;

	Pin(int pinIN){
		pinNumber = pinIN;
		pinMode(pinNumber, OUTPUT);
	};//..
	
	void off(){
		digitalWrite(pinNumber, LOW);
		isOn = false;
	};
	
	void on(){
		digitalWrite(pinNumber, HIGH);
		isOn = true;
	};		
	
	void setPinMode(int mode){
		pinMode(pinNumber, mode);
	};
	
	void startTone(int val){
		tone(pinNumber, val);
	};
	
	void stopTone(){
		noTone(pinNumber);
	};

	int readA(){
	  return analogRead(pinNumber);
    };

	int readD(){
	  return digitalRead(pinNumber);
	};

	void writeA(int val){
	  return analogWrite(pinNumber, val);
	};

	void writeD(int val){
	  return digitalWrite(pinNumber, val);
	};

};// end LED

#endif
