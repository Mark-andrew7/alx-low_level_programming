#include "main.h"
/**
 * _strcmp - compare
 * @s1 : pointero char params
 * @s2 : pointer to char paramas
 * Return: *dest
 */
int _strcmp(char *s1, char *s2)
{
int i;
int R;

i = 0;

while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
{
i++;
}
R = s1[i] - s2[i];
return (R);
}
