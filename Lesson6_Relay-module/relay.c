/*
 * Created by keen
 * Modified by keen 
 * Compiling : gcc -Wall -o relay relay.c -lwiringPi
 * Run: Run sudo ./relay
 * Date: 28/03/2017
 */
#include <wiringPi.h>
#include <stdio.h>
#define relay 0
char key;
int main(void)
{
  printf( "Welcome to Elecrow\n");
  printf( "Raspberry relay_test program\n" );
  printf( "Press Ctrl+C to exit\n" );
  wiringPiSetup();
  pinMode (relay, OUTPUT) ; 
  while(1)
  {
	printf( "Input 0 1 \n");
	key=getchar();
	if(key=='1')
	{
		digitalWrite(relay,HIGH);
	}
	else if(key=='0')
	{
		digitalWrite(relay,LOW);
	}
  }
}

