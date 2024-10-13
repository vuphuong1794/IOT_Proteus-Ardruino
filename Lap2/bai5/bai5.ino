//khai bao cac chan
const int APin = 13;
const int BPin = 12;
const int CPin = 11;
const int DPin = 10;
const int EPin = 9;
const int FPin = 8;
const int GPin = 7;
const int DPPin = 6;
int gapTime = 1000;

void setup() {
  pinMode(APin, OUTPUT);
  pinMode(BPin, OUTPUT);
  pinMode(CPin, OUTPUT);
  pinMode(DPin, OUTPUT);
  pinMode(EPin, OUTPUT);
  pinMode(FPin, OUTPUT);
  pinMode(GPin, OUTPUT);
  pinMode(DPPin, OUTPUT);

}

void loop(){
  display0(); delay(gapTime);
  display1(); delay(gapTime);
  display2(); delay(gapTime);
  display3(); delay(gapTime);
  display4(); delay(gapTime);
  display5(); delay(gapTime);
  display6(); delay(gapTime);
  display7(); delay(gapTime);
  display8(); delay(gapTime);
  display9(); delay(gapTime);
  displayDP(); delay(gapTime);
}

void display0(){
  allOn();
  digitalWrite(GPin,LOW);
  digitalWrite(DPPin,LOW);
}

void display1(){
  allOff();
  digitalWrite(BPin,HIGH);
  digitalWrite(CPin,HIGH);
}
void display2(){
  allOn();
  digitalWrite(FPin,LOW);
  digitalWrite(CPin,LOW);
  digitalWrite(DPPin, LOW);
}
void display3(){
  allOn();
  digitalWrite(EPin,LOW);
  digitalWrite(FPin, LOW);
  digitalWrite(DPPin,LOW);
}
void display4(){
  allOn();
  digitalWrite(EPin,LOW);
  digitalWrite(APin,LOW);
  digitalWrite(DPin,LOW);
  digitalWrite(DPPin,LOW);
}
void display5(){
  allOn();
  digitalWrite(EPin,LOW);
  digitalWrite(BPin,LOW);
  digitalWrite(DPPin,LOW);
}
void display6(){
  allOn();
  digitalWrite(BPin,LOW);
  digitalWrite(DPPin,LOW);
}
void display7(){
  allOff();
  digitalWrite(APin,HIGH);
  digitalWrite(BPin,HIGH);
  digitalWrite(CPin,HIGH);
}
void display8(){
  allOn();
  digitalWrite(DPPin,LOW);
}
void display9(){
  display8();
  digitalWrite(EPin,LOW);
}

void displayDP(){
  allOff();
  digitalWrite(DPPin, HIGH);
}

void allOn(){
  digitalWrite(APin, HIGH);
  digitalWrite(BPin, HIGH);
  digitalWrite(CPin, HIGH);
  digitalWrite(DPin, HIGH);
  digitalWrite(EPin, HIGH);
  digitalWrite(FPin, HIGH);
  digitalWrite(GPin, HIGH);
  digitalWrite(DPPin, HIGH);
}

void allOff(){
  digitalWrite(APin, LOW);
  digitalWrite(BPin, LOW);
  digitalWrite(CPin, LOW);
  digitalWrite(DPin, LOW);
  digitalWrite(EPin, LOW);
  digitalWrite(FPin, LOW);
  digitalWrite(DPPin, LOW);
}