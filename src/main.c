#include "stdio.h"
#include "retargetserial.h"
#include "em_device.h"
#include "em_chip.h"
#include "em_cmu.h"
#include "em_gpio.h"

int main(void)
{
	CHIP_Init();

	RETARGET_SerialInit();
    CMU_ClockEnable(cmuClock_GPIO, true);
    GPIO_PinModeSet(gpioPortA, 5, gpioModePushPull, 1);

    //printf("Hello World\n");

    while (1)
    {
        printf("Hello World\n");
    }
}
