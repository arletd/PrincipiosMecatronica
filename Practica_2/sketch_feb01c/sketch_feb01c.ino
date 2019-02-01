int res1=0;
int res2=0;
void setup(){
  Serial.begin(9600);
}

void loop(){
  asm volatile(
  "LDI r22, 10 \n" //a
  "LDI r23, 20 \n" //b
  "MUL r23, r23 \n" //bb
  "MOV r24, r0 \n" // R4 bb
  "MOV r25, r1 \n" // R5 bb 
  "LDI r26, 30 \n" // c
  "MUL r22, 4  \n" // 4a
  "MUL r1, r26 \n" // 4ac  en R0 y R1
  "SUB r25, r1 \n" //
  "SBC r24, r0 \n"
  "movw %0, r24 \n"
  : "=r" (res1), "=r" (res2)
  );
 Serial.println(int(res1));
 Serial.println(res2);
 delay(1000);
}
