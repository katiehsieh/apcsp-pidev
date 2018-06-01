#include <stdio.h>
#include <string.h>

void getUserStr(char* msg)
{
    char input[256];
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%s", msg) == 1) break;
      printf("Not a valid input, enter a string: ");
    }
}
