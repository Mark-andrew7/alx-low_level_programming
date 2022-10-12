#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable
 * @d: structure
 * @name: name
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return (NULL);
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
