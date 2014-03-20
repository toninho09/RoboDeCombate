void moverMotor(struct Motorpin motorpin,int comando)
{
   switch (comando)
   {
      case 0:
      {
         output_low (motorPin.pin_enable) ;
         output_low (motorPin.pin_dir) ;
      }break;

      case 1:
      {
         output_low (motorPin.pin_enable) ;
         output_high (motorPin.pin_dir) ;
      }break;

      case 2:
      {
         output_high (motorPin.pin_enable) ;
         output_low (motorPin.pin_dir) ;
      }break;

      case 3:
      {
         output_high (motorPin.pin_enable) ;
         output_high (motorPin.pin_dir) ;
      }break;
   }
}

void verificaComando(int cmd[]){

if ((cmd[0] == msg_valid_1)&& (cmd[1] == msg_valid_2)){
   switch (cmd[2]){
      case 0x00 :{
      moverMotor(motorpin[0],0);
      }break;
      case 0x01 :{
      moverMotor(motorpin[0],1);
      }break;
      case 0x02 :{
      moverMotor(motorpin[0],2);
      }break;
      case 0x03 :{
      moverMotor(motorpin[0],3);
      }break;
      case 0x10 :{
      moverMotor(motorpin[1],0);
      }break;
      case 0x11 :{
      moverMotor(motorpin[1],1);
      }break;
      case 0x12 :{
      moverMotor(motorpin[1],2);
      }break;
      case 0x13 :{
      moverMotor(motorpin[1],3);
      }break;
      case 0x20 :{
      moverMotor(motorpin[2],0);
      }break;
      case 0x21 :{
      moverMotor(motorpin[2],1);
      }break;
      case 0x22 :{
      moverMotor(motorpin[2],2);
      }break;
      case 0x23 :{
      moverMotor(motorpin[2],3);
      }break;
      case 0x30 :{
      moverMotor(motorpin[3],0);
      }break;
      case 0x31 :{
      moverMotor(motorpin[3],1);
      }break;
      case 0x32 :{
      moverMotor(motorpin[3],2);
      }break;
      case 0x33 :{
      moverMotor(motorpin[3],3);
      }break;
   }
}

}
