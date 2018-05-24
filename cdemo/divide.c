#include <stdio.h>

int main()
{

  int div = 100;
  for (int i = 1; i < 101; i++)
  {
    if (div%i == 0)
    {
      printf("%d\n", i);
    }
  }

}
