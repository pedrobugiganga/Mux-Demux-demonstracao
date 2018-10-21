#include <LiquidCrystal.h>
#define S0 A2
#define S1 A3
#define S2 A4
#define S3 A5
#define tempo 800
LiquidCrystal lcd ( 7, 6, 5, 4, 3, 2);
void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print ("DEMULTIPLEXADOR");
}

void loop() {

  digitalWrite(S0, LOW);//C0
  digitalWrite(S1, LOW);
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  lcd.setCursor(0,1);
  lcd.print ("Porta C0  Ativa");
  delay (tempo);
  digitalWrite(S0, HIGH);//C1
  digitalWrite(S1, LOW);
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  lcd.setCursor(0,1);
  lcd.print ("Porta C1  Ativa");
  delay (tempo);
  digitalWrite(S0, LOW);//C2
  digitalWrite(S1, HIGH);
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  lcd.setCursor(0,1);
  lcd.print ("Porta C2  Ativa");
  delay (tempo);
  digitalWrite(S0, HIGH);//C3
  digitalWrite(S1, HIGH);
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  lcd.setCursor(0,1);
  lcd.print ("Porta C3  Ativa");
  delay (tempo);
  digitalWrite(S0, LOW);//C4
  digitalWrite(S1, LOW);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);
  lcd.setCursor(0,1);
  lcd.print ("Porta C4  Ativa");
  delay (tempo);
  digitalWrite(S0, HIGH);//C5
  digitalWrite(S1, LOW);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);
  lcd.setCursor(0,1);
  lcd.print ("Porta C5  Ativa");
  delay (tempo);
  digitalWrite(S0, LOW);//C6
  digitalWrite(S1, HIGH);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);
  lcd.setCursor(0,1);
  lcd.print ("Porta C6  Ativa");
  delay (tempo);
  digitalWrite(S0, HIGH);//C7
  digitalWrite(S1, HIGH);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);
  lcd.setCursor(0,1);
  lcd.print ("Porta C7  Ativa");
  delay (tempo);
  digitalWrite(S0, LOW);//C8
  digitalWrite(S1, LOW);
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  lcd.setCursor(0,1);
  lcd.print ("Porta C8  Ativa");
  delay (tempo);
  digitalWrite(S0, HIGH);//C9
  digitalWrite(S1, LOW);
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  lcd.setCursor(0,1);
  lcd.print ("Porta C9  Ativa");
  delay (tempo);
  digitalWrite(S0, LOW);//C10
  digitalWrite(S1, HIGH);
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  lcd.setCursor(0,1);
  lcd.print ("Porta C10 Ativa");
  delay (tempo);
  digitalWrite(S0, HIGH);//C11
  digitalWrite(S1, HIGH);
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  lcd.setCursor(0,1);
  lcd.print ("Porta C11 Ativa");
  delay (tempo);
  digitalWrite(S0, LOW);//C12
  digitalWrite(S1, LOW);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  lcd.setCursor(0,1);
  lcd.print ("Porta C12 Ativa");
  delay (tempo);
  digitalWrite(S0, HIGH);//C13
  digitalWrite(S1, LOW);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  lcd.setCursor(0,1);
  lcd.print ("Porta C13 Ativa");
  delay (tempo);
  digitalWrite(S0, LOW);//C14
  digitalWrite(S1, HIGH);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  lcd.setCursor(0,1);
  lcd.print ("Porta C14 Ativa");
  delay (tempo);
  digitalWrite(S0, HIGH);//C15
  digitalWrite(S1, HIGH);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  lcd.setCursor(0,1);
  lcd.print ("Porta C15 Ativa");
  delay (tempo);
}
