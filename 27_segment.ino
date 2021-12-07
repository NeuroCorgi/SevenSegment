#define dataPin 11
#define clockPin 12
#define latchPin 13

#define DELAY 1

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void loop() {
  digitalWrite(4, LOW);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, 0x0);
  digitalWrite(latchPin, HIGH);
  digitalWrite(2, HIGH);
  delay(DELAY);
  
  digitalWrite(2, LOW);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, 0x5);
  digitalWrite(latchPin, HIGH);
  digitalWrite(3, HIGH);
  delay(DELAY);
  
  digitalWrite(3, LOW);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, 0x8);
  digitalWrite(latchPin, HIGH);
  digitalWrite(4, HIGH);
  delay(DELAY);
}
