#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *result;
int i;

if (min > max)
return (NULL);

result = malloc(sizeof(int) * (max - min + 1));
if (result == NULL)
return (NULL);

for (i = 0; i <= max - min; i++)
{
result[i] = min + i;
}
return (result);
}
