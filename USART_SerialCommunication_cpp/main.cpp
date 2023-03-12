/*******************************/
/*** Created by Ovidiu Sabau ***/
/***	11th March 2023		***/
/*******************************/

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include "Arduino.h"

int main()
{
	Serial.begin(9600);
	int i = 0;
	
	/* main loop */
	while(1) 
	{
		i += 1;
		Serial.print("Iteration: ");
		Serial.println(i);
		_delay_ms(500);
	}
	
	return 0;
}