#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees memory
 * @d: struct
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d)
{
if ((*d).name)
{
free((*d).name);
}
if ((*d).owner)
{
free((*d).owner);
}
free(d);
}
}
