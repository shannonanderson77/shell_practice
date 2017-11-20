#include "shell.h"

int shell_launch(char **args)
{
	pid_t pid;
	int status = 1;

	pid = fork();
	if (pid == 0)
	{
	}
	else
	{
		wait(&status);
	}
	return (status);
}
