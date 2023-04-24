#include "lists.h"
/**
 * free_listint - frees a list
 * @head: header pointer
 */
void free_listint(listint_t *head)
{
listint *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(head);
}
}
