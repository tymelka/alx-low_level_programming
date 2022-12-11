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
for (x = 0; x < 10; x++)
{
if (x == 0)
{
putchar('0');
}
else
{
putchar((x%10) + '0');
}
}
putchar ('\n');
return (0);
}
