#include <Adafruit_NeoPixel.h>   //彩色LED库
#include"note.h"
# define PIN1 6   //设置LED端口
# define MAX_LED 48    //特定的程序，最后一个数字是LED光带中LED的数量
#define fengmingqi 9//蜂鸣器接口
Adafruit_NeoPixel strip = Adafruit_NeoPixel( MAX_LED, PIN1, NEO_RGB + NEO_KHZ800 );  //彩色LED库的内部设置
int a = 2;// 将Arduino 的Pin2 连接至US-100 的Echo/RX
int b = 3;// 将Arduino 的Pin3 连接至US-100 的Trig/TX
void setup() 
{strip.setBrightness(50);//亮度
pinMode(a,INPUT);// 设置a 为输入模式。
pinMode(b,OUTPUT);// 设置b 为输出模式。
strip.begin();   //启动LED函数库  
strip.show();   //将所有的LED灯灭掉
}
void loop() 
{
long c = 0;//脉冲时间
long d = 0;//脉冲距离
// 通过Trig/Pin 发送脉冲，触发US-100 测距
digitalWrite(b,LOW); // 先拉低，以确保脉冲识别正确
delayMicroseconds(2);// 等待2us
digitalWrite(b,HIGH);// 开始通过Trig/Pin 发送脉冲
delayMicroseconds(12);// 设置脉冲宽度为12us (>10us)
digitalWrite(b,LOW);// 结束脉冲
c = pulseIn(a,HIGH);// 计算US-100 返回的脉冲时间
d = c*0.34/2; //距离=脉冲时间*声波的速度（340/s）/2
if(d>50&&d<=150)   //当脉冲距离>50mm并且<=150的时候，执行以下程序   
{
ala();  //喇叭发出a3的音调     
ledz();//使所有LED灯灭
leda();    //使1.2.3.27.28.29盏LED灯亮
}
if(d>150&&d<=200)
{
asi(); 
ledz();
ledb();
}
if(d>200&&d<=250)
{
bdo();
ledz();
ledc();
}
if(d>250&&d<=300)
{
bre();
ledz();
ledd();
}
if(d>300&&d<=350)
{
bmi();
ledz();
lede();
}
if(d>350&&d<=400)
{
bfa();
ledz();
ledf();
}
if(d>400&&d<=450)
{
bso();
ledz();
leda();
}
if(d>450&&d<=500)
{
bla();
ledz();
ledb();
}
if(d>500&&d<=550)
{
bsi();
ledz();
ledc();
}
if(d>550&&d<=600)
{
cdo();
ledz();
ledd();
}
if(d>600&&d<=800)
{
cre();
ledz();
lede();
}
if(d<=50)
{
noTone(9);
ledz();
}
if(d>800)
{ledz();
const int figure=28;//音符数
int melody[] ={NOTE_C5,NOTE_C5,NOTE_G5,NOTE_G5,NOTE_A5,NOTE_A5,NOTE_G5,NOTE_F5,NOTE_F5,NOTE_E5,NOTE_E5,NOTE_D5,NOTE_D5,NOTE_C5,NOTE_G5,NOTE_G5,NOTE_F5,NOTE_F5,NOTE_E5,NOTE_E5,NOTE_D5,NOTE_G5,NOTE_G5,NOTE_F5,NOTE_F5,NOTE_E5,NOTE_E5,NOTE_D5};
int noteDurations[] = {4,4,4,4,4,4,2,4,4,4,4,4,4,2,4,4,4,4,4,4,2,4,4,4,4,4,4,2,};
uint32_t U[48];
 for (int thisNote = 0; thisNote < figure; thisNote++) 
 {int noteDuration = 1000 / noteDurations[thisNote];
    tone(9, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
   for(uint16_t i=0,n=0;i<16&&n<255;i++,n=n+15)
 { 
  U[i]=strip.Color(thisNote*30%255,thisNote*60%255,255-n);
  }
  for(uint16_t i=16,n=0;i<32&&n<255;i++,n=n+15)
  {
    U[i]=strip.Color(thisNote*60%255,thisNote*30%255,255-n);
  }
  for(uint16_t i=32,n=0;i<48&&n<255;i++,n=n+15)
  {
    U[i]=strip.Color(thisNote*30%255,255-n,thisNote*60%255);
  }
   for(uint16_t i=0;i<48;i++) 
    {strip.setPixelColor(i,U[i]);
  strip.show();}
    
 }

}

delay(400);// 每秒测量2.5次
}
void ala()  //设置一个函数:以后想要使用{ }里的程序的话，可以直接打函数名，如：ala                
{
tone(9,NOTE_A4,300);//声音函数（LED端口,频率）.发出a3的音调
}
void asi()
{
tone(9,NOTE_B4,300);   //发出b3的音调
}
void bdo()
{
tone(9,NOTE_C4,300);   //发出c4的音调
}
void bre()
{
tone(9,NOTE_D4,300);   //发出d4的音调
}
void bmi()
{
tone(9,NOTE_E4,300);   //发出e4的音调
}
void bfa()
{
tone(9,NOTE_F4,300);   //发出f4的音调
}
void bso()
{
tone(9,NOTE_G4,300);   //发出g4的音调
}
void bla()
{
tone(9,NOTE_A4,300);   //发出a4的音调
}
void bsi()
{
tone(9,NOTE_B4,300);    //发出b4的音调
}
void cdo()
{
tone(9,NOTE_C5,300);    //发出c5的音调
}
void cre()
{
tone(9,NOTE_D5,300);    //发出d5的音调
}
void leda()
{
 uint32_t M[48] ;        //blue
  for(uint16_t i=0,n=0;i<16&&n<255;i++,n=n+15)
 { 
  M[i]=strip.Color(n,150,255-n);
  }
  for(uint16_t i=16,n=0;i<32&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(150,n,255-n);
  }
  for(uint16_t i=32,n=0;i<48&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(n,255-n,150);
  }for(uint16_t i=0;i<48;i++) 
strip.setPixelColor(i,M[i]);
strip.show();

}
void ledb()
{
uint32_t M[48] ;        //blue
  for(uint16_t i=0,n=0;i<16&&n<255;i++,n=n+15)
 { 
  M[i]=strip.Color(255-n,150,n);
  }
  for(uint16_t i=16,n=0;i<32&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(150,n,255-n);
  }
  for(uint16_t i=32,n=0;i<48&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(n,255-n,150);
  }for(uint16_t i=0;i<48;i++) 
strip.setPixelColor(i,M[i]);
strip.show();


}
void ledc()
{uint32_t M[48] ;        //blue
  for(uint16_t i=0,n=0;i<16&&n<255;i++,n=n+15)
 { 
  M[i]=strip.Color(n,150,255-n);
  }
  for(uint16_t i=16,n=0;i<32&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(150,255-n,n);
  }
  for(uint16_t i=32,n=0;i<48&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(n,255-n,150);
  }for(uint16_t i=0;i<48;i++) 
strip.setPixelColor(i,M[i]);
strip.show();
}

void ledd()
{
uint32_t M[48] ;        //blue
  for(uint16_t i=0,n=0;i<16&&n<255;i++,n=n+15)
 { 
  M[i]=strip.Color(n,150,255-n);
  }
  for(uint16_t i=16,n=0;i<32&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(150,n,255-n);
  }
  for(uint16_t i=32,n=0;i<48&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(255-n,n,150);
  }for(uint16_t i=0;i<48;i++) 
strip.setPixelColor(i,M[i]);
strip.show();

}
void lede()
{
 uint32_t M[48] ;        //blue
  for(uint16_t i=0,n=0;i<16&&n<255;i++,n=n+15)
 { 
  M[i]=strip.Color(255-n,150,n);
  }
  for(uint16_t i=16,n=0;i<32&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(150,255-n,n);
  }
  for(uint16_t i=32,n=0;i<48&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(n,255-n,150);
  }for(uint16_t i=0;i<48;i++) 
strip.setPixelColor(i,M[i]);
strip.show();

}
void ledf()
{
 uint32_t M[48] ;        //blue
  for(uint16_t i=0,n=0;i<16&&n<255;i++,n=n+15)
 { 
  M[i]=strip.Color(255-n,150,n);
  }
  for(uint16_t i=16,n=0;i<32&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(150,n,255-n);
  }
  for(uint16_t i=32,n=0;i<48&&n<255;i++,n=n+15)
  {
    M[i]=strip.Color(255-n,n,150);
  }for(uint16_t i=0;i<48;i++) 
strip.setPixelColor(i,M[i]);
strip.show();

}
void ledz()
{
  uint32_t u = strip.Color(0,0,0);    //black
  for(int i=0;i<48;i++)
strip.setPixelColor(i,u);  
}
/*
距离计算公式：
声波的速度=1秒340米
1秒=1000000微秒
1微秒=0.000001秒
1微秒声波的距离=340米*0.000001秒=0.00034米
c微秒声波的距离=c*0.00034米
1米=1000毫米
c微秒声波的距离=c*0.34毫米
声波往返1次
实际距离=c*0.34毫米/2
*/
