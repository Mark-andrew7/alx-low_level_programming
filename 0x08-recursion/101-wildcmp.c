#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * wildcmp - compares two strings with wildcard '*'
 * @s1: the first string
 * @s2: the second string with wildcard '*'
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{

while (*s2 == '*')
s2++;

if (*s2 == '\0')
return (1);

while (*s1 != '\0')
{
if (wildcmp(s1, s2))
return (1);
s1++;
}
return (0);
}

if (*s1 == *s2 || (*s2 == '?' && *s1 != '\0'))
return (wildcmp(s1 + 1, s2 + 1));

return (0);
}
