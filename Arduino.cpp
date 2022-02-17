int sts = 3;
int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int led5 = 8;
int led6 = 9;
int led7 = 10;
int led8 = 11;
int Botao = 2;

int estado;

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
  pinMode(sts, OUTPUT);
  pinMode(Botao, INPUT_PULLUP);
  
  
  Serial.begin(9600);
  Serial.println("Iniciando");  // Monitor Serial
  Serial.println("Modo demo");
}

void loop() // Modo demo
{
  // Fazer logica do botão 
  
  int leitura = 0;
  if ( digitalRead(Botao) == LOW);
  {
     while (digitalRead(Botao) == LOW);
     if ( estado == 0)
       estado = 1;
     else
       estado = 0;
    
      if (estado == 0){
        sequencia1();
      } else{
        sequencia2 ();
      }
}
  
void sequencia1()
{ 
    digitalWrite(sts, HIGH); // Primero efeito
    digitalWrite(led1, HIGH);
    delay(250);
    digitalWrite(led1, LOW);
    delay(100);
    digitalWrite(led2, HIGH);
    delay(250);
    digitalWrite(led2, LOW);
    delay(100);
    digitalWrite(led3, HIGH);
    delay(250);
    digitalWrite(led3, LOW);
    delay(100);
    digitalWrite(led4, HIGH);
    delay(250);
    digitalWrite(led4, LOW);
    delay(100);
    digitalWrite(led5, HIGH);
    delay(250);
    digitalWrite(led5, LOW);
    delay(100);
    digitalWrite(led6, HIGH);
    delay(250);
    digitalWrite(led6, LOW);
    delay(100);
    digitalWrite(led7, HIGH);
    delay(250);
    digitalWrite(led7, LOW);
    delay(100);
    digitalWrite(led8, HIGH);
    delay(250);
    digitalWrite(led8, LOW);
    delay(1000);
      
 
    digitalWrite(led8, HIGH); // Segundo efeito
    delay(150);  
    digitalWrite(led7, HIGH);
    digitalWrite(led8, LOW);
    delay(150); 
    digitalWrite(led6, HIGH);
    digitalWrite(led7, LOW);
    delay(150);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    delay(150);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
    delay(150);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(150);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    delay(150);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(150);
    digitalWrite(led1, LOW);
    
    digitalWrite(led8, HIGH);
    delay(150);  
    digitalWrite(led7, HIGH);
    digitalWrite(led8, LOW);
    delay(150); 
    digitalWrite(led6, HIGH);
    digitalWrite(led7, LOW);
    delay(150);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    delay(150);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
    delay(150);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    delay(150);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    delay(150);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(150);
    digitalWrite(led1, LOW);
    
    digitalWrite(led8, HIGH);
    delay(250);  
    digitalWrite(led8, LOW);
    delay(250);
    digitalWrite(led8, HIGH);
    delay(250);
    digitalWrite(led8, LOW);
    delay(250);  
    digitalWrite(led8, HIGH);
    delay(250);
    digitalWrite(led8, LOW);
    delay(250);
    digitalWrite(led8, HIGH);
    delay(250);  
    digitalWrite(led8, LOW);
    delay(250);
    digitalWrite(led8, HIGH);
    delay(1000);
    digitalWrite(led1, HIGH);
    digitalWrite(led8, LOW);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(150);
    digitalWrite(led3, HIGH);
    digitalWrite(led2, LOW);
    delay(150);
    digitalWrite(led4, HIGH);
    digitalWrite(led3, LOW);
    delay(150);
    digitalWrite(led5, HIGH);
    digitalWrite(led4, LOW);
    delay(150);
    digitalWrite(led6, HIGH);
    digitalWrite(led5, LOW);
    delay(150);
    digitalWrite(led7, HIGH);
    digitalWrite(led6, LOW);
    delay(150);
    digitalWrite(led8, HIGH);
    digitalWrite(led7, LOW);
    delay(150);
    digitalWrite(led8, LOW);
    digitalWrite(led1, HIGH);
    digitalWrite(led8, LOW);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(150);
    digitalWrite(led3, HIGH);
    digitalWrite(led2, LOW);
    delay(150);
    digitalWrite(led4, HIGH);
    digitalWrite(led3, LOW);
    delay(150);
    digitalWrite(led5, HIGH);
    digitalWrite(led4, LOW);
    delay(150);
    digitalWrite(led6, HIGH);
    digitalWrite(led5, LOW);
    delay(150);
    digitalWrite(led7, HIGH);
    digitalWrite(led6, LOW);
    delay(150);
    digitalWrite(led8, HIGH);
    digitalWrite(led7, LOW);
    delay(150);
    digitalWrite(led8, LOW);
    delay(2000);
  
    
    digitalWrite(led1, HIGH); // Terceiro efeito
    digitalWrite(led3, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led7, HIGH);
    delay(250);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led7, LOW);
    delay(250);
    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led8, HIGH);
    delay(250);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led8, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led7, HIGH);
    delay(250);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led7, LOW);
    delay(250);
    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led8, HIGH);
    delay(250);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led8, LOW);
    delay(1000);
    
    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led8, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led8, LOW);
    delay(500);  
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led7, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led7, LOW);
    delay(500);

    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led8, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led8, LOW);
    delay(500);  
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led7, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led7, LOW);
    delay(500);              
      
   
    digitalWrite(led7, HIGH); // Quarto efeito
    delay(500);
    digitalWrite(led3, HIGH); 
    delay(500);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led5, HIGH);
    delay(500);
    digitalWrite(led8, HIGH);
    delay(500);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led6, HIGH);
    delay(700);
  
    digitalWrite(led7, LOW); 
    delay(500);
    digitalWrite(led3, LOW); 
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    digitalWrite(led5, LOW);
    delay(500);
    digitalWrite(led8, LOW);
    delay(500);
    digitalWrite(led4, LOW);
    delay(500);
    digitalWrite(led2, LOW);
    delay(500);
    digitalWrite(led6, LOW);
    delay(2000);
      
   
    digitalWrite(led8, HIGH); // Quinto efeito
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led8, LOW);
    digitalWrite(led4, LOW);
    delay(500);
    digitalWrite(led8, HIGH);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led8, LOW);
    digitalWrite(led4, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led5, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led5, LOW);
    delay(500);
    digitalWrite(led1, HIGH);
    digitalWrite(led5, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led5, LOW);
    delay(500);
    
    digitalWrite(led2, HIGH);
    digitalWrite(led6, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led6, LOW);
    delay(500);
    digitalWrite(led2, HIGH);
    digitalWrite(led6, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    digitalWrite(led6, LOW);
    delay(500);
    
    digitalWrite(led3, HIGH);
    digitalWrite(led7, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led7, LOW);
    delay(500);
    digitalWrite(led3, HIGH);
    digitalWrite(led7, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    digitalWrite(led7, LOW);
    delay(500);
    
    digitalWrite(led8, HIGH);
    digitalWrite(led4, HIGH);
    delay(250);
    digitalWrite(led8, LOW);
    digitalWrite(led4, LOW);
    delay(250);
    digitalWrite(led8, HIGH);
    digitalWrite(led4, HIGH);
    delay(250);
    digitalWrite(led8, LOW);
    digitalWrite(led4, LOW);
    delay(250);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led5, HIGH);
    delay(250);
    digitalWrite(led1, LOW);
    digitalWrite(led5, LOW);
    delay(250);
    digitalWrite(led1, HIGH);
    digitalWrite(led5, HIGH);
    delay(250);
    digitalWrite(led1, LOW);
    digitalWrite(led5, LOW);
    delay(250);
    
    digitalWrite(led2, HIGH);
    digitalWrite(led6, HIGH);
    delay(250);
    digitalWrite(led2, LOW);
    digitalWrite(led6, LOW);
    delay(250);
    digitalWrite(led2, HIGH);
    digitalWrite(led6, HIGH);
    delay(250);
    digitalWrite(led2, LOW);
    digitalWrite(led6, LOW);
    delay(250);
    
    digitalWrite(led3, HIGH);
    digitalWrite(led7, HIGH);
    delay(250);
    digitalWrite(led3, LOW);
    digitalWrite(led7, LOW);
    delay(250);
    digitalWrite(led3, HIGH);
    digitalWrite(led7, HIGH);
    delay(250);
    digitalWrite(led3, LOW);
    digitalWrite(led7, LOW);
    delay(500);
    
    digitalWrite(led8, HIGH);
    digitalWrite(led4, HIGH);
    delay(250);
    digitalWrite(led8, LOW);
    digitalWrite(led4, LOW);
    delay(250);
    digitalWrite(led8, HIGH);
    digitalWrite(led4, HIGH);
    delay(250);
    digitalWrite(led8, LOW);
    digitalWrite(led4, LOW);
    delay(250);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led5, HIGH);
    delay(250);
    digitalWrite(led1, LOW);
    digitalWrite(led5, LOW);
    delay(250);
    digitalWrite(led1, HIGH);
    digitalWrite(led5, HIGH);
    delay(250);
    digitalWrite(led1, LOW);
    digitalWrite(led5, LOW);
    delay(250);
    
    digitalWrite(led2, HIGH);
    digitalWrite(led6, HIGH);
    delay(250);
    digitalWrite(led2, LOW);
    digitalWrite(led6, LOW);
    delay(250);
    digitalWrite(led2, HIGH);
    digitalWrite(led6, HIGH);
    delay(250);
    digitalWrite(led2, LOW);
    digitalWrite(led6, LOW);
    delay(250);
    
    digitalWrite(led3, HIGH);
    digitalWrite(led7, HIGH);
    delay(250);
    digitalWrite(led3, LOW);
    digitalWrite(led7, LOW);
    delay(250);
    digitalWrite(led3, HIGH);
    digitalWrite(led7, HIGH);
    delay(250);
    digitalWrite(led3, LOW);
    digitalWrite(led7, LOW);
    delay(500);
    
    digitalWrite(led8, HIGH);
    digitalWrite(led4, HIGH);
    delay(250);
    digitalWrite(led8, LOW);
    digitalWrite(led4, LOW);
    delay(250);
    digitalWrite(led8, HIGH);
    digitalWrite(led4, HIGH);
    delay(250);
    digitalWrite(led8, LOW);
    digitalWrite(led4, LOW);
    delay(250);
  
  }
}			   				   // Fim do modo demo 


void sequencia2()              // Modo Recepção
{
  
  if (Serial.available()){
      
   	 char c = Serial.read();
      
   	 if (c == 'A'){
      
        digitalWrite(sts, HIGH);   // Primeiro efeito
        digitalWrite(led1, HIGH);
        delay(250);
        digitalWrite(led1, LOW);
        delay(100);
        digitalWrite(led2, HIGH);
        delay(250);
        digitalWrite(led2, LOW);
        delay(100);
        digitalWrite(led3, HIGH);
        delay(250);
        digitalWrite(led3, LOW);
        delay(100);
        digitalWrite(led4, HIGH);
        delay(250);
        digitalWrite(led4, LOW);
        delay(100);
        digitalWrite(led5, HIGH);
        delay(250);
        digitalWrite(led5, LOW);
        delay(100);
        digitalWrite(led6, HIGH);
        delay(250);
        digitalWrite(led6, LOW);
        delay(100);
        digitalWrite(led7, HIGH);
        delay(250);
        digitalWrite(led7, LOW);
        delay(100);
        digitalWrite(led8, HIGH);
        delay(250);
        digitalWrite(led8, LOW);
        delay(3000);
    }
    
   
      
    if (c == 'B'){
      
        digitalWrite(led8, HIGH);	 // Segundo efeito
        delay(150);  
        digitalWrite(led7, HIGH);
        digitalWrite(led8, LOW);
        delay(150); 
        digitalWrite(led6, HIGH);
        digitalWrite(led7, LOW);
        delay(150);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, LOW);
        delay(150);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, LOW);
        delay(150);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
        delay(150);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        delay(150);
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        delay(150);
        digitalWrite(led1, LOW);

        digitalWrite(led8, HIGH);
        delay(150);  
        digitalWrite(led7, HIGH);
        digitalWrite(led8, LOW);
        delay(150); 
        digitalWrite(led6, HIGH);
        digitalWrite(led7, LOW);
        delay(150);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, LOW);
        delay(150);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, LOW);
        delay(150);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
        delay(150);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        delay(150);
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        delay(150);
        digitalWrite(led1, LOW);

        digitalWrite(led8, HIGH);
        delay(250);  
        digitalWrite(led8, LOW);
        delay(250);
        digitalWrite(led8, HIGH);
        delay(250);
        digitalWrite(led8, LOW);
        delay(250);  
        digitalWrite(led8, HIGH);
        delay(250);
        digitalWrite(led8, LOW);
        delay(250);
        digitalWrite(led8, HIGH);
        delay(250);  
        digitalWrite(led8, LOW);
        delay(250);
        digitalWrite(led8, HIGH);
        delay(1000);
        digitalWrite(led1, HIGH);
        digitalWrite(led8, LOW);
        delay(150);
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(150);
        digitalWrite(led3, HIGH);
        digitalWrite(led2, LOW);
        delay(150);
        digitalWrite(led4, HIGH);
        digitalWrite(led3, LOW);
        delay(150);
        digitalWrite(led5, HIGH);
        digitalWrite(led4, LOW);
        delay(150);
        digitalWrite(led6, HIGH);
        digitalWrite(led5, LOW);
        delay(150);
        digitalWrite(led7, HIGH);
        digitalWrite(led6, LOW);
        delay(150);
        digitalWrite(led8, HIGH);
        digitalWrite(led7, LOW);
        delay(150);
        digitalWrite(led8, LOW);
        digitalWrite(led1, HIGH);
        digitalWrite(led8, LOW);
        delay(150);
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(150);
        digitalWrite(led3, HIGH);
        digitalWrite(led2, LOW);
        delay(150);
        digitalWrite(led4, HIGH);
        digitalWrite(led3, LOW);
        delay(150);
        digitalWrite(led5, HIGH);
        digitalWrite(led4, LOW);
        delay(150);
        digitalWrite(led6, HIGH);
        digitalWrite(led5, LOW);
        delay(150);
        digitalWrite(led7, HIGH);
        digitalWrite(led6, LOW);
        delay(150);
        digitalWrite(led8, HIGH);
        digitalWrite(led7, LOW);
        delay(150);
        digitalWrite(led8, LOW);
        delay(2000);
    }
   
  
      
    if (c == 'C'){
      
        digitalWrite(led1, HIGH);  // Terceiro efeito
        digitalWrite(led3, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led7, HIGH);
        delay(250);
        digitalWrite(led1, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led7, LOW);
        delay(250);
        digitalWrite(led2, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led8, HIGH);
        delay(250);
        digitalWrite(led2, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led8, LOW);
        delay(500);

        digitalWrite(led1, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led7, HIGH);
        delay(250);
        digitalWrite(led1, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led7, LOW);
        delay(250);
        digitalWrite(led2, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led8, HIGH);
        delay(250);
        digitalWrite(led2, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led8, LOW);
        delay(1000);

        digitalWrite(led2, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led8, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led8, LOW);
        delay(500);  
        digitalWrite(led1, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led7, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led7, LOW);
        delay(500);

        digitalWrite(led2, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led8, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led8, LOW);
        delay(500);  
        digitalWrite(led1, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led7, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led7, LOW);
        delay(500);
    }
    
  
      
    if (c == 'D'){
      
        digitalWrite(led7, HIGH);  // Quarto efeito
        delay(500);
        digitalWrite(led3, HIGH); 
        delay(500);
        digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led5, HIGH);
        delay(500);
        digitalWrite(led8, HIGH);
        delay(500);
        digitalWrite(led4, HIGH);
        delay(500);
        digitalWrite(led2, HIGH);
        delay(500);
        digitalWrite(led6, HIGH);
        delay(700);

        digitalWrite(led7, LOW); 
        delay(500);
        digitalWrite(led3, LOW); 
        delay(500);
        digitalWrite(led1, LOW);
        delay(500);
        digitalWrite(led5, LOW);
        delay(500);
        digitalWrite(led8, LOW);
        delay(500);
        digitalWrite(led4, LOW);
        delay(500);
        digitalWrite(led2, LOW);
        delay(500);
        digitalWrite(led6, LOW);
        delay(2000);
    }
    
    
   
    if (c == 'E'){
        digitalWrite(led8, HIGH); // Quinto efeito
        digitalWrite(led4, HIGH);
        delay(500);
        digitalWrite(led8, LOW);
        digitalWrite(led4, LOW);
        delay(500);
        digitalWrite(led8, HIGH);
        digitalWrite(led4, HIGH);
        delay(500);
        digitalWrite(led8, LOW);
        digitalWrite(led4, LOW);
        delay(500);

        digitalWrite(led1, HIGH);
        digitalWrite(led5, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        digitalWrite(led5, LOW);
        delay(500);
        digitalWrite(led1, HIGH);
        digitalWrite(led5, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        digitalWrite(led5, LOW);
        delay(500);

        digitalWrite(led2, HIGH);
        digitalWrite(led6, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        digitalWrite(led6, LOW);
        delay(500);
        digitalWrite(led2, HIGH);
        digitalWrite(led6, HIGH);
        delay(500);
        digitalWrite(led2, LOW);
        digitalWrite(led6, LOW);
        delay(500);

        digitalWrite(led3, HIGH);
        digitalWrite(led7, HIGH);
        delay(500);
        digitalWrite(led3, LOW);
        digitalWrite(led7, LOW);
        delay(500);
        digitalWrite(led3, HIGH);
        digitalWrite(led7, HIGH);
        delay(500);
        digitalWrite(led3, LOW);
        digitalWrite(led7, LOW);
        delay(500);

        digitalWrite(led8, HIGH);
        digitalWrite(led4, HIGH);
        delay(250);
        digitalWrite(led8, LOW);
        digitalWrite(led4, LOW);
        delay(250);
        digitalWrite(led8, HIGH);
        digitalWrite(led4, HIGH);
        delay(250);
        digitalWrite(led8, LOW);
        digitalWrite(led4, LOW);
        delay(250);

        digitalWrite(led1, HIGH);
        digitalWrite(led5, HIGH);
        delay(250);
        digitalWrite(led1, LOW);
        digitalWrite(led5, LOW);
        delay(250);
        digitalWrite(led1, HIGH);
        digitalWrite(led5, HIGH);
        delay(250);
        digitalWrite(led1, LOW);
        digitalWrite(led5, LOW);
        delay(250);

        digitalWrite(led2, HIGH);
        digitalWrite(led6, HIGH);
        delay(250);
        digitalWrite(led2, LOW);
        digitalWrite(led6, LOW);
        delay(250);
        digitalWrite(led2, HIGH);
        digitalWrite(led6, HIGH);
        delay(250);
        digitalWrite(led2, LOW);
        digitalWrite(led6, LOW);
        delay(250);

        digitalWrite(led3, HIGH);
        digitalWrite(led7, HIGH);
        delay(250);
        digitalWrite(led3, LOW);
        digitalWrite(led7, LOW);
        delay(250);
        digitalWrite(led3, HIGH);
        digitalWrite(led7, HIGH);
        delay(250);
        digitalWrite(led3, LOW);
        digitalWrite(led7, LOW);
        delay(500);

        digitalWrite(led8, HIGH);
        digitalWrite(led4, HIGH);
        delay(250);
        digitalWrite(led8, LOW);
        digitalWrite(led4, LOW);
        delay(250);
        digitalWrite(led8, HIGH);
        digitalWrite(led4, HIGH);
        delay(250);
        digitalWrite(led8, LOW);
        digitalWrite(led4, LOW);
        delay(250);

        digitalWrite(led1, HIGH);
        digitalWrite(led5, HIGH);
        delay(250);
        digitalWrite(led1, LOW);
        digitalWrite(led5, LOW);
        delay(250);
        digitalWrite(led1, HIGH);
        digitalWrite(led5, HIGH);
        delay(250);
        digitalWrite(led1, LOW);
        digitalWrite(led5, LOW);
        delay(250);

        digitalWrite(led2, HIGH);
        digitalWrite(led6, HIGH);
        delay(250);
        digitalWrite(led2, LOW);
        digitalWrite(led6, LOW);
        delay(250);
        digitalWrite(led2, HIGH);
        digitalWrite(led6, HIGH);
        delay(250);
        digitalWrite(led2, LOW);
        digitalWrite(led6, LOW);
        delay(250);

        digitalWrite(led3, HIGH);
        digitalWrite(led7, HIGH);
        delay(250);
        digitalWrite(led3, LOW);
        digitalWrite(led7, LOW);
        delay(250);
        digitalWrite(led3, HIGH);
        digitalWrite(led7, HIGH);
        delay(250);
        digitalWrite(led3, LOW);
        digitalWrite(led7, LOW);
        delay(500);

        digitalWrite(led8, HIGH);
        digitalWrite(led4, HIGH);
        delay(250);
        digitalWrite(led8, LOW);
        digitalWrite(led4, LOW);
        delay(250);
        digitalWrite(led8, HIGH);
        digitalWrite(led4, HIGH);
        delay(250);
        digitalWrite(led8, LOW);
        digitalWrite(led4, LOW);
        delay(250);
    }      			                 //Fim do modo de recepção
}
}

      