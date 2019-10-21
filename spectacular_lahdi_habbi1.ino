int counter = 0;
int currentState = 0;
int previousState = 0;
void setup()
{
  pinMode(13, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{ long duration , distance;
  digitalWrite(13, LOW);
  delayMicroseconds(2);
  digitalWrite(13,HIGH);
  delayMicroseconds(10);
  digitalWrite(13,LOW);
  duration =pulseIn(13,HIGH);
  distance = (duration/2) / 29.1;
  if (distance <=20)
  {
    currentState = 1;
  }
  else 
  {
    currentState = 0;
  }
  delay(100);
  if(currentState != previousState)
  {
    if(currentState ==1)
    {counter = counter + 1;
     Serial.println(counter);
    }   
  }
}