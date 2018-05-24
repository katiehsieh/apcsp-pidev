#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);

  printf("a is %d and c is %d\n", a, c);
  b = a;
  a = c;
  c = b;
  printf("Now a is %d and c is %d\n", a, c);
}
