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
int x, y;
for (x = 48; x <= 57; x++)
{
putchar(x);
if (x==57)
{
break;
}
else
 {
putchar(44);
putchar(32);
}
}
putchar ('\n');
return (0);
}
