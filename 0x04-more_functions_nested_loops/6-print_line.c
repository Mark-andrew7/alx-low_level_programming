#include "main.h"
/**
 * print_line - draws a straight line
 * @n: integer to be checked
 */
void print_line(int n)
{
int x;

if (n <= 0)
_putchar('\n');
for  (x = 0; x <= n; x++)
_putchar(95);
_putchar('\n');
}
