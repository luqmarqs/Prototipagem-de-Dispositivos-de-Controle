/* DS104 - PULL UP
20/04/2021
Aluno: Lucas Marques de Almeida
RA: 21104
*/

#define btn1 2

#define led1 6
#define led2 5
#define led3 4
#define led4 3

int numero_de_estados = 3, estado = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(btn1, INPUT);
 
}

void loop()
{
      if (digitalRead(btn1) == LOW) {
        while(digitalRead(btn1));
      	estado = (estado+1)%numero_de_estados;
      }
   
       if (estado == 0) {
           digitalWrite(led1, HIGH);
		   digitalWrite(led2, HIGH);
		   digitalWrite(led3, HIGH);
		   digitalWrite(led4, HIGH);
		   delay(100);
		   digitalWrite(led1, LOW);
		   digitalWrite(led2, LOW);
		   digitalWrite(led3, LOW);
		   digitalWrite(led4, LOW);
         delay(100);
		 }
	else	   
       if (estado == 1) {
           digitalWrite(led1, HIGH);
		   delay(100);
		   digitalWrite(led2, HIGH);
		   delay(100);
		   digitalWrite(led3, HIGH);
		   delay(100);
		   digitalWrite(led4, HIGH);
		   delay(100);
		   
		   digitalWrite(led1, LOW);
		   digitalWrite(led2, LOW);
		   digitalWrite(led3, LOW);
		   digitalWrite(led4, LOW);
      	delay(100);
		 }
		else
		if (estado == 2) {
			digitalWrite(led4, HIGH);
		   delay(100);
		   digitalWrite(led3, HIGH);
		   delay(100);
		   digitalWrite(led2, HIGH);
		   delay(100);
		   digitalWrite(led1, HIGH);
		   delay(100);
		   
		   digitalWrite(led1, LOW);
		   digitalWrite(led2, LOW);
		   digitalWrite(led3, LOW);
		   digitalWrite(led4, LOW);
          delay(100);
		}
		else
		if (estado == 3) {
			digitalWrite(led4, HIGH);
		   delay(100);
		   digitalWrite(led1, HIGH);
		   delay(100);
		   digitalWrite(led2, HIGH);
		   delay(100);
		   digitalWrite(led3, HIGH);
		   delay(100);
		   
		   digitalWrite(led1, LOW);
		   digitalWrite(led2, LOW);
		   digitalWrite(led3, LOW);
		   digitalWrite(led4, LOW);
          delay(100);
     	}
		else {
		
		digitalWrite(led1, LOW);
		   digitalWrite(led2, LOW);
		   digitalWrite(led3, LOW);
		   digitalWrite(led4, LOW);
		}
   }
  
  
  
  