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
  int n, sufx, intpart, remain, jump, pref;

for (n = 0; n < 99; n++)
{
if (n <= 9)
{
pref = 48;
sufx=44;
}
else
{
pref = 48 + n/10;
sufx=32;
}
intpart = n/10;
remain = n%10;
/*     printf("intpart is %d remainis  %d\n", intpart, remain); */
if (remain == 0)
{	     
jump = intpart;
n= n + jump;
}
else
{
putchar (pref);
putchar (n%10 + '0');
putchar (sufx);
putchar (32);  
}
}
return 0;
}
