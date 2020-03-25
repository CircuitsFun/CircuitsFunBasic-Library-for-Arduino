#include <CircuitsFunBasic.h>

// Go to Tools -> Serial Monitor once you upload the code

Button button(6);

void setup() {
  Serial.begin(9600);
  button.begin();
}

void loop() {
  if (button.isPressed()) {
    Serial.println("Ouch");
  }
}
