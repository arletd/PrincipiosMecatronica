int prom=0;
void setup(){
  Serial.begin(9600);
  
}

void loop (){
  asm volatile(
  "LDI R22, 70 \n"
  "LDI R23, 5  \n"
  "LDI R24, 10 \n"
  "LDI R25, 15 \n"
  "LDI R26, 5 \n"
  "ADD R22, R23 \n"
  "ADD R22, R24 \n"
  "ADD R22, R25 \n"
  "ADD R22, R26 \n"
  "LDI R25, 5 \n"
  "lDI R24, 0 \n"
  "lop: INC R24 \n"
  "SUB r22,r25 \n"
  "brpl lop \n"
  "mov %0, R24 \n"
  : "=r" (prom)
  );
  Serial.println(prom);
  delay(1000);
}
