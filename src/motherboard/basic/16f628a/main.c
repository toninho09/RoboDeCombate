#include "main.h"
#include "lib/config.c"
#include "lib/comand.c"

#int_TIMER1
void  TIMER1_isr(void) 
{
output_toggle(led);
}
void main()
{

   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_256);
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_8);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);
   enable_interrupts(INT_TIMER1);
   enable_interrupts(GLOBAL);
   config();
   cmd[0]=msg_valid_1;
   cmd[1]=msg_valid_2;
   cmd[2]=0;
   while(true){
   cmd[2]++;
   verificaComando(cmd);
   delay_ms(100);
  // output_toggle(led);
   }
//Setup_Oscillator parameter not selected from Intr Oscillator Config tab

   // TODO: USER CODE!!

}
