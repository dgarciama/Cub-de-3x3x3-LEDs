/**********************************************************************************
**                                                                               **
**                                  TÍTOL: Cub 3x3x3 prog.02                     **
**                                                                               **
**   NOM: Dennis Garcia                                       DATA: 25/03/2019   **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int leds4 = 5;          
const int leds3 = 6;          
const int leds2 = 7;          
const int led1 = 8;           
const int buttonPin = 2;      
boolean buttonEstat = LOW;    
int num = 1;                  

//********** Setup ****************************************************************
void setup()
{
  pinMode(leds4, OUTPUT);     
  pinMode(leds3, OUTPUT);     
  pinMode(leds2, OUTPUT);     
  pinMode(led1, OUTPUT);      
  pinMode(buttonPin, INPUT);  
  
  digitalWrite(leds4, LOW);  
  digitalWrite(leds3, LOW);   
  digitalWrite(leds2, LOW);   
  digitalWrite(led1, LOW);    
}

//********** Loop *****************************************************************
void loop()
{
  buttonEstat = digitalRead(buttonPin);
  if (buttonEstat == LOW)
  { 
    num = random(1,7);
    digitalWrite(leds2,LOW);
    digitalWrite(leds3,LOW);
    digitalWrite(leds4,LOW);
    digitalWrite(led1,LOW);
  }
  switch(num)
  {
    case 1:
      digitalWrite(led1, HIGH);    
      break;
    case 2:      
      digitalWrite(leds2, HIGH);    
      break;
    case 3:  
      digitalWrite(led1, HIGH);   
      digitalWrite(leds3, HIGH);  
      break;
    case 4:   
      digitalWrite(leds2, HIGH);   
      digitalWrite(leds3, HIGH); 
      break;
    case 5:
      digitalWrite(leds2, HIGH);  
      digitalWrite(leds3, HIGH);
      digitalWrite(led1, HIGH);    
      break;
    case 6:      
      digitalWrite(leds2, HIGH);   
      digitalWrite(leds3, HIGH);
      digitalWrite(leds4, HIGH);
      break;  
  }
}

//********** Funcions *************************************************************
