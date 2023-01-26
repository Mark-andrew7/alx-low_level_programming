#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: node pointer
 * @str: string to put in new node
 * Return: adress of new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = NULL;

if (head == NULL)
{
*head = new;
free(new);
}
while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
