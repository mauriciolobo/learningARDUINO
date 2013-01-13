#include<LiquidCrystal.h>
int luzFundo = 7;
LiquidCrystal lcd(12,11,5,4,3,2);
byte face[8] = {
0b00100,
0b01010,
0b10001,
0b10101,
0b10001,
0b01010,
0b00100,
0b00000
};

void setup(){
  lcd.begin(16,2);
  pinMode(luzFundo, OUTPUT);
  digitalWrite(luzFundo, HIGH);
  lcd.createChar(1, face);
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("Mauricio Lobo");
  lcd.setCursor(0,1);
  lcd.print("31/03/1981");
}
