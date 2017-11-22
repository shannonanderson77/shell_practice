#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * _string_split - a program that splits a string and returns an array
 * of each word of the string
 * @
 * Return: an array
 */
char **_split_string(char *s)
{
char *buffer;
char *token;
char **hold_tokens;
char *delim = "/ ";
int i;

buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
	printf("Error\n");
	exit(-1);
}
if (s == NULL)
{
	perror("s");
	exit(-1);
}
for (i = 0; s[i] != '\0'; i++)
{
	buffer[i] = s[i];
}
buffer[i] = '\0';
token = strtok(buffer, delim);
while (token != NULL)
{
	hold_tokens[i] = token;
	i++;
	token = strtok(NULL, delim);
}
free(token);
return (hold_tokens);
}
