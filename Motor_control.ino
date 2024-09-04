#define forward 7
#define backward 8
#define pwm 9


void setup() {
pinMode(forward,OUTPUT);
pinMode(backward,OUTPUT);
pinMode(pwm,OUTPUT);

}

void loop() {
  digitalWrite(forward,HIGH);
  digitalWrite(backward,LOW);
  analogWrite(pwm,100);
delay(2000);
digitalWrite(forward,LOW);
  digitalWrite(backward,LOW);
  analogWrite(pwm,100);
  delay(2000);
}
