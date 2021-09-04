
void airSensor(){
int gasLevel=0;
String quality="";


  if (gasLevel<=100){
    
    quality=" Normal ";
    
    }
  
  else if (gasLevel<181){
    quality="CO and PPM recorded";
    
    
    }
    
  else if(gasLevel>181 && gasLevel<225){
    quality="NO2 is exceeding";
    }
  
  else if(gasLevel>300 && gasLevel<=350){
  
  quality="SO2 is increasing";
  }
  
  else {
    
    quality="Danger.Toxicity from air pollutants is depleting the ozone layer";
    
    }}
