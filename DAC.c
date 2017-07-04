#include <stdint.h>
#include "msp432p401r.h"
#include "SysTickInts.h"

void DAC_Init(void){

	P4SEL0 &= ~0x00;       // P4 as an Output
	P4SEL1 &= ~0x00;
	P4DIR  |=  0x0F;
}
void DAC_Out(uint8_t Data){

P4OUT &= (Data & 0x0F);

}

