#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int main()
{
char *line;
char **args;
int status;

do {
	line = _prompt();
	args = _split_string(line);
	status = fork_wait_execve(args);
	free(line);
	free(args);
} while (status);
}
