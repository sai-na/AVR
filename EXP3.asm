/*
 * AVRAssembler4.asm
 *
 *  Created: 06-04-2022 20:41:39
 *   Author: NHJ-K
 */ 

 ;PORT PIN AS INPUT EXP3

 LDI R16,HIGH(RAMEND)
 OUT SPH,R16
 LDI R17,LOW(RAMEND)
 OUT SPL,R16

 
 LDI R16,0xFF
 OUT DDRB,R16

 OUT PORTD,R16
 LDI R16,0x00
 OUT DDRD,R16

 L:
 IN R16,PIND
 COM R16
 OUT PORTB,R16
 CALL DELAY
 RJMP L

 DELAY:
 LDI R17,0xF
 AGAIN1:
 LDI R18,0xF
 AGAIN2:
 LDI R19,0xF
 AGAIN3:
 NOP
 NOP
 DEC R19
 BRNE AGAIN3
 DEC R18
 BRNE AGAIN2
 DEC R17
 BRNE AGAIN1
 RET
