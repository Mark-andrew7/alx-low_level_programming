#include "lists.h"
/**
 * sum_dlistint - returns sum of all data of a
 * dlistint_t list
 * @head: node pointer
 * Return: sum of data, or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
