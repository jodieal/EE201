int val = 0;                          // Variable to store the read value

void setup() {
  // Setup pin 13 as input and setup Baud Rate
  Serial.begin(9600);
  pinMode(13, INPUT);
}

void loop() {
  val = digitalRead(13);              // Reads input pin
  if (val) {                          // If pin is HIGH, print first message
    Serial.println("Hello World!");
  } else {                            //  Otherwise, print second message
    Serial.println("It's 2023");
  }
  delay(2000);
}
