int potPin = A0;   // Potentiometer middle pin
int ledPin = 9;    // LED connected to PWM pin 9
int val = 0;       // Variable to store value

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = analogRead(potPin);          // Read value from potentiometer (0–1023)
  int brightness = map(val, 0, 1023, 0, 255);  // Convert to 0–255 range
  analogWrite(ledPin, brightness);   // Control LED brightness
}