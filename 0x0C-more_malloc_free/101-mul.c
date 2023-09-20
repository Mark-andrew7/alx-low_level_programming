#include "main.h"
#include <stdlib.h>

/**
 * multiply - multiplies two positive numbers
 * @num1: first positive number
 * @num2: second positive number
 * Return: result of multiplication
 */
int multiply(int num1, int num2)
{
return (num1 * num2);
}

/**
 * is_positive_number - checks if a string represents a positive number
 * @str: string to check
 * Return: 1 if positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
if (*str == '-')
return (0);

while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}

return (1);
}
