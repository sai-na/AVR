/*
 * AVRGCC10.c
 *bit wise

 */

#include <avr/io.h>
#include <util/delay.h>
#define DATA1 0x35
#define DATA2 0x0f
#define DATA3 0x04
#define DATA4 0x68
#define DATA5 0x02
#define DATA6 0x01

int main(void)
{
	DDRB = 0xFF;
	PORTB = DATA1 & DATA2;
	_delay_ms(1);
	PORTB = DATA3 | DATA4;
	_delay_ms(1);
	PORTB = DATA5 ^ DATA6;
	_delay_ms(1);
	return 0;
}