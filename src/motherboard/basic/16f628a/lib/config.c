/**
A0 = USE MOTOR_0
A1 = USE MOTOR_0
A2 = NOT USE
A3 = NOT USE
A4 = NOT USE
A5 = MRCLR
A6 = USE MOTOR_1
A7 = USE MOTOR_1
B0 = NOT USE
B1 = USE RX
B2 = USE TX
B3 = NOT USE
B4 = USE MOTOR_2
B5 = USE MOTOR_2
B6 = USE MOTOR_3
B7 = USE MOTOR_3


*/


struct MotorPin{
   int pin_enable;
   int pin_dir;
};

struct Motorpin motorpin[4];


void config(){
motorpin[0].pin_enable = PIN_A0;
motorpin[0].pin_dir = PIN_A1;
motorpin[1].pin_enable = PIN_A6;
motorpin[1].pin_dir = PIN_A7;
motorpin[2].pin_enable = PIN_B4;
motorpin[2].pin_dir = PIN_B5;
motorpin[3].pin_enable = PIN_B6;
motorpin[3].pin_dir = PIN_B7;

}
