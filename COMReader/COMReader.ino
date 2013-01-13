#include <LiquidCrystal.h>

int backLight = 7;
LiquidCrystal lcd(12,11,5,4,3,2);
int count = 0;

void setup(){
  Serial.begin(9600);
  pinMode(backLight, OUTPUT);
  digitalWrite(backLight, HIGH);
  lcd.begin(16,2);
  lcd.print("Aguardando");
  lcd.setCursor(0,1);
  lcd.print("Mensagem");
}

const int rowChars = 16;
char message[rowChars];
    
void loop(){
  if(Serial.available() > 0){        
    lcd.clear();
    
    cleanMessage();
    int extraBytes = 0;
    Serial.readBytes(message, rowChars);
    lcd.print(message);

    cleanMessage();
    lcd.setCursor(0,1);
    Serial.readBytes(message, rowChars);
    lcd.print(message);
    
    do{
      extraBytes = Serial.read();      
    }while(extraBytes > 0);
  }
}

void cleanMessage(){
  for(int i = 0; i < rowChars; i++){
    message[i] = ' ';
  }
}
