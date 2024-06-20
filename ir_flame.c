/*
    Project name : ESP8266 IR Flame Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-ir-flame-sensor
*/

const int flameSensorPin = D2; // GPIO pin where the flame sensor OUT pin is connected

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(flameSensorPin, INPUT); // Set flame sensor pin as INPUT
}

void loop() {
  // Read the state of the flame sensor
  int flameState = digitalRead(flameSensorPin);

  // Check if flame is detected
  if (flameState == LOW) {
    Serial.println("Flame detected!");
  } else {
    Serial.println("No flame detected.");
  }

  delay(1000); // Add a small delay before the next reading
}
