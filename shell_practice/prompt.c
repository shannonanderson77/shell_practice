#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * prompt.c - a program that prints "$ ", waits for the user to enter
 * main - main function for prompt.c
 * a command, prints it on the next line
 * @ :
 * Return:
 */

int _prompt(char *s, int length);

int main()
{
char *buffer;
size_t buffer_size = 0;
size_t characters;

buffer = malloc(buffer_size * sizeof(char));
if (buffer == NULL)
{
	printf("Error\n");
	exit(-1);
}
printf("$ ");
characters = getline(&buffer, &buffer_size, stdin);
printf("%lu characters were read.\n", characters);
printf("%s\n", buffer);
free(buffer);
return (0);
}
