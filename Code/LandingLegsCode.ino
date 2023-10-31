#include "IRremote.h"
#include <Servo.h>

int receiver = 7;
IRrecv irrecv(receiver); 
uint32_t last_decodedRawData = 0;
int i = 120;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

offset1 = 20;
offset2 = 0;
offset3 = 10;
offset4 = -13;

void translateIR()
{
    Serial.println(irrecv.decodedIRData.decodedRawData, HEX);
  switch (irrecv.decodedIRData.decodedRawData)
  {
    case 0xF807FF00: Serial.println("DOWN");    break;
    case 0xF609FF00: Serial.println("UP");    break;
  }
  last_decodedRawData = irrecv.decodedIRData.decodedRawData;
  if(last_decodedRawData == 0xF807FF00){
    for( i = 120; i>-10; i--){
      servo1.write(i+offset1);
      servo2.write(i+offset2);
      servo3.write(i+offset3);
      servo4.write(i+offset4);
      delay(5);
    }
  }
  if(last_decodedRawData == 0xF609FF00){
    for( i = -10; i<120; i++){
      servo1.write(i+offset1);
      servo2.write(i+offset2);
      servo3.write(i+offset3);
      servo4.write(i+offset4);
      delay(5);
    }
  }
}

void setup()
{
  servo1.write(i+offset1);
  servo2.write(i+offset2);
  servo3.write(i+offset3);
  servo4.write(i+offset4);

  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(6);

  Serial.begin(9600);
  irrecv.enableIRIn(); 

}


void loop()   
{
  if (irrecv.decode())
  {
    translateIR();
    irrecv.resume();
  }
}
