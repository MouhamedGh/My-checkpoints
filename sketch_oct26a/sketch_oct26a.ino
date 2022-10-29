#define trig 7
#define echo 6
#define LED1 4
#define LED2 3
#define LED3 2
int t=0 ;
int d=0 ;
void setup ()
{
 Serial.begin (9600);
pinMode(trig , OUTPUT ) ;
pinMode ( echo , INPUT );
pinMode ( LED1 , OUTPUT ) ;
pinMode ( LED2 , OUTPUT ) ;
pinMode ( LED3 , OUTPUT ) ;
}
void loop ()
{
digitalWrite ( trig , LOW );
delayMicroseconds(5);
digitalWrite (trig , HIGH);
delayMicroseconds(10);
digitalWrite (trig , LOW);
delayMicroseconds(5);
t=pulseIn(echo,HIGH);
d=0.0343*(t/2) ;
Serial.println("Distance");
Serial.print(d) ;
Serial.println("cm");

if  (d<=5)
{
digitalWrite ( LED1, HIGH ) ;
digitalWrite (LED2 , LOW ) ;
digitalWrite (LED3 , LOW) ;
}
else if 
(d>5 and d<16) 
{
digitalWrite (LED2 , HIGH ) ;
digitalWrite (LED1 , LOW ) ;
digitalWrite (LED3 , LOW ) ;
}
else 
{
  digitalWrite (LED3 , HIGH ) ;
digitalWrite (LED1 , LOW ) ;
digitalWrite (LED2 , LOW ) ;
}

}
