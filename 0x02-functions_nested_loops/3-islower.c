#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "main.h"

/**
 *  int_islower - Entry point
 *
 * Description: 'check if a character is lower cases'
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
