/*
 * Created by keen
 * Modified by keen 
 * Compiling: gcc -Wall -o remote remote.c -lwiringPi -llirc_client
 * Run: sudo ./remote
 * Date: 8/4/2017
 */

#include <wiringPi.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <lirc/lirc_client.h>
#include <time.h>

int main(void)
{
  printf( "Welcome to Elecrow...\n");
  printf( "Raspberry Pi IR remote program...\n" );
  printf( "Press Ctrl+C to exit\n..." );
  
  struct lirc_config *config;
  int buttonTimer = millis();
  char *code;
  if(wiringPiSetup() == -1){
    printf("setup wiringPi failed !");
    return 1;
  }

  if(lirc_init("lirc",1)==-1)
    exit(EXIT_FAILURE);

  if(lirc_readconfig(NULL,&config,NULL)==0){
    while(lirc_nextcode(&code)==0){
      if(code==NULL) continue;{
        if (millis() - buttonTimer > 400){
          printf("the code=%s\n",code);
        }
      }
      free(code);
    }
    lirc_freeconfig(config);
  }
  lirc_deinit();
  exit(EXIT_SUCCESS);
  return 0;
}

