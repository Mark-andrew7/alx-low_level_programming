#include "main.h"
/**
 * *_strncpy - two words
 * @dest : first parameter
 * @src : second parameter
 * @n : int parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}

for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
