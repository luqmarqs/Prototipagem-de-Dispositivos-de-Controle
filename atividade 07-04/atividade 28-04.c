#define led1 7
#define led2 6
#define led3 5
#define led4 4

int i; 

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
  Serial.print("Alo");
  Serial.println("  iniciei...");
  Serial.println("  Digite o código do efeito desejado");
  Serial.println("  Ligar 4 leds ..... a");
  Serial.println("  Piscar 4 leds 5 vezes..... b");
  Serial.println("  Acender 4 leds em senquencia..... c");
  Serial.println("  Desligar 4 leds ..... d");
}

void loop()
{
  if (Serial.available()) {
  	char c = Serial.read();
    if (c == 'a'){
      
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
    }
    
    if (c == 'b'){
      for (i = 0; i < 5; i++) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        delay(500);
      }
    }
    
    if (c == 'c'){
      
      digitalWrite(led1, HIGH);
      delay(300);
      digitalWrite(led1, LOW);
      delay(100);
      digitalWrite(led2, HIGH);
      delay(300);
      digitalWrite(led2, LOW);
      delay(100);
      digitalWrite(led3, HIGH);
      delay(300);
      digitalWrite(led3, LOW);
      delay(100);
      digitalWrite(led4, HIGH);
      delay(300);
      digitalWrite(led4, LOW);
    }
    
    if(c == 's') {
      
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }
    Serial.print(" Recebi letra: ");
    Serial.println(c);
    
  }
}