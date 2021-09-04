void LCD(){
//LiquidCrystal lcd(13, 12, 6, 5, 4, 3); 

/// LCD connections
 lcd.setCursor(0,0); 

  lcd.print("    Welcome");

  lcd.setCursor(0,1);

  lcd.print("       To        "); 

  delay(3000);


  lcd.clear();

  lcd.setCursor(0,0);

  lcd.print("     AIR"); 

  lcd.setCursor(0,1);

  lcd.print("QUALITY MONITOR");  

  delay(3000); 


  

  ser.println("AT");  // Attenuation

  delay(1000);
  ser.println("AT+GMR"); // To view version info for ESP-01 output: 00160901 and ESP-12 output: 0018000902-AI03

  delay(1000);

  ser.println("AT+CWMODE=3"); // To determine WiFi mode


 
  
  
  
  
  }
