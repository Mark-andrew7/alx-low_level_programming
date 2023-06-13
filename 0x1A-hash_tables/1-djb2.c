#include "hash_tables.h"

/**
 * hash_djb2 - implements djb2 algorithim
 * @str: input string
 * Return: The hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + 5) + c; /* hash * 33 + c */
}
return (hash);
}
