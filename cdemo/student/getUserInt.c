#include <stdio.h>

void getUserInt(int *msg)
{
    char input[256];
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%d", msg) == 1) break;
      printf("Not a valid input, enter an integer: ");
    }
}
