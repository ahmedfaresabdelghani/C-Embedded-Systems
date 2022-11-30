/*************************************************/
/*************************************************/
/***********   Author : Ahmed Fares   ************/
/***********     Layer : MCAL         ************/
/***********     SWC : DIO            ************/
/***********     Version : 1.00       ************/
/*************************************************/
/*************************************************/
#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
u8 DIO_u8SetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction);

u8 DIO_u8SetPortDirection(u8 Copy_u8Port, u8 Copy_u8Direction);

u8 DIO_u8SetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value);

u8 DIO_u8SetPortValue(u8 Copy_u8Port, u8 Copy_u8Value);

u8 DIO_u8GetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8* Copy_u8Value);

#endif