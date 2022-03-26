// C++ code
//
// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
}

int var;
void loop()
{
  
    var = digitalRead(4);
  if(var){
  digitalWrite(2, HIGH);
  }else{
  digitalWrite(2, LOW);
  }
  delay(10);
}
