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
int n, intpart, remain, jump, pref;

for (n = 0; n < 99; n++)
{
if (n <= 9)
{
pref = 48;
}
else
{
pref = 48 + n / 10;

}
intpart = n / 10;
remain = n % 10;
/*     printf("intpart is %d remainis  %d\n", intpart, remain); */
if (remain == 0)
{
jump = intpart;
n = n + jump;
}
else
{
putchar (pref);
putchar (n % 10 + '0');
if (n != 89)
{
putchar (44);
}
if (n != 89)
{
putchar (32);
}
}
}
putchar('\n');
return (0);
}
