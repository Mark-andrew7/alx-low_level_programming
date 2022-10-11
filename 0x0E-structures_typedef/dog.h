#ifndef DOG_H
#define DOG_H


/**
 * struct dog - structure for dog variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
