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
int x,y;
for (x = 48; x <= 57; x++)
{
if (x == 57)
{
y=255;
}
else
{
y=44;
}
putchar(x);
putchar(y);
putchar(32);
}
putchar ('\n');
return (0);
}
