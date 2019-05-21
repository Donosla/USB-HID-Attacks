#include "Keyboard.h"

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  if (Serial.available()) {
    String input;
    input = Serial.readString();
    input.trim();

    if (input == "on" || input == "ON") {
      digitalWrite(13, HIGH);
    }

    else if (input == "off" || input == "OFF") {
      digitalWrite(13, LOW);
    }

    //    else if (ch == "hello" || ch == "OFF") {

    //windows key + r
    else if (input == "run") {
      Serial.println("cmd: run");
      Keyboard.press(KEY_LEFT_GUI);
      // Keyboard.press('e');
      Keyboard.press('r');
      Keyboard.releaseAll();
      //
      //      digitalWrite(13, LOW);
      //      delay(200)
      //
      //      digitalWrite(LED_BUILTIN, HIGH);
      //      delay(200);
      //      digitalWrite(LED_BUILTIN, LOW);
      //      delay(200);
      //      digitalWrite(LED_BUILTIN, HIGH);
      //      delay(200);
      //      digitalWrite(LED_BUILTIN, LOW);

    }

    // windows key + l (lock screen)
    else if (input == "lock" || input == "LOCK") {
//      digitalWrite(13, LOW);
      Serial.println("cmd: lock");
      Keyboard.press(KEY_LEFT_GUI);
      // Keyboard.press('e');
      Keyboard.press('l');
      Keyboard.releaseAll();
    }

    else if (input == "off" || input == "OFF") {
      digitalWrite(13, LOW);
    }

  }
}
