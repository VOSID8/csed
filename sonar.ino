#include<NewPing.h>
#define TRIGGER_PIN 13
#define ECHO_PIN 12
#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN,ECHO_PIN,MAX_DISTANCE);
float duration, distance;
 
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}
void loop()
{
  distance=sonar.ping_cm();
  if(distance<=20){      
Serial.println(distance);
      digitalWrite(8,HIGH);
  }else{
     digitalWrite(8,LOW);
  }
  delay(100);
}
