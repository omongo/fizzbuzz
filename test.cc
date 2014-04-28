extern "C"
{
  #include <stdlib.h>
  #include "fizzbuzz.h"
}

#include "CppUTest/CommandLineTestRunner.h"

TEST_GROUP(FizzBuzzTest)
{
  char *buffer;

  void setup()
  {
    buffer = (char *) malloc(sizeof(char) * 9);
  }
  void teardown()
  {
    free(buffer);
  }
};

TEST(FizzBuzzTest, 1ShouldReturn1)
{
  STRCMP_EQUAL("1", fizzbuzz(1u, buffer));
}

TEST(FizzBuzzTest, 2ShouldReturn2)
{
  STRCMP_EQUAL("2", fizzbuzz(2u, buffer));
}

TEST(FizzBuzzTest, 3ShouldReturnFizz)
{
  STRCMP_EQUAL("Fizz", fizzbuzz(3u, buffer));
}

TEST(FizzBuzzTest, 6ShouldReturnFizz)
{
  STRCMP_EQUAL("Fizz", fizzbuzz(6u, buffer));
}

TEST(FizzBuzzTest, 5ShouldReturnBuzz)
{
  STRCMP_EQUAL("Buzz", fizzbuzz(5u, buffer));
}

TEST(FizzBuzzTest, 10ShouldReturnBuzz)
{
  STRCMP_EQUAL("Buzz", fizzbuzz(10u, buffer));
}

TEST(FizzBuzzTest, 15ShouldReturnFizzBuzz)
{
  STRCMP_EQUAL("FizzBuzz", fizzbuzz(15u, buffer));
}

TEST(FizzBuzzTest, 30ShouldReturnFizzBuzz)
{
  STRCMP_EQUAL("FizzBuzz", fizzbuzz(30u, buffer));
}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);
}
