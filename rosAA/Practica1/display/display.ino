
//#include "Keyboard.h"

const int a =22;
const int b =24;
const int c =26;
const int d =28;
const int e =30;
const int f =32;
const int g =34;
char inchar=0;

void setup (){
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  Serial.begin(9600);
  //Keyboard.begin();
}

void loop(){
  if(Serial.available()>0){
    inchar=Serial.read();
    Serial.println(inchar);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    switch(inchar)
    {
      case '1':
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      break;
      case '2':
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(g,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(d,HIGH);
      break;
      case '3':
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(g,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);      
      break;
      case '4':
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      break;     
      case '5':
      digitalWrite(a,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      break;     
      case '6':
      digitalWrite(a,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(c,HIGH);
      break;     
      case '7':
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      break;     
      case '8':
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;     
      case '9':
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;     
      case 'A':
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;     
      case 'B':
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;     
      case 'C':
      digitalWrite(a,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      break;     
      case 'D':
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(g,HIGH);
      break;     
      case 'E':
      digitalWrite(a,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;     
      case 'F':
      digitalWrite(a,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;     
      case 'G':
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;         
      case 'H':
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
    }
  }
}
