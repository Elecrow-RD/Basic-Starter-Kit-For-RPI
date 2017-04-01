/*
 * Created by keen
 * Modified by keen 
 * Compiling : gcc -Wall -o RGBled RGBled.c -lwiringPi
 * Run: sudo nano ./RGBled
 * Date: 28/03/2017
 */
#include <wiringPi.h>
#include <stdio.h>
#define Rled 0
#define Gled 2
#define Bled 3
int main(void)
{
  printf( "Welcome to Elecorw\n");
  printf( "Raspberry Pi RGBled test program\n" );
  printf( "Press Ctrl+C to exit\n" );
  wiringPiSetup() ;
  pinMode (Rled,OUTPUT);
  pinMode (Gled,OUTPUT);
  pinMode (Bled,OUTPUT); 
  while(1)
  {
   digitalWrite(Rled,LOW);
   digitalWrite(Gled,HIGH);
   digitalWrite(Bled,HIGH); 
   delay(1000);
   digitalWrite(Rled,HIGH);
   digitalWrite(Gled,LOW);
   digitalWrite(Bled,HIGH); 
   delay(1000);
   digitalWrite(Rled,HIGH);
   digitalWrite(Gled,HIGH);
   digitalWrite(Bled,LOW); 
   delay(1000);
   digitalWrite(Rled,LOW);
   digitalWrite(Gled,LOW);
   digitalWrite(Bled,HIGH); 
   delay(1000);
   digitalWrite(Rled,LOW);
   digitalWrite(Gled,HIGH);
   digitalWrite(Bled,LOW); 
   delay(1000);
   digitalWrite(Rled,HIGH);
   digitalWrite(Gled,LOW);
   digitalWrite(Bled,LOW); 
   delay(1000);
  }
}
