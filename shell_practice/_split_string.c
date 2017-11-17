#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _string_split - a program that splits a strings and returns an array
 * of each word of the string
 * @
 * Return: an array
 */
int main()
{
char *buffer;
char *string = "Hello World how are you?";
char *token;
char *delim = " ";
int i;

buffer = malloc(sizeof(char) * 25);
if (buffer == NULL)
{
printf("Error\n");
exit(-1);
}
printf("$ ");

for (i = 0; string[i] != '\0'; i++)
{
buffer[i] = string[i];
}
buffer[i] = '\0';
token = strtok(buffer, delim);
while (token != NULL)
{
printf("%s\n", token);
token = strtok(NULL, delim);
}
}
