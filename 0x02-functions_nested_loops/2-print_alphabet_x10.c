#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: Always 0 (Successful)
 */
void print_alphabet_x10(void)
{

int x;
char c;

for (x = 0; x < 10; ++x)
{
for (c = 'a'; c <= 'z'; ++c)
{
_putchar(c);
}

_putchar('\n');
}

}
