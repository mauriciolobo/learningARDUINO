int ledPin = 11;
int buttonPin = 8;
boolean state = false;
int ledOn = 0;
boolean buttonState = HIGH;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  if(digitalRead(buttonPin) == LOW && state == true)
  {
    ledOn += 51;
    state = false;
  }
  else
  {
    state = digitalRead(buttonPin);
  }
  
  if(ledOn > 255){
    ledOn = 0;
  }
  digitalWrite(ledPin, ledOn);
}
