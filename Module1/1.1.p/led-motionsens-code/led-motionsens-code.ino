int PIR = 2;
int led = 13;

void setup() 
{
  pinMode(PIR, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  if (digitalRead(PIR) == HIGH)
  {
    digitalWrite(led, HIGH);
    Serial.println("Motion Detected");
    delay(1000);
  }
  
  else
  {
    digitalWrite(led, LOW);
	Serial.println("No Motion Detected");
    delay(1000);
  }
}
