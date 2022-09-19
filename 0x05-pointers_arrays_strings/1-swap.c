#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a:integer to be checked
 * @b: integer to be checked
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
