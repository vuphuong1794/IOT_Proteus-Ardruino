const int NUM_LEDS = 3;
const int LED_PINS[NUM_LEDS] = {2, 3, 4};

void setup() {
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(LED_PINS[i], OUTPUT);
  }
}

void loop() {
  
    digitalWrite(LED_PINS[2], HIGH);
    delay(20000);  
    digitalWrite(LED_PINS[2], LOW);
    digitalWrite(LED_PINS[1], HIGH);
    delay(5000);  
    digitalWrite(LED_PINS[1], LOW);
    digitalWrite(LED_PINS[0], HIGH);
    delay(30000);  
    digitalWrite(LED_PINS[0], LOW);
  
}