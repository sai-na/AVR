/*
timer 0 normalmode
 */

#include <avr/io.h>
void todelay();

int main(void)
{
	DDRB = 0xFF;
	while (1)
	{
		PORTB = 0x55;
		todelay();
		PORTB = 0xAA;
		todelay();
	}
}
void todelay()
{
	TCNT0 = 0x20;
	TCCR0 = 0x05;
	while ((TIFR & 0x01) == 0)
		;
	TCCR0 = 0;
	TIFR = 0x01;
}