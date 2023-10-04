//循跡
int _speed = 0;
int LIR = 0;
int RIR = 0;
int _case = 0;

void _backward (int s){
  analogWrite(5,0);
  analogWrite(6,s);
  analogWrite(9,s);
  analogWrite(10,0);
}

void  _forward(int s){
  analogWrite(5,s);
  analogWrite(6,0);
  analogWrite(9,0);
  analogWrite(10,s+20);
}

void _left (int s){
  analogWrite(5,s);
  analogWrite(6,0);
  analogWrite(9,0);
  analogWrite(10,0);
}

void _right (int s){
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  analogWrite(10,s);
}

void _stop(){
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  analogWrite(10,0);
}

void _case_select(int _case_){
  if(_case_ == 3){
    _forward(_speed);
    delay(10);
  }
  else if(_case_ == 2){
    _right(_speed);
    delay(10);
  }
  else if(_case_ == 1){
    _left(_speed);
    delay(10);
  }
  else if(_case_ == 0){
    _backward(_speed);
  }
}

void setup() {
  pinMode(2,INPUT);      //右紅外線
  pinMode(3,INPUT);      //左紅外線
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  _speed = 150;
  LIR = digitalRead(3);
  RIR = digitalRead(2);
}
void loop() {
  LIR = digitalRead(3);
  RIR = digitalRead(2);
  _case = (RIR*2) + LIR;
  _case_select(_case);
   delay(10);
}
