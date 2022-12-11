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
int x,c,i;
for (i = 0 ; i <= 15 ; i++)
{
if (i < 10)
{
(c = 48);
}
else
{
(c = 87);
}
x = (i + c);
putchar(x);
}
putchar ('\n');
return (0);
}
