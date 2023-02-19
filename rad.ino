const int g1=3;
const int g2=5;
const int g3=6;
const int g4=11;
const int y1=1;
const int y2=4;
const int y3=8;
const int r4=12;
const int r1=2;
const int r2=7;
const int r3=10;
const int y4=13;

void setup() {
  // put your setup code here, to run once:
  pinMode(g1,OUTPUT); //green lights
  pinMode(g2,OUTPUT);
  pinMode(g3,OUTPUT);
  pinMode(g4,OUTPUT);
  pinMode(y1,OUTPUT); //yellow lights
  pinMode(y2,OUTPUT);
  pinMode(y3,OUTPUT);
  pinMode(y4,OUTPUT);
  pinMode(r1,OUTPUT); //red lights
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  digitalWrite(r2,HIGH); //all other red on
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  
  for(int i=255;i>=0;i--){ //green starts to dim till zero
      analogWrite(g1,i);
      delay(20);
    }
  digitalWrite(y1,HIGH); //blink yellow 1
  delay(1000);
  digitalWrite(y1,LOW);

  digitalWrite(r2,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  delay(2000);


 
  digitalWrite(r1,HIGH); //all other red on
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
 
  for(int i=255;i>=0;i--){ //green starts to dim till zero
      analogWrite(g2,i);
      delay(20);
    }

  digitalWrite(y2,HIGH); //blink yellow 1
  delay(1000);
   digitalWrite(y2,LOW);
  
  digitalWrite(r1,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  delay(2000);

  digitalWrite(r2,HIGH); //all other red on
  digitalWrite(r3,HIGH);
  digitalWrite(r1,HIGH);
  
  for(int i=255;i>=0;i--){ //green starts to dim till zero
      analogWrite(g4,i);
      delay(20);
    }
  digitalWrite(y4,HIGH); //blink yellow 1
  delay(1000);
  digitalWrite(y4,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(r1,LOW);
  delay(2000);
   

  digitalWrite(r2,HIGH); //all other red on
  digitalWrite(r1,HIGH);
  digitalWrite(r4,HIGH);
  
  for(int i=255;i>=0;i--){ //green starts to dim till zero
      analogWrite(g3,i);
      delay(20);
    }

  digitalWrite(y3,HIGH); //blink yellow 1
  delay(1000);
  digitalWrite(y3,LOW);
  

  digitalWrite(r2,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(r4,LOW);
  delay(2000);
}
