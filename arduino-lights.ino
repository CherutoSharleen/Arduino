// C++ code
//
int pushbutton = 2; //connected to pin 2 on Arduino
int LEDgreen = 3; //connected to pin 3 on Arduino
  
void setup()
{
  pinMode(pushbutton, OUTPUT); //click it for effect
  pinMode(LEDgreen, OUTPUT); //view the output
}

void loop()
{
  
  //Read from PushButton
  if (digitalRead(pushbutton) == HIGH){
    //when button is pushed it should give a HIGH
  	digitalWrite(LEDgreen, HIGH);
  }
    
  else{
    
  	//if pushed again generate a LOW
    digitalWrite(LEDgreen, LOW);
  }
  delay(130);//delay for 10 seconds 
  
}