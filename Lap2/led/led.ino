#define BLYNK_TEMPLATE_ID "TMPL6dGhn6dzU"
#define BLYNK_TEMPLATE_NAME "xam"
#include <BlynkSimpleStream.h>

 
 // You should get Auth Token in the Blynk App.
 // Go to the Project Settings (nut icon).
 char auth[] = "gyCP1ULjBjU0lsdS7gwAxBfvs40cf47h";
 
void setup()
{
  Serial.begin(9600);
  Blynk.begin(Serial, auth);  // Note the order change: Serial first, then auth
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
 
 BLYNK_WRITE(V1) //Button Widget is writing to pin V1
{
  int pinData = param.asInt(); 
  if(pinData==1){
    digitalWrite(11, HIGH);
  }else{
    digitalWrite(11, LOW);
  }
}
 
 void loop()
 {
   Blynk.run();
 }