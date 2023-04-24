#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning of list
 * @head: pointer to list
 * @n: data to insert
 * Return: address of new element, NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

newNode = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}
