#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - returns number of elements
 * @h: node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int n = 0;


temp = h;
while(temp)
{
temp = temp->next;
n++;
}
return(n);
}
