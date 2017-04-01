/*
 * Created by keen
 * Modified by keen 
 * Compiling :gcc -Wall -o servo servo.c -lwiringPi
 * Run : sudo ./servo
 * Date: 28/03/2017
 */
#include <wiringPi.h>
#include <stdio.h>
int main (void)
{
	wiringPiSetup ();
	printf( "Welcome to Elecrow\n");
	printf( "Raspberry Pi 9G servo test program\n" );
	printf( "Press Ctrl+C to exit\n" );
	while(1)
	{
		int val;
		printf("Please input a angle.(0-360)\n");
		scanf("%d",&val);
		val=val*100/360+30;
		pinMode(1, PWM_OUTPUT);
		pwmSetMode(PWM_MODE_MS); 
		pwmSetClock(384); //clock at 50kHz (20us tick)
		pwmSetRange(1000); //range at 1000 ticks (20ms)
		pwmWrite(1,val);  //theretically 50 (1ms) to 100 (2ms) on my servo 30-130 works ok
		//return 0 ;
	}
}

