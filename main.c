#include <stdio.h>
#include <stdlib.h>
#include "fizzbuzz.h"

int main(void)
{
  unsigned input;
  char *buffer = (char *) malloc(sizeof(char) * 9);
  scanf("%u", &input);
  if (input <= 99999999u)
    printf("%s\n", fizzbuzz(input, buffer));
  free(buffer);
}
