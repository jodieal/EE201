void setup() {
  // Setup active pin and Baud Rate
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // Alternate between LED being on and off
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW); 
  delay(1000);
}
