#include <stdio.h>
#include <string.h>

struct Student {
  char firstname[50];
  char lastname[50];
  int age;
  int studentid;
};

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


void getUserInt(char* msg)
{
    char input[256];
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%d", msg) == 1) break;
      printf("Not a valid input, enter an integer: ");
    }
}


void printStudent(struct Student* student)
{
  printf("\nFirst name: %s\n", student->firstname);
  printf("Last name: %s\n", student->lastname);
  printf("Age: %d\n", student->age);
  printf("ID: %d\n", student->studentid);
}

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
