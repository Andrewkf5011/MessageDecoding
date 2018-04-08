#ifndef ASSIGNMENTBOARD_H
#define ASSIGNMENTBOARD_H
#include<mbed.h>

class AssignmentBoard
{
  public:
    //Constant declarations (K64F).

    //LEDs
    static const PinName K64F_RED_LED;
    static const PinName K64F_GREEN_LED;
    static const PinName K64F_BLUE_LED;
    //Switches
    static const PinName K64F_SW2;
    static const PinName K64F_SW3;

    //Constant declarations (Application Shield).

    //LEDs
    static const PinName SHIELD_RED_LED;
    static const PinName SHIELD_GREEN_LED;
    static const PinName SHIELD_BLUE_LED;
    //Switches
    static const PinName SHIELD_SW_CENTER;
    static const PinName SHIELD_SW_UP;
    static const PinName SHIELD_SW_DOWN;
    static const PinName SHIELD_SW_LEFT;
    static const PinName SHIELD_SW_RIGHT;

};

#endif // ASSIGNMENTBOARD_H
