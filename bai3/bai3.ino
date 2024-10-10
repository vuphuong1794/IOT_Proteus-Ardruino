const int NUM_LEDS = 8;               // Số đèn LED (8 đèn LED)
const int LED_PINS[NUM_LEDS] = {2, 3, 4, 5, 6, 7, 8, 9};  // Các chân kết nối LED

void setup() {
  // Thiết lập tất cả các chân LED là OUTPUT
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(LED_PINS[i], OUTPUT);
  }
}

void loop() {
  // Đếm từ 0 đến 100
  for (int i = 0; i <= 100; i++) {
    showBinary(i);      // Hiển thị số nhị phân lên các đèn LED
    delay(500);         // Dừng 500ms trước khi chuyển sang số tiếp theo
  }
}

// Hàm hiển thị số nhị phân lên đèn LED
void showBinary(int number) {
  for (int i = 0; i < NUM_LEDS; i++) {
    // Kiểm tra bit thứ i của số nhị phân (từ bit thấp đến bit cao)
    int bit = (number >> i) & 1;
    
    // Điều khiển đèn LED tương ứng
    digitalWrite(LED_PINS[i], bit);
  }
}
