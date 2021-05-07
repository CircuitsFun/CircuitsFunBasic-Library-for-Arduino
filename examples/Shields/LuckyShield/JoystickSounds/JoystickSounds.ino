/*
  Joystick Sounds
  Plays different tones based on direction of Joystick
  by  hcm444
*/

#include <CircuitsFunBasic.h>

#define BUZ 5
#define NOTE_1 500
#define NOTE_2 600
#define NOTE_3 700
#define NOTE_4 800
void setup() {
  lucky.begin();
}

void loop() {
  if (lucky.gpio().digitalRead(JOYU) == HIGH) {
    for (int i = 0; i < 8; i++) {
      tone(BUZ, NOTE_1);
      delay(50);
      lucky.gpio().digitalWrite(LED2, HIGH);
      lucky.gpio().digitalWrite(LED1, HIGH);
      tone(BUZ, NOTE_2);
      delay(50);
      lucky.gpio().digitalWrite(LED2, LOW);
      lucky.gpio().digitalWrite(LED1, LOW);
    }
    noTone(BUZ);
  }
  if (lucky.gpio().digitalRead(JOYD) == HIGH) {
    for (int i = 0; i < 8; i++) {
      tone(BUZ, NOTE_2);
      delay(50);
      lucky.gpio().digitalWrite(LED2, HIGH);
      lucky.gpio().digitalWrite(LED1, HIGH);
      tone(BUZ, NOTE_3);
      delay(50);
      lucky.gpio().digitalWrite(LED2, LOW);
      lucky.gpio().digitalWrite(LED1, LOW);
    }
    noTone(BUZ);
  }
  if (lucky.gpio().digitalRead(JOYL) == HIGH) {
    for (int i = 0; i < 8; i++) {
      tone(BUZ, NOTE_3);
      delay(50);
      lucky.gpio().digitalWrite(LED2, HIGH);
      lucky.gpio().digitalWrite(LED1, HIGH);
      tone(BUZ, NOTE_4);
      delay(50);
      lucky.gpio().digitalWrite(LED2, LOW);
      lucky.gpio().digitalWrite(LED1, LOW);
    }
    noTone(BUZ);
  }
  if (lucky.gpio().digitalRead(JOYR) == HIGH) {
    for (int i = 0; i < 8; i++) {
      tone(BUZ, NOTE_4);
      delay(50);
      lucky.gpio().digitalWrite(LED2, HIGH);
      lucky.gpio().digitalWrite(LED1, HIGH);
      tone(BUZ, NOTE_1);
      delay(50);
      lucky.gpio().digitalWrite(LED2, LOW);
      lucky.gpio().digitalWrite(LED1, LOW);
    }
    noTone(BUZ);
  }
}
