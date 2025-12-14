#include <SoftwareSerial.h>

SoftwareSerial bt(10, 11); // RX, TX

int ledPin = 13;
char data;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  bt.begin(9600);
}

void loop() {
  if (bt.available()) {
    data = bt.read();

    if (data == '1') {
      digitalWrite(ledPin, HIGH);
    }
    else if (data == '0') {
      digitalWrite(ledPin, LOW);
    }
  }
}
