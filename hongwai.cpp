#include <IRremote.h>
int RECV_PIN = 10;//红外接收器的引脚
int pin1=12;//Ho!  Ho!  Ho! 
int pin2=4;
int pin3=6;
int pin4=8;//输出信号到UNO板


long upkey = 0x1FEA05F; //上键代码
long downkey = 0x1FED827;
long leftkey = 0x1FEE01F;
long rightkey = 0x1FE906F;
long OKkey = 0x1FE10EF;
long Akey = 0x1FE807F;
long Bkey = 0x1FE40BF;
long Ckey = 0x1FEC03F;
long Dkey = 0x1FE20DF;
long Ekey = 0x1FE609F;
long Clockwisekey = 0x1FE50AF;
long addkey = 0x1FEF807;
long minuskey = 0x1FE708F;
long pausekey = 0x1FE30CF;
long silentkey = 0x1FEB04F;
long switchkey = 0x1FE48B7;


IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn(); // 启动红外解码
  Serial.println("Initialisation complete.");
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
}


void loop()
{
  if (irrecv.decode(&results))
  {
    Serial.println(results.value, HEX);
     if (results.value==upkey)
    { 
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,HIGH);
    }
    if (results.value==downkey)
    { 
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);
    }
      if (results.value==leftkey)
    { 
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,HIGH);
    }
    if (results.value==rightkey)
    { 
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,HIGH);
    }
    if (results.value==OKkey)
    { 
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,HIGH);
    }
    if (results.value==Akey)
    { 
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);
    }
    if (results.value==Bkey)
    { 
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);
    }
    if (results.value==Ckey)
    { 
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,HIGH);
    }
    if (results.value==Dkey)
    { 
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,HIGH);
    }
    if (results.value==Ekey)
    { 
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);
    }
    if (results.value==Clockwisekey)
    { 
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,HIGH);
    }
    if (results.value==addkey)
    { 
      digitalWrite(pin1,HIGH);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);
    }
    if (results.value==minuskey)
    { 
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,HIGH);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);
    }
    if (results.value==pausekey)
    { 
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,HIGH);
      digitalWrite(pin4,LOW);
    }
    if (results.value==silentkey)
    { 
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,HIGH);
    }
    if (results.value==switchkey)
    { 
      digitalWrite(pin1,LOW);
      digitalWrite(pin2,LOW);
      digitalWrite(pin3,LOW);
      digitalWrite(pin4,LOW);
    }








    

    irrecv.resume();  //接收下一个值
  }
}
