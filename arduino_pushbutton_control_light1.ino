// C++ code
//introduce push button to control the LED light
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
    delay(5000);//delay for a long time before puttin it off
  }
    
  else{
    
  	//if pushed again generate a LOW
    digitalWrite(LEDgreen, LOW);
  }
  delay(10);//delay before light goes on when the push button is pressed 
  
}