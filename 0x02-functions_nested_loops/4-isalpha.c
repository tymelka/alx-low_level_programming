#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "main.h"
#include <stdio.h">
/**
 * _isalpha - a function that checks for alphabet character
 * @c: single letter input
 * Return: 1 if int c is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
