#include <SoftwareSerial.h>

int sensorPin = A0; 
int buzzer = 11;
int sensor = 12;
int sensorValue = 0; 
int led = 7;
int led1=8;


void setup() { 

pinMode(led, OUTPUT);
pinMode(led1,OUTPUT);
Serial.begin(9600); 
  pinMode(buzzer, OUTPUT);
  pinMode(sensor, INPUT);
   digitalWrite(buzzer,LOW);
  digitalWrite(sensor,LOW);
  
 }

void loop()

{

sensorValue = analogRead(sensorPin);

Serial.println(sensorValue);
  if(digitalRead(sensor)==HIGH)
  {
   digitalWrite(buzzer,HIGH);
   delay(3000);
   digitalWrite(buzzer,LOW); 
   while(digitalRead(sensor)==HIGH);
  }

if (sensorValue < 100)

{
digitalWrite(led,HIGH);
digitalWrite(led1,HIGH);

delay(1000);

}
  else{
digitalWrite(led,LOW);
digitalWrite(led1,LOW);
delay(sensorValue);


}
}