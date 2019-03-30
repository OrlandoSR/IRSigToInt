#include <IRremote.h>
#include "codes.h"

int SigToInt(IRrecv irrecv, decode_results results){
   switch(results.value){
      case IRB_1:
        irrecv.resume();
        return 1;
        break;
      case IRB_2:
        irrecv.resume();
        return 2;
        break;
      case IRB_3:
        irrecv.resume();
        return 3;
        break;
      case IRB_4:
        irrecv.resume();
        return 4;
        break;
      case IRB_5:
        irrecv.resume();
        return 5;
        break;
      case IRB_6:
        irrecv.resume();
        return 6;
        break;
      case IRB_7:
        irrecv.resume();
        return 7;
        break;
      case IRB_8:
        irrecv.resume();
        return 8;
        break;
      case IRB_9:
        irrecv.resume();
        return 9;
        break;
      case IRB_AST:
        irrecv.resume();
        return 10;
        break;
      case IRB_HSH:
        irrecv.resume();
        return 11;
        break;
      case IRB_L:
        irrecv.resume();
        return 12;
        break;
      case IRB_U:
        irrecv.resume();
        return 13;
        break;
      case IRB_R:
        irrecv.resume();
        return 14;
        break;
      case IRB_D:
        irrecv.resume();
        return 15;
        break;
      case IRB_OK:
        irrecv.resume();
        return 16;
        break;
      default:
        irrecv.resume();
        return -1;
        break;
  }
}

