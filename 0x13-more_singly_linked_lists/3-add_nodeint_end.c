#include "lists.h"
/**
 * add_nodeint_end - adds new node at end of list
 * @head: pointer to first node
 * @n: data to insert
 * Return: address of new element, NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *lastnode;
listint_t *tmp = *head;

lastnode = malloc(sizeof(listint_t));
if (lastnode == NULL)
return (NULL)

lastnode->n = n;
lastnode->next = NULL;

if (*head == NULL)
{
*head = lastnode;
return (lastnode);
}

while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = lastnode
}
