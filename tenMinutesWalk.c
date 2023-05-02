#include <stdbool.h>
#include <string.h>

// input is a null-terminated string

bool isValidWalk(const char *walk) {

  int ust;
  int alt;
  int i;
  
  ust = 0;
  alt = 0;
  i = 0;
  if (strlen(walk) != 10)
    return (false);
  while (walk[i])
  {
    if (walk[i] == 'n' || walk[i] == 's')
    {
      if (walk[i] == 'n')
        ust++;
      if (walk[i] == 's')
        ust--;
    }
    if (walk[i] == 'w' || walk[i] == 'e')
    {
      if (walk[i] == 'w')
        alt++;
      if (walk[i] == 'e')
        alt--;
    }
    i++;
  }
  if (alt == 0 && ust == 0)
    return (true);
  return (false);
}