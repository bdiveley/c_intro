#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int capacity = 2;
  int numbers[capacity];

  int size = 0;
  while (size < capacity)
  {
    int number;
    printf("Number: ");
    scanf("%i", &number);
    numbers[size] = number;
    size++;
  }

  for (int i = 0; i < size; i++)
  {
    printf("You inputted %i\n", numbers[i]);
  }
}
