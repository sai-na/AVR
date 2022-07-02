

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	unsigned char x,mybyte,d1,d2,d3;
	DDRB=0xFF;
	mybyte=0xF0;
	x=mybyte/10;
	d1=mybyte%10;
	d2=x%10;
	d3=x/10;
	_delay_ms(100);
	PORTB=d1;
	_delay_ms(100);
	PORTB=d2;
	_delay_ms(100);
	PORTB=d3;
	return 0;
}