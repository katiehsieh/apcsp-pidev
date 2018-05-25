#include <stdio.h>

void arrayAdd(int* arr, int s, int n)
{
  for (int i = 0; i < s+1; i++)
  {
    arr[i] = arr[i] + n;
  }
}

int main()
{
  int arr[100];
  int *pointer = arr;

  printf("Squared array\n");

  for (int i = 0; i < 100; i++)
  {
    arr[i] = i * i;
    printf("%d\n", arr[i]);
  }

  arrayAdd(pointer, 100, 5);

  printf("\nSquared array + n\n");

  for (int i = 0; i < 100; i++)
  {
    printf("%d\n", arr[i]);
  }
}
