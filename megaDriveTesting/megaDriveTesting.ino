int upPin = 13;
int aBPin = 12;
int selectPin = 11;
int downPin = 10;
int leftPin = 9;
int rightPin = 8;
int startCPin = 7;

int upFlag = 1;
int downFlag = 2;
int leftFlag = 4;
int rightFlag = 8;
int aFlag = 16;
int bFlag = 32;
int cFlag = 64;
int startFlag = 128;

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
    Serial.write(upFlag);
  }
  if(digitalRead(downPin) == LOW)
  {
    Serial.write(downFlag);
  }
  if(digitalRead(aBPin) == LOW)
  {
    Serial.write(aFlag);
  }
  if(digitalRead(startCPin) == LOW)
  {
    Serial.write(startFlag);
  }
  
  // now poll the buttons with Select=+5V
  digitalWrite(selectPin, HIGH);
  if(digitalRead(leftPin) == LOW)
  {
    Serial.write(leftFlag);
  }
  if(digitalRead(rightPin) == LOW)
  {
    Serial.write(rightFlag);
  }
  if(digitalRead(aBPin) == LOW)
  {
    Serial.write(bFlag);
  }
  if(digitalRead(startCPin) == LOW)
  {
    Serial.write(cFlag);
  }
}
