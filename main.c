#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include<util/delay.h>
#include "DIO_interface.h"
void main(void)
{
	DIO_u8SetPortDirection('D',DIO_u8PORT_OUTPUT);
	DIO_u8SetPinDirection('C',DIO_u8PIN0,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection('C',DIO_u8PIN1,DIO_u8PIN_OUTPUT);
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
	u8 Local_u8InputValue=1;

	DIO_u8SetPinDirection('C',DIO_u8PIN0,DIO_u8PIN_INPUT);
	DIO_u8SetPinValue('C',DIO_u8PIN0,DIO_u8PIN_HIGH);

	DIO_u8SetPinDirection('C',DIO_u8PIN1,DIO_u8PIN_OUTPUT);


	while(1)
	{
		DIO_u8GetPinValue('C',DIO_u8PIN0,&Local_u8InputValue);
		if(Local_u8InputValue==0)
		{
			DIO_u8SetPinValue('C',DIO_u8PIN1,DIO_u8PIN_HIGH);
		}
		else if(Local_u8InputValue==1)
		{
			DIO_u8SetPinValue('C',DIO_u8PIN1,DIO_u8PIN_LOW);

		}

		/*
		for(u8 i=0; i<10;i++)
		{
			for(u8 x=0;x<100;x++){
				DIO_u8SetPortValue('D',sevensegarr[i]);
				DIO_u8SetPinValue('C',DIO_u8PIN0,DIO_u8PIN_LOW);
				//CLR_BIT(PORTC,0);
				_delay_ms(10);
				DIO_u8SetPinValue('C',DIO_u8PIN0,DIO_u8PIN_HIGH);
				//SET_BIT(PORTC,0);
				DIO_u8SetPortValue('D',sevensegarr[9-i]);
				//PORTD=sevensegarr[9-i];
				DIO_u8SetPinValue('C',DIO_u8PIN1,DIO_u8PIN_LOW);
				//CLR_BIT(PORTC,1);
				_delay_ms(10);
				DIO_u8SetPinValue('C',DIO_u8PIN1,DIO_u8PIN_HIGH);
				//SET_BIT(PORTC,1);
			}
		}
		*/
	}

}
