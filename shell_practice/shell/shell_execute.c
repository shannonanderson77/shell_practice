#include "shell.h"

int shell_execute(char **args, char **dirs, char *line)
{
	int status = 1;
	pid_t pid;
	char *command = NULL;
	DIR *p_dir;
	struct dirent *p_file;
	int i;
	(void)line;

	pid = fork();
	if (pid < 0)
	{
		printf("error");
	}
	else if (pid == 0)
	{
		for (i = 0; dirs[i] != '\0'; i++)
		{
		        p_dir = opendir(dirs[i]);
			while (readdir(p_dir) != NULL)
			{
				p_file = readdir(p_dir);
				if (_strcmp(p_file->d_name, args[0]) == 0)
				{
					execve(command, args, NULL);
				}
			}
		}
	}
	else
	{
		wait(&status);
	}
	return (status);
}
