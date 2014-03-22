#include "main.h"
#include "lib/config.c"
#include "lib/comand.c"
#int_TIMER1

void  TIMER1_isr(void) 
{
   desativarAll () ;
}

void main()
{
   setup_timer_0 (RTCC_INTERNAL|RTCC_DIV_256);
   setup_timer_1 (T1_INTERNAL|T1_DIV_BY_8);
   setup_timer_2 (T2_DISABLED, 0, 1) ;
   setup_comparator (NC_NC_NC_NC);
   setup_vref (FALSE);
   enable_interrupts (int_TIMER1);
   enable_interrupts (GLOBAL);
   config ();

   while (true)
   {
      if (ReceberComando ()==1)
      {
         output_toggle (led) ;
         verificaComando (cmd[2]);
      }
   }
}

