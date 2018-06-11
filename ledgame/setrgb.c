#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

#define BLED_GPIO 17
#define GLED_GPIO 27
#define RLED_GPIO 22
#define YELLOW_GPIO 5
#define RED_GPIO 6
#define BLUE_GPIO 13
#define GREEN_GPIO 19

int setrgb()
{
 //Colors are red(1), green(3), blue(2), yellow(0)
 //Yellow is red and green

  time_t t;
  srand((unsigned) time(&t));

  wiringPiSetupGpio();
  pinMode(BLED_GPIO, OUTPUT);
  pinMode(GLED_GPIO, OUTPUT);
  pinMode(RLED_GPIO, OUTPUT);
  pinMode(YELLOW_GPIO, OUTPUT);
  pinMode(GREEN_GPIO, OUTPUT);
  pinMode(BLUE_GPIO, OUTPUT);
  pinMode(GREEN_GPIO, OUTPUT);

//random number from 0 to 3
  readtempfile();
  color = rand() % 4;
  writetempfile();
  printf("start\n");
  printf("%d\n", score);

//turn 4 lights off
  digitalWrite(YELLOW_GPIO, LOW);
  digitalWrite(RED_GPIO, LOW);
  digitalWrite(GREEN_GPIO, LOW);
  digitalWrite(BLUE_GPIO, LOW);

//to turn off type: gpio 0 0
//0 is blue, 2 is green, 3 is red

  if (color == 0)
    {
    digitalWrite(GLED_GPIO, LOW);
    digitalWrite(BLED_GPIO, LOW);
    digitalWrite(RLED_GPIO, HIGH);
    for(int i=0; i<50; i++) { }
    digitalWrite(RLED_GPIO, LOW);
    digitalWrite(GLED_GPIO, HIGH);
    for(int i=0; i<49; i++) { }
    } else if(color == 1)
    {
    digitalWrite(GLED_GPIO, LOW);
    digitalWrite(BLED_GPIO, LOW);
    digitalWrite(RLED_GPIO, HIGH);
    for(int i=0; i<50; i++) { }
    digitalWrite(RLED_GPIO, LOW);
    for(int i=0; i<49; i++) { }
    } else if (color == 2)
    {
    digitalWrite(GLED_GPIO, LOW);
    digitalWrite(RLED_GPIO, LOW);
    digitalWrite(BLED_GPIO, HIGH);
    for(int i=0; i<50; i++) { }
    digitalWrite(BLED_GPIO, LOW);
    for(int i=0; i<49; i++) { }
    } else if (color == 3)
    {
    digitalWrite(RLED_GPIO, LOW);
    digitalWrite(BLED_GPIO, LOW);
    digitalWrite(GLED_GPIO, HIGH);
    for(int i=0; i<50; i++) { }
    digitalWrite(GLED_GPIO, LOW);
    for(int i=0; i<49; i++) { }
    }



  return 0;
}
