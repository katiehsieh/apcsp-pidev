#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <time.h>

#define BLED_GPIO 17
#define GLED_GPIO 27
#define RLED_GPIO 22

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

//random number from 0 to 4
  int color;
  color = rand() % 4;
  printf("The number is %d\n", color);

//to turn off type: gpio 0 0 
//0 is blue, 2 is green, 3 is red
 while(1)
  {
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
  }


  return 0;
}
