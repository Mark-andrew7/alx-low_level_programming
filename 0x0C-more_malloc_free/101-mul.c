#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}

if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
{
printf("Error\n");
return (98);
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);

printf("%d\n", multiply(num1, num2));
return (0);
}
