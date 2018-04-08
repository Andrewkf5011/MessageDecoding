#ifndef LED_H
#define LED_H
#include<mbed.h>

class LED
{
  private:
    DigitalOut pin;

  public:
    LED(PinName p);
    void on();
    void off();
};

#endif // LED_H
