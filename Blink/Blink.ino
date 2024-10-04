const int NUM_LEDS = 8;
const int LED_PINS[NUM_LEDS] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(LED_PINS[i], OUTPUT);
  }
}

void loop() {
  // Bật các đèn LED chẵn, tắt các đèn LED lẻ
  for (int i = 0; i < NUM_LEDS; i++) {
    if (i % 2 == 0) {
      digitalWrite(LED_PINS[i], HIGH);
    } else {
      digitalWrite(LED_PINS[i], LOW);
    }
  }
  delay(500);  // Đợi 500ms

  // Đảo ngược trạng thái: tắt các đèn LED chẵn, bật các đèn LED lẻ
  for (int i = 0; i < NUM_LEDS; i++) {
    if (i % 2 == 0) {
      digitalWrite(LED_PINS[i], LOW);
    } else {
      digitalWrite(LED_PINS[i], HIGH);
    }
  }
  delay(500);  // Đợi 500ms
}