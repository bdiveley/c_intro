#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //get ride of string and replace with string
    char *name = "Bailey";
    if (name == NULL)
    {
      // returning 1 means there's an error
      return 1;
    }
    char *name2 = "Diveley";
    if (name2 == NULL)
    {
      // returning 1 means there's an error
      return 1;
    }

    //function that compares ASCII values
    if (strcmp(name, name2) == 0)
    {
      printf("same\n");
    }
    else
    {
      printf("different\n");
    }
}
