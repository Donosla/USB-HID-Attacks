void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String ch;
    ch = Serial.readString();
    ch.trim();
    if (ch == "on" || ch == "ON") {
      digitalWrite(13, HIGH);
    }

    else if (ch == "off" || ch == "OFF") {
      digitalWrite(13, LOW);
    }

    //    else if (ch == "hello" || ch == "OFF") {
    else if (ch == "hello") {
      //
      //      digitalWrite(13, LOW);
      //      delay(200)

      digitalWrite(LED_BUILTIN, HIGH);
      delay(200);
      digitalWrite(LED_BUILTIN, LOW);
      delay(200);
      digitalWrite(LED_BUILTIN, HIGH);
      delay(200);
      digitalWrite(LED_BUILTIN, LOW);

    }
  }
}
