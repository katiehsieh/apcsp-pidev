#include <stdio.h>
#include <wiringPi.h>

#define BLED_GPIO 17
#define GLED_GPIO 27
#define RLED_GPIO 22

int main()
{
  wiringPiSetupGpio();
  pinMode(BLED_GPIO, OUTPUT);
  pinMode(GLED_GPIO, OUTPUT);
  pinMode(RLED_GPIO, OUTPUT);

  while(1)
  {
    digitalWrite(GLED_GPIO, HIGH);
    for(int i=0; i<50; i++) { }
    digitalWrite(GLED_GPIO, LOW);
    for(int i=0; i<49; i++) { }
  }

  return 0;
}
