#include "lists.h"
/**
 * dlistint_len - returns number of elements in
 * dlistint_t list
 * @h: node pointer
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
h = h->next;
return (i);
}
