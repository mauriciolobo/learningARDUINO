
void setup(){
  Serial.begin(9600);
  digitalWrite(13, HIGH);
}

void loop(){
  float leitura = analogRead(A0);
  float voltagem = 5.0 * analogRead(A1) / 100;
  float temp = leitura * (5.0/1023.0) * 100;
  Serial.println("Temperatura: ");
  Serial.print(temp,1);
  Serial.println(" C");
  Serial.println("Resistencia: ");  
  Serial.println(voltagem,1);
  delay(1000);
}
