int redLed = 11;
int yellowLed = 10;
int greenLed = 9;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int potRead = analogRead(A0);
  
  int value = potRead / 4;
  Serial.println(value);
  
  if(value < 85) analogWrite(greenLed, 255); else analogWrite(greenLed, 0); 
  if(value >= 45 && value < 210) analogWrite(yellowLed, 255); else analogWrite(yellowLed, 0);
  if(value >= 170) analogWrite(redLed, 255); else analogWrite(redLed, 0);
}
