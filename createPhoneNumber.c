#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

char *create_phone_number(char phnum[15], const unsigned char nums[10])
{
  int i;
  int y;
  
  y = 0;
  for (i = 0; i < 14; i++)
    {
      if (i == 0)
        phnum[i] = '(';
      else if (i == 4)
        phnum[i] = ')';
      else if (i == 5)
        phnum[i] = ' ';
      else if (i == 9)
        phnum[i] = '-';
      else
      {
        phnum[i] = nums[y] + '0';
        y++;
      }
  }
    return phnum;
}