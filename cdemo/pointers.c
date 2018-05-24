#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);


  float d = 1.23;
  float e = 3.14;
  float* ptrtod;
  float* ptrtoe;
  float f;
 
  ptrtod = &d;
  ptrtoe = &e;

  printf("The value of d is %f\n", *ptrtod);
  printf("The address of d is %f\n", &d);

  printf("The value of e is %f\n", *ptrtoe);
  printf("The address of e is %f\n", &e);

  f = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = f;

  printf("The value of d is now %f\n", *ptrtod);
  printf("The value of e is now %f\n", *ptrtoe);
}
