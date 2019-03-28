#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = "Bailey";
    string name2 = "Diveley";
    int counter = 0;

    for (int i = 0; i < strlen(name); i++)
    {
      if (name[i] == name2[i])
      {
        counter += 1;
      }
    }
    if (counter == strlen(name))
    {
      printf("same\n");
    }
    else
    {
      printf("different\n");
    }
}
