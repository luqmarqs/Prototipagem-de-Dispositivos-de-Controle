int i = 0;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  for (i = 0; i < 5; i++) {
    
    digitalWrite(9, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(9, LOW);
    delay(100); // Wait for 1000 millisecond(s)

    digitalWrite(8, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(8, LOW);
    delay(100); // Wait for 1000 millisecond(s)

    digitalWrite(7, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(7, LOW);
    delay(100); // Wait for 1000 millisecond(s)

    digitalWrite(6, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(6, LOW);
    delay(100); // Wait for 1000 millisecond(s)

    digitalWrite(5, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(5, LOW);
    delay(100); // Wait for 1000 millisecond(s)

    digitalWrite(4, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(4, LOW);
    delay(100); // Wait for 1000 millisecond(s)

    digitalWrite(3, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(3, LOW);
    delay(100); // Wait for 1000 millisecond(s)

    digitalWrite(2, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
    delay(100); // Wait for 1000 millisecond(s)
    
  }
  
  for (i = 0; i < 5; i++) {
    
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    delay(100);
     
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    delay(100);
  }
  
}
          