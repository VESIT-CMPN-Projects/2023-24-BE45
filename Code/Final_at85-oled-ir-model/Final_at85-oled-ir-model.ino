#include <U8x8lib.h> // u8x8 library for drawing on the OLED display

#include "DTmodel.h"

// Define the pins for your OLED display
#define IR_PIN PB0 // IR sensor Pin
#define BUTTON_PIN PB0 // Button Pin

U8X8_SSD1306_128X64_NONAME_SW_I2C u8x8(/* clock=*/ 4, /* data=*/ 3, /* reset=*/ U8X8_PIN_NONE); // software IIC communication with the OLED display

void setup() {
  pinMode(IR_PIN, INPUT);
  u8x8.begin();
  u8x8.setPowerSave(0); // this is required
}

void loop() {
  // Read the analog voltage directly from the sensor pin
  int sensorValue = analogRead(IR_PIN);
  
  // Pass the sensor value directly to the score function
  double glucoseValue = score(sensorValue); // Assuming score() takes the sensor value and returns the mapped glucose value
  
  // Display values on OLED
  u8x8.setFont(u8x8_font_chroma48medium8_r); // set some random font
  u8x8.setCursor(0, 0);
  u8x8.print("Analog voltage:\n");
  u8x8.print(sensorValue);
  
  u8x8.setCursor(0, 2); // Move cursor to the next line
  u8x8.print("Glucose level:\n");
  u8x8.print(glucoseValue);
  
  delay(500);
}
