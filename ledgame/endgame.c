#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include "main.h"

#define BLED_GPIO 17
#define GLED_GPIO 27
#define RLED_GPIO 22
#define YELLOW_GPIO 5
#define RED_GPIO 6
#define BLUE_GPIO 13
#define GREEN_GPIO 19

int endgame() {

  wiringPiSetupGpio();
  pinMode(BLED_GPIO, OUTPUT);
  pinMode(GLED_GPIO, OUTPUT);
  pinMode(RLED_GPIO, OUTPUT);
  pinMode(YELLOW_GPIO, OUTPUT);
  pinMode(GREEN_GPIO, OUTPUT);
  pinMode(BLUE_GPIO, OUTPUT);
  pinMode(GREEN_GPIO, OUTPUT);


  digitalWrite(BLED_GPIO, LOW);   
  digitalWrite(GLED_GPIO, LOW);
  digitalWrite(RLED_GPIO, LOW);
  digitalWrite(YELLOW_GPIO, LOW);
  digitalWrite(RED_GPIO, LOW);
  digitalWrite(GREEN_GPIO, LOW);
  digitalWrite(BLUE_GPIO, LOW);


  return 0;
}
