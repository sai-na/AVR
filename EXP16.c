/*
 * AVRGCC15.c
 *
 * Created: 07-04-2022 03:27:02
 *  Author: NHJ-K
 */

#include <avr/io.h>
#include <avr/interrupt.h>

int main(void)
{
	DDRB |= 0x20;
	OCR0 = 40;
	TCCR0 = 0x09;
	TIMSK = (1 << OCIE0);
	sei();
	DDRC = 0x00;
	DDRD = 0xFF;

	while (1)
	{
		PORTD = ~PINC;
	}
}
ISR(TIMER0_COMP_vect)
{
	PORTB ^= 0x20;
}