void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);
  
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {
      // Read the incoming byte(s)
      String message = Serial.readStringUntil('\n');  // Read the string until a newline character
      Serial.print("Sex: ");
      Serial.println(message);  // Print the message back to the serial monitor

    // Here you can add code to process the received message, e.g. turn on an LED, etc.
  }
}
