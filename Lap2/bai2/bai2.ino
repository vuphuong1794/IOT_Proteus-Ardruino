const int NUM_LEDS = 8;
const int LED_PINS[NUM_LEDS] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(LED_PINS[i], OUTPUT);
  }
}

void loop() {
  // Sáng từ trái sang phải
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(LED_PINS[i], HIGH);
    delay(100);  // Đợi 100ms trước khi bật đèn tiếp theo
    digitalWrite(LED_PINS[i], LOW);
  }
  
  // Sáng từ phải sang trái
  for (int i = NUM_LEDS - 1; i >= 0; i--) {
    digitalWrite(LED_PINS[i], HIGH);
    delay(100);  // Đợi 100ms trước khi bật đèn tiếp theo
    digitalWrite(LED_PINS[i], LOW);
  }
}