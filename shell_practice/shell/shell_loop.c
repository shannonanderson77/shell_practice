#include "shell.h"

void shell_loop(int argc, char *argv[])
{
	char *line;
	char **args;
	int status = 1;
	int i = 0;
	char **dirs;
	char *path = NULL;
	char temp[];

	(void)argc;
	(void)argv;
	do {
		printf("$ ");
		line = shell_getline();
		args = shell_split(line);

		built btn[] = {
			{"env", shell_env},
			{"exit", shell_exit},
			{NULL, NULL}
		};

		while (btn[i].command != NULL)
		{
			if (_strcmp(args[0], btn[i].command) == 0)
				return (btn[i].function(args));
			i++;
		}

		search_path();
		shell_execute(args, dirs, line);
		free(line);
		free(args);
	} while (status);
}
