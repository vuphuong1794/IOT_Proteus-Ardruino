const byte ledPin = 13;
const byte interruptPin = 2;
byte state = LOW;
byte count=0;


void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(interruptPin, INPUT_PULLUP);
attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
}


void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin, state);
}
void blink() {
 state=!state;
 }
