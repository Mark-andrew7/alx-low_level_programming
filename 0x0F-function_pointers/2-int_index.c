#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in array @array
 * @cmp: pointer to function
 * Return: Integers, index integer in @array
 * -1 if size <= 0 or integer matching condition cmp
 * NULL if @array || @cmp is NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || !array || !cmp)
return (-1);
for (i < 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
