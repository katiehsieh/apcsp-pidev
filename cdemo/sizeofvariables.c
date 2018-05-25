#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'b';
  float c = 1.23;
  double d = 3.141592654;
  unsigned int e = 545;
  short int f = 545;

  // print value and size of an int variable
  printf("int a value %d and size %d bytes.\n", a, sizeof(a));

  // print value and size of a char variable
  printf("char b value %c and size %d bytes.\n", b, sizeof(b));

  // print value and size of a floating point variable
  printf("float c value %f and size %d bytes.\n", c, sizeof(c));

  // print value and size of a double precision floating point variable
  printf("double d value %lf and size %d bytes.\n", d, sizeof(d));

  // print value and size of a unsigned int variable
  printf("unsigned int e value %d and size %d bytes.\n", e, sizeof(e));

  // print value and size of a short int variable
  printf("short int f value %d and size %d bytes.\n", f, sizeof(f));
}

