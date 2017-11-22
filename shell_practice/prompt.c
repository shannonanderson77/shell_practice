#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "holberton.h"

/**
 * prompt.c - a program that prints "$ ", waits for the user to enter
 * main - main function for prompt.c
 * a command, prints it on the next line
 * @ :
 * Return:
 */

char *_prompt(void)
{
char *buffer = NULL; /*initialize a buffer to hold input*/
size_t buffer_size = NULL; /*initialize size of buffer*/
int line;

printf("$ ");
line = getline(&buffer, &buffer_size, stdin);
/*getline returns a pointer to string inputed at prompt*/
/*free(line);*/
return (buffer);
}
