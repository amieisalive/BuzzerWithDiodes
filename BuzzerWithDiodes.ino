int buzz = 7;
int echo = 6;
int trig = 5;
int green = 4;
int yellow = 3;
int red = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzz,OUTPUT);
pinMode(echo,INPUT);
pinMode(trig, OUTPUT);
pinMode(green,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH); //zapnout vysílání
delayMicroseconds(10);
digitalWrite(trig,LOW);

float duration = pulseIn(echo,HIGH);
int distance = duration * 0.034 /2; 
if(distance >= 50) {
  digitalWrite(green,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  tone(buzz,220);
  delay(100);
  noTone(buzz);
}
else if (distance >= 30 && distance < 50){
  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  tone(buzz,440);
  delay(200);
   noTone(buzz);}
else {
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  tone(buzz,880);
  delay(400);
   noTone(buzz);
}

delay(50);
}
