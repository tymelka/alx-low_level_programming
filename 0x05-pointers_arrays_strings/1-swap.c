#include "main.h"
/**
 * swap_int - swap two integers
 * @a: value of first integer to swap
 * @b: value of second integer to swap
 * Return:  none
 */

void swap_int(int *a, int *b)

{
int tmp = *a;
*a = *b;
*b = tmp;
}
