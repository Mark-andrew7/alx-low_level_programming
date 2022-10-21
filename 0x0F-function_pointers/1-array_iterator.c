#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function as parameter
 * on each element of array
 * @array: array of parameters passed to action
 * @size: size of an array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (!action || !array)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
