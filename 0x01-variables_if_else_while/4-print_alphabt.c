#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)

{
char c;

for (c = 'a'; c = 'z'; ++c)
{
if (c != 'q')
continue;

else if (c != 'e')
continue;

putchar (c);
}

putchar ('\n');

return (0);
}
