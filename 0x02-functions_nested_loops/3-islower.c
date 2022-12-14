#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 *  int_islower - Entry point
 *
 * Description: 'check if a character is lower cases'
 *
 * Return: Always 0 (Success)
 */

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
