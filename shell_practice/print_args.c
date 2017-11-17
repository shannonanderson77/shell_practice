#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_args - a program that accepts any number of command line arguements
 * and prints them to standard output without using ac
 * @ac: void argument
 * @av: an array of program arguments
 * Return: 0
 */
int main(__attribute__((unused))int ac, char *av[])
{
int count;

for (count = 0; av[count] != '\0'; count++)
printf("av[%d] = %s\n", count, av[count]);
return (0);
}
