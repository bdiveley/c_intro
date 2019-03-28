#include <stdio.h>
#include <cs50.h>

void swap(int *a, int *b);

int main(void) {

  int i;
  printf("Input: ");
  scanf("%i", &i);

  int j;
  printf("Input: ");
  scanf("%i", &j);

// must pass in the memory pointers not the values of each variable
  swap(&i, &j);
  printf("%i, %i\n", i, j);

}

// function expects to receive two memory pointers
void swap(int *a, int *b)
{
  // saves value held in pointer location in a in temp variable
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
