#include<Servo.h>         //Servo motor library
Servo servo;              //defining Servo motor as "servo"

#define ldrPin 0          //A0 pin
#define servoPin 13       //D13 pin
#define ledPin 12         //D12 pin

void setup()
{
  Serial.begin(9600);                  //Setting up baud rate for Serial Communication
  servo.attach(servoPin);              //Interfacing Servo motor with Arduino
  pinMode(ldrPin, INPUT);              //Interfacing LDR
  pinMode(ledPin, OUTPUT);             //Interfacing LED
}

void loop()
{
  int ldrValue = analogRead(ldrPin);   //Finding value input by LDR to Arduino

  if (ldrValue >= 300)
  {
    digitalWrite(ledPin, LOW);
    servo.write(0);
    Serial.print("DAYLIGHT!!Curtain Is Opening. LDR value= ");
    Serial.println(ldrValue);
  }

  if (ldrValue < 300)
  {
    digitalWrite(ledPin, HIGH);
    servo.write(180);
    Serial.print("NIGHT!!Curtain Is Closing. LDR value= ");
    Serial.println(ldrValue);
  }

}
