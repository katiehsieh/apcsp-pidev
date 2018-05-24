#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  printf("a is %d and b is %d\n", a, b);

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }

  // if statement to test is a is equal to b
  if (a == b)
  {
    printf("a is equal to b\n");
  }
  else
  {
    printf("a is not equal to b\n");
  }

  // if statement to test is a is not equal to b
  if (a != b)
  {
    printf("a is not equal to b\n");
  }
  else
  {
    printf("a is equal to b\n");
  }

  // if statement to test is a is greater than b
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is not greater than b\n");
  }

  // if statement to test is a is greater than or equal to b
  if (a > b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is not greater than or equal to b\n");
  }

  // if statement to test is a and b are both equal to 0
  if (a == 0 && b == 0)
  {
    printf("a and b are both equal to 0\n");
  }
  else
  {
    printf("a and/or b is/are not equal to 0\n");
  }

  // if statement to test is a and/or b are equal to 0
  if (a == 0 || b == 0)
  {
    printf("a and/or b is/are equal to 0\n");
  }
  else
  {
    printf("a and b are both not equal to 0\n");
  }

  // if statement to test is a is not equal to 0
  if (!(a == 0))
  {
    printf("a is not 0\n");
  }
  else
  {
    printf("a is 0\n");
  }

}
