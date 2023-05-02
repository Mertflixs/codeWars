#include <stdlib.h>

int **multiplication_table(int n) {

  int **arr;
  int i;
  int j;
  int x;
  int temp;

  temp = 0;
  x = 0;
  arr = (int **)malloc(sizeof(int *) * n);
  for (i = 0; i < n; i++)
  {
    arr[i] = (int *)malloc(sizeof(int) * n + 1);
    for (j = 0; j < n; j++)
    {
      temp = (i + 1) * (j + 1);
      arr[i][j] = temp;
      temp = 0;
    }
    arr[i][j] = '\0';
    x++;
  }
  
  return (arr);

}