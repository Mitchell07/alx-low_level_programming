#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
  int n, answer;
  /* */
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  answer = n % 10;
  /* your code goes there */
  if    (answer > 5)
    {
      printf("Last digit of %d is %d and is greater than 5\n", n, answer);
    }
  else if    (answer == 0)
    {
      printf("Last digit of %d is %d and is 0\n", n, answer);
    }
  else if    (answer < 6 && answer != 0)
    {
      printf("Last digit of %d is %d and is less than 6 and not 0\n", n, answer);
    }
  return (0);
}
