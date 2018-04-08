#include <mbed.h>
#include "LED.h"
#include "AssignmentBoard.h"

AssignmentBoard board;

LED light[] = {
  LED(board.K64F_RED_LED),
  LED(board.K64F_GREEN_LED),
  LED(board.K64F_BLUE_LED),
  LED(board.SHIELD_RED_LED),
  LED(board.SHIELD_GREEN_LED),
  LED(board.SHIELD_BLUE_LED)
};

int main() {

    while(1) {
      int k;
      for( k=0 ; k<6 ; k++){
        light[k].on();
        wait(0.5);
        light[k].off();
      }
    }
}
