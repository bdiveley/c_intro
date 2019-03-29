#include <stdio.h>
#include <stdlib.h>

void f(void);

int main(void)
{
  f();
}

void f(void)
{
  // allow memory for 10 integers, returns a pointer stored
  // when using malloc, you take on responsbility of memory
  // garbage collection

  int *x = malloc(10 * sizeof(int));
  x[9] = 50;
  x[4] = 14;
  printf("You inputed %i. \n", x[9]);
  printf("You inputed %i. \n", x[4]);
  free(x);
}
