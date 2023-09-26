#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to pointer of head node
 * @index: index at which node deleted
 * Return: 1 if success, 0 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;

if (*head == NULL)
return (-1);

current = *head;
prev = NULL;

if (index == 0)
{
listint_t *temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

while (current != NULL && index > 0)
{
prev = current;
current = current->next;
index--;
}

if (current == NULL)
return (-1);

prev->next = current->next;
free(current);
return (1);
}
