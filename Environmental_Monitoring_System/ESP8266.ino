void esp_8266()

{

  
   // TCP connection AT+CIPSTART=4,"TCP","184.106.153.149",80 

    String cmd = "\nAT+CIPSTART=4,\"TCP\",\"";  // Establish TCP connection
    /*
     AT+CIPSTART=id,type,addr,port
     
    id: 0-4, id of connection
    type: String, “TCP” or “UDP”
    addr: String, remote IP
    port: String, remote port
 
    */
    cmd += "184.106.153.149"; // api.thingspeak.com

    cmd += "\",80";

    ser.println(cmd);

    Serial.println(cmd); 

 

  String getStr = "GET /update?api_key=";  // API key

  getStr += apiKey;

  //getStr +="&field1=";

  //getStr +=String(h);

  getStr +="&field1=";

  getStr +=String(t);

  getStr += "\r\n\r\n";

  // send data length

  cmd = "AT+CIPSEND="; // Send data AT+CIPSEND=id,length

  cmd += String(getStr.length());

  ser.println(cmd);

  Serial.println(cmd);

  delay(1000);

  ser.print(getStr);

  Serial.println(getStr);
  
  
 

  // thingspeak needs 16 sec delay between updates

  delay(17000);  

}
