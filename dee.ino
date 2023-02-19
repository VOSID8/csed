void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  int a=1;
}
void fwd(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
}
void back(){
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}
void left(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}
void right(){
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
}
void anti(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}
void clk(){
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
}
void round1(){
  fwd();
  delay(2000);
  anti();
  delay(1000);
  fwd();
  delay(2000);
  anti();
  delay(1000);
  fwd();
  delay(2000);
  anti();
  delay(500);
  for(int i=0;i<20;i++){
    fwd();
    delay(100);
    left();
    delay(100);
  }
}
void round2(){
  for(int i=0;i<20;i++){
    fwd();
    delay(100);
    right();
    delay(100);
  }
  clk();
  delay(500);
  fwd();
  delay(3000);
  anti();
  delay(1500);
  fwd();
  delay(3000);
  anti();
  delay(1500);
  fwd();
  delay(3000); 
  return(0);
}
int a=1;
void loop() {
    round1();
    clk();
    delay(1500);
    round2();
}
