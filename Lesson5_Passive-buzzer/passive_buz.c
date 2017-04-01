/*
 * Created by keen
 * Modified by keen 
 * Compiling : g++ -o passive_buz passive_buz.c -lwiringPi
 * Run: sudo ./passive_buz
 * Date: 28/03/2017
 */
#include <wiringPi.h>
#include <stdio.h>
#define buzzer 15
int main(void)
{
  printf( "Welcome to Elecrow\n");
  printf( "Raspberry Pi Passive_buzzer test program\n" );
  printf( "Press Ctrl+C to exit\n" );
  wiringPiSetup() ;
  pinMode (buzzer, OUTPUT) ; 
  while(1)
  {
    for(int i=0;i<80;i++) // output a frequency sound 
  { 
    digitalWrite(buzzer,HIGH);// sound 
    delay(1);//delay1ms 
    digitalWrite(buzzer,LOW);//not sound 
    delay(1);//ms delay
   }
    for(int j=0;j<100;j++)// output a frequency sound 
    { 
      digitalWrite(buzzer,HIGH);// sound 
      digitalWrite(buzzer,LOW);//not sound 
      delay(2);//2ms delay
    }
  }
}
