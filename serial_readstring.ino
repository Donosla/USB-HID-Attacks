String a;

void setup() {

Serial.begin(9600); // opens serial port, sets data rate to 9600 bps

}

void loop() {


//if (Serial.available() > 0) {
while(Serial.available()) {

a = Serial.readString();// read the incoming data as string
//String input = Serial.read();
Serial.println(a); //a
//Serial.println("hello command found");

if (a == "h") {
//  if (a == "h") {
  Serial.println("hello command found");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
    digitalWrite(LED_BUILTIN, LOW);
  delay(200);
    digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
}
else {
  Serial.println("no command");
}

}

}
