/**
 * *_strcat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to concatenate from
 *return: concatenated character
 */

char *_strcat(char *dest, char *src)

{
  int a,b;

  a=0;
  b=0;

  while (dest[a]!=0)
    {
      a++;
    }
  while (src[b]!=0)
    {
      dest[a]=src[b];
      a++;
      b++;
    }
    return(dest);
}
