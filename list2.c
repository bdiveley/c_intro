#include <cs50.h>
#include <stdio.h>

typedef struct node
{
  int number;
  struct node *next;
}
node;

int main(void) {
  node *numbers = NULL;

  while (true)
  {
    int number;
    printf("Number: ");
    scanf("%i", &number);

    if (number == INT_MAX)
    {
      break;
    }

    node *n = malloc(sizeof(node));
    if (!n)
    {
      return 1;
    }

    //add number to a list
    n->number = number;
    n->next = NULL;
    if (numbers)
    {
      for (node *ptr = numbers; ptr != NULL; ptr = ptr-> next)
      {
        if (ptr-> next == NULL)
        {
          ptr->next = n;
          break;
        }
      }
    }
    else
    {
      //caches the first node into numbers variable
      numbers = n;
    }
  }

}
