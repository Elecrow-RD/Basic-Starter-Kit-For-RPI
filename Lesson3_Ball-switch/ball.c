/*
 * Created by keen
 * Modified by keen 
 * Compiling : gcc -Wall -o ball ball.c -lwiringPi
 * Run: sudo ./ball
 * Date: 28/03/2017
 */

#include <wiringPi.h>
#include <stdio.h>

#define ball 0
int val;
int main(void)
{
  printf( "Welcome to ball\n");
  printf( "Raspberry ball_test program\n" );
  printf( "Press Ctrl+C to exit\n" );
  wiringPiSetup();
  pinMode (ball, INPUT) ; 
  while(1)
  {
	val=digitalRead(ball);
	if(val==HIGH)
	{  
            delay(100);   
            if(val==HIGH)
		printf( "ball on\n");
	}
	else 
	{
		printf( "ball off\n");
	}
	delay(200);
  }
}
