#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int num;

va_start(ap, n);
for (i = 0; i < n; i++)
{
num = va_arg(ap, int);
printf("%d", num);
if (i < (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");
va_end(ap);
}
