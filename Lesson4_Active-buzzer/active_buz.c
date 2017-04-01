/*
 * Created by keen
 * Modified by keen 
 * Compiling : gcc -Wall -o active_buz active_buz.c -lwiringPi
 * Run:sudo ./active_buz
 * Date: 28/03/2017
 */
#include <wiringPi.h>
#include <stdio.h>
#define buzzer 0
int main(void)
{
  printf( "Welcome to Elecrow\n");
  printf( "Raspberry Pi Active buzzer test program\n" );
  printf( "Press Ctrl+C to exit\n" );
  wiringPiSetup() ;
  pinMode (buzzer, OUTPUT) ; 
  while(1)
  {
   digitalWrite(buzzer,HIGH);
   delay(1000);
   digitalWrite(buzzer,LOW);
   delay(1000);
  }
}
