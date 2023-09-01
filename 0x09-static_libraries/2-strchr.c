#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 * @s: input string
 * @c: input character
 * Description: locates a character in string
 * Return: returns a ptr to 1st occurrence of
 * the char c in str s, else, return NULL
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (c == *s)
{
return (s);
}
s++;
}
if (!c)
{
return (s);
}
return (NULL);
}
