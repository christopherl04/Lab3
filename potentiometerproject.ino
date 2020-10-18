int sensorPin = A0;
int value = 0;
 
int redPin = 11;
int greenPin = 10;
int bluePin = 9;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  
  value = analogRead(sensorPin);
  Serial.println(value);
  if(value < 100)
  {
    setColor(255, 0, 0);
  }
  if(value >= 100)
  {
    if(value < 300)
    {
      setColor(0, 255, 0);
    }
  }
  if(value > 300)
  {
    setColor(0, 0, 255);
  }
}
 
void setColor(int redValue, int greenValue, int blueValue)
{
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);  
}
