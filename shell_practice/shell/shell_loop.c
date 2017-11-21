#include "shell.h"

void shell_loop(int argc, char *argv[])
{
	char *line;
	char **args;
	int status;

	(void)argc;
	(void)argv;
	do {
		printf("$ ");
		line = shell_getline();
		args = shell_split(line);
		status = shell_launch(args);

		free(line);
		free(args);
	} while (status);
}
