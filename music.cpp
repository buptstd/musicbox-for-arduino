#include <Adafruit_NeoPixel.h>   //彩色LED库
# define PIN 6   //设置LED端口
# define MAX_LED 30    //特定的程序，最后一个数字是LED光带中LED的数量
Adafruit_NeoPixel strip = Adafruit_NeoPixel( MAX_LED, PIN, NEO_RGB + NEO_KHZ800 );  //彩色LED库的内部设置
int a = 2;// 将Arduino 的Pin2 连接至US-100 的Echo/RX
int b = 3;// 将Arduino 的Pin3 连接至US-100 的Trig/TX
void setup() {
pinMode(a,INPUT);// 设置a 为输入模式。
pinMode(b,OUTPUT);// 设置b 为输出模式。
strip.begin();   //启动LED函数库  
strip.show();   //将所有的LED灯灭掉
}
void loop() {
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
if(d>50&&d<=150)   //当脉冲距离>50mm并且<=150的时候，执行以下程序   
{
ala();  //喇叭发出a3的音调   
ledz();   //使所有LED灯灭
leda();    //使1.2.3.27.28.29盏LED灯亮
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
ledg();
}
if(d>450&&d<=500)
{
bla();
ledz();
ledh();
}
if(d>500&&d<=550)
{
bsi();
ledz();
ledi();
}
if(d>550&&d<=600)
{
cdo();
ledz();
ledj();
}
if(d>600&&d<=800)
{
cre();
ledz();
ledk();
}
if(d<=50)
{
noTone(9);
ledz();
ledy();
}
if(d>800)
{
noTone(9);
ledz();
ledy();
}
delay(400);// 每秒测量2.5次
}
void ala()  //设置一个函数:以后想要使用{ }里的程序的话，可以直接打函数名，如：ala                
{
tone(9,440);    //声音函数（LED端口,频率）.发出a3的音调
}
void asi()
{
tone(9,493);   //发出b3的音调
}
void bdo()
{
tone(9,523);   //发出c4的音调
}
void bre()
{
tone(9,587);   //发出d4的音调
}
void bmi()
{
tone(9,659);   //发出e4的音调
}
void bfa()
{
tone(9,698);   //发出f4的音调
}
void bso()
{
tone(9,784);   //发出g4的音调
}
void bla()
{
tone(9,880);   //发出a4的音调
}
void bsi()
{
tone(9,988);    //发出b4的音调
}
void cdo()
{
tone(9,1046);    //发出c5的音调
}
void cre()
{
tone(9,1175);    //发出d5的音调
}
void ledj()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small yellow
uint32_t r = strip.Color(25,25,0);    //small small yellow
//设置LED发出的颜色
strip.setPixelColor(29, p);  
strip.setPixelColor(0, p);    
strip.setPixelColor(1, o);  
strip.setPixelColor(2, a);    
strip.setPixelColor(3, b);    
strip.setPixelColor(4, m);    
strip.setPixelColor(5, n);  
strip.setPixelColor(6, e);    
strip.setPixelColor(7, f);  
strip.setPixelColor(8, g);    
strip.setPixelColor(9, h);    
strip.setPixelColor(10, i);      
strip.setPixelColor(11, j);   
strip.setPixelColor(18, j);    
strip.setPixelColor(19, i);  
strip.setPixelColor(20, h);    
strip.setPixelColor(21, g);    
strip.setPixelColor(22, f);      
strip.setPixelColor(23, e);  
strip.setPixelColor(24, n);    
strip.setPixelColor(25, m);  
strip.setPixelColor(26, b);    
strip.setPixelColor(27, a);    
strip.setPixelColor(28, o );      
strip.show();
}
void ledi()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small blue
uint32_t r = strip.Color(25,25,0);    //small small blue
strip.setPixelColor(29, p);  
strip.setPixelColor(0, p);    
strip.setPixelColor(1, o);  
strip.setPixelColor(2, a);    
strip.setPixelColor(3, b);    
strip.setPixelColor(4, m);    
strip.setPixelColor(5, n);  
strip.setPixelColor(6, e);    
strip.setPixelColor(7, f);  
strip.setPixelColor(8, g);    
strip.setPixelColor(9, h);    
strip.setPixelColor(10, i);       
strip.setPixelColor(19, i);  
strip.setPixelColor(20, h);    
strip.setPixelColor(21, g);    
strip.setPixelColor(22, f);      
strip.setPixelColor(23, e);  
strip.setPixelColor(24, n);    
strip.setPixelColor(25, m);  
strip.setPixelColor(26, b);    
strip.setPixelColor(27, a);    
strip.setPixelColor(28, o);      
strip.show();
}
void ledh()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small blue
uint32_t r = strip.Color(25,25,0);    //small small blue
strip.setPixelColor(29, p);  
strip.setPixelColor(0, p);    
strip.setPixelColor(1, o);  
strip.setPixelColor(2, a);    
strip.setPixelColor(3, b);    
strip.setPixelColor(4, m);    
strip.setPixelColor(5, n);  
strip.setPixelColor(6, e);    
strip.setPixelColor(7, f);  
strip.setPixelColor(8, g);    
strip.setPixelColor(9, h);    
strip.setPixelColor(20, h);    
strip.setPixelColor(21, g);    
strip.setPixelColor(22, f);      
strip.setPixelColor(23, e);  
strip.setPixelColor(24, n);    
strip.setPixelColor(25, m);  
strip.setPixelColor(26, b);    
strip.setPixelColor(27, a);    
strip.setPixelColor(28, o);      
strip.show();
}
void ledg()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small blue
uint32_t r = strip.Color(25,25,0);    //small small blue
strip.setPixelColor(29, p);  
strip.setPixelColor(0, p);    
strip.setPixelColor(1, o);  
strip.setPixelColor(2, a);    
strip.setPixelColor(3, b);    
strip.setPixelColor(4, m);    
strip.setPixelColor(5, n);  
strip.setPixelColor(6, e);    
strip.setPixelColor(7, f);  
strip.setPixelColor(8, g);        
strip.setPixelColor(21, g);    
strip.setPixelColor(22, f);      
strip.setPixelColor(23, e);  
strip.setPixelColor(24, n);    
strip.setPixelColor(25, m);  
strip.setPixelColor(26, b);    
strip.setPixelColor(27, a);    
strip.setPixelColor(28, o);      
strip.show();
}
void ledf()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small blue
uint32_t r = strip.Color(25,25,0);    //small small blue
strip.setPixelColor(29, p);  
strip.setPixelColor(0, p);    
strip.setPixelColor(1, o);  
strip.setPixelColor(2, a);    
strip.setPixelColor(3, b);    
strip.setPixelColor(4, m);    
strip.setPixelColor(5, n);  
strip.setPixelColor(6, e);    
strip.setPixelColor(7, f);  
strip.setPixelColor(22, f);      
strip.setPixelColor(23, e);  
strip.setPixelColor(24, n);    
strip.setPixelColor(25, m);  
strip.setPixelColor(26, b);    
strip.setPixelColor(27, a);    
strip.setPixelColor(28, o);      
strip.show();
}
void lede()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small blue
uint32_t r = strip.Color(25,25,0);    //small small blue
strip.setPixelColor(29, p);  
strip.setPixelColor(0, p);    
strip.setPixelColor(1, o);  
strip.setPixelColor(2, a);    
strip.setPixelColor(3, b);    
strip.setPixelColor(4, m);    
strip.setPixelColor(5, n);  
strip.setPixelColor(6, e);     
strip.setPixelColor(23, e);  
strip.setPixelColor(24, n);    
strip.setPixelColor(25, m);  
strip.setPixelColor(26, b);    
strip.setPixelColor(27, a);    
strip.setPixelColor(28, o);      
strip.show();
}
void ledd()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small blue
uint32_t r = strip.Color(25,25,0);    //small small blue
strip.setPixelColor(29, p);  
strip.setPixelColor(0, p);    
strip.setPixelColor(1, o);  
strip.setPixelColor(2, a);    
strip.setPixelColor(3, b);    
strip.setPixelColor(4, m);    
strip.setPixelColor(5, n);  
strip.setPixelColor(24, n);    
strip.setPixelColor(25, m);  
strip.setPixelColor(26, b);    
strip.setPixelColor(27, a);    
strip.setPixelColor(28, o);      
strip.show();
}
void ledc()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small blue
uint32_t r = strip.Color(25,25,0);    //small small blue
strip.setPixelColor(29, p);  
strip.setPixelColor(0, p);    
strip.setPixelColor(1, o);  
strip.setPixelColor(2, a);    
strip.setPixelColor(3, b);    
strip.setPixelColor(4, m);      
strip.setPixelColor(25, m);  
strip.setPixelColor(26, b);    
strip.setPixelColor(27, a);    
strip.setPixelColor(28, o);      
strip.show();
strip.show();
}
void ledb()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small blue
uint32_t r = strip.Color(25,25,0);    //small small blue
strip.setPixelColor(29, p);  
strip.setPixelColor(0, p);    
strip.setPixelColor(1, o);  
strip.setPixelColor(2, a);    
strip.setPixelColor(3, b);    
strip.setPixelColor(26, b);    
strip.setPixelColor(27, a);    
strip.setPixelColor(28, o);      
strip.show();
}
void leda()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small blue
uint32_t r = strip.Color(25,25,0);    //small small blue
strip.setPixelColor(29, p);  
strip.setPixelColor(0, p);    
strip.setPixelColor(1, o);  
strip.setPixelColor(2, a);    
strip.setPixelColor(27, a);    
strip.setPixelColor(28, o);      
strip.show();
}
void ledk()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small blue
uint32_t r = strip.Color(25,25,0);    //small small blue
strip.setPixelColor(29, p);  
strip.setPixelColor(0, p);    
strip.setPixelColor(1, o);  
strip.setPixelColor(2, a);    
strip.setPixelColor(3, b);    
strip.setPixelColor(4, m);    
strip.setPixelColor(5, n);  
strip.setPixelColor(6, e);    
strip.setPixelColor(7, f);  
strip.setPixelColor(8, g);    
strip.setPixelColor(9, h);    
strip.setPixelColor(10, i);      
strip.setPixelColor(11, j);  
strip.setPixelColor(12, k);    
strip.setPixelColor(13, q);  
strip.setPixelColor(14, r);    
strip.setPixelColor(15, r);    
strip.setPixelColor(16, q);      
strip.setPixelColor(17, k);  
strip.setPixelColor(18, j);    
strip.setPixelColor(19, i);  
strip.setPixelColor(20, h);    
strip.setPixelColor(21, g);    
strip.setPixelColor(22, f);      
strip.setPixelColor(23, e);  
strip.setPixelColor(24, n);    
strip.setPixelColor(25, m);  
strip.setPixelColor(26, b);    
strip.setPixelColor(27, a);    
strip.setPixelColor(28, o);      
strip.show();
}
void ledy()
{
//颜色变量设置: 
uint32_t a = strip.Color(191,0,255);        //blue
uint32_t b = strip.Color(112,218,214);        //small purple          
uint32_t m = strip.Color(0,120,0);        //red
uint32_t n = strip.Color(69,255,0);      //orange
uint32_t e = strip.Color(255,255,0);      //yellow
uint32_t f = strip.Color(139,34,34);        //green
uint32_t g = strip.Color(255,0,255);      //green or blue
uint32_t h = strip.Color(0,0,255);        //blue
uint32_t i = strip.Color(0,128,128);      //purple
uint32_t j = strip.Color(0,255,0);        //big red
uint32_t k = strip.Color(165,255,0);      //big orange
uint32_t o = strip.Color(111,0,175);      //small blue
uint32_t p = strip.Color(31,0,95);    //small small blue
uint32_t q = strip.Color(85,85,0);      //small blue
uint32_t r = strip.Color(25,25,0);    //small small blue
strip.setPixelColor(0, p);  
strip.setPixelColor(1, o);    
strip.setPixelColor(28, o);      
strip.setPixelColor(29, p);      
strip.show();
}
void ledz()
{
//颜色变量设置: 
uint32_t u = strip.Color(0,0,0);    //black
strip.setPixelColor(0, u);  
strip.setPixelColor(1, u);    
strip.setPixelColor(2, u);  
strip.setPixelColor(3, u);    
strip.setPixelColor(4, u);    
strip.setPixelColor(5, u);    
strip.setPixelColor(6, u);  
strip.setPixelColor(7, u);    
strip.setPixelColor(8, u);  
strip.setPixelColor(9, u);    
strip.setPixelColor(10, u);    
strip.setPixelColor(11, u);      
strip.setPixelColor(12, u);  
strip.setPixelColor(13, u);    
strip.setPixelColor(14, u);  
strip.setPixelColor(15, u);    
strip.setPixelColor(16, u);    
strip.setPixelColor(17, u);      
strip.setPixelColor(18, u);  
strip.setPixelColor(19, u);    
strip.setPixelColor(20, u);  
strip.setPixelColor(21, u);    
strip.setPixelColor(22, u);    
strip.setPixelColor(23, u);      
strip.setPixelColor(24, u);  
strip.setPixelColor(25, u);    
strip.setPixelColor(26, u);  
strip.setPixelColor(27, u);    
strip.setPixelColor(28, u);    
strip.setPixelColor(29, u);    
}  
