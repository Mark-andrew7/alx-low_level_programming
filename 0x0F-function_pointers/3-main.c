#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int arg1, arg2, result;
char o;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
return (argc == 1 ? 98 : 99);
}

arg1 = atoi(argv[1]);
arg2 = atoi(argv[3]);
o = *argv[2];
func = get_op_func(argv[2]);

if (!func || ((o == '/' || o == '%') && arg2 == 0))
{
printf("Error\n");
return (func ? 100 : 99);
}

result = func(arg1, arg2);
printf("%d\n", result);

return (0);
}
