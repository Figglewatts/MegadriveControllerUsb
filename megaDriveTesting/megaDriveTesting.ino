int upPin = 13;
int aBPin = 12;
int selectPin = 11;
int downPin = 10;
int leftPin = 9;
int rightPin = 8;
int startCPin = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(upPin, INPUT);
  pinMode(aBPin, INPUT);
  pinMode(selectPin, OUTPUT);
  pinMode(downPin, INPUT);
  pinMode(leftPin, INPUT);
  pinMode(rightPin, INPUT);
  pinMode(startCPin, INPUT);
}

void loop() {
  // first poll the buttons with Select=GND
  digitalWrite(selectPin, LOW);
  if(digitalRead(upPin) == LOW)
  {
    Serial.write("UP pressed\n");
  }
  if(digitalRead(downPin) == LOW)
  {
    Serial.write("DOWN pressed\n");
  }
  if(digitalRead(aBPin) == LOW)
  {
    Serial.write("A pressed\n");
  }
  if(digitalRead(startCPin) == LOW)
  {
    Serial.write("START pressed\n");
  }
  
  // now poll the buttons with Select=+5V
  digitalWrite(selectPin, HIGH);
  if(digitalRead(leftPin) == LOW)
  {
    Serial.write("LEFT pressed\n");
  }
  if(digitalRead(rightPin) == LOW)
  {
    Serial.write("RIGHT pressed\n");
  }
  if(digitalRead(aBPin) == LOW)
  {
    Serial.write("B pressed\n");
  }
  if(digitalRead(startCPin) == LOW)
  {
    Serial.write("C pressed\n");
  }
}
