#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

// Sensors & buzzer pins
const int tmpPin = A0;      
const int mqPin = A1;      
const int buzzerPin = 8;

void setup()  
{
  lcd.begin(16, 2);          
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  // TMP36 reading
  int tmpRaw = analogRead(tmpPin);
  float voltage = tmpRaw * 5.0 / 1023.0;
  float tempC = (voltage - 0.5) * 100.0;
  
  // MQ sensor reading
  int gasVal = analogRead(mqPin);

  // Display readings on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tempC, 1);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Gas: ");
  lcd.print(gasVal);

  // Serial output
  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println(" C");
  
  Serial.print("Gas: ");
  Serial.println(gasVal);

  // Buzzer control
  if (gasVal > 200 || tempC > 45) 
  {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(1000);
}
