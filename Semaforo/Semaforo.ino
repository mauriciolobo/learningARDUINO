int redLed = 11;
int yellowLed = 10;
int greenLed = 9;

void setup(){
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);  
  pinMode(greenLed, OUTPUT);  
}

void loop(){
  float readFromPoteciometer = analogRead(A0);
  float multiplier = 0.01 + readFromPoteciometer / 1023.0;
  
  digitalWrite(redLed, HIGH);
  delay(1000 * multiplier);
  digitalWrite(redLed, LOW);  
  
  digitalWrite(yellowLed, HIGH);
  delay(1000 * multiplier);
  digitalWrite(yellowLed, LOW);
  
  digitalWrite(greenLed, HIGH);
  delay(1000 * multiplier);
  digitalWrite(greenLed, LOW);
  
  digitalWrite(yellowLed, HIGH);
  delay(1000 * multiplier);
  digitalWrite(yellowLed, LOW);
}
