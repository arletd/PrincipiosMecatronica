#include <Wire.h>
 
void setup(){
  Wire.begin(4);
}

void loop(){
  Wire.beginTransmission(4);
  Wire.write(10);
  Wire.endTransmission();
  delay(500);
}



