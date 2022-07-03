#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 1000000UL

int main(void)
{
	DDRB |= 0x20; // 00100000 = 0x20 PB5 SET AS OUTPUT

	TCNT0 = 0x0f;
	TCCR0 = 0x05; // 1S

	TIMSK |= (1 << TOIE0);
	sei();

	DDRD = 0x00;
	DDRC = 0xff;
	while (1)
	{

		PORTC = ~PIND;
	}
}

ISR(TIMER0_OVF_vect)
{
	TCNT0 = 0x0f;
	PORTB ^= 0x20;
}