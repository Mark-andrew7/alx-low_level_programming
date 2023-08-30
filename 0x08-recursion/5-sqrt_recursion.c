#include "main.h"
int another_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: -1 if n does not have sqrt
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (another_sqrt_recursion(n, 0));
}

/**
 * another_sqrt_recursion - recursion function
 * @n: integer to check
 * @x: keeps record of number to check
 * Return: square root of number
 */
int another_sqrt_recursion(int n, int x)
{
if (x * x > n)
{
return (-1);
}
if (x * x == n)
{
return (x);
}
return (another_sqrt_recursion(n, x + 1));
}
