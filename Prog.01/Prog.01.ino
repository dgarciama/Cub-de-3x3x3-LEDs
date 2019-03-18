/**********************************************************************************
**                                                                               **
**                                                    TÍTOL: Cub 3x3x3 Prog.01   **
**                                                                               **
**   NOM: Dennis Garcia                                       DATA: 18/03/2019   **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int LED10 = 10;
const int LED9 = 9;
const int LED8 = 8;
const int LED7 = 7;
const int LED6 = 6;
const int LED5 = 5;
const int LED4 = 4;
const int LED3 = 3;
const int LED2 = 2;
const int nivell1 = 11;
const int nivell2 = 12;
const int nivell3 = 13;

int pausa = 500;   

//********** Setup ****************************************************************
void setup()
{
  pinMode(LED10, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(nivell1, OUTPUT);
  pinMode(nivell2, OUTPUT);
  pinMode(nivell3, OUTPUT);
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(nivell1, HIGH);  //Pis 1
  digitalWrite(LED10, HIGH);
  delay(pausa);
  digitalWrite(LED10, LOW);
  digitalWrite(LED9, HIGH);
  delay(pausa);
  digitalWrite(LED9, LOW);
  digitalWrite(LED8, HIGH);
  delay(pausa);
  digitalWrite(LED8, LOW);
  digitalWrite(LED7, HIGH);
  delay(pausa);
  digitalWrite(LED7, LOW);
  digitalWrite(LED6, HIGH);
  delay(pausa);
  digitalWrite(LED6, LOW);
  digitalWrite(LED5, HIGH);
  delay(pausa);
  digitalWrite(LED5, LOW);
  digitalWrite(LED4, HIGH);
  delay(pausa);
  digitalWrite(LED4, LOW);
  digitalWrite(LED3, HIGH);
  delay(pausa);
  digitalWrite(LED3, LOW);
  digitalWrite(LED2, HIGH);
  delay(pausa);
  digitalWrite(LED2, LOW);
  digitalWrite(nivell1, LOW);
  digitalWrite(nivell2, HIGH);  //Pis 2
 digitalWrite(LED10, HIGH);
  delay(pausa);
  digitalWrite(LED10, LOW);
  digitalWrite(LED9, HIGH);
  delay(pausa);
  digitalWrite(LED9, LOW);
  digitalWrite(LED8, HIGH);
  delay(pausa);
  digitalWrite(LED8, LOW);
  digitalWrite(LED7, HIGH);
  delay(pausa);
  digitalWrite(LED7, LOW);
  digitalWrite(LED6, HIGH);
  delay(pausa);
  digitalWrite(LED6, LOW);
  digitalWrite(LED5, HIGH);
  delay(pausa);
  digitalWrite(LED5, LOW);
  digitalWrite(LED4, HIGH);
  delay(pausa);
  digitalWrite(LED4, LOW);
  digitalWrite(LED3, HIGH);
  delay(pausa);
  digitalWrite(LED3, LOW);
  digitalWrite(LED2, HIGH);
  delay(pausa);
  digitalWrite(LED2, LOW);
  digitalWrite(nivell2, LOW);
  digitalWrite(nivell3, HIGH);  //Pis 3
digitalWrite(LED10, HIGH);
  delay(pausa);
  digitalWrite(LED10, LOW);
  digitalWrite(LED9, HIGH);
  delay(pausa);
  digitalWrite(LED9, LOW);
  digitalWrite(LED8, HIGH);
  delay(pausa);
  digitalWrite(LED8, LOW);
  digitalWrite(LED7, HIGH);
  delay(pausa);
  digitalWrite(LED7, LOW);
  digitalWrite(LED6, HIGH);
  delay(pausa);
  digitalWrite(LED6, LOW);
  digitalWrite(LED5, HIGH);
  delay(pausa);
  digitalWrite(LED5, LOW);
  digitalWrite(LED4, HIGH);
  delay(pausa);
  digitalWrite(LED4, LOW);
  digitalWrite(LED3, HIGH);
  delay(pausa);
  digitalWrite(LED3, LOW);
  digitalWrite(LED2, HIGH);
  delay(pausa);
  digitalWrite(LED2, LOW);
  digitalWrite(nivell3, LOW);
}
//********** Funcions *************************************************************
