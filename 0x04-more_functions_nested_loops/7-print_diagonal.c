#include "main.h"
/**
 * print_diagonal - prints diagnol line
 * @n: integer to be checked
 * Return: Always 0
 */
void print_diagonal(int n)
{
int i, b;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (b = 0; b < i; b++)
{
_putchar(' ');
}
_putchar('/');
_putchar('\n');
}
}
}
