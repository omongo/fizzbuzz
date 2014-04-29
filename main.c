#include <stdio.h>
#include <stdlib.h>
#include "fizzbuzz.h"

int main(void)
{
  unsigned input;
  char *buffer = (char *) malloc(sizeof(char) * 9);
  for (int i = 1; i <= 100; i++)
    printf("%d\t-\t%s\n", i, fizzbuzz(i, buffer));
  free(buffer);
}
