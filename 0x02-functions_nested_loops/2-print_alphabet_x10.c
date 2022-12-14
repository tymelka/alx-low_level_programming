#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  print_alphabet_x10 - Entry point
 * 
 * Description: 'print alphabet in small letter ten times'
 * 
 * Return: Always 0 (Success)
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
