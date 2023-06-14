#include "hash_tables.h"

/**
 * key_index - function that gives key of an index
 * @key: this is the key
 * @size: size of array of hash table
 * Return: index at which key/value pair is stored
 * Desription: uses djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
