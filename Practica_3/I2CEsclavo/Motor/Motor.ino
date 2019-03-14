#include<Wire.h>

void setup() {
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  Wire.begin(4);
  Wire.onReceive(evento);
}

void evento() {
  int z=Wire.read();
  
    if(z==0){
      digitalWrite(11,HIGH);
      digitalWrite(13,HIGH);
      
      
    }
    else if(z==1){
      digitalWrite(11,LOW);
      digitalWrite(13,HIGH);
      
    }
    else if(z==2){
      digitalWrite(11,HIGH);
      digitalWrite(13,LOW);
      
    }
    else if(z==3){
      
      digitalWrite(11,LOW);
      digitalWrite(13,LOW);
    }
   
    

    
    Serial.println(z);
    
  }

  void loop(){
    
}
