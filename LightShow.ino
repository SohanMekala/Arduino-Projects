int ledDelay = 200;

void setup() {
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(ledDelay);
  digitalWrite(13, LOW);
  
  digitalWrite(12, HIGH);
  delay(ledDelay);
  digitalWrite(12, LOW);
  
  digitalWrite(11, HIGH);
  delay(ledDelay);
  digitalWrite(11, LOW);
  
  digitalWrite(10, HIGH);
  delay(ledDelay);
  digitalWrite(10, LOW);
  
  digitalWrite(9, HIGH);
  delay(ledDelay);
  digitalWrite(9, LOW);
  
  digitalWrite(10, HIGH);
  delay(ledDelay);
  digitalWrite(10, LOW);
  
  digitalWrite(11, HIGH);
  delay(ledDelay);
  digitalWrite(11, LOW);
  
  digitalWrite(12, HIGH);
  delay(ledDelay);
  digitalWrite(12, LOW);
  
}

