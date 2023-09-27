#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
size_t count = 0;

while (current != NULL)
{
listint_t *next = current->next;
free(current);
count++;

if (current >= next)
{
*h = NULL;
break;
}

current = next;
}

return (count);
}
