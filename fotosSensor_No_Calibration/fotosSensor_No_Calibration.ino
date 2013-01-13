int rfPin = A0;
int greenPin = 2;
int yellowPin = 3;
int redPin = 4;

void setup(){
  Serial.begin(9600);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);  
}

void loop(){
  int lumiens = analogRead(rfPin);
  if(lumiens <= 500) phase(0);
  if(lumiens > 500) phase(1);
  if(lumiens > 600) phase(2);
  if(lumiens > 700) phase(3);
  Serial.println(lumiens);
}

void phase(int which){
  switch(which){
    case 1:
      digitalWrite(greenPin, HIGH);
      digitalWrite(yellowPin, LOW);
      digitalWrite(redPin, LOW);
      break;
    case 2:
      digitalWrite(greenPin, HIGH);
      digitalWrite(yellowPin, HIGH);
      digitalWrite(redPin, LOW);
      break;
    case 3:
      digitalWrite(greenPin, HIGH);
      digitalWrite(yellowPin, HIGH);
      digitalWrite(redPin, HIGH);
      break;
    default:
        digitalWrite(greenPin, LOW);
        digitalWrite(yellowPin, LOW);
        digitalWrite(redPin, LOW);
      break;
  }
}
