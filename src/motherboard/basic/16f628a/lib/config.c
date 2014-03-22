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
B3 = USE LED
B4 = USE MOTOR_2
B5 = USE MOTOR_2
B6 = USE MOTOR_3
B7 = USE MOTOR_3
*/
/* campos para validação de comando 
   todas as mensagens devem ser enviadas da seguinte maneira
   msg_valid_1 , msg_valid_2 , comando 1 , comando 2
   tem a funçao de evitar statica e recebimento indevido

*/
const int msg_valid_1 = 0xf0;
const int msg_valid_2 = 0x20;
//estrutura para facilitar o uso dos pinos em funções
struct MotorPin
{
   int pin_enable;
   int pin_dir;
};

// cria o numero de esquemas do struct desejada , corresponde ao numero
// de motores que vc quer controlar
struct Motorpin motorpin[4];

// variavel para armazenar os comandos recebidos do serial;
int cmd[3];

// constante criada para facilitar a chamada do led no programa
const int led = PIN_B3;

// função de configuração , não altere se nao souber o que esta fazendo
void config()
{
   motorpin[0].pin_enable = PIN_A0;
   motorpin[0].pin_dir = PIN_A1;
   motorpin[1].pin_enable = PIN_A6;
   motorpin[1].pin_dir = PIN_A7;
   motorpin[2].pin_enable = PIN_B4;
   motorpin[2].pin_dir = PIN_B5;
   motorpin[3].pin_enable = PIN_B6;
   motorpin[3].pin_dir = PIN_B7;
}

