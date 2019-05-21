#include "Keyboard.h"

#define RUN 0
#define LOCK 1


// change this to match the command you want to run:

//int command = RUN;
int command = LOCK;

//String incoming = "";   // for incoming serial string data
//String incoming;

void setup() {
  Serial.begin(9600);
  Keyboard.begin();
  // put your setup code here, to run once:

}

void loop() {

  // check for incoming serial data:
//  if (Serial.available() > 0) {
    if (Serial.available() > 0) {
    // read incoming serial data:
    //    char inChar = Serial.read();
    String incoming = Serial.readString();
//     String incoming = Serial.readString();
    //    Serial.println(inChar);
    Serial.println(incoming);

    // Type the next ASCII value from what you received:

    // Keyboard.write(inChar + 1);
    // if (inChar == 'run') {
    if (incoming == "run") {
      Serial.println("cmd: run");
      Keyboard.press(KEY_LEFT_GUI);
      // Keyboard.press('e');
      Keyboard.press('r');
      Keyboard.releaseAll();
      // break;
    }


    //    delay(1000)

    //    else if (inChar == 's') {
    else if (incoming == "s") {
      switch (command) {
        case LOCK:
          // case 'g':
          Serial.println("case: LOCK");
          //        Keyboard.press(KEY_LEFT_GUI);
          //        Keyboard.press('r');
          //        Keyboard.releaseAll();
          break;



          //        // CTRL-ALT-DEL:
          //        Keyboard.press(KEY_LEFT_CTRL);
          //        Keyboard.press(KEY_LEFT_ALT);
          //        Keyboard.press(KEY_DELETE);
          //        delay(100);
          //        Keyboard.releaseAll();
          //        // ALT-l:
          //        delay(2000);
          //        Keyboard.press(KEY_LEFT_ALT);
          //        Keyboard.press('l');
          //        Keyboard.releaseAll();
          //        break;

      }
    }

  }
}

// https://www.thewindowsclub.com/keyboard-shortcuts-shut-down-lock-windows
