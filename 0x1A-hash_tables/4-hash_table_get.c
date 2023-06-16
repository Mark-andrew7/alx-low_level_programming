#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with key
 * @ht: hash table
 * @key: paired to value
 * Return: value of element, NULL if no key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *n;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
return (NULL);

n = ht->array[index];
while (n && strcmp(node->key, key) != 0)
n = n->next;

return ((n == NULL) ? NULL : n->value);
}
