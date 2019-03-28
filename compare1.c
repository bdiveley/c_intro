#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //get ride of string and replace with string
    char *name = "Bailey";
    char *name2 = "Diveley";

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
