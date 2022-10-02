#include "main.h"
#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always successful
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
