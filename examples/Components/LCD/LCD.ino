#include <CircuitsFunBasic.h>

LCD lcd(8,9,4,5,6,7);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("CircuitsFun");   //splash screen
  lcd.setCursor(3, 1);
  lcd.print("Coding!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
