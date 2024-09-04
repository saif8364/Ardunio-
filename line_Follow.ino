#define motor_Left_F 5
#define motor_Left_B 6
#define motor_right_F 10
#define motor_right_B 11
#define  left 8
#define  center 9
#define  right 12


int black= 1;
int white=0;
//6 , 7 
//10,11
//sensor 8,9,12,13


void setup() {
  Serial.begin(9600);
  pinMode(left,INPUT);
    pinMode(center,INPUT);
      pinMode(right,INPUT);
       
pinMode(motor_Left_F,OUTPUT);
pinMode(motor_Left_B,OUTPUT);
pinMode(motor_right_F,OUTPUT);
pinMode(motor_right_B,OUTPUT);
}

void loop() {
line();

}
void forward(){
  analogWrite(motor_Left_F,100);
 analogWrite(motor_Left_B,0);


analogWrite(motor_right_F,100);
 analogWrite(motor_right_B,0);

}

void Backward(){
  analogWrite(motor_Left_F,0);
 analogWrite(motor_Left_B,100);


analogWrite(motor_right_F,0);
 analogWrite(motor_right_B,100);

}
void Right(){
  analogWrite(motor_Left_F,0);
 analogWrite(motor_Left_B,100);


analogWrite(motor_right_F,0);
 analogWrite(motor_right_B,100);

}




void line(){
  //8 ,12 S1  left , S3 right 
int Left =digitalRead(left);
int Center =digitalRead(center);
int Right =digitalRead(right);


if(Left==0 && Center==1 && Right==0 ){
   analogWrite(motor_Left_F,100);
 analogWrite(motor_Left_B,0);


analogWrite(motor_right_F,100);
 analogWrite(motor_right_B,0);

}
if(Left==1 && Center==0 && Right==0){
   analogWrite(motor_Left_F,0);
 analogWrite(motor_Left_B,0);


analogWrite(motor_right_F,100);
 analogWrite(motor_right_B,0);

}
if(Left==0 && Center==0 && Right==1){
   analogWrite(motor_Left_F,100);
 analogWrite(motor_Left_B,0);


analogWrite(motor_right_F,0);
 analogWrite(motor_right_B,0);

}
if(Left==1 && Center==1 && Right==1){
   analogWrite(motor_Left_F,100);
 analogWrite(motor_Left_B,0);


analogWrite(motor_right_F,100);
 analogWrite(motor_right_B,0);

}


}
