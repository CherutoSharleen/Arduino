// C++ code
//

int pir_sensor = A0;
int light = 7;

void setup()
{
  pinMode(pir_sensor, INPUT);
  pinMode(light, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  Serial.println(analogRead(pir_sensor));
  if (analogRead(pir_sensor)> 0){
   
    Serial.println("Motion detected!!");
    digitalWrite(light,HIGH);  
    
    
  }
  else{
    Serial.println("No Motion detected!!");
  	digitalWrite(light,LOW);
  
  }
 
  
}
  
  
  
