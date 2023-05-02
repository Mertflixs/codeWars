#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


//  return a dynamically allocated `long long` array of results

long long *tribonacci(const long long signature[3], size_t n) {

  long long int *a;
  int i;
  unsigned int j;
  long long int first;
  long long int second;
  long long int third;
  long long int sum;
  
  if (n == 0)
    return (NULL);

  a = (long long int *)malloc(sizeof(long long int) * n);
  for (i = 0; i < 3; i++)
  {
    a[i] = signature[i];
  }
  first = a[0];
  second = a[1];
  third = a[2];
  for (j = 3; j < n; j++)
  {
    sum = first + second + third;
    a[j] = sum;
    first = second;
    second = third;
    third = sum;
  }
  return (a);
}