#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <time.h>

#define BLED_GPIO 17
#define GLED_GPIO 27
#define RLED_GPIO 22

int main()
{
 //Colors are red(1), green(3), blue(2), yellow(0)
 //Yellow is red and green 

  time_t t;
  srand((unsigned) time(&t));

  wiringPiSetupGpio();
  pinMode(BLED_GPIO, OUTPUT);
  pinMode(GLED_GPIO, OUTPUT);
  pinMode(RLED_GPIO, OUTPUT);

  int color;
  color = rand() % 4;
  color = 0;
  printf("The number is %d\n", color);

 
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
