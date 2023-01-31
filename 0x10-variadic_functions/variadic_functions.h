#define VARIADIC_FUNCTIONS_H_
#ifndef VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);


/**
 * struct format_struct - format-type class
 * @format: format identifier
 * @fmt_print_func: pointer to function that prints in the format of @format
 */
struct format_struct
{
char format;
void (*fmt_print_func)(va_list *arg_list);
};

typedef struct format_struct format_struct_ptr;


#endif
