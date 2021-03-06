#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include "main.h"

#define YELLOW_GPIO 5
#define RED_GPIO 6
#define BLUE_GPIO 13
#define GREEN_GPIO 19

//0 yellow 21
//1 red 22
//2 blue 23
//3 green 24
//4 start
//5 end

int button;
int color;
int score;

int main(int argc, char* argv[]) {

  //set "button" to input from PHP
  if (argc != 2) {
    printf("supply a single argument\n");
    return 1;
  }

  sscanf(argv[1], "%d", &button);

//  button = atoi(argv[1]);
  printf("button = %d\n", button);

  wiringPiSetupGpio();

  pinMode(YELLOW_GPIO, OUTPUT);
  pinMode(RED_GPIO, OUTPUT);
  pinMode(BLUE_GPIO, OUTPUT);
  pinMode(GREEN_GPIO, OUTPUT);


  if(button < 4) {

    //get variables from tempfile
    readtempfile();

    //light LED
    if(button == 0) {
      //printf("light up yellow\n");
      digitalWrite(YELLOW_GPIO, HIGH);
    }
    if(button == 1) {
      //printf("light up red\n");
      digitalWrite(RED_GPIO, HIGH);
    }
    if(button == 2) {
      //printf("light up blue\n");
      digitalWrite(BLUE_GPIO, HIGH);
    }
    if(button == 3) {
      //printf("light up green\n");
      digitalWrite(GREEN_GPIO, HIGH);
    }

    delay(500);

    //check
    if(button == color) {
      //correct
      score = score + 1;
      writetempfile();
      printf("start\n");
      printf("%d\n", score);
      setrgb();
    }
    else {
      //incorrect
      readtempfile();
      printf("end\n");
      printf("%d\n", score);
      //remove(".tempfile");
      endgame();
    }

  }

  else if(button == 4) {
    //start
    score = 0;
    writetempfile();
    printf("start\n");
    printf("%d\n", score);
    setrgb();
  }

  else if(button == 5) {
    //end
    readtempfile();
    printf("end\n");
    printf("%d\n", score);
    //remove(".tempfile");
    endgame();

  }

}
