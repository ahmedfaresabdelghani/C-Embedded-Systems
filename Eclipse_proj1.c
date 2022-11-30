#include<avr/io.h>
#include<util/delay.h>
#include "BIT_MATH.h"
#include"STD_TYPES.h"
void main()
{
	DDRD = 0xff;
	u8 sevensegarr[10]={
			0b00111111,
			0b00000110,
			0b01011011,
			0b01001111,
			0b01100110,
			0b01101101,
			0b01111101,
			0b00000111,
			0b01111111,
			0b01101111,

	};
	while(1)
	{
		for(u8 i=0; i<10;i++)
		{
			PORTD=sevensegarr[i];
			_delay_ms(1500);
		}
	}
}
