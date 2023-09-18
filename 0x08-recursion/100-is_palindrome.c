#include <stdbool.h>
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int length = strlen(s);
int start = 0;
int end = length - 1;

while (start < end)
{
if (s[start] != s[end])
{
return 0;
}
start++;
end--;
}

return (1);
}
