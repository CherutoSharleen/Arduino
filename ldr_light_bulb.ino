// C++ code
//
const int Bulb = 4;
const int LDR = A0; 
void setup()
{
  Serial.begin(9600);
  pinMode(LDR, INPUT);//Analog Input
  pinMode(Bulb, OUTPUT);//Digital Output
  //pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(LDR));
  if (analogRead(LDR) > 500){
  	digitalWrite(Bulb, LOW); //More Light turn 
  } else{
  	digitalWrite(Bulb, HIGH);
  }
  delay(10);
}