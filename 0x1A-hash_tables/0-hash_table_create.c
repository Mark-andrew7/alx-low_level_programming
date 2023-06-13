#include "hash_tables.h"

/**
 * hash_table_create - function that creates hash table
 * @size: array size
 * Return: pointer to hash table, NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_hash_table;
unsigned long int x;

new_hash_table = malloc(sizeof(hash_table_t));
if (new_hash_table == NULL)
return (NULL);

new_hash_table->size = size;
new_hash_table->array = malloc(sizeof(hash_node_t *) * size);

if (new_hash_table->array == NULL)
return (NULL);

for (x = 0; x < size; x++)
new_hash_table->array[x] = NULL;

return (new_hash_table);
}
