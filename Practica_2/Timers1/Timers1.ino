int led=20;
int ban=0;
void setup(){
cli();
TCCR1B = 0; 
TCCR1A = 0;
TCCR1B |= (1 << CS12);
TCNT1 = 500;
TIMSK1 |= (1 << TOIE1);
sei();
}
ISR(TIMER1_OVF_vect){
  if(ban=0){
    digitalWrite(led,HIGH);   
  }
  else{
    digitalWrite(led,LOW);   
  }
}
void loop()
{
}
