// C++ code
//
void setup()
{
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(5, HIGH);
  delay(1000); 
  digitalWrite(5, LOW);
  delay(1000); 
  
  pinMode(3, OUTPUT);
  
  digitalWrite(3, HIGH);
  delay(1000); 
  digitalWrite(3, LOW);
  delay(1000); 
}
