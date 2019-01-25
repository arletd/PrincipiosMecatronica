



const int jump = A0;
int sensorValue=0;
int pinled=2;
const int but = 3;
int butValue=0;
void setup(){
  pinMode(pinled, OUTPUT);
  pinMode(but,INPUT);
  Serial.begin(9600);
}

void loop(){
  sensorValue=analogRead(jump);
  butValue=digitalRead(but);
//  Serial.print("Sensor = " );
  //Serial.print(sensorValue);
  //delay(2000);
  //Serial.print("Butt = " );
  Serial.println(butValue);
  if(sensorValue<650 && butValue !=HIGH ){
    digitalWrite(pinled,HIGH);
  }
  else{
     digitalWrite(pinled,LOW);
  }
}
