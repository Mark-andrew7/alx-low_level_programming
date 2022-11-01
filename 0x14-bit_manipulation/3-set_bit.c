#include "main.h"
/**
 * set_bit - sets value of bit to 1 at given index
 * @n: address
 * @index: position
 * Return: 1 if worked, -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);
*n ^= (1 << index);
return (1);
}
