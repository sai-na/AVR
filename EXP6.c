
//PACKED BCD TO ASCII EXP6

#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	unsigned char x,y;
	unsigned char mybyte=0x29;
	
	DDRB=0xFF;
	
	x = mybyte & 0xF0;
	y = mybyte & 0x0F;
	
	x=x>>4;
	
	PORTB = x | 0x30;
	_delay_ms(100);
	PORTB = y | 0x30;
}