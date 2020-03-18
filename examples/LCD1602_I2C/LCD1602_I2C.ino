#include <CircuitsFunBasic.h>

LCD lcd;

void setup() {
  lcd.init(lcd.getAddr(), 16, 2);
  lcd.backlight();
  lcd.clear();
  lcd.printLCD("CircuitsFun", 0, 0);
  lcd.printLCD("Coding!", 3, 1);
}

void loop() {
  // put your main code here, to run repeatedly:

}
