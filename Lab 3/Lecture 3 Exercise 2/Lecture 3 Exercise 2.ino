void setup() {
  // Setup active pins and Baud Rate
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // Alternate between 2 LEDs being on and off
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  delay(500);
}
