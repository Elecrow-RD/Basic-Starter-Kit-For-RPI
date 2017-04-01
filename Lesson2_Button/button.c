/*
 * Created by keen
 * Modified by keen 
 * Address:www.elecrow.com
 * Compiling : gcc -Wall -o button button.c -lwiringPi
 * Run: sudo ./button
 * Date: 28/03/2017
 */
#include <wiringPi.h>
#include <stdio.h>
#define button 0
int val;
int main(void)
{
  printf( "Welcome to Elecrow\n");
  printf( "Raspberry button_test program\n" );
  printf( "Press Ctrl+C to exit\n" );
  wiringPiSetup();
  pinMode (button, INPUT) ; 
  while(1)
  {
    val=digitalRead(button);
    if(val==HIGH)
    {  
      delay(100);   
      if(val==HIGH)
      printf( "button on\n");
    }
    else 
    {
      printf( "button off\n");
    }
    delay(200);
  }
}
