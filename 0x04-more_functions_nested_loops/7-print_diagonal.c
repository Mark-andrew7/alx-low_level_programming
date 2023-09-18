#include "main.h"
/**
 * print_diagnol - prints diagnol line
 * @n: integer to be checked
 * Return: Always 0
 */
void print_diagonal(int n)
{
int i;
int b;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (b = 0; b < i; b++)
{
_putchar(92);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
