/*
 * Created by keen
 * Modified by keen 
 * Compiling: gcc -Wall -o ultrasonic ultrasonic.c -lwiringPi
 * Run: sudo ./ultrasonic
 * Date: 28/03/2017
 */
#include <wiringPi.h>
#include <stdio.h>
#include <sys/time.h>

#define Trig    15
#define Echo    16

void ultraInit(void)
{
	pinMode(Echo, INPUT);
	pinMode(Trig, OUTPUT);
}

float disMeasure(void)
{
	struct timeval tv1;
	struct timeval tv2;
	long start, stop;
    	float dis;

	digitalWrite(Trig, LOW);
	delayMicroseconds(2);

	digitalWrite(Trig, HIGH);
	delayMicroseconds(10);  
	digitalWrite(Trig, LOW);
	while(!(digitalRead(Echo) == 1));
	gettimeofday(&tv1, NULL);  
	while(!(digitalRead(Echo) == 0));
	gettimeofday(&tv2, NULL);           
	start = tv1.tv_sec * 1000000 + tv1.tv_usec;
	stop  = tv2.tv_sec * 1000000 + tv2.tv_usec;
	dis = (float)(stop - start) / 1000000 * 34000 / 2;
	return dis;
}

int main(void)

{
   float dis;
   wiringPiSetup();        //Initialise WiringPi
   ultraInit();
   printf( "Welcome to Elecrow\n");
   printf( "Raspberry Ultrasonic Ranging Sensor test program\n" );
   printf( "Press Ctrl+C to exit\n" );
   while(1)
   {
     dis = disMeasure();
     printf("distance = %0.2f cm\n",dis);
     delay(1000);
   }
   return 0;
}
