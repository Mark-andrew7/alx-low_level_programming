#include "main.h"
#include <stdio.h>
/**
 * main - prints arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always successful
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
