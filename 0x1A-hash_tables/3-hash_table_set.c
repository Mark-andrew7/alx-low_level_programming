#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table to be added
 * @key: pointer to a char array
 * @value: Associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
char *v_copy;
unsigned long int index, x;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

v_copy = strdup(value);
if (v_copy == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
for (x = index; ht->array[x]; x++)
{
if (strcmp(ht->array[x]->key, key) == 0)
{
free(ht->array[x]->value);
ht->array[x]->value = v_copy;
return (1);
}
}

new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(v_copy);
return (0);
}

new->value = v_copy;
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
