#include <stdio.h>
#include <math.h>

float areaOfCircle(float r)
{
  float area = M_PI * r * r;
  printf("r = %f, area = %f\n", r, area);
  return area;
}

int main()
{
  for (float i = 3.5; i < 12.6; i++)
  {
    areaOfCircle(i);
  }
}
