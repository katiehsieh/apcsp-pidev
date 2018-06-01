#include <stdio.h>
#include <string.h>
#include "struct.h"

void printStudent(struct Student* student)
{
  printf("\nFirst name: %s\n", student->firstname);
  printf("Last name: %s\n", student->lastname);
  printf("Age: %d\n", student->age);
  printf("ID: %d\n", student->studentid);
}
