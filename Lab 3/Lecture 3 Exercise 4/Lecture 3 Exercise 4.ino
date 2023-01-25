void setup() {
  // Setup active pins and Baud Rate
  Serial.begin(9600);
  pinMode(13, OUTPUT); // g
  pinMode(12, OUTPUT); // f
  pinMode(11, OUTPUT); // a
  pinMode(10, OUTPUT); // b
  pinMode(9, OUTPUT); // e
  pinMode(8, OUTPUT); // d
  pinMode(7, OUTPUT); // c
  pinMode(6, OUTPUT); // dp
  pinMode(2, OUTPUT);
}

void loop() {
  // Countdown from 9 to 0 with 1.5 sec intervals
  // 9
  digitalWrite(2, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(13, LOW);
  delay(1500);
  // 8
  digitalWrite(9, LOW);
  delay(1500);
  // 7
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(1500);
  // 6
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);
  digitalWrite(10, HIGH);
  delay(1500);
  // 5
  digitalWrite(9, HIGH);
  delay(1500);
  // 4
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(1500);
  // 3
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(1500);
  // 2
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);
  delay(1500);
  // 1
  digitalWrite(11, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  delay(1500);
  // 0
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delay(1500);
}
