int a=2, b=3, c=4, d=5, e=6, f=7, g=8;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void displayDigit(int digit) {
  switch(digit) {
    case 0:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH);
      digitalWrite(c,HIGH); digitalWrite(d,HIGH);
      digitalWrite(e,HIGH); digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
      break;

    case 1:
      digitalWrite(a,LOW); digitalWrite(b,HIGH);
      digitalWrite(c,HIGH); digitalWrite(d,LOW);
      digitalWrite(e,LOW); digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;

    case 2:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH);
      digitalWrite(c,LOW); digitalWrite(d,HIGH);
      digitalWrite(e,HIGH); digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;

    case 3:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH);
      digitalWrite(c,HIGH); digitalWrite(d,HIGH);
      digitalWrite(e,LOW); digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;
  }
}

void loop() {
  for(int i=0; i<=3; i++) {
    displayDigit(i);
    delay(1000);
  }
}