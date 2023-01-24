#include "lists.h"
/**
 * add_node - adds node at beginning of a list_t list
 * @head: node pointer
 * @str: data
 * Return: adress of new element, or null if fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = *head;
*head = new;

return (new);
}
