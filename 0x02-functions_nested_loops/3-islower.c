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
  int result, res;

  res = islower(c);

    if res=0
    {
      result = 1;
   else
      result = 0;
    }
  return result;
}
