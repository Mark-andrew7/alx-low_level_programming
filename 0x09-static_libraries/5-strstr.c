#include "main.h"
/**
 * _strstr - finds first occurrence
 * of the substring needle in the string haystack
 * The terminating null bytes (\0) are not compared
 * @haystack: string
 * @needle: substring
 * Return: beginning of substring or null
 */
char *_strstr(char *haystack, char *needle)
{
char *scanned = haystack;
char *sub = needle;

while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (scanned);
}
needle = sub;
scanned++;
haystack = scanned;
}
return (0);
}
