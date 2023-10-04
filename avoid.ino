//避障
const int In1 = 9;
const int In2 = 10;    //left front
const int In3 = 6;      
const int In4 = 5;     //right front
const byte trigPin = 12;
const int echoPin = 13;
long duration, cm;
  
void setup(){
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);    
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2) / 29.1;  

  if (cm <= 15) {                      
    _stop();
    delay(100);
    _back();
    delay(500);
    _stop();
    delay(500);
    _left();
    delay(500);
    _stop();
    delay(500);
   }
  if (cm > 15) {             
    _forward();
    delay(100);
   }
   delay(50);
}
void _forward(){
  digitalWrite(In1 , LOW); 
  digitalWrite(In2 , HIGH);      // 左HIGH  ==   右210
  digitalWrite(In3 , LOW);
  analogWrite(In4 , 210);
} 
void _back(){
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
}
void _stop(){
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
}
void _right(){
  digitalWrite(In1, LOW);  
  digitalWrite(In2, HIGH);
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
  }
void _left(){
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  digitalWrite(In3, LOW);
  analogWrite(In4 , 200);
  }
