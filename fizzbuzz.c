#include <stdio.h>

char *fizzbuzz(unsigned input, char *const buffer)
{
  if (input % 15 == 0)
    sprintf(buffer, "FizzBuzz");
  else if (input % 5 == 0)
    sprintf(buffer, "Buzz");
  else if (input % 3 == 0)
    sprintf(buffer, "Fizz");
  else
    sprintf(buffer, "%d", input);
  return buffer;
}
