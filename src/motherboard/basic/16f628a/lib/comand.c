void moverMotor(struct Motorpin motorpin,int comando){
switch(comando){
   case 0:{
      output_low(motorPin.pin_enable);
      output_low(motorPin.pin_dir);
   }break;
   case 1:{
      output_low(motorPin.pin_enable);
      output_high(motorPin.pin_dir);
   }break;
   case 2:{
      output_high(motorPin.pin_enable);
      output_low(motorPin.pin_dir);
   }break;
   case 3:{
      output_high(motorPin.pin_enable);
      output_high(motorPin.pin_dir);
   }break;
}
}
