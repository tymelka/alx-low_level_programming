/**
 * *_strcat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to concatenate from
 *
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)

{
int i, j;
i = 0;
j = 0;

while (dest[i] != 0)
{
i++;
}
while (src[j] != 0)
{
dest[i] = src[j];
i++;
j++;
}

return (dest);
}
