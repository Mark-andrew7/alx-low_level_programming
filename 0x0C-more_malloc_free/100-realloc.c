#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: New size of the memory block in bytes.
 * Return: Pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

if (new_size >= old_size)
{
for (i = 0; i < old_size; i++)
*((char *)new_ptr + i) = *((char *)ptr + i);
}
else
{
for (i = 0; i < new_size; i++)
*((char *)new_ptr + i) = *((char *)ptr + i);
}

free(ptr);

return (new_ptr);
}
