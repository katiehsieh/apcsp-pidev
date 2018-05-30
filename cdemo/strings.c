#include <stdio.h>
#include <string.h>

int main()
{
  char str1[] = "abcdefghijklmnopqrstuvwxyz";
  char str2[27];

  //lowercase alphabet loop
  char letter = 'a';
  for (int i = 0; i < 26; i++)
  {
    str2[i] = letter;
    letter = letter + 1;
  }
  str2[26] = '\0';

  printf("str1 is %s\n", str1);
  printf("str2 is %s\n", str2);

  //compare strings
  if (strcmp(str1, str2) == 0)
    printf("the strings are identical\n");
  else
    printf("the strings are different\n");

  //uppercase alphabet loop
  for (int i =0; i < 26; i++)
  {
    str2[i] = str2[i] - 32;
  }
  printf("str2 is now %s\n", str2);

  //compare strings
  if (strcmp(str1, str2) == 0)
    printf("the strings are identical\n");
  else
    printf("the strings are different\n");

  //combine strings
  char str3[53];
  strcpy(str3, str1);
  strcat(str3, str2);
  printf("str3 is %s\n", str3);
}
