void setup()
{
  pinMode(4,OUTPUT);
}

void loop()
{
    //clockwise
  digitalWrite(4, LOW);
  delay(1500);
  
 
  //counterclockwise
  digitalWrite(4, HIGH); 
  delay(1500); 
}