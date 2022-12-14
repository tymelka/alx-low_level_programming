#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* Description: print_alphabet 10 times - a function that prints the alphabet, in lowercas 10 times
*
* Return: Always 0 (Succes)
*/

void print_alphabet_x10(void)
{
int i, n;
for (n = 1; n <= 10; n++)
{
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
}
