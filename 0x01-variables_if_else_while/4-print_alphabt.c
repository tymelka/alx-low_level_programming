#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'q' && x != 'e')
{
putchar(x);
}
}
putchar ('\n');
return (0);
}
