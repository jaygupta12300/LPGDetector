int LedBuzz = 13;
int trans = 11;
int smokeA0 = A0;
// Your threshold value
int sensorThres = 600;
void setup() 
{
  pinMode(LedBuzz, OUTPUT);
  pinMode(trans, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}
void loop()
{
  int analogSensor = analogRead(smokeA0);
  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
    digitalWrite(LedBuzz, HIGH);
    digitalWrite(trans,HIGH);
    //tone(LedBuzz, 1000, 200);
  }
  else
  {
    digitalWrite(LedBuzz, LOW);
    digitalWrite(trans, LOW);
     noTone(LedBuzz);
  }
  delay(1000);
 }
