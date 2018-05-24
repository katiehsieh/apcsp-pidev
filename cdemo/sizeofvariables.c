#include<stdio.h>

int main()
{
  int a = 545;
  char b = b;
  float c = 1.23;
  double d = 3.141592654;
  unsigned int e = 545;
  short int f = 545;

  // print value and size of an int variable
  printf("int a value %d (oct %o, hex %x) and size %d bytes.\n", a, a, a, sizeof(a));

  // print value and size of a char variable
  printf("char b value %c (oct %o, hex %x) and size %c bytes.\n", b, b, b, sizeof(b));

  // print value and size of a floating point variable
  printf("float c value %f (oct %o, hex %x) and size %f bytes.\n", c, c, c, sizeof(c));

  // print value and size of a double precision floating point variable
  printf("double d value %lf (oct %o, hex %x) and size %lf bytes.\n", d, d, d, sizeof(d));

  // print value and size of a unsigned int variable
  printf("unsigned int e value %d (oct %o, hex %x) and size %d bytes.\n", e, e, e, sizeof(e));

  // print value and size of a short int variable
  printf("short int f value %d (oct %o, hex %x) and size %d bytes.\n", f, f, f, sizeof(f));
}

