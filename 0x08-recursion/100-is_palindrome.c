#include <stdbool.h>
#include <string.h>

/**
 * is_palindrome_recursive - helper function to check if a string is a palindrome recursively
 * @s: the string to check
 * @start: the starting index
 * @end: the ending index
 * Return: true if palindrome, false if not
 */
bool is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (true);
}

if (s[start] != s[end])
{
return (false);
}

return (is_palindrome_recursive(s, start + 1, end - 1));
}

int is_palindrome(char *s)
{
int length = strlen(s);
return (is_palindrome_recursive(s, 0, length - 1)) ? 1 : 0;
}
