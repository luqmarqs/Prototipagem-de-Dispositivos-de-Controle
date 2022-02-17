/* Projeto final DS104 */
/* Aluno: Lucas Marques */
/* RA: 137207 */

#define btnStatus 12

#define led1 3
#define led2 4
#define led3 5
#define led4 6
#define led5 7
#define led6 8
#define led7 9
#define led8 10
#define ledStatus 11

int estado = 0;
char efeito = 'f'; //iniciar em "efeito desconhecido"



//EFEITOS
void efeitoA()
{
  Serial.println("Efeito A");
  digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	digitalWrite(led3, HIGH);
	digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
	digitalWrite(led6, HIGH);
	digitalWrite(led7, HIGH);
	digitalWrite(led8, HIGH);
	delay(100);
  
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	digitalWrite(led3, LOW);
	digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
	digitalWrite(led6, LOW);
	digitalWrite(led7, LOW);
	digitalWrite(led8, LOW);
  delay(100);
}

void efeitoB ()
{
  Serial.println("Efeito B");
  digitalWrite(led1, HIGH);
	delay(100);
	digitalWrite(led2, HIGH);
	delay(100);
	digitalWrite(led3, HIGH);
	delay(100);
	digitalWrite(led4, HIGH);
	delay(100);
  digitalWrite(led5, HIGH);
	delay(100);
	digitalWrite(led6, HIGH);
	delay(100);
	digitalWrite(led7, HIGH);
	delay(100);
	digitalWrite(led8, HIGH);
	delay(100);
		   
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	digitalWrite(led3, LOW);
	digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
	digitalWrite(led6, LOW);
	digitalWrite(led7, LOW);
	digitalWrite(led8, LOW);
  delay(100);
}

void efeitoC ()
{
  Serial.println("Efeito C");
	digitalWrite(led1, HIGH);
	digitalWrite(led3, HIGH);
	digitalWrite(led5, HIGH);
	digitalWrite(led7, HIGH);
	delay(100);
  
  digitalWrite(led1, LOW);
	digitalWrite(led3, LOW);
	digitalWrite(led5, LOW);
	digitalWrite(led7, LOW);
  delay(100);
  
  digitalWrite(led2, HIGH);
	digitalWrite(led4, HIGH);
	digitalWrite(led6, HIGH);
	digitalWrite(led8, HIGH);
	delay(100);
  
  digitalWrite(led2, LOW);
	digitalWrite(led4, LOW);
	digitalWrite(led6, LOW);
	digitalWrite(led8, LOW);
  delay(100);
  
}

void efeitoD ()
{
  Serial.println("Efeito D");
  digitalWrite(led1, HIGH);
	delay(100);
  digitalWrite(led1, LOW);
	digitalWrite(led2, HIGH);
	delay(100);
  digitalWrite(led2, LOW);
	digitalWrite(led3, HIGH);
	delay(100);
  digitalWrite(led3, LOW);
	digitalWrite(led4, HIGH);
	delay(100);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
	delay(100);
  digitalWrite(led5, LOW);
	digitalWrite(led6, HIGH);
	delay(100);
  digitalWrite(led6, LOW);
	digitalWrite(led7, HIGH);
	delay(100);
  digitalWrite(led7, LOW);
	digitalWrite(led8, HIGH);
	delay(100);
  digitalWrite(led8, LOW);
}

void efeitoE ()
{
  Serial.println("Efeito E");
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
 	delay(100);
  digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	digitalWrite(led3, LOW);
  delay(100);
  
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
 	delay(100);
  digitalWrite(led3, LOW);
	digitalWrite(led4, LOW);
	digitalWrite(led5, LOW);
  delay(100);
  	
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
 	delay(100);
  digitalWrite(led5, LOW);
	digitalWrite(led6, LOW);
	digitalWrite(led7, LOW);
  delay(100);
  
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led1, HIGH);
 	delay(100);
  digitalWrite(led7, LOW);
	digitalWrite(led8, LOW);
	digitalWrite(led1, LOW);
  delay(100);
  	
}


// função modo demo
void demo()
{
  digitalWrite(ledStatus, LOW);
  efeitoA();
  
  efeitoB();
 
  efeitoC();
  
  efeitoD();
  
  efeitoE();
  
}

//função modo leitura
void leitura(char efeito)
{
  switch (efeito) {
  case 'a':
    efeitoA();
    break;
  case 'b':
    efeitoB();
    break;
  case 'c':
    efeitoC();
    break;
  case 'd':
    efeitoD();
    break;
  case 'e':
    efeitoE();
    break;
  default:
    Serial.println("Efeito desconhecido");
    break;
}
  
}


//inicialização dos leds, do botão e abertura do monitor serial
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(ledStatus, OUTPUT); //led de status azul

  pinMode(btnStatus, INPUT_PULLUP);

  Serial.begin(9600);
  Serial.println("Iniciando o programa.......");

}

//main loop
void loop()
{
   if (digitalRead(btnStatus) == LOW) 
   {
        while(digitalRead(btnStatus)== LOW);
      	if (estado == 0)
          estado = 1;
     	else
          estado = 0;
    }
  
  if (estado == 0)
  {
    Serial.println(".....modo demo");
    demo();
  }
  else 
  {
    Serial.println("....modo leitura");
    digitalWrite(ledStatus, HIGH);
  	if (Serial.available())
    {
  		efeito = Serial.read();
    }
  	leitura(efeito);
  }
  
}
