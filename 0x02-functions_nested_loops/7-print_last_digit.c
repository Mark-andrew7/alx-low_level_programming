#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number being tested
 * Return: last value of digit
 */
int print_last_digit(int n)

{
n = n % 10;

if (n < 0)
n = -1;
_putchar(n + '0');
return (n);
}
