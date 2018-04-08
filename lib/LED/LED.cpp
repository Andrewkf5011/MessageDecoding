#include "LED.h"
#include <mbed.h>

LED::LED(PinName p) : pin(p,1)
{
}

void LED::on()
{
  pin.write(0);
}

void LED::off()
{
  pin.write(1);
}
