/*
This source code is intended for the wind simulator. Hardware, firmware, and app development to developed by 
PhippsTech LLC.
Austin,Tx
Version 00
*/
#include <Arduino.h>
#include <wire.h>
//Input defintion assignments
#define Curr 1 //Analog voltage input coming from the ACS711KEXLT current monitor 
#define PT1  2 //Analog voltage input coming from the first differential pressure sensor
#define PT2  4 //Analog voltage input coming from the second differential pressure sensor
#define TACH 5 //Digital voltage input coming from the tachometer output of the blower
#define PG1  6 //Power good signal coming from the power supply 
#define PG2  7 //Power good signal coming from the power supply 
//Output definition assignments 
#define MSS  8 //Digital output to the motor speed select relay
#define MPWM 9 //PWM signal for digital motor speed
#define MSWITCH 10/ //Switch for the relay from battery to the blower

void setup()
{
  Serial.begin(115200);
  //Input INIT
  pinMode(Curr, INPUT);
  pinMode(PT1, INPUT);
  pinMode(PT2, INPUT);
  pinMode(TACH, INPUT);
  pinMode(PG1, INPUT);
  pinMode(PG2, INPUT);
  //Output INIT
  pinMode(MSS, OUTPUT);
  pinMode(MPWM, OUTPUT);
  digitalWrite(MSS, LOW);
  digitalWrite(MPWM, LOW);
  digitalWrite(MSWITCH, LOW);
}

void loop() 
{
  int curradc = analogRead(Curr);
  int pt1adc  = analogRead(PT1);
  int pt2adc  = analogRead(PT2);
  int tachspeed = pulseIn(TACH, HIGH);
  
}

