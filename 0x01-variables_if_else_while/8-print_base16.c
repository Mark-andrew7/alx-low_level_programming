#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)

{
char b;

for (b = 48; b <= 57; ++b)
{
putchar(b);
}

for (b = 97; b <= 102; ++b)
{
putchar(b);
}

putchar('\n');

return (0);
}
