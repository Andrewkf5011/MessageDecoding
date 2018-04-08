#include <mbed.h>
#include "Decoder.h"

//[name] These are the IDs of all the different LEDs.
char *name[] = {"red","green","blue"};

//[LED] These are all the different LEDs.
DigitalOut LED[] =
{
    /* initialise to 1==off */
    DigitalOut(LED_RED,1),
    DigitalOut(LED_GREEN,1),
    DigitalOut(LED_BLUE,1)
};

/**
 * @brief Sets an LED.
 */
void setLED(char *which, char *state)
{
    //[id] The ID of the LED.
    int id;

    //[logic] The state to set the LED.
    int logic;

    //Check which LED to set.
    for(id=0; id<3; id++)
    {
        /* test for name match */
        if(strcmp(which, name[id])==0)
        {
            break; /* exit loop with current id */
        }
    }

    //Turn the LED on.
    if(strcmp(state,"on") == 0)
    {
        logic = 0;
    }
    //Turn the LED off.
    if(strcmp(state,"off") == 0)
    {
        logic = 1;
    }

    //Set the state of the LED.
    LED[id].write(logic);

    printf("led %d at %d \n", id, logic);
}

int main()
{
    Decoder decoder;

    //Decode the message.
    decoder.decodeMessage("blue:on\n");

    //Do something with the message.
    setLED((char*)decoder.getKey().c_str(), (char*)decoder.getValue().c_str());

    while(1)
    {

    }
}
