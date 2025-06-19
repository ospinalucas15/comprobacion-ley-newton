#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h>

// Pines
#define ONE_WIRE_BUS 7            // Data pin DS18B20
const int pinRS = 2, pinE = 3, pinD4 = 4, pinD5 = 5, pinD6 = 11, pinD7 = 12;

// Duración y frecuencia
const unsigned long DUR     = 600000UL;  // 10 minutos en ms
const unsigned long INTV    = 10000UL;   // cada 10 s

// Objetos
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
LiquidCrystal lcd(pinRS, pinE, pinD4, pinD5, pinD6, pinD7);

// Variables de tiempo
unsigned long tStart, tLast;

void setup() {
  Serial.begin(9600);
  sensors.begin();
  lcd.begin(16, 2);
  lcd.clear();

  // Inicializa marcadores de tiempo
  tStart = millis();
  tLast  = tStart - INTV;  // fuerza la primera lectura inmediata
}

void loop() {
  unsigned long now     = millis();
  unsigned long elapsed = now - tStart;

  // 1) Parar después de 10 minutos
  if (elapsed > DUR) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("======");
    lcd.setCursor(0, 1);
    lcd.print("======");
    Serial.print("=====");
    while (true) {
      delay(1000);
    }
  }

  // 2) Cada INTV ms
  if (now - tLast >= INTV) {
    tLast = now;

    // Solicita y lee temperatura
    sensors.requestTemperatures();
    float tempC = sensors.getTempCByIndex(0);

    // Salida por Serial
    Serial.print("t=");
    Serial.print(elapsed / 1000);
    Serial.print("s  T=");
    Serial.print(tempC, 2);
    Serial.println(" °C");

    // Mostrar en LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("T=");
    lcd.print(tempC, 1);
    lcd.write(223);  // símbolo °
    lcd.print("C");
    lcd.setCursor(0, 1);
    lcd.print("t=");
    lcd.print(elapsed / 1000);
    lcd.print("s");
  }
}