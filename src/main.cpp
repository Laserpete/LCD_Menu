#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include "header.h"
#include "characters.h"



LiquidCrystal lcd_shield(8, 9, 4, 5, 6, 7, 10, POSITIVE);
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);



void setup() {

  Serial.begin(115200);

  pinMode(0, INPUT);
  lcd_shield.backlight();

  lcd_shield.begin(16, 2);  // initialize the lcd

  lcd_shield.createChar(0, smiley);   // load character to the LCD
  lcd_shield.createChar(1, armsUp);   // load character to the LCD
  lcd_shield.createChar(2, frownie);  // load character to the LCD

  lcd_shield.home();  // go home
  lcd_shield.print("Hello, ARDUINO ");
  lcd_shield.setCursor(0, 1);  // go to the next line
  lcd_shield.print("LCD_Menu");

  int charBitmapSize = (sizeof(charBitmap) / sizeof(charBitmap[0]));

  lcd.begin(20, 4);  // initialize the lcd

  for (int i = 0; i < charBitmapSize; i++) {
    lcd.createChar(i, (uint8_t *)charBitmap[i]);
  }

  lcd.home();  // go home
  lcd.backlight();
  lcd.print("Hello, ARDUINO ");
  lcd.setCursor(0, 1);  // go to the next line
  lcd.print("LCD_Menu");
  lcd.setCursor(0,2);
  lcd.print("Line 3 Test");
  lcd.setCursor(0,3);
  lcd.print("Line 4 test");
}

void loop() {
  lcd_shield.setCursor(14, 1);
  lcd_shield.print(char(2));
  delay(200);
  lcd_shield.setCursor(14, 1);
  lcd_shield.print(char(0));
  delay(200);

  lcd.home();

  // Do a little animation by writing to the same location
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 20; j++) {
      lcd.setCursor(j,i);
      lcd.print(char(random(7)));
    }
  }
  delay(200);

Serial.println(analogRead(0));


}
/*

Empirical Keypad analogRead values

0 RIGHT
130 UP
308 Down
482 Left
722 Select
1023 No Input

*/