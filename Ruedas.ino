int ENA=3;
int IN1=7;
int IN2=6;
int ENB=2;
int IN3=5;
int IN4=4; 
void setup() {
 // put your setup code here, to run once:
 pinMode (ENA,OUTPUT);
 pinMode (IN1,OUTPUT);
 pinMode (IN2,OUTPUT);
 pinMode (ENB,OUTPUT);
 pinMode (IN3,OUTPUT);
 pinMode (IN4,OUTPUT);
}
void loop() {
 // put your main code here, to run repeatedly:
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2,LOW);
 analogWrite (ENA,100);
 digitalWrite (IN3, LOW);
 digitalWrite (IN4,HIGH);
 analogWrite (ENB,100);

} 

