#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

int int_islower(int c)
{
  int result;
  if (islower(c))
    {
      result = 1;
    }
  else
    {
      result = 0;
    }
  return result;
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  int r;

  r = islower(r);
  putchar(r + '0');
  putchar('\n');
  
  return (0);
}
