#include <Servo.h>

#define ldr 3
#define ldr2 4
#define ldr3 5
Servo serv;



void setup() {
  // put your setup code here, to run once:
  serv.attach(9);                      
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = digitalRead(ldr);
  int d2 = digitalRead(ldr2);
  int d3 = digitalRead(ldr3);


  Serial.println(data);
  if(d3 = 0){
  if (data == 1){
    serv.write(50);
    delay(10);
    serv.write(0);
  }
  if (data == 0){                                      
    serv.write(0);  
  }
  
  if (d2 == 1){
    serv.write(50);
    delay(10);
    serv.write(0);
  }
  if (d2 == 0){                                      
    serv.write(0);  
  }
  }
  
  if(d3 = 1){
  if (data == 0){
    serv.write(50);
    delay(10);
    serv.write(0);
  }
  if (data == 1){                                      
    serv.write(0);  
  }
  
  if (d2 == 0){
    serv.write(50);
    delay(10);
    serv.write(0);
  }
  if (d2 == 1){                                      
    serv.write(0);  
  }
  }


}
