#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to first node
 * @idx: where new node should be added
 * @n: data
 * Return: adress of new node, NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = NULL;
listint_t *current = *head;

if (idx == 0)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

while (current != NULL && idx > 1)
{
current = current->next;
idx--;
}

if (current == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = current->next;
current->next = new_node;

return (new_node);
}
