#include <U8g2lib.h>
#include "DTmodel.h"

#define OLED_SDA A4
#define OLED_SCL A5

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, OLED_SCL, OLED_SDA);

int irPin = A1;

void setup() {
  pinMode(irPin, INPUT);
  u8g2.begin();
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(irPin);

  // Convert the sensor value to a double
  double glucoseValue = score((double)sensorValue);

  Serial.print("Analog Voltage: ");
  Serial.println(sensorValue);
  Serial.print("Mapped Glucose Value: ");
  Serial.println(glucoseValue);

  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_ncenB08_tr);
    u8g2.setCursor(0, 10);
    u8g2.print("Analog Voltage: ");
    u8g2.print(sensorValue);
    u8g2.setCursor(0, 20);
    u8g2.print("Glucose Value: ");
    u8g2.print(glucoseValue);
  } while (u8g2.nextPage());

  delay(500);
}
