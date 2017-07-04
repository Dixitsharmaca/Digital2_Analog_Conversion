#include <stdint.h>
#include "msp432p401r.h"
#include "SysTickInts.h"

void Piano_Init()
{

	P5SEL0  &= ~0x00;       //P5 as an Input
    P5SEL1  &= ~0x00;
	P5DIR   |= 0x00;
}

void Piano_In()
{
	int key=P5IN;

	if(key&0x01)
	{
		key = 0x01;
	}

	else if (key&0x02){

		key = 0x02;
	}

	else if (key&0x04)
	{
		key = 0x04;
	}
	end
}
