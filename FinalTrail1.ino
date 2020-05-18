#include <DFRobot_sim808.h>
#include <SoftwareSerial.h>
#include <Adafruit_Fingerprint.h>

#define POWER  4
#define ACC    5
int LED = 8; 

void setup() 
{
  Serial.begin(9600);
  //declare pin 4&5 to be an input:
  pinMode(POWER, INPUT);
  pinMode(ACC, INPUT);
  pinMode(LED, OUTPUT);
}


void loop() 
{
  // put your main code here, to run repeatedly:
  //CheckForSms();
  CheckForPowerAndAcc();
  //CheckForShutdown();
}

void CheckForPowerAndAcc(void)
{
  int power = digitalRead(POWER);
  int acc = digitalRead(ACC);
  Serial.print(acc);
  Serial.println(power);
  if(power == HIGH && acc == HIGH)
  {
    digitalWrite(LED, HIGH);
    delay(3000);
    digitalWrite(LED, LOW);
    
  }
  else
  {
    digitalWrite(LED, LOW);
  }
  //delay(300);
}
