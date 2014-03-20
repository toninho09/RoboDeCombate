#include "main.h"
#include "lib/config.c"
#include "lib/comand.c"

void main()
{

   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);
   config();
   while(true){
   
   moverMotor(motorpin[0],0);
   moverMotor(motorpin[0],1);
   moverMotor(motorpin[0],2);
   moverMotor(motorpin[0],3);
   moverMotor(motorpin[1],0);
   moverMotor(motorpin[1],1);
   moverMotor(motorpin[1],2);
   moverMotor(motorpin[1],3);
   moverMotor(motorpin[2],0);
   moverMotor(motorpin[2],1);
   moverMotor(motorpin[2],2);
   moverMotor(motorpin[2],3);
   moverMotor(motorpin[3],0);
   moverMotor(motorpin[3],1);
   moverMotor(motorpin[3],2);
   moverMotor(motorpin[3],3);
   }
//Setup_Oscillator parameter not selected from Intr Oscillator Config tab

   // TODO: USER CODE!!

}
