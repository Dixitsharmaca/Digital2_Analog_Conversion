#include <stdint.h>
#include "msp432p401r.h"
#include "SysTickInts.h"
#include "DAC.h"
#include "Piano.h"
#include "Sound.h"

void main(void){

	Piano_Init();
	Sound_Init();

	while (1)

	{
		Sound_Play();
	}
}
