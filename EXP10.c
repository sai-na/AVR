

#include <avr/io.h>
#include <util/delay.h>
#define buzzer PC5
int main(void)
{
	DDRC = 0xFF;
	PORTC = 0x00;

	while (1)
	{
		_delay_ms(300);
		PORTC |= (1 << buzzer);
		_delay_ms(300);
		PORTC &= ~(1 << buzzer);
	}
}