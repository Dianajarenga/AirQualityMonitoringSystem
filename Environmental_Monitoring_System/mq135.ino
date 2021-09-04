void mq135(){

  //delay(1000);

  t = analogRead(A0);  // Read sensor value and stores in a variable t

  Serial.print("Airquality and Component = ");

  Serial.println(t);

   if (t<=100)
   {
   lcd.print("O2 , CO2,Ar,N2,:Fresh Air");
   Serial.print("O2,CO2:Fresh Air ");
 
   }
  else if( t>=500 && t<=1000 )
   {
   lcd.print(" CO:Poor Air");
   Serial.print("CO:Poor Air");
  
   }
  else if (t>=1000 )
  {
  lcd.print(" NO2,SO2:Very Poor");
  Serial.print("NO2,SO2:Very Poor");
  
  }
  
  
 
  }
