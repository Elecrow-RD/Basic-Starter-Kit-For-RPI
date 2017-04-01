/*
 * Created by keen
 * Modified by keen 
 * Compiling: gcc -Wall -o blink blink.c -lwiringPi
 * Run: sudo ./blink
 * Date: 28/03/2017
 */

#include <wiringPi.h>
#include <stdio.h>
#define led_pin 0

int main(void){

  printf( "Welcome to Elecrow...\n");
  printf( "Raspberry Pi blink program...\n" );
  printf( "Press Ctrl+C to exit\n..." );
  wiringPiSetup();
  pinMode(led_pin,OUTPUT); 
  while(1){
    digitalWrite(led_pin,HIGH);
    delay (1000);
    digitalWrite(led_pin,  LOW);
    delay (1000);
  }
}

