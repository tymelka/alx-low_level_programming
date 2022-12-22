/**
 * *_strncat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to concatenate from
 * @n: number nth character
 *
 * Return: concatenated strings
 */

char _strncat(char *dest, char *src, int n)

{
int i, j;
i = 0;
j = 0;

while (dest[i] != 0)
{
i++;
}
while (src[j] != 0 && j < n)
{
dest[i] = src[j];
i++;
j++;
}

return (*dest);
}
