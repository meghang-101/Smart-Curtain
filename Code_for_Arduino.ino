#include<Servo.h>
Servo servo;
const int ledPin=10;
const int ldrPin=A0;
const int servoPin=11;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  servo.attach(servoPin);
}

void loop()
  
{
  
  int ldrValue = analogRead(ldrPin);
  
  if(ldrValue>=10)
  {
    digitalWrite(ledPin, LOW);
    servo.write(0);
    Serial.print("DAYLIGHT!!Curtain Is Opening. LDR value= ");
    Serial.println(ldrValue);
  
  }
  if(ldrValue<10)
  {
    digitalWrite(ledPin, HIGH);
    servo.write(180);
    Serial.print("NIGHT!!Curtain Is Closing. LDR value= ");
    Serial.println(ldrValue);
  }
}
