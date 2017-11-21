#include "shell.h"

int shell_launch(char **args)
{
	int status;
	pid_t pid;
	
	pid = fork();
	if (pid < 0)
	{
		printf("Error");
	}
	if (pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			printf("error");
		}
		return (-1);


	}
	else
	{
		wait(&status);
	}
	return (0);
}
