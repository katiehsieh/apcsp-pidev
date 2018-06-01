#include <stdio.h>
#include <string.h>
#include "header.h"
#include "struct.h"

int main ()
{
  char msg[256];
  int numStudents;

  printf("How many students: ");
  getUserInt(msg);
  numStudents = *msg;
  struct Student studentArr[numStudents];

  //store students
  for (int i = 0; i < numStudents; i++)
  {
    printf("\nEnter first name: ");
    getUserStr(msg);
    strcpy(studentArr[i].firstname, msg);

    printf("Enter last name: ");
    getUserStr(msg);
    strcpy(studentArr[i].lastname, msg);

    printf("Enter age: ");
    getUserInt(msg);
    studentArr[i].age = *msg;

    printf("Enter student ID: ");
    getUserInt(msg);
    studentArr[i].studentid = *msg;
  }

  //print students
  printf("\n\nStudent List\n");
  for (int i = 0; i < numStudents; i++)
  {
    printStudent(&(studentArr[i]));
  }

}
