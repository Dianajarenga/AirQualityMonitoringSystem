
#include<Arduino.h>
#define Sensor A0
int gasLevel=0;


void setup(){
  
gasLevel=analogRead(Sensor);

Serial.begin(9600);  
  
  
  
  }

  
void loop(){

airSensor();

  
    }
