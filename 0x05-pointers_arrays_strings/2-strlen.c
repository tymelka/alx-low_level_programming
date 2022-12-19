#include "main.h"
/**
 * swap_int - swap two integers
 * @a: value of first integer to swap
 * @b: value of second integer to swap
 * Return:  none
 */

int _strlen(char *s)
{
int stlen;

while (*s !='\0')
{
stlen= stlen + 1;
 s= s + 1;
}
 return (stlen);
}
