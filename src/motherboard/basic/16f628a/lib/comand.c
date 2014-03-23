void Sync()
{
   set_timer1 (0) ;
}

void moverMotor(struct Motorpin motorpin,int comando)
{
   switch (comando)
   {
      case 0:
      {
         output_low (motorPin.pin_enable);
         output_low (motorPin.pin_dir);
      }break;

      case 1:
      {
         output_low (motorPin.pin_enable);
         output_high (motorPin.pin_dir);
      }break;

      case 2:
      {
         output_high (motorPin.pin_enable);
         output_low (motorPin.pin_dir);
      }break;

      case 3:
      {
         output_high (motorPin.pin_enable);
         output_high (motorPin.pin_dir);
      }break;
   }
}

int1 ReceberComando()
{
   cmd[0]=getc ();

   if (cmd[0]==msg_valid_1)//valida o primeiro comando
   {
      cmd[1]=getc ();

      if (cmd[1]==msg_valid_2)//valida o segundo comando
      {
         cmd[2]=getc ();//recebe o comando
         Sync () ;
         return 1;
      }
   }

   return 0;
}

void verificaComando(int cmd)
{
   switch (cmd)
   {
      case 0x00 :
      {
         moverMotor (motorpin[0], 0) ;
      }break;

      case 0x01 :
      {
         moverMotor (motorpin[0], 1) ;
      }break;

      case 0x02 :
      {
         moverMotor (motorpin[0], 2) ;
      }break;

      case 0x03 :
      {
         moverMotor (motorpin[0], 3) ;
      }break;

      case 0x10 :
      {
         moverMotor (motorpin[1], 0) ;
      }break;

      case 0x11 :
      {
         moverMotor (motorpin[1], 1) ;
      }break;

      case 0x12 :
      {
         moverMotor (motorpin[1], 2) ;
      }break;

      case 0x13 :
      {
         moverMotor (motorpin[1], 3) ;
      }break;

      case 0x20 :
      {
         moverMotor (motorpin[2], 0) ;
      }break;

      case 0x21 :
      {
         moverMotor (motorpin[2], 1) ;
      }break;

      case 0x22 :
      {
         moverMotor (motorpin[2], 2) ;
      }break;

      case 0x23 :
      {
         moverMotor (motorpin[2], 3) ;
      }break;

      case 0x30 :
      {
         moverMotor (motorpin[3], 0) ;
      }break;

      case 0x31 :
      {
         moverMotor (motorpin[3], 1) ;
      }break;

      case 0x32 :
      {
         moverMotor (motorpin[3], 2) ;
      }break;

      case 0x33 :
      {
         moverMotor (motorpin[3], 3) ;
      }break;

      case 0xA0 :
      {
         set_pwm1_duty (0) ;
      }break;

      case 0xA1 :
      {
         set_pwm1_duty (15) ;
      }break;

      case 0xA2 :
      {
         set_pwm1_duty (31) ;
      }break;

      case 0xA3 :
      {
         set_pwm1_duty (46) ;
      }break;

      case 0xA4 :
      {
         set_pwm1_duty (62) ;
      }break;

      case 0xA5 :
      {
         set_pwm1_duty (77) ;
      }break;

      case 0xA6 :
      {
         set_pwm1_duty (93) ;
      }break;

      case 0xA7 :
      {
         set_pwm1_duty (108) ;
      }break;

      case 0xA8 :
      {
         set_pwm1_duty (124) ;
      }break;

      case 0xA9 :
      {
         set_pwm1_duty (139) ;
      }break;

      case 0xAA :
      {
         set_pwm1_duty (156) ;
      }break;
   }
}

void desativarAll()
{
   moverMotor (motorpin[0], 0) ;
   moverMotor (motorpin[1], 0) ;
   moverMotor (motorpin[2], 0) ;
   moverMotor (motorpin[3], 0) ;
   set_pwm1_duty (0) ;
}

