#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements
 * @h: a node in list_h
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t n = 0;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
n++;
}
return (n);
}
