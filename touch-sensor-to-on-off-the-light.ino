#define LED_PIN 13
#define out 5

byte lasttouchState = LOW;
byte ledState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(out, INPUT);
    Serial.begin(9600);

}

void loop() {
  byte touchState = digitalRead(out);
  if (touchState != lasttouchState) {
    lasttouchState = touchState;
    if (touchState == LOW) {
  // Check if the touch is pressed (touchState is LOW)
  // If true, this block will be executed

  // Check the current state of the LED
  if (ledState == HIGH) {
    // If the LED is currently HIGH (ON), turn it OFF (LOW)
    ledState = LOW;
     Serial.println("led off");
  } else {
    // If the LED is currently LOW (OFF), turn it ON (HIGH)
    ledState = HIGH;
     Serial.println("led on");
  }
}

      digitalWrite(LED_PIN, ledState);
    }
  }
