int PIR = 2;
int led = 13;

void setup() 
{
  pinMode(PIR, INPUT);
  pinMode(led, OUTPUT);
  attachInterrupt(0,senseMotion, RISING);
  Serial.begin(9600);
}

void loop()
{
    if (digitalRead(PIR) == LOW)
    {
      digitalWrite(led, LOW);
      Serial.println("No Motion Detected");
      delay(3000);
    }
}
  
  void senseMotion()
  {
    if (digitalRead(PIR) == HIGH)
    {
      digitalWrite(led, HIGH);
      Serial.println("Motion Detected");
      delay(1000);
    }
  }
