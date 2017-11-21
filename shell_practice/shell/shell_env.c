#include "shell.h"
#include <stdio.h>
#include <unistd.h>

extern char** environ;

int shell_env(void)
{
	int i;

	while (environ[i] != '\0')
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}
