/*
 * USART_SerialCommunication_cpp.cpp
 *
 * Created: 10.03.2023 19:53:14
 * Author : lenovo
 */ 

#define F_CPU 16000000	
#include "Arduino.h"


void setup();
void loop();

void setup()
{
	pinMode(13, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	digitalWrite(13, HIGH);
	delay(500);
	digitalWrite(13, LOW);
	delay(500);
	
	Serial.println("Hello there");
}