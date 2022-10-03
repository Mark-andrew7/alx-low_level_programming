#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to copy of string
 *
 * @str: parameter
 *
 * Return: returns a pointer or null
 */
char *_strdup(char *str)
{
int i = 0, len = 0;
char *s;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
len++;
s = malloc(sizeof(char) * (len + 1));
if (s == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
s[i] = str[i];
}
s[len] = '\0';
return (s);
}
