
#include <SoftwareSerial.h>
//allows serial communication with digital pin other than serial port
#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 6, 5, 4, 3); 

//includes libraries for LCD//Demonstrates the use a 16x2 LCD display.
float t=0;
char data = 0;
String apiKey = "XBQDVORXXGAROWDW";  // Write API key
SoftwareSerial ser(8,9); // RX, TX
void setup() 

{                
// enable debug serial 
  Serial.begin(9600); //  serial data transmission at Baudrate of 9600
  ser.begin(9600); 
  lcd.begin(16,2); 


 
 }
  
void loop() 
{
  
  mq135();
  
  esp_8266();
  LCD();

}
