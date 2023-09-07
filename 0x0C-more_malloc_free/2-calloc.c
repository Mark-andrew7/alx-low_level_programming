#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - allocates mem for an array
 * @nmemb: Number of elements.
 * @size: Size of each element.
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *pointer;

if (nmemb == 0 || size == 0)
return (NULL);

pointer = malloc(nmemb * size);
if (pointer == NULL)
return (NULL);

memset(pointer, 0, nmemb * size);
return (pointer);
}
