#include "main.h"
/**
 * *_memcpy - copys memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
