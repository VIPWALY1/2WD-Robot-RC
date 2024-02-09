char Reading;
void setup()
{
  Serial.begin(9600);
 for (int i=2;i<=5;i++)
   pinMode(i,1);
}

void loop()
{ 
  Reading=Serial.read();
  switch(Reading)
    {
      case'F':
      digitalWrite(2,1);
      digitalWrite(3,0);
      digitalWrite(4,1);
      digitalWrite(5,0);   
      Serial.println("forw");
      break;
    
      case'W':
     Serial.println("back");
      digitalWrite(2,0);
      digitalWrite(3,1);
      digitalWrite(4,0);
      digitalWrite(5,1);
      break;
    
      case'A': 
    Serial.println("Left");  
      digitalWrite(2,0);
      digitalWrite(3,0);
      digitalWrite(4,1);
      digitalWrite(5,0);
      break;

      case'D': 
    Serial.println(" Right");
      digitalWrite(2,1);
      digitalWrite(3,0);
      digitalWrite(4,0);
      digitalWrite(5,0);
      break;
    
      case'0':
      Serial.println("Stop");
      digitalWrite(2,0);
      digitalWrite(3,0);
      digitalWrite(4,0);
      digitalWrite(5,0);
      Serial.println("Stop");
      break;
  }}
